
#ifndef	__EFFEKSEER_LOADER_H__
#define	__EFFEKSEER_LOADER_H__

//----------------------------------------------------------------------------------
// Include
//----------------------------------------------------------------------------------
#include "Effekseer.Base.h"

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
namespace Effekseer { 
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
/**
	@brief	�ݒ�N���X
	@note
	EffectLoader���A�S�Ẵ����_���[�A���[�_�[��ݒ肷�邱�Ƃ��ł��AManager�̑���ɃG�t�F�N�g�ǂݍ��ݎ��Ɏg�p����B
*/
	class Setting
	{
	private:

		// �������m�ۊ֐�
		MallocFunc	m_MallocFunc;

		// �������j���֐�
		FreeFunc	m_FreeFunc;

		// �����_���֐�
		RandFunc	m_randFunc;

		// �����_���֐��ő�l
		int			m_randMax;

		/* ���W�n */
		eCoordinateSystem		m_coordinateSystem;

		EffectLoader*	m_effectLoader;
		TextureLoader*	m_textureLoader;
		SoundLoader*	m_soundLoader;
		ModelLoader*	m_modelLoader;

		/* �X�v���C�g�`��@�\�p�C���X�^���X */
		SpriteRenderer*				m_spriteRenderer;

		/* ���{���`��@�\�p�C���X�^���X */
		RibbonRenderer*				m_ribbonRenderer;

		/* �����O�`��@�\�p�C���X�^���X */
		RingRenderer*				m_ringRenderer;

		/* ���f���`��@�\�p�C���X�^���X */
		ModelRenderer*				m_modelRenderer;

		/* �g���b�N�`��@�\�p�C���X�^���X */
		TrackRenderer*				m_trackRenderer;

		/* �T�E���h�Đ��p�C���X�^���X */
		SoundPlayer*				m_soundPlayer;

	public:
		/**
			@brief	�R���X�g���N�^
			*/
		Setting();

		/**
			@brief	�f�X�g���N�^
			*/
		 ~Setting();

		/**
		@brief	�������m�ۊ֐����擾����B
		*/
		 MallocFunc GetMallocFunc() const ;

		/**
		@brief	�������m�ۊ֐���ݒ肷��B
		*/
		 void SetMallocFunc(MallocFunc func) ;

		/**
		@brief	�������j���֐����擾����B
		*/
		 FreeFunc GetFreeFunc() const ;

		/**
		@brief	�������j���֐���ݒ肷��B
		*/
		 void SetFreeFunc(FreeFunc func) ;

		/**
		@brief	�����_���֐����擾����B
		*/
		 RandFunc GetRandFunc() const ;

		/**
		@brief	�����_���֐���ݒ肷��B
		*/
		 void SetRandFunc(RandFunc func) ;

		/**
		@brief	�����_���ő�l���擾����B
		*/
		 int GetRandMax() const ;

		/**
		@brief	�����_���֐���ݒ肷��B
		*/
		 void SetRandMax(int max_) ;

		/**
		@brief	���W�n���擾����B
		@return	���W�n
		*/
		eCoordinateSystem GetCoordinateSystem() const;

		/**
		@brief	���W�n��ݒ肷��B
		@param	coordinateSystem	[in]	���W�n
		@note
		���W�n��ݒ肷��B
		�G�t�F�N�g�t�@�C����ǂݍ��ޑO�ɐݒ肷��K�v������B
		*/
		void SetCoordinateSystem(eCoordinateSystem coordinateSystem);

		/**
			@brief	�G�t�F�N�g���[�_�[���擾����B
			@return	�G�t�F�N�g���[�_�[
			*/
		EffectLoader* GetEffectLoader();

		/**
			@brief	�G�t�F�N�g���[�_�[��ݒ肷��B
			@param	loader	[in]		���[�_�[
			*/
		void SetEffectLoader(EffectLoader* loader);

		/**
			@brief	�e�N�X�`�����[�_�[���擾����B
			@return	�e�N�X�`�����[�_�[
			*/
		TextureLoader* GetTextureLoader();

		/**
			@brief	�e�N�X�`�����[�_�[��ݒ肷��B
			@param	loader	[in]		���[�_�[
			*/
		void SetTextureLoader(TextureLoader* loader);

		/**
			@brief	���f�����[�_�[���擾����B
			@return	���f�����[�_�[
			*/
		ModelLoader* GetModelLoader();

		/**
			@brief	���f�����[�_�[��ݒ肷��B
			@param	loader	[in]		���[�_�[
			*/
		void SetModelLoader(ModelLoader* loader);

		/**
			@brief	�T�E���h���[�_�[���擾����B
			@return	�T�E���h���[�_�[
			*/
		SoundLoader* GetSoundLoader();

		/**
			@brief	�T�E���h���[�_�[��ݒ肷��B
			@param	loader	[in]		���[�_�[
			*/
		void SetSoundLoader(SoundLoader* loader);

		/**
		@brief	�X�v���C�g�`��@�\���擾����B
		*/
		SpriteRenderer* GetSpriteRenderer();

		/**
		@brief	�X�v���C�g�`��@�\��ݒ肷��B
		*/
		void SetSpriteRenderer(SpriteRenderer* renderer);

		/**
		@brief	�X�g���C�v�`��@�\���擾����B
		*/
		RibbonRenderer* GetRibbonRenderer();

		/**
		@brief	�X�g���C�v�`��@�\��ݒ肷��B
		*/
		void SetRibbonRenderer(RibbonRenderer* renderer);

		/**
		@brief	�����O�`��@�\���擾����B
		*/
		RingRenderer* GetRingRenderer();

		/**
		@brief	�����O�`��@�\��ݒ肷��B
		*/
		void SetRingRenderer(RingRenderer* renderer);

		/**
		@brief	���f���`��@�\���擾����B
		*/
		ModelRenderer* GetModelRenderer();

		/**
		@brief	���f���`��@�\��ݒ肷��B
		*/
		void SetModelRenderer(ModelRenderer* renderer);

		/**
		@brief	�O�Օ`��@�\���擾����B
		*/
		TrackRenderer* GetTrackRenderer();

		/**
		@brief	�O�Օ`��@�\��ݒ肷��B
		*/
		void SetTrackRenderer(TrackRenderer* renderer);

		/**
		@brief	�T�E���h�Đ��@�\���擾����B
		*/
		SoundPlayer* GetSoundPlayer();

		/**
		@brief	�T�E���h�Đ��@�\��ݒ肷��B
		*/
		void SetSoundPlayer(SoundPlayer* soundPlayer);

	};

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
 } 
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
#endif	// __EFFEKSEER_LOADER_H__