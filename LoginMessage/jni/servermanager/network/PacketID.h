#pragma once

enum PacketID
{
	PACKET_LOGIN = 143,
	PACKET_PLAY_STATUS,
	PACKET_DISCONNECT,
	PACKET_BATCH,
	PACKET_TEXT,
	PACKET_SET_TIME,
	PACKET_START_GAME,
	PACKET_ADD_PLAYER,
	PACKET_REMOVE_PLAYER,
	PACKET_ADD_ENTITY,
	PACKET_REMOVE_ENTITY,
	PACKET_ADD_ITEM_ENTITY,
	PACKET_TAKE_ITEM_ENTITY,
	PACKET_MOVE_ENTITY,
	PACKET_MOVE_PLAYER,
	PACKET_REMOVE_BLOCK,
	PACKET_UPDATE_BLOCK,
	PACKET_ADD_PAINTING,
	PACKET_EXPLODE,
	PACKET_LEVEL_EVENT,
	PACKET_BLOCK_EVENT,
	PACKET_ENTITY_EVENT,
	PACKET_MOB_EFFECT,
	PACKET_UPDATE_ATTRIBUTES,
	PACKET_MOB_EQUIPMENT,
	PACKET_MOB_ARMOR_EQUIPMENT,
	PACKET_INTERACT,
	PACKET_USE_ITEM,
	PACKET_PLAYER_ACTION,
	PACKET_HURT_ARMOR,
	PACKET_SET_ENTITY_DATA,
	PACKET_SET_ENTITY_MOTION,
	PACKET_SET_ENTITY_LINK,
	PACKET_SET_HEALTH,
	PACKET_SET_SPAWN_POSITION,
	PACKET_ANIMATE,
	PACKET_RESPAWN,
	PACKET_DROP_ITEM,
	PACKET_CONTAINER_OPEN,
	PACKET_CONTAINER_CLOSE,
	PACKET_CONTAINER_SET_SLOT,
	PACKET_CONTAINER_SET_DATA,
	PACKET_CONTAINER_SET_CONTENT,
	PACKET_CRAFTING_DATA,
	PACKET_CRAFTING_EVENT,
	PACKET_ADVENTURE_SETTINGS,
	PACKET_BLOCK_ENTITY_DATA,
	PACKET_PLAYER_INPUT,
	PACKET_FULL_CHUNK_DATA,
	PACKET_SET_DIFFICULTY,
	PACKET_CHANGE_DIMENSION,
	PACKET_SET_PLAYER_GAMETYPE,
	PACKET_PLAYER_LIST,
	PACKET_TELEMETRY_EVENT,
	PACKET_SPAWN_EXPERIENCE_ORB
};