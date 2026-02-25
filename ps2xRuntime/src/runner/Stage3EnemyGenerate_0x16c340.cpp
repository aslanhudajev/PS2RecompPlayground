#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage3EnemyGenerate
// Address: 0x16c340 - 0x16c930
void Stage3EnemyGenerate_0x16c340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage3EnemyGenerate_0x16c340");
#endif

    ctx->pc = 0x16c340u;

    // 0x16c340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c344: 0x24030e10  addiu       $v1, $zero, 0xE10
    ctx->pc = 0x16c344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x16c348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16c34c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16c350: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16c350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c354: 0x12030152  beq         $s0, $v1, . + 4 + (0x152 << 2)
    ctx->pc = 0x16C354u;
    {
        const bool branch_taken_0x16c354 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C354u;
            // 0x16c358: 0x240306a4  addiu       $v1, $zero, 0x6A4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c354) {
            ctx->pc = 0x16C8A0u;
            goto label_16c8a0;
        }
    }
    ctx->pc = 0x16C35Cu;
    // 0x16c35c: 0x1203014a  beq         $s0, $v1, . + 4 + (0x14A << 2)
    ctx->pc = 0x16C35Cu;
    {
        const bool branch_taken_0x16c35c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c35c) {
            ctx->pc = 0x16C888u;
            goto label_16c888;
        }
    }
    ctx->pc = 0x16C364u;
    // 0x16c364: 0x24030578  addiu       $v1, $zero, 0x578
    ctx->pc = 0x16c364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
    // 0x16c368: 0x12030139  beq         $s0, $v1, . + 4 + (0x139 << 2)
    ctx->pc = 0x16C368u;
    {
        const bool branch_taken_0x16c368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C368u;
            // 0x16c36c: 0x240304b0  addiu       $v1, $zero, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c368) {
            ctx->pc = 0x16C850u;
            goto label_16c850;
        }
    }
    ctx->pc = 0x16C370u;
    // 0x16c370: 0x1203012d  beq         $s0, $v1, . + 4 + (0x12D << 2)
    ctx->pc = 0x16C370u;
    {
        const bool branch_taken_0x16c370 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c370) {
            ctx->pc = 0x16C828u;
            goto label_16c828;
        }
    }
    ctx->pc = 0x16C378u;
    // 0x16c378: 0x2403044c  addiu       $v1, $zero, 0x44C
    ctx->pc = 0x16c378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
    // 0x16c37c: 0x12030124  beq         $s0, $v1, . + 4 + (0x124 << 2)
    ctx->pc = 0x16C37Cu;
    {
        const bool branch_taken_0x16c37c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C37Cu;
            // 0x16c380: 0x240303cf  addiu       $v1, $zero, 0x3CF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 975));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c37c) {
            ctx->pc = 0x16C810u;
            goto label_16c810;
        }
    }
    ctx->pc = 0x16C384u;
    // 0x16c384: 0x1203011c  beq         $s0, $v1, . + 4 + (0x11C << 2)
    ctx->pc = 0x16C384u;
    {
        const bool branch_taken_0x16c384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c384) {
            ctx->pc = 0x16C7F8u;
            goto label_16c7f8;
        }
    }
    ctx->pc = 0x16C38Cu;
    // 0x16c38c: 0x240303b6  addiu       $v1, $zero, 0x3B6
    ctx->pc = 0x16c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 950));
    // 0x16c390: 0x12030113  beq         $s0, $v1, . + 4 + (0x113 << 2)
    ctx->pc = 0x16C390u;
    {
        const bool branch_taken_0x16c390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C390u;
            // 0x16c394: 0x2403039d  addiu       $v1, $zero, 0x39D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 925));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c390) {
            ctx->pc = 0x16C7E0u;
            goto label_16c7e0;
        }
    }
    ctx->pc = 0x16C398u;
    // 0x16c398: 0x1203010b  beq         $s0, $v1, . + 4 + (0x10B << 2)
    ctx->pc = 0x16C398u;
    {
        const bool branch_taken_0x16c398 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c398) {
            ctx->pc = 0x16C7C8u;
            goto label_16c7c8;
        }
    }
    ctx->pc = 0x16C3A0u;
    // 0x16c3a0: 0x24030384  addiu       $v1, $zero, 0x384
    ctx->pc = 0x16c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
    // 0x16c3a4: 0x12030102  beq         $s0, $v1, . + 4 + (0x102 << 2)
    ctx->pc = 0x16C3A4u;
    {
        const bool branch_taken_0x16c3a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C3A4u;
            // 0x16c3a8: 0x2403036b  addiu       $v1, $zero, 0x36B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 875));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c3a4) {
            ctx->pc = 0x16C7B0u;
            goto label_16c7b0;
        }
    }
    ctx->pc = 0x16C3ACu;
    // 0x16c3ac: 0x120300fa  beq         $s0, $v1, . + 4 + (0xFA << 2)
    ctx->pc = 0x16C3ACu;
    {
        const bool branch_taken_0x16c3ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c3ac) {
            ctx->pc = 0x16C798u;
            goto label_16c798;
        }
    }
    ctx->pc = 0x16C3B4u;
    // 0x16c3b4: 0x24030352  addiu       $v1, $zero, 0x352
    ctx->pc = 0x16c3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 850));
    // 0x16c3b8: 0x120300f1  beq         $s0, $v1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x16C3B8u;
    {
        const bool branch_taken_0x16c3b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C3B8u;
            // 0x16c3bc: 0x24030339  addiu       $v1, $zero, 0x339 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 825));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c3b8) {
            ctx->pc = 0x16C780u;
            goto label_16c780;
        }
    }
    ctx->pc = 0x16C3C0u;
    // 0x16c3c0: 0x120300e9  beq         $s0, $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x16C3C0u;
    {
        const bool branch_taken_0x16c3c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c3c0) {
            ctx->pc = 0x16C768u;
            goto label_16c768;
        }
    }
    ctx->pc = 0x16C3C8u;
    // 0x16c3c8: 0x24030320  addiu       $v1, $zero, 0x320
    ctx->pc = 0x16c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x16c3cc: 0x120300e0  beq         $s0, $v1, . + 4 + (0xE0 << 2)
    ctx->pc = 0x16C3CCu;
    {
        const bool branch_taken_0x16c3cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C3CCu;
            // 0x16c3d0: 0x24030307  addiu       $v1, $zero, 0x307 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 775));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c3cc) {
            ctx->pc = 0x16C750u;
            goto label_16c750;
        }
    }
    ctx->pc = 0x16C3D4u;
    // 0x16c3d4: 0x120300d8  beq         $s0, $v1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x16C3D4u;
    {
        const bool branch_taken_0x16c3d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c3d4) {
            ctx->pc = 0x16C738u;
            goto label_16c738;
        }
    }
    ctx->pc = 0x16C3DCu;
    // 0x16c3dc: 0x240302ee  addiu       $v1, $zero, 0x2EE
    ctx->pc = 0x16c3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
    // 0x16c3e0: 0x120300cf  beq         $s0, $v1, . + 4 + (0xCF << 2)
    ctx->pc = 0x16C3E0u;
    {
        const bool branch_taken_0x16c3e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C3E0u;
            // 0x16c3e4: 0x240302d5  addiu       $v1, $zero, 0x2D5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 725));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c3e0) {
            ctx->pc = 0x16C720u;
            goto label_16c720;
        }
    }
    ctx->pc = 0x16C3E8u;
    // 0x16c3e8: 0x120300c7  beq         $s0, $v1, . + 4 + (0xC7 << 2)
    ctx->pc = 0x16C3E8u;
    {
        const bool branch_taken_0x16c3e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c3e8) {
            ctx->pc = 0x16C708u;
            goto label_16c708;
        }
    }
    ctx->pc = 0x16C3F0u;
    // 0x16c3f0: 0x240302bc  addiu       $v1, $zero, 0x2BC
    ctx->pc = 0x16c3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
    // 0x16c3f4: 0x120300be  beq         $s0, $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x16C3F4u;
    {
        const bool branch_taken_0x16c3f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C3F4u;
            // 0x16c3f8: 0x240302a3  addiu       $v1, $zero, 0x2A3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 675));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c3f4) {
            ctx->pc = 0x16C6F0u;
            goto label_16c6f0;
        }
    }
    ctx->pc = 0x16C3FCu;
    // 0x16c3fc: 0x120300b6  beq         $s0, $v1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x16C3FCu;
    {
        const bool branch_taken_0x16c3fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c3fc) {
            ctx->pc = 0x16C6D8u;
            goto label_16c6d8;
        }
    }
    ctx->pc = 0x16C404u;
    // 0x16c404: 0x2403028a  addiu       $v1, $zero, 0x28A
    ctx->pc = 0x16c404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 650));
    // 0x16c408: 0x120300ad  beq         $s0, $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x16C408u;
    {
        const bool branch_taken_0x16c408 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C408u;
            // 0x16c40c: 0x24030271  addiu       $v1, $zero, 0x271 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c408) {
            ctx->pc = 0x16C6C0u;
            goto label_16c6c0;
        }
    }
    ctx->pc = 0x16C410u;
    // 0x16c410: 0x120300a5  beq         $s0, $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x16C410u;
    {
        const bool branch_taken_0x16c410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c410) {
            ctx->pc = 0x16C6A8u;
            goto label_16c6a8;
        }
    }
    ctx->pc = 0x16C418u;
    // 0x16c418: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x16c418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x16c41c: 0x1203009c  beq         $s0, $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x16C41Cu;
    {
        const bool branch_taken_0x16c41c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C41Cu;
            // 0x16c420: 0x2403023f  addiu       $v1, $zero, 0x23F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 575));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c41c) {
            ctx->pc = 0x16C690u;
            goto label_16c690;
        }
    }
    ctx->pc = 0x16C424u;
    // 0x16c424: 0x12030094  beq         $s0, $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x16C424u;
    {
        const bool branch_taken_0x16c424 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c424) {
            ctx->pc = 0x16C678u;
            goto label_16c678;
        }
    }
    ctx->pc = 0x16C42Cu;
    // 0x16c42c: 0x24030226  addiu       $v1, $zero, 0x226
    ctx->pc = 0x16c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x16c430: 0x1203008b  beq         $s0, $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x16C430u;
    {
        const bool branch_taken_0x16c430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C430u;
            // 0x16c434: 0x2403020d  addiu       $v1, $zero, 0x20D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c430) {
            ctx->pc = 0x16C660u;
            goto label_16c660;
        }
    }
    ctx->pc = 0x16C438u;
    // 0x16c438: 0x12030083  beq         $s0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x16C438u;
    {
        const bool branch_taken_0x16c438 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c438) {
            ctx->pc = 0x16C648u;
            goto label_16c648;
        }
    }
    ctx->pc = 0x16C440u;
    // 0x16c440: 0x240301f4  addiu       $v1, $zero, 0x1F4
    ctx->pc = 0x16c440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x16c444: 0x1203007a  beq         $s0, $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x16C444u;
    {
        const bool branch_taken_0x16c444 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C444u;
            // 0x16c448: 0x240301db  addiu       $v1, $zero, 0x1DB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 475));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c444) {
            ctx->pc = 0x16C630u;
            goto label_16c630;
        }
    }
    ctx->pc = 0x16C44Cu;
    // 0x16c44c: 0x12030072  beq         $s0, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x16C44Cu;
    {
        const bool branch_taken_0x16c44c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c44c) {
            ctx->pc = 0x16C618u;
            goto label_16c618;
        }
    }
    ctx->pc = 0x16C454u;
    // 0x16c454: 0x240301c2  addiu       $v1, $zero, 0x1C2
    ctx->pc = 0x16c454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
    // 0x16c458: 0x12030069  beq         $s0, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x16C458u;
    {
        const bool branch_taken_0x16c458 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C458u;
            // 0x16c45c: 0x240301a9  addiu       $v1, $zero, 0x1A9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c458) {
            ctx->pc = 0x16C600u;
            goto label_16c600;
        }
    }
    ctx->pc = 0x16C460u;
    // 0x16c460: 0x12030061  beq         $s0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x16C460u;
    {
        const bool branch_taken_0x16c460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c460) {
            ctx->pc = 0x16C5E8u;
            goto label_16c5e8;
        }
    }
    ctx->pc = 0x16C468u;
    // 0x16c468: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x16c468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x16c46c: 0x12030058  beq         $s0, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x16C46Cu;
    {
        const bool branch_taken_0x16c46c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C46Cu;
            // 0x16c470: 0x2403018f  addiu       $v1, $zero, 0x18F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c46c) {
            ctx->pc = 0x16C5D0u;
            goto label_16c5d0;
        }
    }
    ctx->pc = 0x16C474u;
    // 0x16c474: 0x12030050  beq         $s0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x16C474u;
    {
        const bool branch_taken_0x16c474 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c474) {
            ctx->pc = 0x16C5B8u;
            goto label_16c5b8;
        }
    }
    ctx->pc = 0x16C47Cu;
    // 0x16c47c: 0x24030177  addiu       $v1, $zero, 0x177
    ctx->pc = 0x16c47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
    // 0x16c480: 0x12030047  beq         $s0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x16C480u;
    {
        const bool branch_taken_0x16c480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C480u;
            // 0x16c484: 0x2403015e  addiu       $v1, $zero, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c480) {
            ctx->pc = 0x16C5A0u;
            goto label_16c5a0;
        }
    }
    ctx->pc = 0x16C488u;
    // 0x16c488: 0x1203003f  beq         $s0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x16C488u;
    {
        const bool branch_taken_0x16c488 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c488) {
            ctx->pc = 0x16C588u;
            goto label_16c588;
        }
    }
    ctx->pc = 0x16C490u;
    // 0x16c490: 0x24030145  addiu       $v1, $zero, 0x145
    ctx->pc = 0x16c490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    // 0x16c494: 0x12030036  beq         $s0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x16C494u;
    {
        const bool branch_taken_0x16c494 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C494u;
            // 0x16c498: 0x2403012c  addiu       $v1, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c494) {
            ctx->pc = 0x16C570u;
            goto label_16c570;
        }
    }
    ctx->pc = 0x16C49Cu;
    // 0x16c49c: 0x1203002e  beq         $s0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x16C49Cu;
    {
        const bool branch_taken_0x16c49c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c49c) {
            ctx->pc = 0x16C558u;
            goto label_16c558;
        }
    }
    ctx->pc = 0x16C4A4u;
    // 0x16c4a4: 0x24030113  addiu       $v1, $zero, 0x113
    ctx->pc = 0x16c4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
    // 0x16c4a8: 0x12030025  beq         $s0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x16C4A8u;
    {
        const bool branch_taken_0x16c4a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C4A8u;
            // 0x16c4ac: 0x240300fa  addiu       $v1, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c4a8) {
            ctx->pc = 0x16C540u;
            goto label_16c540;
        }
    }
    ctx->pc = 0x16C4B0u;
    // 0x16c4b0: 0x1203001d  beq         $s0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x16C4B0u;
    {
        const bool branch_taken_0x16c4b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c4b0) {
            ctx->pc = 0x16C528u;
            goto label_16c528;
        }
    }
    ctx->pc = 0x16C4B8u;
    // 0x16c4b8: 0x240300e1  addiu       $v1, $zero, 0xE1
    ctx->pc = 0x16c4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    // 0x16c4bc: 0x12030014  beq         $s0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x16C4BCu;
    {
        const bool branch_taken_0x16c4bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C4BCu;
            // 0x16c4c0: 0x240300c8  addiu       $v1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c4bc) {
            ctx->pc = 0x16C510u;
            goto label_16c510;
        }
    }
    ctx->pc = 0x16C4C4u;
    // 0x16c4c4: 0x1203000c  beq         $s0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x16C4C4u;
    {
        const bool branch_taken_0x16c4c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c4c4) {
            ctx->pc = 0x16C4F8u;
            goto label_16c4f8;
        }
    }
    ctx->pc = 0x16C4CCu;
    // 0x16c4cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c4d0: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16C4D0u;
    {
        const bool branch_taken_0x16c4d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c4d0) {
            ctx->pc = 0x16C4E0u;
            goto label_16c4e0;
        }
    }
    ctx->pc = 0x16C4D8u;
    // 0x16c4d8: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x16C4D8u;
    {
        const bool branch_taken_0x16c4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c4d8) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C4E0u;
