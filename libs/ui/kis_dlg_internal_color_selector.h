#ifndef KIS_DLG_INTERNAL_COLOR_SELECTOR_H
#define KIS_DLG_INTERNAL_COLOR_SELECTOR_H

#include "kritaui_export.h"
#include "KisBasicInternalColorSelector.h"
#include "kis_screen_color_picker.h"

/*
 * A color selector with a screen color picker.
 *
 * KisScreenColorPicker needs lots of resources in the library kritaui and
 * kritaimage, therefore, the color selector in kritawidgets (which is a
 * dependency of kritaui), called KisBasicInternalColorSelector, cannot use the
 * color picker.
 *
 * This class is a temporary solution. If classes used by the screen color
 * picker can be moved to libraries that don't rely on kritawidgets (most of
 * these classes don't rely on kritawidgets themselves), then the color picker
 * related code can be moved into KisBasicInternalColorPicker, and we will have
 * a complete internal color selector that can be used everywhere.
 */

class KRITAUI_EXPORT KisDlgInternalColorSelector : public KisBasicInternalColorSelector
{
    Q_OBJECT
public:
    KisDlgInternalColorSelector(QWidget* parent,
                                KoColor color,
                                Config config,
                                const QString &caption,
                                const KoColorDisplayRendererInterface *displayRenderer = KoDumbColorDisplayRenderer::instance());
    void updateAllElements(QObject *source) override;
    static KoColor getModalColorDialog(const KoColor color, QWidget* parent = Q_NULLPTR, QString caption = QString());
private:
    KisScreenColorPicker *m_screenColorPicker;
};

#endif // KIS_DLG_INTERNAL_COLOR_SELECTOR_H