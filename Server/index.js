const WebSocket = require("ws");
const wss = new WebSocket.Server({ port: 9000 }, () => {
  console.log("Server Started..");
});
wss.on("connection", function connection(ws) {
    console.log("Connection incoming");
    ws.send('{"type":"welcome","message":"Connection Successful"}');
    ws.on("message", (data) => {
      console.log(data);
      wss.broadcast(data);
  });
});

wss.broadcast = function broadcast(msg) {
  wss.clients.forEach(function each(client) {
    client.send(msg);
  });
 };

wss.on("listening", () => {
  console.log("Listening on port 9000");
});