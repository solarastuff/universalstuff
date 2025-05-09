function test()
local plr = game.Players.LocalPlayer
plr.Character.Communicate:FireServer({
    ["Goal"] = "InputType",
    ["Key"] = Enum.UserInputType.MouseButton1
})
end

wait(0.2)
test()