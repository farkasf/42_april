<?php
$rps = array("rock", "paper", "scissors");
$computer = $rps[rand(0, 2)];
echo "Choose rock, paper or scissors:" ;
$user = fgets(STDIN);
if (!in_array($user, $rps))
{
	echo "Invalid choice.\n";
}
else
{
	if ($user == $computer)
		echo "It's a tie. The computer chose " . $computer . ".\n";
	else if (($user === 'rock' && computer === 'scissors') || ($user === 'paper' && computer === 'rock') || ($user === 'scissors' && computer === 'paper'))
		echo "Congratulations! You won! The computer chose " . $computer . ".\n";
	else
		echo "Sorry, you lost. The computer chose " . $computer . ".\n";
}
?>