label_16c4e0:
    // 0x16c4e0: 0xc056050  jal         func_158140
    ctx->pc = 0x16C4E0u;
    SET_GPR_U32(ctx, 31, 0x16C4E8u);
    ctx->pc = 0x158140u;
    if (runtime->hasFunction(0x158140u)) {
        auto targetFn = runtime->lookupFunction(0x158140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C4E8u; }
        if (ctx->pc != 0x16C4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuOk_0x158140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C4E8u; }
        if (ctx->pc != 0x16C4E8u) { return; }
    }
    ctx->pc = 0x16C4E8u;
    // 0x16c4e8: 0xc05d004  jal         func_174010
    ctx->pc = 0x16C4E8u;
    SET_GPR_U32(ctx, 31, 0x16C4F0u);
    ctx->pc = 0x16C4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C4E8u;
            // 0x16c4ec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C4F0u; }
        if (ctx->pc != 0x16C4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C4F0u; }
        if (ctx->pc != 0x16C4F0u) { return; }
    }
    ctx->pc = 0x16C4F0u;
    // 0x16c4f0: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x16C4F0u;
    {
        const bool branch_taken_0x16c4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c4f0) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C4F8u;
label_16c4f8:
    // 0x16c4f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c4fc: 0x2405ffd5  addiu       $a1, $zero, -0x2B
    ctx->pc = 0x16c4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967253));
    // 0x16c500: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C500u;
    SET_GPR_U32(ctx, 31, 0x16C508u);
    ctx->pc = 0x16C504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C500u;
            // 0x16c504: 0x2406ffe1  addiu       $a2, $zero, -0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C508u; }
        if (ctx->pc != 0x16C508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C508u; }
        if (ctx->pc != 0x16C508u) { return; }
    }
    ctx->pc = 0x16C508u;
    // 0x16c508: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x16C508u;
    {
        const bool branch_taken_0x16c508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c508) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C510u;
