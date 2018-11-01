[@bs.module "react-cookie-consent"]
external cookieConsent : ReasonReact.reactClass = "default";

[@bs.deriving abstract]
type props('a, 'b, 'c, 'd, 'e, 'f, 'g, 'h) = {
  [@bs.optional]
  location: 'a,
  [@bs.optional]
  style: 'b,
  [@bs.optional]
  buttonStyle: 'c,
  [@bs.optional]
  contentStyle: 'd,
  [@bs.optional]
  disableStyles: bool,
  [@bs.optional]
  hideOnAccept: bool,
  [@bs.optional]
  onAccept: 'e,
  [@bs.optional]
  buttonText: 'f,
  [@bs.optional]
  cookieName: string,
  [@bs.optional]
  cookieValue: 'g,
  [@bs.optional]
  debug: bool,
  [@bs.optional]
  expires: int,
  [@bs.optional]
  containerClasses: string,
  [@bs.optional]
  contentClasses: string,
  [@bs.optional]
  buttonClasses: string,
  [@bs.optional]
  buttonId: string,
  [@bs.optional]
  acceptOnScroll: bool,
  [@bs.optional]
  acceptOnScrollPercentage: int,
  [@bs.optional]
  extraCookieOptions: 'h,
};

let make =
    (
      ~location=?,
      ~style=?,
      ~buttonStyle=?,
      ~contentStyle=?,
      ~disableStyles=?,
      ~hideOnAccept=?,
      ~onAccept=?,
      ~buttonText=?,
      ~cookieName=?,
      ~cookieValue=?,
      ~debug=?,
      ~expires=?,
      ~containerClasses=?,
      ~contentClasses=?,
      ~buttonClasses=?,
      ~buttonId=?,
      ~acceptOnScroll=?,
      ~acceptOnScrollPercentage=?,
      ~extraCookieOptions=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=cookieConsent,
    ~props=
      props(
        ~location?,
        ~style?,
        ~buttonStyle?,
        ~contentStyle?,
        ~disableStyles?,
        ~hideOnAccept?,
        ~onAccept?,
        ~buttonText?,
        ~cookieName?,
        ~cookieValue?,
        ~debug?,
        ~expires?,
        ~containerClasses?,
        ~contentClasses?,
        ~buttonClasses?,
        ~buttonId?,
        ~acceptOnScroll?,
        ~acceptOnScrollPercentage?,
        ~extraCookieOptions?,
        (),
      ),
    children,
  );
