/* V1 */
Js.log(Uuid.V1.make());

/* V3 using predefined DNS namespace */
Js.log(Uuid.V3.make("hello.example.com", Uuid.Dns));

/* V3 using predefined URL namespace */
Js.log(Uuid.V3.make("http://example.com/hello", Uuid.Url));

/* V3 using a custom namespace */
Js.log(
  Uuid.V3.make(
    "Hello, world!",
    Uuid.Custom("1b671a64-40d5-491e-99b0-da01ff1f3341"),
  ),
);

/* V4 */
Js.log(Uuid.V4.make());

/* V5 using predefined Dns namespace */
Js.log(Uuid.V5.make("hello.example.com", Uuid.Dns));

/* V5 using predefined Url namespace */
Js.log(Uuid.V5.make("http://example.com/hello", Uuid.Url));

/* V5 using a custom namespace */
Js.log(
  Uuid.V5.make(
    "Hello, world!",
    Uuid.Custom("1b671a64-40d5-491e-99b0-da01ff1f3341"),
  ),
);