label_16c510:
    // 0x16c510: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c514: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16c514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16c518: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C518u;
    SET_GPR_U32(ctx, 31, 0x16C520u);
    ctx->pc = 0x16C51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C518u;
            // 0x16c51c: 0x2406ffd6  addiu       $a2, $zero, -0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967254));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C520u; }
        if (ctx->pc != 0x16C520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C520u; }
        if (ctx->pc != 0x16C520u) { return; }
    }
    ctx->pc = 0x16C520u;
    // 0x16c520: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x16C520u;
    {
        const bool branch_taken_0x16c520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c520) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C528u;
label_16c528:
    // 0x16c528: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c52c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x16c52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x16c530: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C530u;
    SET_GPR_U32(ctx, 31, 0x16C538u);
    ctx->pc = 0x16C534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C530u;
            // 0x16c534: 0x2406ffd5  addiu       $a2, $zero, -0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967253));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C538u; }
        if (ctx->pc != 0x16C538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C538u; }
        if (ctx->pc != 0x16C538u) { return; }
    }
    ctx->pc = 0x16C538u;
    // 0x16c538: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x16C538u;
    {
        const bool branch_taken_0x16c538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c538) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C540u;
label_16c540:
    // 0x16c540: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c544: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x16c544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x16c548: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C548u;
    SET_GPR_U32(ctx, 31, 0x16C550u);
    ctx->pc = 0x16C54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C548u;
            // 0x16c54c: 0x2406ffde  addiu       $a2, $zero, -0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967262));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C550u; }
        if (ctx->pc != 0x16C550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C550u; }
        if (ctx->pc != 0x16C550u) { return; }
    }
    ctx->pc = 0x16C550u;
    // 0x16c550: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x16C550u;
    {
        const bool branch_taken_0x16c550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c550) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C558u;
