#pragma once

#include "Common.hpp"

// These classes are the objects in the Overworld, such as; trees, rocks, grass, rivers ect...
class Tree {
public:
	sf::Sprite tree_;

	int get_tree_position_x_() { return tree_position_.x; };
	int get_tree_position_y_() { return tree_position_.y; };

	sf::Vector2f min_bounds = sf::Vector2f(tree_position_.x, tree_position_.y);
	sf::Vector2f max_bounds = sf::Vector2f(tree_position_.x + 59, tree_position_.y + 80);

	void set_tree_position_(sf::Vector2f position_) { tree_.setPosition(position_); tree_position_ = position_; };
	void set_texture_() { tree_texture_.loadFromFile("Tree1.png"); tree_.setTexture(tree_texture_); };
	//sf::Sprite get_sprite() { return tree_; };

private:
	sf::Texture tree_texture_;
	sf::Vector2f tree_position_;

	//min_bounds = sf::Vector2f(tree_position_.x - 1, tree_position_.y - 1);
	//sf::Vector2f max_bounds = sf::Vector2f(tree_position_.x + 1, tree_position_.y + 1);

	//void set_texture_() { tree_texture_.loadFromFile("Tree1.png"); tree_.setTexture(tree_texture_); };
};

