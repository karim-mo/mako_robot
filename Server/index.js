const WebSocket = require("ws");
const wss = new WebSocket.Server({ port: 9000 }, () => {
  console.log("server started");
});
wss.on("connection", function connection(ws) {
    console.log("Connection incoming");
    //String x = "user: haha"
    //ws.send('{"user":"xd", "pw":"lol"}');
    // for (let i = 0; i < 1e6; i++) {
    //     ws.send("packet " + i);
        
        
    // }
    ws.on("message", (data) => {
    // data2 = JSON.parse(data);
    // console.log(data2);
    // // ws.send(data);
    // ws.emit("hi", data);
    console.log(data);
    ws.send(data);
  });
});

wss.on("listening", () => {
  console.log("listening on 9000");
});