label_16c558:
    // 0x16c558: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c55c: 0x2405ffd6  addiu       $a1, $zero, -0x2A
    ctx->pc = 0x16c55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967254));
    // 0x16c560: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C560u;
    SET_GPR_U32(ctx, 31, 0x16C568u);
    ctx->pc = 0x16C564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C560u;
            // 0x16c564: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C568u; }
        if (ctx->pc != 0x16C568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C568u; }
        if (ctx->pc != 0x16C568u) { return; }
    }
    ctx->pc = 0x16C568u;
    // 0x16c568: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x16C568u;
    {
        const bool branch_taken_0x16c568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c568) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C570u;
label_16c570:
    // 0x16c570: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c574: 0x2405ffe1  addiu       $a1, $zero, -0x1F
    ctx->pc = 0x16c574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
    // 0x16c578: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C578u;
    SET_GPR_U32(ctx, 31, 0x16C580u);
    ctx->pc = 0x16C57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C578u;
            // 0x16c57c: 0x2406ffd4  addiu       $a2, $zero, -0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C580u; }
        if (ctx->pc != 0x16C580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C580u; }
        if (ctx->pc != 0x16C580u) { return; }
    }
    ctx->pc = 0x16C580u;
    // 0x16c580: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x16C580u;
    {
        const bool branch_taken_0x16c580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c580) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C588u;
label_16c588:
    // 0x16c588: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c58c: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x16c58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x16c590: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C590u;
    SET_GPR_U32(ctx, 31, 0x16C598u);
    ctx->pc = 0x16C594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C590u;
            // 0x16c594: 0x2406ffd6  addiu       $a2, $zero, -0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967254));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C598u; }
        if (ctx->pc != 0x16C598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C598u; }
        if (ctx->pc != 0x16C598u) { return; }
    }
    ctx->pc = 0x16C598u;
    // 0x16c598: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x16C598u;
    {
        const bool branch_taken_0x16c598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c598) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C5A0u;
label_16c5a0:
    // 0x16c5a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c5a4: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x16c5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x16c5a8: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C5A8u;
    SET_GPR_U32(ctx, 31, 0x16C5B0u);
    ctx->pc = 0x16C5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C5A8u;
            // 0x16c5ac: 0x2406ffe1  addiu       $a2, $zero, -0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5B0u; }
        if (ctx->pc != 0x16C5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5B0u; }
        if (ctx->pc != 0x16C5B0u) { return; }
    }
    ctx->pc = 0x16C5B0u;
    // 0x16c5b0: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x16C5B0u;
    {
        const bool branch_taken_0x16c5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c5b0) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C5B8u;
label_16c5b8:
    // 0x16c5b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c5bc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16c5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16c5c0: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x16C5C0u;
    SET_GPR_U32(ctx, 31, 0x16C5C8u);
    ctx->pc = 0x16C5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C5C0u;
            // 0x16c5c4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5C8u; }
        if (ctx->pc != 0x16C5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItemCareer_0x1df800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5C8u; }
        if (ctx->pc != 0x16C5C8u) { return; }
    }
    ctx->pc = 0x16C5C8u;
    // 0x16c5c8: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x16C5C8u;
    {
        const bool branch_taken_0x16c5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c5c8) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C5D0u;
label_16c5d0:
    // 0x16c5d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c5d4: 0x2405ffd6  addiu       $a1, $zero, -0x2A
    ctx->pc = 0x16c5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967254));
    // 0x16c5d8: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C5D8u;
    SET_GPR_U32(ctx, 31, 0x16C5E0u);
    ctx->pc = 0x16C5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C5D8u;
            // 0x16c5dc: 0x2406ffde  addiu       $a2, $zero, -0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967262));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5E0u; }
        if (ctx->pc != 0x16C5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5E0u; }
        if (ctx->pc != 0x16C5E0u) { return; }
    }
    ctx->pc = 0x16C5E0u;
    // 0x16c5e0: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x16C5E0u;
    {
        const bool branch_taken_0x16c5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c5e0) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C5E8u;
label_16c5e8:
    // 0x16c5e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c5ec: 0x2405ffe3  addiu       $a1, $zero, -0x1D
    ctx->pc = 0x16c5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x16c5f0: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C5F0u;
    SET_GPR_U32(ctx, 31, 0x16C5F8u);
    ctx->pc = 0x16C5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C5F0u;
            // 0x16c5f4: 0x2406ffd5  addiu       $a2, $zero, -0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967253));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5F8u; }
        if (ctx->pc != 0x16C5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5F8u; }
        if (ctx->pc != 0x16C5F8u) { return; }
    }
    ctx->pc = 0x16C5F8u;
    // 0x16c5f8: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x16C5F8u;
    {
        const bool branch_taken_0x16c5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c5f8) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C600u;
label_16c600:
    // 0x16c600: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c604: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x16c604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x16c608: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C608u;
    SET_GPR_U32(ctx, 31, 0x16C610u);
    ctx->pc = 0x16C60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C608u;
            // 0x16c60c: 0x2406ffd6  addiu       $a2, $zero, -0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967254));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C610u; }
        if (ctx->pc != 0x16C610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C610u; }
        if (ctx->pc != 0x16C610u) { return; }
    }
    ctx->pc = 0x16C610u;
    // 0x16c610: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x16C610u;
    {
        const bool branch_taken_0x16c610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c610) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C618u;
