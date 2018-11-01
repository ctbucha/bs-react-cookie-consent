# bs-react-cookie-consent
Bucklescript bindings for bs-react-cookie-consent.

## Installation

```
npm install --save @ctbucha/bs-react-cookie-consent
```

Then add `@ctbucha/bs-react-cookie-consent` to `bs-dependencies` in your
`bsconfig.json`:

```
{
  ...
  "bs-dependencies": ["@ctbucha/bs-react-cookie-consent"]
}
```

## Usage
```reason
/* App.re */
let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <CookieConsent location="bottom">
      (ReasonReact.string("This website uses cookies to enhance the user experience."))
    </CookieConsent>,
};
```