label_16c618:
    // 0x16c618: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c61c: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x16c61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x16c620: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C620u;
    SET_GPR_U32(ctx, 31, 0x16C628u);
    ctx->pc = 0x16C624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C620u;
            // 0x16c624: 0x2406ffe1  addiu       $a2, $zero, -0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C628u; }
        if (ctx->pc != 0x16C628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C628u; }
        if (ctx->pc != 0x16C628u) { return; }
    }
    ctx->pc = 0x16C628u;
    // 0x16c628: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x16C628u;
    {
        const bool branch_taken_0x16c628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c628) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C630u;
label_16c630:
    // 0x16c630: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c634: 0x2405ffd4  addiu       $a1, $zero, -0x2C
    ctx->pc = 0x16c634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967252));
    // 0x16c638: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C638u;
    SET_GPR_U32(ctx, 31, 0x16C640u);
    ctx->pc = 0x16C63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C638u;
            // 0x16c63c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C640u; }
        if (ctx->pc != 0x16C640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C640u; }
        if (ctx->pc != 0x16C640u) { return; }
    }
    ctx->pc = 0x16C640u;
    // 0x16c640: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x16C640u;
    {
        const bool branch_taken_0x16c640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c640) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C648u;
label_16c648:
    // 0x16c648: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c64c: 0x2405ffde  addiu       $a1, $zero, -0x22
    ctx->pc = 0x16c64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967262));
    // 0x16c650: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C650u;
    SET_GPR_U32(ctx, 31, 0x16C658u);
    ctx->pc = 0x16C654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C650u;
            // 0x16c654: 0x2406ffd6  addiu       $a2, $zero, -0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967254));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C658u; }
        if (ctx->pc != 0x16C658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C658u; }
        if (ctx->pc != 0x16C658u) { return; }
    }
    ctx->pc = 0x16C658u;
    // 0x16c658: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x16C658u;
    {
        const bool branch_taken_0x16c658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c658) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C660u;
label_16c660:
    // 0x16c660: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c664: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x16c664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x16c668: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C668u;
    SET_GPR_U32(ctx, 31, 0x16C670u);
    ctx->pc = 0x16C66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C668u;
            // 0x16c66c: 0x2406ffd2  addiu       $a2, $zero, -0x2E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967250));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C670u; }
        if (ctx->pc != 0x16C670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C670u; }
        if (ctx->pc != 0x16C670u) { return; }
    }
    ctx->pc = 0x16C670u;
    // 0x16c670: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x16C670u;
    {
        const bool branch_taken_0x16c670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c670) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C678u;
label_16c678:
    // 0x16c678: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c67c: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x16c67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x16c680: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C680u;
    SET_GPR_U32(ctx, 31, 0x16C688u);
    ctx->pc = 0x16C684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C680u;
            // 0x16c684: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C688u; }
        if (ctx->pc != 0x16C688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C688u; }
        if (ctx->pc != 0x16C688u) { return; }
    }
    ctx->pc = 0x16C688u;
    // 0x16c688: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x16C688u;
    {
        const bool branch_taken_0x16c688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c688) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C690u;
label_16c690:
    // 0x16c690: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c694: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16c694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16c698: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C698u;
    SET_GPR_U32(ctx, 31, 0x16C6A0u);
    ctx->pc = 0x16C69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C698u;
            // 0x16c69c: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C6A0u; }
        if (ctx->pc != 0x16C6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C6A0u; }
        if (ctx->pc != 0x16C6A0u) { return; }
    }
    ctx->pc = 0x16C6A0u;
    // 0x16c6a0: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x16C6A0u;
    {
        const bool branch_taken_0x16c6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c6a0) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C6A8u;
label_16c6a8:
    // 0x16c6a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c6ac: 0x2405ffe9  addiu       $a1, $zero, -0x17
    ctx->pc = 0x16c6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967273));
    // 0x16c6b0: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C6B0u;
    SET_GPR_U32(ctx, 31, 0x16C6B8u);
    ctx->pc = 0x16C6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C6B0u;
            // 0x16c6b4: 0x2406ffd7  addiu       $a2, $zero, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C6B8u; }
        if (ctx->pc != 0x16C6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C6B8u; }
        if (ctx->pc != 0x16C6B8u) { return; }
    }
    ctx->pc = 0x16C6B8u;
    // 0x16c6b8: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x16C6B8u;
    {
        const bool branch_taken_0x16c6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c6b8) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C6C0u;
label_16c6c0:
    // 0x16c6c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c6c4: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x16c6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x16c6c8: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C6C8u;
    SET_GPR_U32(ctx, 31, 0x16C6D0u);
    ctx->pc = 0x16C6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C6C8u;
            // 0x16c6cc: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C6D0u; }
        if (ctx->pc != 0x16C6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C6D0u; }
        if (ctx->pc != 0x16C6D0u) { return; }
    }
    ctx->pc = 0x16C6D0u;
    // 0x16c6d0: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x16C6D0u;
    {
        const bool branch_taken_0x16c6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c6d0) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C6D8u;
label_16c6d8:
    // 0x16c6d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c6dc: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x16c6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x16c6e0: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C6E0u;
    SET_GPR_U32(ctx, 31, 0x16C6E8u);
    ctx->pc = 0x16C6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C6E0u;
            // 0x16c6e4: 0x2406ffe1  addiu       $a2, $zero, -0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C6E8u; }
        if (ctx->pc != 0x16C6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C6E8u; }
        if (ctx->pc != 0x16C6E8u) { return; }
    }
    ctx->pc = 0x16C6E8u;
    // 0x16c6e8: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x16C6E8u;
    {
        const bool branch_taken_0x16c6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c6e8) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C6F0u;
label_16c6f0:
    // 0x16c6f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c6f4: 0x2405ffd7  addiu       $a1, $zero, -0x29
    ctx->pc = 0x16c6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967255));
    // 0x16c6f8: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C6F8u;
    SET_GPR_U32(ctx, 31, 0x16C700u);
    ctx->pc = 0x16C6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C6F8u;
            // 0x16c6fc: 0x2406ffe0  addiu       $a2, $zero, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C700u; }
        if (ctx->pc != 0x16C700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C700u; }
        if (ctx->pc != 0x16C700u) { return; }
    }
    ctx->pc = 0x16C700u;
    // 0x16c700: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x16C700u;
    {
        const bool branch_taken_0x16c700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c700) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C708u;
label_16c708:
    // 0x16c708: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c70c: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x16c70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x16c710: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C710u;
    SET_GPR_U32(ctx, 31, 0x16C718u);
    ctx->pc = 0x16C714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C710u;
            // 0x16c714: 0x2406ffd7  addiu       $a2, $zero, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C718u; }
        if (ctx->pc != 0x16C718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C718u; }
        if (ctx->pc != 0x16C718u) { return; }
    }
    ctx->pc = 0x16C718u;
    // 0x16c718: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x16C718u;
    {
        const bool branch_taken_0x16c718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c718) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C720u;
label_16c720:
    // 0x16c720: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c724: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x16c724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x16c728: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C728u;
    SET_GPR_U32(ctx, 31, 0x16C730u);
    ctx->pc = 0x16C72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C728u;
            // 0x16c72c: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C730u; }
        if (ctx->pc != 0x16C730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C730u; }
        if (ctx->pc != 0x16C730u) { return; }
    }
    ctx->pc = 0x16C730u;
    // 0x16c730: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x16C730u;
    {
        const bool branch_taken_0x16c730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c730) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C738u;
label_16c738:
    // 0x16c738: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c73c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16c73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16c740: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C740u;
    SET_GPR_U32(ctx, 31, 0x16C748u);
    ctx->pc = 0x16C744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C740u;
            // 0x16c744: 0x2406ffde  addiu       $a2, $zero, -0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967262));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C748u; }
        if (ctx->pc != 0x16C748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C748u; }
        if (ctx->pc != 0x16C748u) { return; }
    }
    ctx->pc = 0x16C748u;
    // 0x16c748: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x16C748u;
    {
        const bool branch_taken_0x16c748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c748) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C750u;
label_16c750:
    // 0x16c750: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c754: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16c754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16c758: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C758u;
    SET_GPR_U32(ctx, 31, 0x16C760u);
    ctx->pc = 0x16C75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C758u;
            // 0x16c75c: 0x2406ffdc  addiu       $a2, $zero, -0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C760u; }
        if (ctx->pc != 0x16C760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C760u; }
        if (ctx->pc != 0x16C760u) { return; }
    }
    ctx->pc = 0x16C760u;
    // 0x16c760: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x16C760u;
    {
        const bool branch_taken_0x16c760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c760) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C768u;
label_16c768:
    // 0x16c768: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c76c: 0x2405ffdf  addiu       $a1, $zero, -0x21
    ctx->pc = 0x16c76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x16c770: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C770u;
    SET_GPR_U32(ctx, 31, 0x16C778u);
    ctx->pc = 0x16C774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C770u;
            // 0x16c774: 0x2406ffd7  addiu       $a2, $zero, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C778u; }
        if (ctx->pc != 0x16C778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C778u; }
        if (ctx->pc != 0x16C778u) { return; }
    }
    ctx->pc = 0x16C778u;
    // 0x16c778: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x16C778u;
    {
        const bool branch_taken_0x16c778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c778) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C780u;
label_16c780:
    // 0x16c780: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c784: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x16c784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x16c788: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C788u;
    SET_GPR_U32(ctx, 31, 0x16C790u);
    ctx->pc = 0x16C78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C788u;
            // 0x16c78c: 0x2406ffd4  addiu       $a2, $zero, -0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C790u; }
        if (ctx->pc != 0x16C790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C790u; }
        if (ctx->pc != 0x16C790u) { return; }
    }
    ctx->pc = 0x16C790u;
    // 0x16c790: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x16C790u;
    {
        const bool branch_taken_0x16c790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c790) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C798u;
label_16c798:
    // 0x16c798: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c79c: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x16c79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x16c7a0: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C7A0u;
    SET_GPR_U32(ctx, 31, 0x16C7A8u);
    ctx->pc = 0x16C7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C7A0u;
            // 0x16c7a4: 0x2406ffe1  addiu       $a2, $zero, -0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C7A8u; }
        if (ctx->pc != 0x16C7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C7A8u; }
        if (ctx->pc != 0x16C7A8u) { return; }
    }
    ctx->pc = 0x16C7A8u;
    // 0x16c7a8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x16C7A8u;
    {
        const bool branch_taken_0x16c7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c7a8) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C7B0u;
label_16c7b0:
    // 0x16c7b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c7b4: 0x2405ffd7  addiu       $a1, $zero, -0x29
    ctx->pc = 0x16c7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967255));
    // 0x16c7b8: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C7B8u;
    SET_GPR_U32(ctx, 31, 0x16C7C0u);
    ctx->pc = 0x16C7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C7B8u;
            // 0x16c7bc: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C7C0u; }
        if (ctx->pc != 0x16C7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C7C0u; }
        if (ctx->pc != 0x16C7C0u) { return; }
    }
    ctx->pc = 0x16C7C0u;
    // 0x16c7c0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x16C7C0u;
    {
        const bool branch_taken_0x16c7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c7c0) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C7C8u;
label_16c7c8:
    // 0x16c7c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c7cc: 0x2405ffe5  addiu       $a1, $zero, -0x1B
    ctx->pc = 0x16c7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
    // 0x16c7d0: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C7D0u;
    SET_GPR_U32(ctx, 31, 0x16C7D8u);
    ctx->pc = 0x16C7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C7D0u;
            // 0x16c7d4: 0x2406ffd6  addiu       $a2, $zero, -0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967254));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C7D8u; }
        if (ctx->pc != 0x16C7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C7D8u; }
        if (ctx->pc != 0x16C7D8u) { return; }
    }
    ctx->pc = 0x16C7D8u;
    // 0x16c7d8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x16C7D8u;
    {
        const bool branch_taken_0x16c7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c7d8) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C7E0u;
label_16c7e0:
    // 0x16c7e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c7e4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x16c7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x16c7e8: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C7E8u;
    SET_GPR_U32(ctx, 31, 0x16C7F0u);
    ctx->pc = 0x16C7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C7E8u;
            // 0x16c7ec: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C7F0u; }
        if (ctx->pc != 0x16C7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C7F0u; }
        if (ctx->pc != 0x16C7F0u) { return; }
    }
    ctx->pc = 0x16C7F0u;
    // 0x16c7f0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x16C7F0u;
    {
        const bool branch_taken_0x16c7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c7f0) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C7F8u;
label_16c7f8:
    // 0x16c7f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c7fc: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x16c7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x16c800: 0xc066c98  jal         func_19B260
    ctx->pc = 0x16C800u;
    SET_GPR_U32(ctx, 31, 0x16C808u);
    ctx->pc = 0x16C804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C800u;
            // 0x16c804: 0x2406ffe0  addiu       $a2, $zero, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (runtime->hasFunction(0x19B260u)) {
        auto targetFn = runtime->lookupFunction(0x19B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C808u; }
        if (ctx->pc != 0x16C808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_01_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C808u; }
        if (ctx->pc != 0x16C808u) { return; }
    }
    ctx->pc = 0x16C808u;
    // 0x16c808: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x16C808u;
    {
        const bool branch_taken_0x16c808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c808) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C810u;
label_16c810:
    // 0x16c810: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16c814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c818: 0xc067be8  jal         func_19EFA0
    ctx->pc = 0x16C818u;
    SET_GPR_U32(ctx, 31, 0x16C820u);
    ctx->pc = 0x16C81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C818u;
            // 0x16c81c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EFA0u;
    if (runtime->hasFunction(0x19EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x19EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C820u; }
        if (ctx->pc != 0x16C820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_04_0x19efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C820u; }
        if (ctx->pc != 0x16C820u) { return; }
    }
    ctx->pc = 0x16C820u;
    // 0x16c820: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x16C820u;
    {
        const bool branch_taken_0x16c820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c820) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C828u;
label_16c828:
    // 0x16c828: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c82c: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x16c82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x16c830: 0xc067be8  jal         func_19EFA0
    ctx->pc = 0x16C830u;
    SET_GPR_U32(ctx, 31, 0x16C838u);
    ctx->pc = 0x16C834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C830u;
            // 0x16c834: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EFA0u;
    if (runtime->hasFunction(0x19EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x19EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C838u; }
        if (ctx->pc != 0x16C838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_04_0x19efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C838u; }
        if (ctx->pc != 0x16C838u) { return; }
    }
    ctx->pc = 0x16C838u;
    // 0x16c838: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c83c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x16c83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16c840: 0xc067be8  jal         func_19EFA0
    ctx->pc = 0x16C840u;
    SET_GPR_U32(ctx, 31, 0x16C848u);
    ctx->pc = 0x16C844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C840u;
            // 0x16c844: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EFA0u;
    if (runtime->hasFunction(0x19EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x19EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C848u; }
        if (ctx->pc != 0x16C848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_04_0x19efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C848u; }
        if (ctx->pc != 0x16C848u) { return; }
    }
    ctx->pc = 0x16C848u;
    // 0x16c848: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16C848u;
    {
        const bool branch_taken_0x16c848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c848) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C850u;
label_16c850:
    // 0x16c850: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c854: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16c854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c858: 0xc067be8  jal         func_19EFA0
    ctx->pc = 0x16C858u;
    SET_GPR_U32(ctx, 31, 0x16C860u);
    ctx->pc = 0x16C85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C858u;
            // 0x16c85c: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EFA0u;
    if (runtime->hasFunction(0x19EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x19EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C860u; }
        if (ctx->pc != 0x16C860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_04_0x19efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C860u; }
        if (ctx->pc != 0x16C860u) { return; }
    }
    ctx->pc = 0x16C860u;
    // 0x16c860: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c864: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x16c864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x16c868: 0xc067be8  jal         func_19EFA0
    ctx->pc = 0x16C868u;
    SET_GPR_U32(ctx, 31, 0x16C870u);
    ctx->pc = 0x16C86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C868u;
            // 0x16c86c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EFA0u;
    if (runtime->hasFunction(0x19EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x19EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C870u; }
        if (ctx->pc != 0x16C870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_04_0x19efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C870u; }
        if (ctx->pc != 0x16C870u) { return; }
    }
    ctx->pc = 0x16C870u;
    // 0x16c870: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c874: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x16c874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x16c878: 0xc067be8  jal         func_19EFA0
    ctx->pc = 0x16C878u;
    SET_GPR_U32(ctx, 31, 0x16C880u);
    ctx->pc = 0x16C87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C878u;
            // 0x16c87c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EFA0u;
    if (runtime->hasFunction(0x19EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x19EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C880u; }
        if (ctx->pc != 0x16C880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_04_0x19efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C880u; }
        if (ctx->pc != 0x16C880u) { return; }
    }
    ctx->pc = 0x16C880u;
    // 0x16c880: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16C880u;
    {
        const bool branch_taken_0x16c880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c880) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C888u;
label_16c888:
    // 0x16c888: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c88c: 0x2405ff9c  addiu       $a1, $zero, -0x64
    ctx->pc = 0x16c88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x16c890: 0xc0671fc  jal         func_19C7F0
    ctx->pc = 0x16C890u;
    SET_GPR_U32(ctx, 31, 0x16C898u);
    ctx->pc = 0x16C894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C890u;
            // 0x16c894: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C7F0u;
    if (runtime->hasFunction(0x19C7F0u)) {
        auto targetFn = runtime->lookupFunction(0x19C7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C898u; }
        if (ctx->pc != 0x16C898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_03_0x19c7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C898u; }
        if (ctx->pc != 0x16C898u) { return; }
    }
    ctx->pc = 0x16C898u;
    // 0x16c898: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16C898u;
    {
        const bool branch_taken_0x16c898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c898) {
            ctx->pc = 0x16C8B8u;
            goto label_16c8b8;
        }
    }
    ctx->pc = 0x16C8A0u;
label_16c8a0:
    // 0x16c8a0: 0xc05d004  jal         func_174010
    ctx->pc = 0x16C8A0u;
    SET_GPR_U32(ctx, 31, 0x16C8A8u);
    ctx->pc = 0x16C8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C8A0u;
            // 0x16c8a4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C8A8u; }
        if (ctx->pc != 0x16C8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C8A8u; }
        if (ctx->pc != 0x16C8A8u) { return; }
    }
    ctx->pc = 0x16C8A8u;
    // 0x16c8a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c8ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16c8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c8b0: 0xc0680d4  jal         func_1A0350
    ctx->pc = 0x16C8B0u;
    SET_GPR_U32(ctx, 31, 0x16C8B8u);
    ctx->pc = 0x16C8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C8B0u;
            // 0x16c8b4: 0x2406ffb0  addiu       $a2, $zero, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0350u;
    if (runtime->hasFunction(0x1A0350u)) {
        auto targetFn = runtime->lookupFunction(0x1A0350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C8B8u; }
        if (ctx->pc != 0x16C8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStage3Boss_0x1a0350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C8B8u; }
        if (ctx->pc != 0x16C8B8u) { return; }
    }
    ctx->pc = 0x16C8B8u;
label_16c8b8:
    // 0x16c8b8: 0x2a0106a5  slti        $at, $s0, 0x6A5
    ctx->pc = 0x16c8b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1701) ? 1 : 0);
    // 0x16c8bc: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x16C8BCu;
    {
        const bool branch_taken_0x16c8bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C8BCu;
            // 0x16c8c0: 0x2a010d48  slti        $at, $s0, 0xD48 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3400) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c8bc) {
            ctx->pc = 0x16C920u;
            goto label_16c920;
        }
    }
    ctx->pc = 0x16C8C4u;
    // 0x16c8c4: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x16C8C4u;
    {
        const bool branch_taken_0x16c8c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c8c4) {
            ctx->pc = 0x16C920u;
            goto label_16c920;
        }
    }
    ctx->pc = 0x16C8CCu;
    // 0x16c8cc: 0xc067be0  jal         func_19EF80
    ctx->pc = 0x16C8CCu;
    SET_GPR_U32(ctx, 31, 0x16C8D4u);
    ctx->pc = 0x19EF80u;
    if (runtime->hasFunction(0x19EF80u)) {
        auto targetFn = runtime->lookupFunction(0x19EF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C8D4u; }
        if (ctx->pc != 0x16C8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isstage3chuboss_alive_0x19ef80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C8D4u; }
        if (ctx->pc != 0x16C8D4u) { return; }
    }
    ctx->pc = 0x16C8D4u;
    // 0x16c8d4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16C8D4u;
    {
        const bool branch_taken_0x16c8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C8D4u;
            // 0x16c8d8: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c8d4) {
            ctx->pc = 0x16C920u;
            goto label_16c920;
        }
    }
    ctx->pc = 0x16C8DCu;
    // 0x16c8dc: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x16c8dcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16c8e0: 0x0  nop
    ctx->pc = 0x16c8e0u;
    // NOP
    // 0x16c8e4: 0x0  nop
    ctx->pc = 0x16c8e4u;
    // NOP
    // 0x16c8e8: 0x1810  mfhi        $v1
    ctx->pc = 0x16c8e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x16c8ec: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x16C8ECu;
    {
        const bool branch_taken_0x16c8ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c8ec) {
            ctx->pc = 0x16C920u;
            goto label_16c920;
        }
    }
    ctx->pc = 0x16C8F4u;
    // 0x16c8f4: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x16C8F4u;
    SET_GPR_U32(ctx, 31, 0x16C8FCu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C8FCu; }
        if (ctx->pc != 0x16C8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C8FCu; }
        if (ctx->pc != 0x16C8FCu) { return; }
    }
    ctx->pc = 0x16C8FCu;
    // 0x16c8fc: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x16c8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x16c900: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x16c900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16c904: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x16c904u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16c908: 0x2406ffd8  addiu       $a2, $zero, -0x28
    ctx->pc = 0x16c908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16c90c: 0x0  nop
    ctx->pc = 0x16c90cu;
    // NOP
    // 0x16c910: 0x1010  mfhi        $v0
    ctx->pc = 0x16c910u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x16c914: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c918: 0xc066f64  jal         func_19BD90
    ctx->pc = 0x16C918u;
    SET_GPR_U32(ctx, 31, 0x16C920u);
    ctx->pc = 0x16C91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C918u;
            // 0x16c91c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BD90u;
    if (runtime->hasFunction(0x19BD90u)) {
        auto targetFn = runtime->lookupFunction(0x19BD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C920u; }
        if (ctx->pc != 0x16C920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn3_02_0x19bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C920u; }
        if (ctx->pc != 0x16C920u) { return; }
    }
    ctx->pc = 0x16C920u;
label_16c920:
    // 0x16c920: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16c920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c928: 0x3e00008  jr          $ra
    ctx->pc = 0x16C928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C928u;
            // 0x16c92c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C4E0u: goto label_16c4e0;
            case 0x16C4F8u: goto label_16c4f8;
            case 0x16C510u: goto label_16c510;
            case 0x16C528u: goto label_16c528;
            case 0x16C540u: goto label_16c540;
            case 0x16C558u: goto label_16c558;
            case 0x16C570u: goto label_16c570;
            case 0x16C588u: goto label_16c588;
            case 0x16C5A0u: goto label_16c5a0;
            case 0x16C5B8u: goto label_16c5b8;
            case 0x16C5D0u: goto label_16c5d0;
            case 0x16C5E8u: goto label_16c5e8;
            case 0x16C600u: goto label_16c600;
            case 0x16C618u: goto label_16c618;
            case 0x16C630u: goto label_16c630;
            case 0x16C648u: goto label_16c648;
            case 0x16C660u: goto label_16c660;
            case 0x16C678u: goto label_16c678;
            case 0x16C690u: goto label_16c690;
            case 0x16C6A8u: goto label_16c6a8;
            case 0x16C6C0u: goto label_16c6c0;
            case 0x16C6D8u: goto label_16c6d8;
            case 0x16C6F0u: goto label_16c6f0;
            case 0x16C708u: goto label_16c708;
            case 0x16C720u: goto label_16c720;
            case 0x16C738u: goto label_16c738;
            case 0x16C750u: goto label_16c750;
            case 0x16C768u: goto label_16c768;
            case 0x16C780u: goto label_16c780;
            case 0x16C798u: goto label_16c798;
            case 0x16C7B0u: goto label_16c7b0;
            case 0x16C7C8u: goto label_16c7c8;
            case 0x16C7E0u: goto label_16c7e0;
            case 0x16C7F8u: goto label_16c7f8;
            case 0x16C810u: goto label_16c810;
            case 0x16C828u: goto label_16c828;
            case 0x16C850u: goto label_16c850;
            case 0x16C888u: goto label_16c888;
            case 0x16C8A0u: goto label_16c8a0;
            case 0x16C8B8u: goto label_16c8b8;
            case 0x16C920u: goto label_16c920;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C930u;
}
