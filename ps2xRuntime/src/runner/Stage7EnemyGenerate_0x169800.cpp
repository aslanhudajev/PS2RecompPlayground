#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage7EnemyGenerate
// Address: 0x169800 - 0x16a4d8
void Stage7EnemyGenerate_0x169800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage7EnemyGenerate_0x169800");
#endif

    ctx->pc = 0x169800u;

    // 0x169800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169804: 0x24031ba3  addiu       $v1, $zero, 0x1BA3
    ctx->pc = 0x169804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7075));
    // 0x169808: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16980c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16980cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x169810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169814: 0x120302ae  beq         $s0, $v1, . + 4 + (0x2AE << 2)
    ctx->pc = 0x169814u;
    {
        const bool branch_taken_0x169814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169814u;
            // 0x169818: 0x24031b8a  addiu       $v1, $zero, 0x1B8A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7050));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169814) {
            ctx->pc = 0x16A2D0u;
            goto label_16a2d0;
        }
    }
    ctx->pc = 0x16981Cu;
    // 0x16981c: 0x120302a2  beq         $s0, $v1, . + 4 + (0x2A2 << 2)
    ctx->pc = 0x16981Cu;
    {
        const bool branch_taken_0x16981c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16981c) {
            ctx->pc = 0x16A2A8u;
            goto label_16a2a8;
        }
    }
    ctx->pc = 0x169824u;
    // 0x169824: 0x24031b71  addiu       $v1, $zero, 0x1B71
    ctx->pc = 0x169824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7025));
    // 0x169828: 0x12030295  beq         $s0, $v1, . + 4 + (0x295 << 2)
    ctx->pc = 0x169828u;
    {
        const bool branch_taken_0x169828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16982Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169828u;
            // 0x16982c: 0x24031a5e  addiu       $v1, $zero, 0x1A5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6750));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169828) {
            ctx->pc = 0x16A280u;
            goto label_16a280;
        }
    }
    ctx->pc = 0x169830u;
    // 0x169830: 0x12030289  beq         $s0, $v1, . + 4 + (0x289 << 2)
    ctx->pc = 0x169830u;
    {
        const bool branch_taken_0x169830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169830) {
            ctx->pc = 0x16A258u;
            goto label_16a258;
        }
    }
    ctx->pc = 0x169838u;
    // 0x169838: 0x24031a2c  addiu       $v1, $zero, 0x1A2C
    ctx->pc = 0x169838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6700));
    // 0x16983c: 0x1203027c  beq         $s0, $v1, . + 4 + (0x27C << 2)
    ctx->pc = 0x16983Cu;
    {
        const bool branch_taken_0x16983c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16983Cu;
            // 0x169840: 0x240319c8  addiu       $v1, $zero, 0x19C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16983c) {
            ctx->pc = 0x16A230u;
            goto label_16a230;
        }
    }
    ctx->pc = 0x169844u;
    // 0x169844: 0x12030270  beq         $s0, $v1, . + 4 + (0x270 << 2)
    ctx->pc = 0x169844u;
    {
        const bool branch_taken_0x169844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169844) {
            ctx->pc = 0x16A208u;
            goto label_16a208;
        }
    }
    ctx->pc = 0x16984Cu;
    // 0x16984c: 0x24031964  addiu       $v1, $zero, 0x1964
    ctx->pc = 0x16984cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6500));
    // 0x169850: 0x12030265  beq         $s0, $v1, . + 4 + (0x265 << 2)
    ctx->pc = 0x169850u;
    {
        const bool branch_taken_0x169850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169850u;
            // 0x169854: 0x24031770  addiu       $v1, $zero, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169850) {
            ctx->pc = 0x16A1E8u;
            goto label_16a1e8;
        }
    }
    ctx->pc = 0x169858u;
    // 0x169858: 0x12030259  beq         $s0, $v1, . + 4 + (0x259 << 2)
    ctx->pc = 0x169858u;
    {
        const bool branch_taken_0x169858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169858) {
            ctx->pc = 0x16A1C0u;
            goto label_16a1c0;
        }
    }
    ctx->pc = 0x169860u;
    // 0x169860: 0x24031680  addiu       $v1, $zero, 0x1680
    ctx->pc = 0x169860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5760));
    // 0x169864: 0x1203024c  beq         $s0, $v1, . + 4 + (0x24C << 2)
    ctx->pc = 0x169864u;
    {
        const bool branch_taken_0x169864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169864u;
            // 0x169868: 0x24031644  addiu       $v1, $zero, 0x1644 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169864) {
            ctx->pc = 0x16A198u;
            goto label_16a198;
        }
    }
    ctx->pc = 0x16986Cu;
    // 0x16986c: 0x12030240  beq         $s0, $v1, . + 4 + (0x240 << 2)
    ctx->pc = 0x16986Cu;
    {
        const bool branch_taken_0x16986c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16986c) {
            ctx->pc = 0x16A170u;
            goto label_16a170;
        }
    }
    ctx->pc = 0x169874u;
    // 0x169874: 0x240315b8  addiu       $v1, $zero, 0x15B8
    ctx->pc = 0x169874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5560));
    // 0x169878: 0x1203029d  beq         $s0, $v1, . + 4 + (0x29D << 2)
    ctx->pc = 0x169878u;
    {
        const bool branch_taken_0x169878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16987Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169878u;
            // 0x16987c: 0x2403157c  addiu       $v1, $zero, 0x157C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169878) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169880u;
    // 0x169880: 0x12030231  beq         $s0, $v1, . + 4 + (0x231 << 2)
    ctx->pc = 0x169880u;
    {
        const bool branch_taken_0x169880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169880) {
            ctx->pc = 0x16A148u;
            goto label_16a148;
        }
    }
    ctx->pc = 0x169888u;
    // 0x169888: 0x240314b4  addiu       $v1, $zero, 0x14B4
    ctx->pc = 0x169888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5300));
    // 0x16988c: 0x12030228  beq         $s0, $v1, . + 4 + (0x228 << 2)
    ctx->pc = 0x16988Cu;
    {
        const bool branch_taken_0x16988c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16988Cu;
            // 0x169890: 0x2403146e  addiu       $v1, $zero, 0x146E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5230));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16988c) {
            ctx->pc = 0x16A130u;
            goto label_16a130;
        }
    }
    ctx->pc = 0x169894u;
    // 0x169894: 0x12030220  beq         $s0, $v1, . + 4 + (0x220 << 2)
    ctx->pc = 0x169894u;
    {
        const bool branch_taken_0x169894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169894) {
            ctx->pc = 0x16A118u;
            goto label_16a118;
        }
    }
    ctx->pc = 0x16989Cu;
    // 0x16989c: 0x24031464  addiu       $v1, $zero, 0x1464
    ctx->pc = 0x16989cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5220));
    // 0x1698a0: 0x1203020b  beq         $s0, $v1, . + 4 + (0x20B << 2)
    ctx->pc = 0x1698A0u;
    {
        const bool branch_taken_0x1698a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1698A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1698A0u;
            // 0x1698a4: 0x24031450  addiu       $v1, $zero, 0x1450 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1698a0) {
            ctx->pc = 0x16A0D0u;
            goto label_16a0d0;
        }
    }
    ctx->pc = 0x1698A8u;
    // 0x1698a8: 0x120301ff  beq         $s0, $v1, . + 4 + (0x1FF << 2)
    ctx->pc = 0x1698A8u;
    {
        const bool branch_taken_0x1698a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1698a8) {
            ctx->pc = 0x16A0A8u;
            goto label_16a0a8;
        }
    }
    ctx->pc = 0x1698B0u;
    // 0x1698b0: 0x2403136a  addiu       $v1, $zero, 0x136A
    ctx->pc = 0x1698b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4970));
    // 0x1698b4: 0x120301f2  beq         $s0, $v1, . + 4 + (0x1F2 << 2)
    ctx->pc = 0x1698B4u;
    {
        const bool branch_taken_0x1698b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1698B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1698B4u;
            // 0x1698b8: 0x24031360  addiu       $v1, $zero, 0x1360 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1698b4) {
            ctx->pc = 0x16A080u;
            goto label_16a080;
        }
    }
    ctx->pc = 0x1698BCu;
    // 0x1698bc: 0x120301e6  beq         $s0, $v1, . + 4 + (0x1E6 << 2)
    ctx->pc = 0x1698BCu;
    {
        const bool branch_taken_0x1698bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1698bc) {
            ctx->pc = 0x16A058u;
            goto label_16a058;
        }
    }
    ctx->pc = 0x1698C4u;
    // 0x1698c4: 0x24031356  addiu       $v1, $zero, 0x1356
    ctx->pc = 0x1698c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4950));
    // 0x1698c8: 0x120301d9  beq         $s0, $v1, . + 4 + (0x1D9 << 2)
    ctx->pc = 0x1698C8u;
    {
        const bool branch_taken_0x1698c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1698CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1698C8u;
            // 0x1698cc: 0x240311f8  addiu       $v1, $zero, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1698c8) {
            ctx->pc = 0x16A030u;
            goto label_16a030;
        }
    }
    ctx->pc = 0x1698D0u;
    // 0x1698d0: 0x120301d1  beq         $s0, $v1, . + 4 + (0x1D1 << 2)
    ctx->pc = 0x1698D0u;
    {
        const bool branch_taken_0x1698d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1698d0) {
            ctx->pc = 0x16A018u;
            goto label_16a018;
        }
    }
    ctx->pc = 0x1698D8u;
    // 0x1698d8: 0x24031130  addiu       $v1, $zero, 0x1130
    ctx->pc = 0x1698d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4400));
    // 0x1698dc: 0x120301c8  beq         $s0, $v1, . + 4 + (0x1C8 << 2)
    ctx->pc = 0x1698DCu;
    {
        const bool branch_taken_0x1698dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1698E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1698DCu;
            // 0x1698e0: 0x2403117b  addiu       $v1, $zero, 0x117B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4475));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1698dc) {
            ctx->pc = 0x16A000u;
            goto label_16a000;
        }
    }
    ctx->pc = 0x1698E4u;
    // 0x1698e4: 0x120301c0  beq         $s0, $v1, . + 4 + (0x1C0 << 2)
    ctx->pc = 0x1698E4u;
    {
        const bool branch_taken_0x1698e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1698e4) {
            ctx->pc = 0x169FE8u;
            goto label_169fe8;
        }
    }
    ctx->pc = 0x1698ECu;
    // 0x1698ec: 0x24031162  addiu       $v1, $zero, 0x1162
    ctx->pc = 0x1698ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4450));
    // 0x1698f0: 0x120301b7  beq         $s0, $v1, . + 4 + (0x1B7 << 2)
    ctx->pc = 0x1698F0u;
    {
        const bool branch_taken_0x1698f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1698F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1698F0u;
            // 0x1698f4: 0x24031149  addiu       $v1, $zero, 0x1149 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4425));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1698f0) {
            ctx->pc = 0x169FD0u;
            goto label_169fd0;
        }
    }
    ctx->pc = 0x1698F8u;
    // 0x1698f8: 0x120301af  beq         $s0, $v1, . + 4 + (0x1AF << 2)
    ctx->pc = 0x1698F8u;
    {
        const bool branch_taken_0x1698f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1698f8) {
            ctx->pc = 0x169FB8u;
            goto label_169fb8;
        }
    }
    ctx->pc = 0x169900u;
    // 0x169900: 0x240310cc  addiu       $v1, $zero, 0x10CC
    ctx->pc = 0x169900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4300));
    // 0x169904: 0x120301a6  beq         $s0, $v1, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x169904u;
    {
        const bool branch_taken_0x169904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169904u;
            // 0x169908: 0x240310b3  addiu       $v1, $zero, 0x10B3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4275));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169904) {
            ctx->pc = 0x169FA0u;
            goto label_169fa0;
        }
    }
    ctx->pc = 0x16990Cu;
    // 0x16990c: 0x1203019e  beq         $s0, $v1, . + 4 + (0x19E << 2)
    ctx->pc = 0x16990Cu;
    {
        const bool branch_taken_0x16990c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16990c) {
            ctx->pc = 0x169F88u;
            goto label_169f88;
        }
    }
    ctx->pc = 0x169914u;
    // 0x169914: 0x2403109a  addiu       $v1, $zero, 0x109A
    ctx->pc = 0x169914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4250));
    // 0x169918: 0x12030195  beq         $s0, $v1, . + 4 + (0x195 << 2)
    ctx->pc = 0x169918u;
    {
        const bool branch_taken_0x169918 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16991Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169918u;
            // 0x16991c: 0x24031081  addiu       $v1, $zero, 0x1081 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4225));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169918) {
            ctx->pc = 0x169F70u;
            goto label_169f70;
        }
    }
    ctx->pc = 0x169920u;
    // 0x169920: 0x1203018d  beq         $s0, $v1, . + 4 + (0x18D << 2)
    ctx->pc = 0x169920u;
    {
        const bool branch_taken_0x169920 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169920) {
            ctx->pc = 0x169F58u;
            goto label_169f58;
        }
    }
    ctx->pc = 0x169928u;
    // 0x169928: 0x24030faa  addiu       $v1, $zero, 0xFAA
    ctx->pc = 0x169928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4010));
    // 0x16992c: 0x12030180  beq         $s0, $v1, . + 4 + (0x180 << 2)
    ctx->pc = 0x16992Cu;
    {
        const bool branch_taken_0x16992c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16992Cu;
            // 0x169930: 0x24030fa0  addiu       $v1, $zero, 0xFA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16992c) {
            ctx->pc = 0x169F30u;
            goto label_169f30;
        }
    }
    ctx->pc = 0x169934u;
    // 0x169934: 0x12030178  beq         $s0, $v1, . + 4 + (0x178 << 2)
    ctx->pc = 0x169934u;
    {
        const bool branch_taken_0x169934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169934) {
            ctx->pc = 0x169F18u;
            goto label_169f18;
        }
    }
    ctx->pc = 0x16993Cu;
    // 0x16993c: 0x24030f50  addiu       $v1, $zero, 0xF50
    ctx->pc = 0x16993cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3920));
    // 0x169940: 0x12030163  beq         $s0, $v1, . + 4 + (0x163 << 2)
    ctx->pc = 0x169940u;
    {
        const bool branch_taken_0x169940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169940u;
            // 0x169944: 0x24030f3c  addiu       $v1, $zero, 0xF3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3900));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169940) {
            ctx->pc = 0x169ED0u;
            goto label_169ed0;
        }
    }
    ctx->pc = 0x169948u;
    // 0x169948: 0x12030157  beq         $s0, $v1, . + 4 + (0x157 << 2)
    ctx->pc = 0x169948u;
    {
        const bool branch_taken_0x169948 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169948) {
            ctx->pc = 0x169EA8u;
            goto label_169ea8;
        }
    }
    ctx->pc = 0x169950u;
    // 0x169950: 0x24030ce4  addiu       $v1, $zero, 0xCE4
    ctx->pc = 0x169950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3300));
    // 0x169954: 0x1203014e  beq         $s0, $v1, . + 4 + (0x14E << 2)
    ctx->pc = 0x169954u;
    {
        const bool branch_taken_0x169954 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169954u;
            // 0x169958: 0x24030c80  addiu       $v1, $zero, 0xC80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169954) {
            ctx->pc = 0x169E90u;
            goto label_169e90;
        }
    }
    ctx->pc = 0x16995Cu;
    // 0x16995c: 0x12030142  beq         $s0, $v1, . + 4 + (0x142 << 2)
    ctx->pc = 0x16995Cu;
    {
        const bool branch_taken_0x16995c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16995c) {
            ctx->pc = 0x169E68u;
            goto label_169e68;
        }
    }
    ctx->pc = 0x169964u;
    // 0x169964: 0x24030bb8  addiu       $v1, $zero, 0xBB8
    ctx->pc = 0x169964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x169968: 0x12030139  beq         $s0, $v1, . + 4 + (0x139 << 2)
    ctx->pc = 0x169968u;
    {
        const bool branch_taken_0x169968 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16996Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169968u;
            // 0x16996c: 0x24030b54  addiu       $v1, $zero, 0xB54 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2900));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169968) {
            ctx->pc = 0x169E50u;
            goto label_169e50;
        }
    }
    ctx->pc = 0x169970u;
    // 0x169970: 0x1203012d  beq         $s0, $v1, . + 4 + (0x12D << 2)
    ctx->pc = 0x169970u;
    {
        const bool branch_taken_0x169970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169970) {
            ctx->pc = 0x169E28u;
            goto label_169e28;
        }
    }
    ctx->pc = 0x169978u;
    // 0x169978: 0x24030938  addiu       $v1, $zero, 0x938
    ctx->pc = 0x169978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2360));
    // 0x16997c: 0x12030120  beq         $s0, $v1, . + 4 + (0x120 << 2)
    ctx->pc = 0x16997Cu;
    {
        const bool branch_taken_0x16997c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16997Cu;
            // 0x169980: 0x2403092e  addiu       $v1, $zero, 0x92E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16997c) {
            ctx->pc = 0x169E00u;
            goto label_169e00;
        }
    }
    ctx->pc = 0x169984u;
    // 0x169984: 0x12030114  beq         $s0, $v1, . + 4 + (0x114 << 2)
    ctx->pc = 0x169984u;
    {
        const bool branch_taken_0x169984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169984) {
            ctx->pc = 0x169DD8u;
            goto label_169dd8;
        }
    }
    ctx->pc = 0x16998Cu;
    // 0x16998c: 0x24030898  addiu       $v1, $zero, 0x898
    ctx->pc = 0x16998cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x169990: 0x1203010b  beq         $s0, $v1, . + 4 + (0x10B << 2)
    ctx->pc = 0x169990u;
    {
        const bool branch_taken_0x169990 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169990u;
            // 0x169994: 0x240307f8  addiu       $v1, $zero, 0x7F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169990) {
            ctx->pc = 0x169DC0u;
            goto label_169dc0;
        }
    }
    ctx->pc = 0x169998u;
    // 0x169998: 0x120300ff  beq         $s0, $v1, . + 4 + (0xFF << 2)
    ctx->pc = 0x169998u;
    {
        const bool branch_taken_0x169998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169998) {
            ctx->pc = 0x169D98u;
            goto label_169d98;
        }
    }
    ctx->pc = 0x1699A0u;
    // 0x1699a0: 0x240307e4  addiu       $v1, $zero, 0x7E4
    ctx->pc = 0x1699a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2020));
    // 0x1699a4: 0x120300f2  beq         $s0, $v1, . + 4 + (0xF2 << 2)
    ctx->pc = 0x1699A4u;
    {
        const bool branch_taken_0x1699a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1699A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1699A4u;
            // 0x1699a8: 0x240307d0  addiu       $v1, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699a4) {
            ctx->pc = 0x169D70u;
            goto label_169d70;
        }
    }
    ctx->pc = 0x1699ACu;
    // 0x1699ac: 0x120300ea  beq         $s0, $v1, . + 4 + (0xEA << 2)
    ctx->pc = 0x1699ACu;
    {
        const bool branch_taken_0x1699ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1699ac) {
            ctx->pc = 0x169D58u;
            goto label_169d58;
        }
    }
    ctx->pc = 0x1699B4u;
    // 0x1699b4: 0x24030708  addiu       $v1, $zero, 0x708
    ctx->pc = 0x1699b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
    // 0x1699b8: 0x120300e1  beq         $s0, $v1, . + 4 + (0xE1 << 2)
    ctx->pc = 0x1699B8u;
    {
        const bool branch_taken_0x1699b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1699BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1699B8u;
            // 0x1699bc: 0x240305dc  addiu       $v1, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699b8) {
            ctx->pc = 0x169D40u;
            goto label_169d40;
        }
    }
    ctx->pc = 0x1699C0u;
    // 0x1699c0: 0x120300d9  beq         $s0, $v1, . + 4 + (0xD9 << 2)
    ctx->pc = 0x1699C0u;
    {
        const bool branch_taken_0x1699c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1699c0) {
            ctx->pc = 0x169D28u;
            goto label_169d28;
        }
    }
    ctx->pc = 0x1699C8u;
    // 0x1699c8: 0x240305a0  addiu       $v1, $zero, 0x5A0
    ctx->pc = 0x1699c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1440));
    // 0x1699cc: 0x120300d0  beq         $s0, $v1, . + 4 + (0xD0 << 2)
    ctx->pc = 0x1699CCu;
    {
        const bool branch_taken_0x1699cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1699D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1699CCu;
            // 0x1699d0: 0x2403058c  addiu       $v1, $zero, 0x58C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699cc) {
            ctx->pc = 0x169D10u;
            goto label_169d10;
        }
    }
    ctx->pc = 0x1699D4u;
    // 0x1699d4: 0x120300c4  beq         $s0, $v1, . + 4 + (0xC4 << 2)
    ctx->pc = 0x1699D4u;
    {
        const bool branch_taken_0x1699d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1699d4) {
            ctx->pc = 0x169CE8u;
            goto label_169ce8;
        }
    }
    ctx->pc = 0x1699DCu;
    // 0x1699dc: 0x24030578  addiu       $v1, $zero, 0x578
    ctx->pc = 0x1699dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
    // 0x1699e0: 0x120300bb  beq         $s0, $v1, . + 4 + (0xBB << 2)
    ctx->pc = 0x1699E0u;
    {
        const bool branch_taken_0x1699e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1699E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1699E0u;
            // 0x1699e4: 0x24030514  addiu       $v1, $zero, 0x514 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699e0) {
            ctx->pc = 0x169CD0u;
            goto label_169cd0;
        }
    }
    ctx->pc = 0x1699E8u;
    // 0x1699e8: 0x120300b3  beq         $s0, $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x1699E8u;
    {
        const bool branch_taken_0x1699e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1699e8) {
            ctx->pc = 0x169CB8u;
            goto label_169cb8;
        }
    }
    ctx->pc = 0x1699F0u;
    // 0x1699f0: 0x2403049c  addiu       $v1, $zero, 0x49C
    ctx->pc = 0x1699f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1180));
    // 0x1699f4: 0x120300aa  beq         $s0, $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x1699F4u;
    {
        const bool branch_taken_0x1699f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1699F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1699F4u;
            // 0x1699f8: 0x24030384  addiu       $v1, $zero, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699f4) {
            ctx->pc = 0x169CA0u;
            goto label_169ca0;
        }
    }
    ctx->pc = 0x1699FCu;
    // 0x1699fc: 0x120300a2  beq         $s0, $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1699FCu;
    {
        const bool branch_taken_0x1699fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1699fc) {
            ctx->pc = 0x169C88u;
            goto label_169c88;
        }
    }
    ctx->pc = 0x169A04u;
    // 0x169a04: 0x240302f8  addiu       $v1, $zero, 0x2F8
    ctx->pc = 0x169a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 760));
    // 0x169a08: 0x1203008d  beq         $s0, $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x169A08u;
    {
        const bool branch_taken_0x169a08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169A08u;
            // 0x169a0c: 0x240302bc  addiu       $v1, $zero, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a08) {
            ctx->pc = 0x169C40u;
            goto label_169c40;
        }
    }
    ctx->pc = 0x169A10u;
    // 0x169a10: 0x1203007d  beq         $s0, $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x169A10u;
    {
        const bool branch_taken_0x169a10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169a10) {
            ctx->pc = 0x169C08u;
            goto label_169c08;
        }
    }
    ctx->pc = 0x169A18u;
    // 0x169a18: 0x24030212  addiu       $v1, $zero, 0x212
    ctx->pc = 0x169a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 530));
    // 0x169a1c: 0x12030070  beq         $s0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x169A1Cu;
    {
        const bool branch_taken_0x169a1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169A1Cu;
            // 0x169a20: 0x24030208  addiu       $v1, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a1c) {
            ctx->pc = 0x169BE0u;
            goto label_169be0;
        }
    }
    ctx->pc = 0x169A24u;
    // 0x169a24: 0x12030064  beq         $s0, $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x169A24u;
    {
        const bool branch_taken_0x169a24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169a24) {
            ctx->pc = 0x169BB8u;
            goto label_169bb8;
        }
    }
    ctx->pc = 0x169A2Cu;
    // 0x169a2c: 0x240301fe  addiu       $v1, $zero, 0x1FE
    ctx->pc = 0x169a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 510));
    // 0x169a30: 0x12030057  beq         $s0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x169A30u;
    {
        const bool branch_taken_0x169a30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169A30u;
            // 0x169a34: 0x240301f4  addiu       $v1, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a30) {
            ctx->pc = 0x169B90u;
            goto label_169b90;
        }
    }
    ctx->pc = 0x169A38u;
    // 0x169a38: 0x1203004f  beq         $s0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x169A38u;
    {
        const bool branch_taken_0x169a38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169a38) {
            ctx->pc = 0x169B78u;
            goto label_169b78;
        }
    }
    ctx->pc = 0x169A40u;
    // 0x169a40: 0x24030154  addiu       $v1, $zero, 0x154
    ctx->pc = 0x169a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x169a44: 0x12030042  beq         $s0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x169A44u;
    {
        const bool branch_taken_0x169a44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169A44u;
            // 0x169a48: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a44) {
            ctx->pc = 0x169B50u;
            goto label_169b50;
        }
    }
    ctx->pc = 0x169A4Cu;
    // 0x169a4c: 0x12030036  beq         $s0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x169A4Cu;
    {
        const bool branch_taken_0x169a4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169a4c) {
            ctx->pc = 0x169B28u;
            goto label_169b28;
        }
    }
    ctx->pc = 0x169A54u;
    // 0x169a54: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x169a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x169a58: 0x1203002d  beq         $s0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x169A58u;
    {
        const bool branch_taken_0x169a58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169A58u;
            // 0x169a5c: 0x240300f0  addiu       $v1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a58) {
            ctx->pc = 0x169B10u;
            goto label_169b10;
        }
    }
    ctx->pc = 0x169A60u;
    // 0x169a60: 0x12030021  beq         $s0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x169A60u;
    {
        const bool branch_taken_0x169a60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169a60) {
            ctx->pc = 0x169AE8u;
            goto label_169ae8;
        }
    }
    ctx->pc = 0x169A68u;
    // 0x169a68: 0x240300dc  addiu       $v1, $zero, 0xDC
    ctx->pc = 0x169a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x169a6c: 0x12030014  beq         $s0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x169A6Cu;
    {
        const bool branch_taken_0x169a6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x169A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169A6Cu;
            // 0x169a70: 0x240300c8  addiu       $v1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a6c) {
            ctx->pc = 0x169AC0u;
            goto label_169ac0;
        }
    }
    ctx->pc = 0x169A74u;
    // 0x169a74: 0x1203000c  beq         $s0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x169A74u;
    {
        const bool branch_taken_0x169a74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169a74) {
            ctx->pc = 0x169AA8u;
            goto label_169aa8;
        }
    }
    ctx->pc = 0x169A7Cu;
    // 0x169a7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169a80: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x169A80u;
    {
        const bool branch_taken_0x169a80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x169a80) {
            ctx->pc = 0x169A90u;
            goto label_169a90;
        }
    }
    ctx->pc = 0x169A88u;
    // 0x169a88: 0x10000219  b           . + 4 + (0x219 << 2)
    ctx->pc = 0x169A88u;
    {
        const bool branch_taken_0x169a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a88) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169A90u;
label_169a90:
    // 0x169a90: 0xc05d004  jal         func_174010
    ctx->pc = 0x169A90u;
    SET_GPR_U32(ctx, 31, 0x169A98u);
    ctx->pc = 0x169A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169A90u;
            // 0x169a94: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169A98u; }
        if (ctx->pc != 0x169A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169A98u; }
        if (ctx->pc != 0x169A98u) { return; }
    }
    ctx->pc = 0x169A98u;
    // 0x169a98: 0xc056050  jal         func_158140
    ctx->pc = 0x169A98u;
    SET_GPR_U32(ctx, 31, 0x169AA0u);
    ctx->pc = 0x158140u;
    if (runtime->hasFunction(0x158140u)) {
        auto targetFn = runtime->lookupFunction(0x158140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AA0u; }
        if (ctx->pc != 0x169AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuOk_0x158140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AA0u; }
        if (ctx->pc != 0x169AA0u) { return; }
    }
    ctx->pc = 0x169AA0u;
    // 0x169aa0: 0x10000213  b           . + 4 + (0x213 << 2)
    ctx->pc = 0x169AA0u;
    {
        const bool branch_taken_0x169aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169aa0) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169AA8u;
label_169aa8:
    // 0x169aa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169aac: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x169aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x169ab0: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169AB0u;
    SET_GPR_U32(ctx, 31, 0x169AB8u);
    ctx->pc = 0x169AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169AB0u;
            // 0x169ab4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AB8u; }
        if (ctx->pc != 0x169AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AB8u; }
        if (ctx->pc != 0x169AB8u) { return; }
    }
    ctx->pc = 0x169AB8u;
    // 0x169ab8: 0x1000020d  b           . + 4 + (0x20D << 2)
    ctx->pc = 0x169AB8u;
    {
        const bool branch_taken_0x169ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169ab8) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169AC0u;
label_169ac0:
    // 0x169ac0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169ac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ac8: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169AC8u;
    SET_GPR_U32(ctx, 31, 0x169AD0u);
    ctx->pc = 0x169ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169AC8u;
            // 0x169acc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AD0u; }
        if (ctx->pc != 0x169AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AD0u; }
        if (ctx->pc != 0x169AD0u) { return; }
    }
    ctx->pc = 0x169AD0u;
    // 0x169ad0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169ad4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x169ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x169ad8: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169AD8u;
    SET_GPR_U32(ctx, 31, 0x169AE0u);
    ctx->pc = 0x169ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169AD8u;
            // 0x169adc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AE0u; }
        if (ctx->pc != 0x169AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AE0u; }
        if (ctx->pc != 0x169AE0u) { return; }
    }
    ctx->pc = 0x169AE0u;
    // 0x169ae0: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x169AE0u;
    {
        const bool branch_taken_0x169ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169ae0) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169AE8u;
label_169ae8:
    // 0x169ae8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169aec: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x169aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x169af0: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169AF0u;
    SET_GPR_U32(ctx, 31, 0x169AF8u);
    ctx->pc = 0x169AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169AF0u;
            // 0x169af4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AF8u; }
        if (ctx->pc != 0x169AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AF8u; }
        if (ctx->pc != 0x169AF8u) { return; }
    }
    ctx->pc = 0x169AF8u;
    // 0x169af8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169afc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x169afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x169b00: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169B00u;
    SET_GPR_U32(ctx, 31, 0x169B08u);
    ctx->pc = 0x169B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169B00u;
            // 0x169b04: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B08u; }
        if (ctx->pc != 0x169B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B08u; }
        if (ctx->pc != 0x169B08u) { return; }
    }
    ctx->pc = 0x169B08u;
    // 0x169b08: 0x100001f9  b           . + 4 + (0x1F9 << 2)
    ctx->pc = 0x169B08u;
    {
        const bool branch_taken_0x169b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169b08) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169B10u;
label_169b10:
    // 0x169b10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b14: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x169b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x169b18: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169B18u;
    SET_GPR_U32(ctx, 31, 0x169B20u);
    ctx->pc = 0x169B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169B18u;
            // 0x169b1c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B20u; }
        if (ctx->pc != 0x169B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B20u; }
        if (ctx->pc != 0x169B20u) { return; }
    }
    ctx->pc = 0x169B20u;
    // 0x169b20: 0x100001f3  b           . + 4 + (0x1F3 << 2)
    ctx->pc = 0x169B20u;
    {
        const bool branch_taken_0x169b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169b20) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169B28u;
label_169b28:
    // 0x169b28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b30: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169B30u;
    SET_GPR_U32(ctx, 31, 0x169B38u);
    ctx->pc = 0x169B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169B30u;
            // 0x169b34: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B38u; }
        if (ctx->pc != 0x169B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B38u; }
        if (ctx->pc != 0x169B38u) { return; }
    }
    ctx->pc = 0x169B38u;
    // 0x169b38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b3c: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x169b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x169b40: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169B40u;
    SET_GPR_U32(ctx, 31, 0x169B48u);
    ctx->pc = 0x169B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169B40u;
            // 0x169b44: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B48u; }
        if (ctx->pc != 0x169B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B48u; }
        if (ctx->pc != 0x169B48u) { return; }
    }
    ctx->pc = 0x169B48u;
    // 0x169b48: 0x100001e9  b           . + 4 + (0x1E9 << 2)
    ctx->pc = 0x169B48u;
    {
        const bool branch_taken_0x169b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169b48) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169B50u;
label_169b50:
    // 0x169b50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b54: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x169b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x169b58: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169B58u;
    SET_GPR_U32(ctx, 31, 0x169B60u);
    ctx->pc = 0x169B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169B58u;
            // 0x169b5c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B60u; }
        if (ctx->pc != 0x169B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B60u; }
        if (ctx->pc != 0x169B60u) { return; }
    }
    ctx->pc = 0x169B60u;
    // 0x169b60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b64: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x169b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x169b68: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169B68u;
    SET_GPR_U32(ctx, 31, 0x169B70u);
    ctx->pc = 0x169B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169B68u;
            // 0x169b6c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B70u; }
        if (ctx->pc != 0x169B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B70u; }
        if (ctx->pc != 0x169B70u) { return; }
    }
    ctx->pc = 0x169B70u;
    // 0x169b70: 0x100001df  b           . + 4 + (0x1DF << 2)
    ctx->pc = 0x169B70u;
    {
        const bool branch_taken_0x169b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169b70) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169B78u;
label_169b78:
    // 0x169b78: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169b7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b80: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169B80u;
    SET_GPR_U32(ctx, 31, 0x169B88u);
    ctx->pc = 0x169B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169B80u;
            // 0x169b84: 0x2406ffdb  addiu       $a2, $zero, -0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967259));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B88u; }
        if (ctx->pc != 0x169B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B88u; }
        if (ctx->pc != 0x169B88u) { return; }
    }
    ctx->pc = 0x169B88u;
    // 0x169b88: 0x100001d9  b           . + 4 + (0x1D9 << 2)
    ctx->pc = 0x169B88u;
    {
        const bool branch_taken_0x169b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169b88) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169B90u;
label_169b90:
    // 0x169b90: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169b94: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x169b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x169b98: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169B98u;
    SET_GPR_U32(ctx, 31, 0x169BA0u);
    ctx->pc = 0x169B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169B98u;
            // 0x169b9c: 0x2406ffda  addiu       $a2, $zero, -0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967258));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169BA0u; }
        if (ctx->pc != 0x169BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169BA0u; }
        if (ctx->pc != 0x169BA0u) { return; }
    }
    ctx->pc = 0x169BA0u;
    // 0x169ba0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169ba4: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x169ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x169ba8: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169BA8u;
    SET_GPR_U32(ctx, 31, 0x169BB0u);
    ctx->pc = 0x169BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169BA8u;
            // 0x169bac: 0x2406ffda  addiu       $a2, $zero, -0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967258));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169BB0u; }
        if (ctx->pc != 0x169BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169BB0u; }
        if (ctx->pc != 0x169BB0u) { return; }
    }
    ctx->pc = 0x169BB0u;
    // 0x169bb0: 0x100001cf  b           . + 4 + (0x1CF << 2)
    ctx->pc = 0x169BB0u;
    {
        const bool branch_taken_0x169bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169bb0) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169BB8u;
label_169bb8:
    // 0x169bb8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169bbc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x169bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x169bc0: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169BC0u;
    SET_GPR_U32(ctx, 31, 0x169BC8u);
    ctx->pc = 0x169BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169BC0u;
            // 0x169bc4: 0x2406ffd9  addiu       $a2, $zero, -0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967257));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169BC8u; }
        if (ctx->pc != 0x169BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169BC8u; }
        if (ctx->pc != 0x169BC8u) { return; }
    }
    ctx->pc = 0x169BC8u;
    // 0x169bc8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169bcc: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x169bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x169bd0: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169BD0u;
    SET_GPR_U32(ctx, 31, 0x169BD8u);
    ctx->pc = 0x169BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169BD0u;
            // 0x169bd4: 0x2406ffd9  addiu       $a2, $zero, -0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967257));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169BD8u; }
        if (ctx->pc != 0x169BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169BD8u; }
        if (ctx->pc != 0x169BD8u) { return; }
    }
    ctx->pc = 0x169BD8u;
    // 0x169bd8: 0x100001c5  b           . + 4 + (0x1C5 << 2)
    ctx->pc = 0x169BD8u;
    {
        const bool branch_taken_0x169bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169bd8) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169BE0u;
label_169be0:
    // 0x169be0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169be4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x169be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x169be8: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169BE8u;
    SET_GPR_U32(ctx, 31, 0x169BF0u);
    ctx->pc = 0x169BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169BE8u;
            // 0x169bec: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169BF0u; }
        if (ctx->pc != 0x169BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169BF0u; }
        if (ctx->pc != 0x169BF0u) { return; }
    }
    ctx->pc = 0x169BF0u;
    // 0x169bf0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169bf4: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x169bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x169bf8: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169BF8u;
    SET_GPR_U32(ctx, 31, 0x169C00u);
    ctx->pc = 0x169BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169BF8u;
            // 0x169bfc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C00u; }
        if (ctx->pc != 0x169C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C00u; }
        if (ctx->pc != 0x169C00u) { return; }
    }
    ctx->pc = 0x169C00u;
    // 0x169c00: 0x100001bb  b           . + 4 + (0x1BB << 2)
    ctx->pc = 0x169C00u;
    {
        const bool branch_taken_0x169c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c00) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169C08u;
label_169c08:
    // 0x169c08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x169c0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c10: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169C10u;
    SET_GPR_U32(ctx, 31, 0x169C18u);
    ctx->pc = 0x169C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169C10u;
            // 0x169c14: 0x2406ffda  addiu       $a2, $zero, -0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967258));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C18u; }
        if (ctx->pc != 0x169C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C18u; }
        if (ctx->pc != 0x169C18u) { return; }
    }
    ctx->pc = 0x169C18u;
    // 0x169c18: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x169c1c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x169c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x169c20: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169C20u;
    SET_GPR_U32(ctx, 31, 0x169C28u);
    ctx->pc = 0x169C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169C20u;
            // 0x169c24: 0x2406ffd9  addiu       $a2, $zero, -0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967257));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C28u; }
        if (ctx->pc != 0x169C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C28u; }
        if (ctx->pc != 0x169C28u) { return; }
    }
    ctx->pc = 0x169C28u;
    // 0x169c28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x169c2c: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x169c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x169c30: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169C30u;
    SET_GPR_U32(ctx, 31, 0x169C38u);
    ctx->pc = 0x169C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169C30u;
            // 0x169c34: 0x2406ffd9  addiu       $a2, $zero, -0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967257));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C38u; }
        if (ctx->pc != 0x169C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C38u; }
        if (ctx->pc != 0x169C38u) { return; }
    }
    ctx->pc = 0x169C38u;
    // 0x169c38: 0x100001ad  b           . + 4 + (0x1AD << 2)
    ctx->pc = 0x169C38u;
    {
        const bool branch_taken_0x169c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c38) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169C40u;
label_169c40:
    // 0x169c40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x169c44: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x169c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x169c48: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169C48u;
    SET_GPR_U32(ctx, 31, 0x169C50u);
    ctx->pc = 0x169C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169C48u;
            // 0x169c4c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C50u; }
        if (ctx->pc != 0x169C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C50u; }
        if (ctx->pc != 0x169C50u) { return; }
    }
    ctx->pc = 0x169C50u;
    // 0x169c50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x169c54: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x169c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x169c58: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169C58u;
    SET_GPR_U32(ctx, 31, 0x169C60u);
    ctx->pc = 0x169C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169C58u;
            // 0x169c5c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C60u; }
        if (ctx->pc != 0x169C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C60u; }
        if (ctx->pc != 0x169C60u) { return; }
    }
    ctx->pc = 0x169C60u;
    // 0x169c60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x169c64: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x169c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x169c68: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169C68u;
    SET_GPR_U32(ctx, 31, 0x169C70u);
    ctx->pc = 0x169C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169C68u;
            // 0x169c6c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C70u; }
        if (ctx->pc != 0x169C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C70u; }
        if (ctx->pc != 0x169C70u) { return; }
    }
    ctx->pc = 0x169C70u;
    // 0x169c70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x169c74: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x169c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x169c78: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169C78u;
    SET_GPR_U32(ctx, 31, 0x169C80u);
    ctx->pc = 0x169C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169C78u;
            // 0x169c7c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C80u; }
        if (ctx->pc != 0x169C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C80u; }
        if (ctx->pc != 0x169C80u) { return; }
    }
    ctx->pc = 0x169C80u;
    // 0x169c80: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x169C80u;
    {
        const bool branch_taken_0x169c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c80) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169C88u;
label_169c88:
    // 0x169c88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169c8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c90: 0xc06c4e0  jal         func_1B1380
    ctx->pc = 0x169C90u;
    SET_GPR_U32(ctx, 31, 0x169C98u);
    ctx->pc = 0x169C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169C90u;
            // 0x169c94: 0x2406ffc9  addiu       $a2, $zero, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967241));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1380u;
    if (runtime->hasFunction(0x1B1380u)) {
        auto targetFn = runtime->lookupFunction(0x1B1380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C98u; }
        if (ctx->pc != 0x169C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_03_0x1b1380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C98u; }
        if (ctx->pc != 0x169C98u) { return; }
    }
    ctx->pc = 0x169C98u;
    // 0x169c98: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x169C98u;
    {
        const bool branch_taken_0x169c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c98) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169CA0u;
label_169ca0:
    // 0x169ca0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ca4: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x169ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x169ca8: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x169CA8u;
    SET_GPR_U32(ctx, 31, 0x169CB0u);
    ctx->pc = 0x169CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169CA8u;
            // 0x169cac: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169CB0u; }
        if (ctx->pc != 0x169CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItemCareer_0x1df800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169CB0u; }
        if (ctx->pc != 0x169CB0u) { return; }
    }
    ctx->pc = 0x169CB0u;
    // 0x169cb0: 0x1000018f  b           . + 4 + (0x18F << 2)
    ctx->pc = 0x169CB0u;
    {
        const bool branch_taken_0x169cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169cb0) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169CB8u;
label_169cb8:
    // 0x169cb8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169cbc: 0x2405ffc4  addiu       $a1, $zero, -0x3C
    ctx->pc = 0x169cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967236));
    // 0x169cc0: 0xc06c4e0  jal         func_1B1380
    ctx->pc = 0x169CC0u;
    SET_GPR_U32(ctx, 31, 0x169CC8u);
    ctx->pc = 0x169CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169CC0u;
            // 0x169cc4: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1380u;
    if (runtime->hasFunction(0x1B1380u)) {
        auto targetFn = runtime->lookupFunction(0x1B1380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169CC8u; }
        if (ctx->pc != 0x169CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_03_0x1b1380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169CC8u; }
        if (ctx->pc != 0x169CC8u) { return; }
    }
    ctx->pc = 0x169CC8u;
    // 0x169cc8: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x169CC8u;
    {
        const bool branch_taken_0x169cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169cc8) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169CD0u;
label_169cd0:
    // 0x169cd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169cd4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x169cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x169cd8: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169CD8u;
    SET_GPR_U32(ctx, 31, 0x169CE0u);
    ctx->pc = 0x169CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169CD8u;
            // 0x169cdc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169CE0u; }
        if (ctx->pc != 0x169CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169CE0u; }
        if (ctx->pc != 0x169CE0u) { return; }
    }
    ctx->pc = 0x169CE0u;
    // 0x169ce0: 0x10000183  b           . + 4 + (0x183 << 2)
    ctx->pc = 0x169CE0u;
    {
        const bool branch_taken_0x169ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169ce0) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169CE8u;
label_169ce8:
    // 0x169ce8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169cec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169cf0: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169CF0u;
    SET_GPR_U32(ctx, 31, 0x169CF8u);
    ctx->pc = 0x169CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169CF0u;
            // 0x169cf4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169CF8u; }
        if (ctx->pc != 0x169CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169CF8u; }
        if (ctx->pc != 0x169CF8u) { return; }
    }
    ctx->pc = 0x169CF8u;
    // 0x169cf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169cfc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x169cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x169d00: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169D00u;
    SET_GPR_U32(ctx, 31, 0x169D08u);
    ctx->pc = 0x169D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169D00u;
            // 0x169d04: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D08u; }
        if (ctx->pc != 0x169D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D08u; }
        if (ctx->pc != 0x169D08u) { return; }
    }
    ctx->pc = 0x169D08u;
    // 0x169d08: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x169D08u;
    {
        const bool branch_taken_0x169d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d08) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169D10u;
label_169d10:
    // 0x169d10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169d14: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x169d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x169d18: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169D18u;
    SET_GPR_U32(ctx, 31, 0x169D20u);
    ctx->pc = 0x169D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169D18u;
            // 0x169d1c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D20u; }
        if (ctx->pc != 0x169D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D20u; }
        if (ctx->pc != 0x169D20u) { return; }
    }
    ctx->pc = 0x169D20u;
    // 0x169d20: 0x10000173  b           . + 4 + (0x173 << 2)
    ctx->pc = 0x169D20u;
    {
        const bool branch_taken_0x169d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d20) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169D28u;
label_169d28:
    // 0x169d28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x169d2c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x169d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x169d30: 0xc06c4e0  jal         func_1B1380
    ctx->pc = 0x169D30u;
    SET_GPR_U32(ctx, 31, 0x169D38u);
    ctx->pc = 0x169D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169D30u;
            // 0x169d34: 0x2406fff6  addiu       $a2, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1380u;
    if (runtime->hasFunction(0x1B1380u)) {
        auto targetFn = runtime->lookupFunction(0x1B1380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D38u; }
        if (ctx->pc != 0x169D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_03_0x1b1380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D38u; }
        if (ctx->pc != 0x169D38u) { return; }
    }
    ctx->pc = 0x169D38u;
    // 0x169d38: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x169D38u;
    {
        const bool branch_taken_0x169d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d38) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169D40u;
label_169d40:
    // 0x169d40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169d44: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x169d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x169d48: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x169D48u;
    SET_GPR_U32(ctx, 31, 0x169D50u);
    ctx->pc = 0x169D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169D48u;
            // 0x169d4c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D50u; }
        if (ctx->pc != 0x169D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItemCareer_0x1df800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D50u; }
        if (ctx->pc != 0x169D50u) { return; }
    }
    ctx->pc = 0x169D50u;
    // 0x169d50: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x169D50u;
    {
        const bool branch_taken_0x169d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d50) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169D58u;
label_169d58:
    // 0x169d58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d5c: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x169d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x169d60: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169D60u;
    SET_GPR_U32(ctx, 31, 0x169D68u);
    ctx->pc = 0x169D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169D60u;
            // 0x169d64: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D68u; }
        if (ctx->pc != 0x169D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D68u; }
        if (ctx->pc != 0x169D68u) { return; }
    }
    ctx->pc = 0x169D68u;
    // 0x169d68: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x169D68u;
    {
        const bool branch_taken_0x169d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d68) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169D70u;
label_169d70:
    // 0x169d70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d78: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169D78u;
    SET_GPR_U32(ctx, 31, 0x169D80u);
    ctx->pc = 0x169D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169D78u;
            // 0x169d7c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D80u; }
        if (ctx->pc != 0x169D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D80u; }
        if (ctx->pc != 0x169D80u) { return; }
    }
    ctx->pc = 0x169D80u;
    // 0x169d80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d84: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x169d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x169d88: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169D88u;
    SET_GPR_U32(ctx, 31, 0x169D90u);
    ctx->pc = 0x169D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169D88u;
            // 0x169d8c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D90u; }
        if (ctx->pc != 0x169D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D90u; }
        if (ctx->pc != 0x169D90u) { return; }
    }
    ctx->pc = 0x169D90u;
    // 0x169d90: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x169D90u;
    {
        const bool branch_taken_0x169d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d90) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169D98u;
label_169d98:
    // 0x169d98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d9c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x169d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x169da0: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169DA0u;
    SET_GPR_U32(ctx, 31, 0x169DA8u);
    ctx->pc = 0x169DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169DA0u;
            // 0x169da4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169DA8u; }
        if (ctx->pc != 0x169DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169DA8u; }
        if (ctx->pc != 0x169DA8u) { return; }
    }
    ctx->pc = 0x169DA8u;
    // 0x169da8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169dac: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x169dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x169db0: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169DB0u;
    SET_GPR_U32(ctx, 31, 0x169DB8u);
    ctx->pc = 0x169DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169DB0u;
            // 0x169db4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169DB8u; }
        if (ctx->pc != 0x169DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169DB8u; }
        if (ctx->pc != 0x169DB8u) { return; }
    }
    ctx->pc = 0x169DB8u;
    // 0x169db8: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x169DB8u;
    {
        const bool branch_taken_0x169db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169db8) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169DC0u;
label_169dc0:
    // 0x169dc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169dc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169dc8: 0xc06c4e0  jal         func_1B1380
    ctx->pc = 0x169DC8u;
    SET_GPR_U32(ctx, 31, 0x169DD0u);
    ctx->pc = 0x169DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169DC8u;
            // 0x169dcc: 0x2406ffc9  addiu       $a2, $zero, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967241));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1380u;
    if (runtime->hasFunction(0x1B1380u)) {
        auto targetFn = runtime->lookupFunction(0x1B1380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169DD0u; }
        if (ctx->pc != 0x169DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_03_0x1b1380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169DD0u; }
        if (ctx->pc != 0x169DD0u) { return; }
    }
    ctx->pc = 0x169DD0u;
    // 0x169dd0: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x169DD0u;
    {
        const bool branch_taken_0x169dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169dd0) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169DD8u;
label_169dd8:
    // 0x169dd8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169ddc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x169ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x169de0: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169DE0u;
    SET_GPR_U32(ctx, 31, 0x169DE8u);
    ctx->pc = 0x169DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169DE0u;
            // 0x169de4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169DE8u; }
        if (ctx->pc != 0x169DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169DE8u; }
        if (ctx->pc != 0x169DE8u) { return; }
    }
    ctx->pc = 0x169DE8u;
    // 0x169de8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169dec: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x169decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x169df0: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169DF0u;
    SET_GPR_U32(ctx, 31, 0x169DF8u);
    ctx->pc = 0x169DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169DF0u;
            // 0x169df4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169DF8u; }
        if (ctx->pc != 0x169DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169DF8u; }
        if (ctx->pc != 0x169DF8u) { return; }
    }
    ctx->pc = 0x169DF8u;
    // 0x169df8: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x169DF8u;
    {
        const bool branch_taken_0x169df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169df8) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169E00u;
label_169e00:
    // 0x169e00: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169e04: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x169e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x169e08: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169E08u;
    SET_GPR_U32(ctx, 31, 0x169E10u);
    ctx->pc = 0x169E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169E08u;
            // 0x169e0c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E10u; }
        if (ctx->pc != 0x169E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E10u; }
        if (ctx->pc != 0x169E10u) { return; }
    }
    ctx->pc = 0x169E10u;
    // 0x169e10: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169e14: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x169e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x169e18: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169E18u;
    SET_GPR_U32(ctx, 31, 0x169E20u);
    ctx->pc = 0x169E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169E18u;
            // 0x169e1c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E20u; }
        if (ctx->pc != 0x169E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E20u; }
        if (ctx->pc != 0x169E20u) { return; }
    }
    ctx->pc = 0x169E20u;
    // 0x169e20: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x169E20u;
    {
        const bool branch_taken_0x169e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169e20) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169E28u;
label_169e28:
    // 0x169e28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169e2c: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x169e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x169e30: 0xc06c4e0  jal         func_1B1380
    ctx->pc = 0x169E30u;
    SET_GPR_U32(ctx, 31, 0x169E38u);
    ctx->pc = 0x169E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169E30u;
            // 0x169e34: 0x2406ffc9  addiu       $a2, $zero, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967241));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1380u;
    if (runtime->hasFunction(0x1B1380u)) {
        auto targetFn = runtime->lookupFunction(0x1B1380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E38u; }
        if (ctx->pc != 0x169E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_03_0x1b1380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E38u; }
        if (ctx->pc != 0x169E38u) { return; }
    }
    ctx->pc = 0x169E38u;
    // 0x169e38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169e3c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x169e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x169e40: 0xc06c4e0  jal         func_1B1380
    ctx->pc = 0x169E40u;
    SET_GPR_U32(ctx, 31, 0x169E48u);
    ctx->pc = 0x169E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169E40u;
            // 0x169e44: 0x2406ffc9  addiu       $a2, $zero, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967241));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1380u;
    if (runtime->hasFunction(0x1B1380u)) {
        auto targetFn = runtime->lookupFunction(0x1B1380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E48u; }
        if (ctx->pc != 0x169E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_03_0x1b1380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E48u; }
        if (ctx->pc != 0x169E48u) { return; }
    }
    ctx->pc = 0x169E48u;
    // 0x169e48: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x169E48u;
    {
        const bool branch_taken_0x169e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169e48) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169E50u;
label_169e50:
    // 0x169e50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e58: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x169E58u;
    SET_GPR_U32(ctx, 31, 0x169E60u);
    ctx->pc = 0x169E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169E58u;
            // 0x169e5c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E60u; }
        if (ctx->pc != 0x169E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E60u; }
        if (ctx->pc != 0x169E60u) { return; }
    }
    ctx->pc = 0x169E60u;
    // 0x169e60: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x169E60u;
    {
        const bool branch_taken_0x169e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169e60) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169E68u;
label_169e68:
    // 0x169e68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169e6c: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x169e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x169e70: 0xc06c4e0  jal         func_1B1380
    ctx->pc = 0x169E70u;
    SET_GPR_U32(ctx, 31, 0x169E78u);
    ctx->pc = 0x169E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169E70u;
            // 0x169e74: 0x2406ffc9  addiu       $a2, $zero, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967241));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1380u;
    if (runtime->hasFunction(0x1B1380u)) {
        auto targetFn = runtime->lookupFunction(0x1B1380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E78u; }
        if (ctx->pc != 0x169E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_03_0x1b1380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E78u; }
        if (ctx->pc != 0x169E78u) { return; }
    }
    ctx->pc = 0x169E78u;
    // 0x169e78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169e7c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x169e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x169e80: 0xc06c4e0  jal         func_1B1380
    ctx->pc = 0x169E80u;
    SET_GPR_U32(ctx, 31, 0x169E88u);
    ctx->pc = 0x169E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169E80u;
            // 0x169e84: 0x2406ffc9  addiu       $a2, $zero, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967241));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1380u;
    if (runtime->hasFunction(0x1B1380u)) {
        auto targetFn = runtime->lookupFunction(0x1B1380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E88u; }
        if (ctx->pc != 0x169E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_03_0x1b1380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E88u; }
        if (ctx->pc != 0x169E88u) { return; }
    }
    ctx->pc = 0x169E88u;
    // 0x169e88: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x169E88u;
    {
        const bool branch_taken_0x169e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169e88) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169E90u;
label_169e90:
    // 0x169e90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e98: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x169E98u;
    SET_GPR_U32(ctx, 31, 0x169EA0u);
    ctx->pc = 0x169E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169E98u;
            // 0x169e9c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EA0u; }
        if (ctx->pc != 0x169EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EA0u; }
        if (ctx->pc != 0x169EA0u) { return; }
    }
    ctx->pc = 0x169EA0u;
    // 0x169ea0: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x169EA0u;
    {
        const bool branch_taken_0x169ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169ea0) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169EA8u;
label_169ea8:
    // 0x169ea8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169eac: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x169eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x169eb0: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169EB0u;
    SET_GPR_U32(ctx, 31, 0x169EB8u);
    ctx->pc = 0x169EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169EB0u;
            // 0x169eb4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EB8u; }
        if (ctx->pc != 0x169EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EB8u; }
        if (ctx->pc != 0x169EB8u) { return; }
    }
    ctx->pc = 0x169EB8u;
    // 0x169eb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169ebc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x169ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x169ec0: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169EC0u;
    SET_GPR_U32(ctx, 31, 0x169EC8u);
    ctx->pc = 0x169EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169EC0u;
            // 0x169ec4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EC8u; }
        if (ctx->pc != 0x169EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EC8u; }
        if (ctx->pc != 0x169EC8u) { return; }
    }
    ctx->pc = 0x169EC8u;
    // 0x169ec8: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x169EC8u;
    {
        const bool branch_taken_0x169ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169ec8) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169ED0u;
label_169ed0:
    // 0x169ed0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ed4: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x169ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x169ed8: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169ED8u;
    SET_GPR_U32(ctx, 31, 0x169EE0u);
    ctx->pc = 0x169EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169ED8u;
            // 0x169edc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EE0u; }
        if (ctx->pc != 0x169EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EE0u; }
        if (ctx->pc != 0x169EE0u) { return; }
    }
    ctx->pc = 0x169EE0u;
    // 0x169ee0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ee4: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x169ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x169ee8: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169EE8u;
    SET_GPR_U32(ctx, 31, 0x169EF0u);
    ctx->pc = 0x169EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169EE8u;
            // 0x169eec: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EF0u; }
        if (ctx->pc != 0x169EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169EF0u; }
        if (ctx->pc != 0x169EF0u) { return; }
    }
    ctx->pc = 0x169EF0u;
    // 0x169ef0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169ef4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x169ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x169ef8: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169EF8u;
    SET_GPR_U32(ctx, 31, 0x169F00u);
    ctx->pc = 0x169EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169EF8u;
            // 0x169efc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F00u; }
        if (ctx->pc != 0x169F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F00u; }
        if (ctx->pc != 0x169F00u) { return; }
    }
    ctx->pc = 0x169F00u;
    // 0x169f00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169f04: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x169f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x169f08: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169F08u;
    SET_GPR_U32(ctx, 31, 0x169F10u);
    ctx->pc = 0x169F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169F08u;
            // 0x169f0c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F10u; }
        if (ctx->pc != 0x169F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F10u; }
        if (ctx->pc != 0x169F10u) { return; }
    }
    ctx->pc = 0x169F10u;
    // 0x169f10: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x169F10u;
    {
        const bool branch_taken_0x169f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169f10) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169F18u;
label_169f18:
    // 0x169f18: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x169f1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f20: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169F20u;
    SET_GPR_U32(ctx, 31, 0x169F28u);
    ctx->pc = 0x169F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169F20u;
            // 0x169f24: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F28u; }
        if (ctx->pc != 0x169F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F28u; }
        if (ctx->pc != 0x169F28u) { return; }
    }
    ctx->pc = 0x169F28u;
    // 0x169f28: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x169F28u;
    {
        const bool branch_taken_0x169f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169f28) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169F30u;
label_169f30:
    // 0x169f30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x169f34: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x169f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x169f38: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169F38u;
    SET_GPR_U32(ctx, 31, 0x169F40u);
    ctx->pc = 0x169F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169F38u;
            // 0x169f3c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F40u; }
        if (ctx->pc != 0x169F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F40u; }
        if (ctx->pc != 0x169F40u) { return; }
    }
    ctx->pc = 0x169F40u;
    // 0x169f40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x169f44: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x169f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x169f48: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x169F48u;
    SET_GPR_U32(ctx, 31, 0x169F50u);
    ctx->pc = 0x169F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169F48u;
            // 0x169f4c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F50u; }
        if (ctx->pc != 0x169F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F50u; }
        if (ctx->pc != 0x169F50u) { return; }
    }
    ctx->pc = 0x169F50u;
    // 0x169f50: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x169F50u;
    {
        const bool branch_taken_0x169f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169f50) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169F58u;
label_169f58:
    // 0x169f58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169f5c: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x169f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x169f60: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x169F60u;
    SET_GPR_U32(ctx, 31, 0x169F68u);
    ctx->pc = 0x169F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169F60u;
            // 0x169f64: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F68u; }
        if (ctx->pc != 0x169F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F68u; }
        if (ctx->pc != 0x169F68u) { return; }
    }
    ctx->pc = 0x169F68u;
    // 0x169f68: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x169F68u;
    {
        const bool branch_taken_0x169f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169f68) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169F70u;
label_169f70:
    // 0x169f70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169f74: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x169f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x169f78: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x169F78u;
    SET_GPR_U32(ctx, 31, 0x169F80u);
    ctx->pc = 0x169F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169F78u;
            // 0x169f7c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F80u; }
        if (ctx->pc != 0x169F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F80u; }
        if (ctx->pc != 0x169F80u) { return; }
    }
    ctx->pc = 0x169F80u;
    // 0x169f80: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x169F80u;
    {
        const bool branch_taken_0x169f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169f80) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169F88u;
label_169f88:
    // 0x169f88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169f8c: 0x2405ffdd  addiu       $a1, $zero, -0x23
    ctx->pc = 0x169f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
    // 0x169f90: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x169F90u;
    SET_GPR_U32(ctx, 31, 0x169F98u);
    ctx->pc = 0x169F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169F90u;
            // 0x169f94: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F98u; }
        if (ctx->pc != 0x169F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169F98u; }
        if (ctx->pc != 0x169F98u) { return; }
    }
    ctx->pc = 0x169F98u;
    // 0x169f98: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x169F98u;
    {
        const bool branch_taken_0x169f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169f98) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169FA0u;
label_169fa0:
    // 0x169fa0: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x169fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x169fa4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169fa8: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x169FA8u;
    SET_GPR_U32(ctx, 31, 0x169FB0u);
    ctx->pc = 0x169FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169FA8u;
            // 0x169fac: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169FB0u; }
        if (ctx->pc != 0x169FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169FB0u; }
        if (ctx->pc != 0x169FB0u) { return; }
    }
    ctx->pc = 0x169FB0u;
    // 0x169fb0: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x169FB0u;
    {
        const bool branch_taken_0x169fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169fb0) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169FB8u;
label_169fb8:
    // 0x169fb8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169fbc: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x169fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x169fc0: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x169FC0u;
    SET_GPR_U32(ctx, 31, 0x169FC8u);
    ctx->pc = 0x169FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169FC0u;
            // 0x169fc4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169FC8u; }
        if (ctx->pc != 0x169FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169FC8u; }
        if (ctx->pc != 0x169FC8u) { return; }
    }
    ctx->pc = 0x169FC8u;
    // 0x169fc8: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x169FC8u;
    {
        const bool branch_taken_0x169fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169fc8) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169FD0u;
label_169fd0:
    // 0x169fd0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169fd4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x169fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x169fd8: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x169FD8u;
    SET_GPR_U32(ctx, 31, 0x169FE0u);
    ctx->pc = 0x169FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169FD8u;
            // 0x169fdc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169FE0u; }
        if (ctx->pc != 0x169FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169FE0u; }
        if (ctx->pc != 0x169FE0u) { return; }
    }
    ctx->pc = 0x169FE0u;
    // 0x169fe0: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x169FE0u;
    {
        const bool branch_taken_0x169fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169fe0) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x169FE8u;
label_169fe8:
    // 0x169fe8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x169fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169fec: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x169fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x169ff0: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x169FF0u;
    SET_GPR_U32(ctx, 31, 0x169FF8u);
    ctx->pc = 0x169FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169FF0u;
            // 0x169ff4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169FF8u; }
        if (ctx->pc != 0x169FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169FF8u; }
        if (ctx->pc != 0x169FF8u) { return; }
    }
    ctx->pc = 0x169FF8u;
    // 0x169ff8: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x169FF8u;
    {
        const bool branch_taken_0x169ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169ff8) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A000u;
label_16a000:
    // 0x16a000: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16a000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a004: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16a004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16a008: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x16A008u;
    SET_GPR_U32(ctx, 31, 0x16A010u);
    ctx->pc = 0x16A00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A008u;
            // 0x16a00c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A010u; }
        if (ctx->pc != 0x16A010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A010u; }
        if (ctx->pc != 0x16A010u) { return; }
    }
    ctx->pc = 0x16A010u;
    // 0x16a010: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x16A010u;
    {
        const bool branch_taken_0x16a010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a010) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A018u;
label_16a018:
    // 0x16a018: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a01c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a020: 0xc06c4e0  jal         func_1B1380
    ctx->pc = 0x16A020u;
    SET_GPR_U32(ctx, 31, 0x16A028u);
    ctx->pc = 0x16A024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A020u;
            // 0x16a024: 0x2406ffc9  addiu       $a2, $zero, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967241));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1380u;
    if (runtime->hasFunction(0x1B1380u)) {
        auto targetFn = runtime->lookupFunction(0x1B1380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A028u; }
        if (ctx->pc != 0x16A028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_03_0x1b1380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A028u; }
        if (ctx->pc != 0x16A028u) { return; }
    }
    ctx->pc = 0x16A028u;
    // 0x16a028: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x16A028u;
    {
        const bool branch_taken_0x16a028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a028) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A030u;
label_16a030:
    // 0x16a030: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16a030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a034: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16a034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16a038: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x16A038u;
    SET_GPR_U32(ctx, 31, 0x16A040u);
    ctx->pc = 0x16A03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A038u;
            // 0x16a03c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A040u; }
        if (ctx->pc != 0x16A040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A040u; }
        if (ctx->pc != 0x16A040u) { return; }
    }
    ctx->pc = 0x16A040u;
    // 0x16a040: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16a040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a044: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16a044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16a048: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x16A048u;
    SET_GPR_U32(ctx, 31, 0x16A050u);
    ctx->pc = 0x16A04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A048u;
            // 0x16a04c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A050u; }
        if (ctx->pc != 0x16A050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A050u; }
        if (ctx->pc != 0x16A050u) { return; }
    }
    ctx->pc = 0x16A050u;
    // 0x16a050: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x16A050u;
    {
        const bool branch_taken_0x16a050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a050) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A058u;
label_16a058:
    // 0x16a058: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16a05c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16a05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16a060: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x16A060u;
    SET_GPR_U32(ctx, 31, 0x16A068u);
    ctx->pc = 0x16A064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A060u;
            // 0x16a064: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A068u; }
        if (ctx->pc != 0x16A068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A068u; }
        if (ctx->pc != 0x16A068u) { return; }
    }
    ctx->pc = 0x16A068u;
    // 0x16a068: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16a06c: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16a06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16a070: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x16A070u;
    SET_GPR_U32(ctx, 31, 0x16A078u);
    ctx->pc = 0x16A074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A070u;
            // 0x16a074: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A078u; }
        if (ctx->pc != 0x16A078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A078u; }
        if (ctx->pc != 0x16A078u) { return; }
    }
    ctx->pc = 0x16A078u;
    // 0x16a078: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x16A078u;
    {
        const bool branch_taken_0x16a078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a078) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A080u;
label_16a080:
    // 0x16a080: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16a080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a084: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16a084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16a088: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x16A088u;
    SET_GPR_U32(ctx, 31, 0x16A090u);
    ctx->pc = 0x16A08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A088u;
            // 0x16a08c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A090u; }
        if (ctx->pc != 0x16A090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A090u; }
        if (ctx->pc != 0x16A090u) { return; }
    }
    ctx->pc = 0x16A090u;
    // 0x16a090: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16a090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16a094: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16a094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a098: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x16A098u;
    SET_GPR_U32(ctx, 31, 0x16A0A0u);
    ctx->pc = 0x16A09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A098u;
            // 0x16a09c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A0A0u; }
        if (ctx->pc != 0x16A0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A0A0u; }
        if (ctx->pc != 0x16A0A0u) { return; }
    }
    ctx->pc = 0x16A0A0u;
    // 0x16a0a0: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x16A0A0u;
    {
        const bool branch_taken_0x16a0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a0a0) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A0A8u;
label_16a0a8:
    // 0x16a0a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0ac: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x16a0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x16a0b0: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x16A0B0u;
    SET_GPR_U32(ctx, 31, 0x16A0B8u);
    ctx->pc = 0x16A0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A0B0u;
            // 0x16a0b4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A0B8u; }
        if (ctx->pc != 0x16A0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A0B8u; }
        if (ctx->pc != 0x16A0B8u) { return; }
    }
    ctx->pc = 0x16A0B8u;
    // 0x16a0b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16a0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a0bc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x16a0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16a0c0: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x16A0C0u;
    SET_GPR_U32(ctx, 31, 0x16A0C8u);
    ctx->pc = 0x16A0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A0C0u;
            // 0x16a0c4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A0C8u; }
        if (ctx->pc != 0x16A0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A0C8u; }
        if (ctx->pc != 0x16A0C8u) { return; }
    }
    ctx->pc = 0x16A0C8u;
    // 0x16a0c8: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x16A0C8u;
    {
        const bool branch_taken_0x16a0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a0c8) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A0D0u;
label_16a0d0:
    // 0x16a0d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0d4: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x16a0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x16a0d8: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x16A0D8u;
    SET_GPR_U32(ctx, 31, 0x16A0E0u);
    ctx->pc = 0x16A0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A0D8u;
            // 0x16a0dc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A0E0u; }
        if (ctx->pc != 0x16A0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A0E0u; }
        if (ctx->pc != 0x16A0E0u) { return; }
    }
    ctx->pc = 0x16A0E0u;
    // 0x16a0e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0e4: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x16a0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x16a0e8: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x16A0E8u;
    SET_GPR_U32(ctx, 31, 0x16A0F0u);
    ctx->pc = 0x16A0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A0E8u;
            // 0x16a0ec: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A0F0u; }
        if (ctx->pc != 0x16A0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A0F0u; }
        if (ctx->pc != 0x16A0F0u) { return; }
    }
    ctx->pc = 0x16A0F0u;
    // 0x16a0f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a0f4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x16a0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x16a0f8: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x16A0F8u;
    SET_GPR_U32(ctx, 31, 0x16A100u);
    ctx->pc = 0x16A0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A0F8u;
            // 0x16a0fc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A100u; }
        if (ctx->pc != 0x16A100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A100u; }
        if (ctx->pc != 0x16A100u) { return; }
    }
    ctx->pc = 0x16A100u;
    // 0x16a100: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16a100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a104: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16a104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16a108: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x16A108u;
    SET_GPR_U32(ctx, 31, 0x16A110u);
    ctx->pc = 0x16A10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A108u;
            // 0x16a10c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A110u; }
        if (ctx->pc != 0x16A110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A110u; }
        if (ctx->pc != 0x16A110u) { return; }
    }
    ctx->pc = 0x16A110u;
    // 0x16a110: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x16A110u;
    {
        const bool branch_taken_0x16a110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a110) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A118u;
label_16a118:
    // 0x16a118: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a11c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a120: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x16A120u;
    SET_GPR_U32(ctx, 31, 0x16A128u);
    ctx->pc = 0x16A124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A120u;
            // 0x16a124: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A128u; }
        if (ctx->pc != 0x16A128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItemCareer_0x1df800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A128u; }
        if (ctx->pc != 0x16A128u) { return; }
    }
    ctx->pc = 0x16A128u;
    // 0x16a128: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x16A128u;
    {
        const bool branch_taken_0x16a128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a128) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A130u;
label_16a130:
    // 0x16a130: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a138: 0xc06c4e0  jal         func_1B1380
    ctx->pc = 0x16A138u;
    SET_GPR_U32(ctx, 31, 0x16A140u);
    ctx->pc = 0x16A13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A138u;
            // 0x16a13c: 0x2406ffc9  addiu       $a2, $zero, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967241));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1380u;
    if (runtime->hasFunction(0x1B1380u)) {
        auto targetFn = runtime->lookupFunction(0x1B1380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A140u; }
        if (ctx->pc != 0x16A140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_03_0x1b1380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A140u; }
        if (ctx->pc != 0x16A140u) { return; }
    }
    ctx->pc = 0x16A140u;
    // 0x16a140: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x16A140u;
    {
        const bool branch_taken_0x16a140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a140) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A148u;
label_16a148:
    // 0x16a148: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16a148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a14c: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16a14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16a150: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x16A150u;
    SET_GPR_U32(ctx, 31, 0x16A158u);
    ctx->pc = 0x16A154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A150u;
            // 0x16a154: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A158u; }
        if (ctx->pc != 0x16A158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A158u; }
        if (ctx->pc != 0x16A158u) { return; }
    }
    ctx->pc = 0x16A158u;
    // 0x16a158: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16a158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a15c: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16a15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16a160: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x16A160u;
    SET_GPR_U32(ctx, 31, 0x16A168u);
    ctx->pc = 0x16A164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A160u;
            // 0x16a164: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A168u; }
        if (ctx->pc != 0x16A168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A168u; }
        if (ctx->pc != 0x16A168u) { return; }
    }
    ctx->pc = 0x16A168u;
    // 0x16a168: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x16A168u;
    {
        const bool branch_taken_0x16a168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a168) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A170u;
label_16a170:
    // 0x16a170: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16a174: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16a174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16a178: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x16A178u;
    SET_GPR_U32(ctx, 31, 0x16A180u);
    ctx->pc = 0x16A17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A178u;
            // 0x16a17c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A180u; }
        if (ctx->pc != 0x16A180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A180u; }
        if (ctx->pc != 0x16A180u) { return; }
    }
    ctx->pc = 0x16A180u;
    // 0x16a180: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16a184: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16a184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16a188: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x16A188u;
    SET_GPR_U32(ctx, 31, 0x16A190u);
    ctx->pc = 0x16A18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A188u;
            // 0x16a18c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A190u; }
        if (ctx->pc != 0x16A190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A190u; }
        if (ctx->pc != 0x16A190u) { return; }
    }
    ctx->pc = 0x16A190u;
    // 0x16a190: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x16A190u;
    {
        const bool branch_taken_0x16a190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a190) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A198u;
label_16a198:
    // 0x16a198: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16a198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a19c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16a19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16a1a0: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x16A1A0u;
    SET_GPR_U32(ctx, 31, 0x16A1A8u);
    ctx->pc = 0x16A1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A1A0u;
            // 0x16a1a4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1A8u; }
        if (ctx->pc != 0x16A1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1A8u; }
        if (ctx->pc != 0x16A1A8u) { return; }
    }
    ctx->pc = 0x16A1A8u;
    // 0x16a1a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a1ac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16a1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16a1b0: 0xc06bc40  jal         func_1AF100
    ctx->pc = 0x16A1B0u;
    SET_GPR_U32(ctx, 31, 0x16A1B8u);
    ctx->pc = 0x16A1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A1B0u;
            // 0x16a1b4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF100u;
    if (runtime->hasFunction(0x1AF100u)) {
        auto targetFn = runtime->lookupFunction(0x1AF100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1B8u; }
        if (ctx->pc != 0x16A1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_01_0x1af100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1B8u; }
        if (ctx->pc != 0x16A1B8u) { return; }
    }
    ctx->pc = 0x16A1B8u;
    // 0x16a1b8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x16A1B8u;
    {
        const bool branch_taken_0x16a1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a1b8) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A1C0u;
label_16a1c0:
    // 0x16a1c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1c4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16a1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16a1c8: 0xc06c4e0  jal         func_1B1380
    ctx->pc = 0x16A1C8u;
    SET_GPR_U32(ctx, 31, 0x16A1D0u);
    ctx->pc = 0x16A1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A1C8u;
            // 0x16a1cc: 0x2406ffc9  addiu       $a2, $zero, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967241));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1380u;
    if (runtime->hasFunction(0x1B1380u)) {
        auto targetFn = runtime->lookupFunction(0x1B1380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1D0u; }
        if (ctx->pc != 0x16A1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_03_0x1b1380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1D0u; }
        if (ctx->pc != 0x16A1D0u) { return; }
    }
    ctx->pc = 0x16A1D0u;
    // 0x16a1d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1d4: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16a1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16a1d8: 0xc06c4e0  jal         func_1B1380
    ctx->pc = 0x16A1D8u;
    SET_GPR_U32(ctx, 31, 0x16A1E0u);
    ctx->pc = 0x16A1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A1D8u;
            // 0x16a1dc: 0x2406ffc9  addiu       $a2, $zero, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967241));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1380u;
    if (runtime->hasFunction(0x1B1380u)) {
        auto targetFn = runtime->lookupFunction(0x1B1380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1E0u; }
        if (ctx->pc != 0x16A1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_03_0x1b1380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1E0u; }
        if (ctx->pc != 0x16A1E0u) { return; }
    }
    ctx->pc = 0x16A1E0u;
    // 0x16a1e0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x16A1E0u;
    {
        const bool branch_taken_0x16a1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a1e0) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A1E8u;
label_16a1e8:
    // 0x16a1e8: 0xc05d004  jal         func_174010
    ctx->pc = 0x16A1E8u;
    SET_GPR_U32(ctx, 31, 0x16A1F0u);
    ctx->pc = 0x16A1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A1E8u;
            // 0x16a1ec: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1F0u; }
        if (ctx->pc != 0x16A1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1F0u; }
        if (ctx->pc != 0x16A1F0u) { return; }
    }
    ctx->pc = 0x16A1F0u;
    // 0x16a1f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1f8: 0xc06dc60  jal         func_1B7180
    ctx->pc = 0x16A1F8u;
    SET_GPR_U32(ctx, 31, 0x16A200u);
    ctx->pc = 0x16A1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A1F8u;
            // 0x16a1fc: 0x2406fdfd  addiu       $a2, $zero, -0x203 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966781));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7180u;
    if (runtime->hasFunction(0x1B7180u)) {
        auto targetFn = runtime->lookupFunction(0x1B7180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A200u; }
        if (ctx->pc != 0x16A200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStage7Boss_0x1b7180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A200u; }
        if (ctx->pc != 0x16A200u) { return; }
    }
    ctx->pc = 0x16A200u;
    // 0x16a200: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x16A200u;
    {
        const bool branch_taken_0x16a200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a200) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A208u;
label_16a208:
    // 0x16a208: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a20c: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x16a20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x16a210: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x16A210u;
    SET_GPR_U32(ctx, 31, 0x16A218u);
    ctx->pc = 0x16A214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A210u;
            // 0x16a214: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A218u; }
        if (ctx->pc != 0x16A218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A218u; }
        if (ctx->pc != 0x16A218u) { return; }
    }
    ctx->pc = 0x16A218u;
    // 0x16a218: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a21c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x16a21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x16a220: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x16A220u;
    SET_GPR_U32(ctx, 31, 0x16A228u);
    ctx->pc = 0x16A224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A220u;
            // 0x16a224: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A228u; }
        if (ctx->pc != 0x16A228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A228u; }
        if (ctx->pc != 0x16A228u) { return; }
    }
    ctx->pc = 0x16A228u;
    // 0x16a228: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x16A228u;
    {
        const bool branch_taken_0x16a228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a228) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A230u;
label_16a230:
    // 0x16a230: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16a230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a234: 0x2405ffdd  addiu       $a1, $zero, -0x23
    ctx->pc = 0x16a234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
    // 0x16a238: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x16A238u;
    SET_GPR_U32(ctx, 31, 0x16A240u);
    ctx->pc = 0x16A23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A238u;
            // 0x16a23c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A240u; }
        if (ctx->pc != 0x16A240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A240u; }
        if (ctx->pc != 0x16A240u) { return; }
    }
    ctx->pc = 0x16A240u;
    // 0x16a240: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16a240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a244: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x16a244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x16a248: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x16A248u;
    SET_GPR_U32(ctx, 31, 0x16A250u);
    ctx->pc = 0x16A24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A248u;
            // 0x16a24c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A250u; }
        if (ctx->pc != 0x16A250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A250u; }
        if (ctx->pc != 0x16A250u) { return; }
    }
    ctx->pc = 0x16A250u;
    // 0x16a250: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x16A250u;
    {
        const bool branch_taken_0x16a250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a250) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A258u;
label_16a258:
    // 0x16a258: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16a258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16a25c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a260: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x16A260u;
    SET_GPR_U32(ctx, 31, 0x16A268u);
    ctx->pc = 0x16A264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A260u;
            // 0x16a264: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A268u; }
        if (ctx->pc != 0x16A268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A268u; }
        if (ctx->pc != 0x16A268u) { return; }
    }
    ctx->pc = 0x16A268u;
    // 0x16a268: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16a268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a26c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16a26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16a270: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x16A270u;
    SET_GPR_U32(ctx, 31, 0x16A278u);
    ctx->pc = 0x16A274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A270u;
            // 0x16a274: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A278u; }
        if (ctx->pc != 0x16A278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A278u; }
        if (ctx->pc != 0x16A278u) { return; }
    }
    ctx->pc = 0x16A278u;
    // 0x16a278: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x16A278u;
    {
        const bool branch_taken_0x16a278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a278) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A280u;
label_16a280:
    // 0x16a280: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16a280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16a284: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16a284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16a288: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x16A288u;
    SET_GPR_U32(ctx, 31, 0x16A290u);
    ctx->pc = 0x16A28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A288u;
            // 0x16a28c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A290u; }
        if (ctx->pc != 0x16A290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A290u; }
        if (ctx->pc != 0x16A290u) { return; }
    }
    ctx->pc = 0x16A290u;
    // 0x16a290: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x16a290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16a294: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16a294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16a298: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x16A298u;
    SET_GPR_U32(ctx, 31, 0x16A2A0u);
    ctx->pc = 0x16A29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A298u;
            // 0x16a29c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2A0u; }
        if (ctx->pc != 0x16A2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2A0u; }
        if (ctx->pc != 0x16A2A0u) { return; }
    }
    ctx->pc = 0x16A2A0u;
    // 0x16a2a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x16A2A0u;
    {
        const bool branch_taken_0x16a2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a2a0) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A2A8u;
label_16a2a8:
    // 0x16a2a8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16a2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16a2ac: 0x2405ffdd  addiu       $a1, $zero, -0x23
    ctx->pc = 0x16a2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
    // 0x16a2b0: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x16A2B0u;
    SET_GPR_U32(ctx, 31, 0x16A2B8u);
    ctx->pc = 0x16A2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A2B0u;
            // 0x16a2b4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2B8u; }
        if (ctx->pc != 0x16A2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2B8u; }
        if (ctx->pc != 0x16A2B8u) { return; }
    }
    ctx->pc = 0x16A2B8u;
    // 0x16a2b8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x16a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16a2bc: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x16a2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x16a2c0: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x16A2C0u;
    SET_GPR_U32(ctx, 31, 0x16A2C8u);
    ctx->pc = 0x16A2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A2C0u;
            // 0x16a2c4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2C8u; }
        if (ctx->pc != 0x16A2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2C8u; }
        if (ctx->pc != 0x16A2C8u) { return; }
    }
    ctx->pc = 0x16A2C8u;
    // 0x16a2c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16A2C8u;
    {
        const bool branch_taken_0x16a2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a2c8) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A2D0u;
label_16a2d0:
    // 0x16a2d0: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16a2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16a2d4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16a2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16a2d8: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x16A2D8u;
    SET_GPR_U32(ctx, 31, 0x16A2E0u);
    ctx->pc = 0x16A2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A2D8u;
            // 0x16a2dc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2E0u; }
        if (ctx->pc != 0x16A2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2E0u; }
        if (ctx->pc != 0x16A2E0u) { return; }
    }
    ctx->pc = 0x16A2E0u;
    // 0x16a2e0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x16a2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16a2e4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16a2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16a2e8: 0xc06c008  jal         func_1B0020
    ctx->pc = 0x16A2E8u;
    SET_GPR_U32(ctx, 31, 0x16A2F0u);
    ctx->pc = 0x16A2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A2E8u;
            // 0x16a2ec: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0020u;
    if (runtime->hasFunction(0x1B0020u)) {
        auto targetFn = runtime->lookupFunction(0x1B0020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2F0u; }
        if (ctx->pc != 0x16A2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn7_02_0x1b0020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2F0u; }
        if (ctx->pc != 0x16A2F0u) { return; }
    }
    ctx->pc = 0x16A2F0u;
label_16a2f0:
    // 0x16a2f0: 0x2a011c21  slti        $at, $s0, 0x1C21
    ctx->pc = 0x16a2f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7201) ? 1 : 0);
    // 0x16a2f4: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x16A2F4u;
    {
        const bool branch_taken_0x16a2f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A2F4u;
            // 0x16a2f8: 0x2a011cb6  slti        $at, $s0, 0x1CB6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7350) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a2f4) {
            ctx->pc = 0x16A340u;
            goto label_16a340;
        }
    }
    ctx->pc = 0x16A2FCu;
    // 0x16a2fc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x16A2FCu;
    {
        const bool branch_taken_0x16a2fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A2FCu;
            // 0x16a300: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a2fc) {
            ctx->pc = 0x16A340u;
            goto label_16a340;
        }
    }
    ctx->pc = 0x16A304u;
    // 0x16a304: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x16a304u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16a308: 0x0  nop
    ctx->pc = 0x16a308u;
    // NOP
    // 0x16a30c: 0x0  nop
    ctx->pc = 0x16a30cu;
    // NOP
    // 0x16a310: 0x1810  mfhi        $v1
    ctx->pc = 0x16a310u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x16a314: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16A314u;
    {
        const bool branch_taken_0x16a314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a314) {
            ctx->pc = 0x16A340u;
            goto label_16a340;
        }
    }
    ctx->pc = 0x16A31Cu;
    // 0x16a31c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16a31cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a320: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x16a320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x16a324: 0xc05d080  jal         func_174200
    ctx->pc = 0x16A324u;
    SET_GPR_U32(ctx, 31, 0x16A32Cu);
    ctx->pc = 0x16A328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A324u;
            // 0x16a328: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A32Cu; }
        if (ctx->pc != 0x16A32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A32Cu; }
        if (ctx->pc != 0x16A32Cu) { return; }
    }
    ctx->pc = 0x16A32Cu;
    // 0x16a32c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a330: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x16a330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x16a334: 0xc065198  jal         func_194660
    ctx->pc = 0x16A334u;
    SET_GPR_U32(ctx, 31, 0x16A33Cu);
    ctx->pc = 0x16A338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A334u;
            // 0x16a338: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194660u;
    if (runtime->hasFunction(0x194660u)) {
        auto targetFn = runtime->lookupFunction(0x194660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A33Cu; }
        if (ctx->pc != 0x16A33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Laser_Big_Dammy_0x194660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A33Cu; }
        if (ctx->pc != 0x16A33Cu) { return; }
    }
    ctx->pc = 0x16A33Cu;
    // 0x16a33c: 0x0  nop
    ctx->pc = 0x16a33cu;
    // NOP
label_16a340:
    // 0x16a340: 0x2a011c85  slti        $at, $s0, 0x1C85
    ctx->pc = 0x16a340u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7301) ? 1 : 0);
    // 0x16a344: 0x14200026  bnez        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x16A344u;
    {
        const bool branch_taken_0x16a344 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A344u;
            // 0x16a348: 0x2a011d4c  slti        $at, $s0, 0x1D4C (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7500) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a344) {
            ctx->pc = 0x16A3E0u;
            goto label_16a3e0;
        }
    }
    ctx->pc = 0x16A34Cu;
    // 0x16a34c: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x16A34Cu;
    {
        const bool branch_taken_0x16a34c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A34Cu;
            // 0x16a350: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a34c) {
            ctx->pc = 0x16A3E0u;
            goto label_16a3e0;
        }
    }
    ctx->pc = 0x16A354u;
    // 0x16a354: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x16a354u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16a358: 0x0  nop
    ctx->pc = 0x16a358u;
    // NOP
    // 0x16a35c: 0x0  nop
    ctx->pc = 0x16a35cu;
    // NOP
    // 0x16a360: 0x1810  mfhi        $v1
    ctx->pc = 0x16a360u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x16a364: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x16A364u;
    {
        const bool branch_taken_0x16a364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a364) {
            ctx->pc = 0x16A3E0u;
            goto label_16a3e0;
        }
    }
    ctx->pc = 0x16A36Cu;
    // 0x16a36c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16a36cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a370: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x16a370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x16a374: 0xc05d080  jal         func_174200
    ctx->pc = 0x16A374u;
    SET_GPR_U32(ctx, 31, 0x16A37Cu);
    ctx->pc = 0x16A378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A374u;
            // 0x16a378: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A37Cu; }
        if (ctx->pc != 0x16A37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A37Cu; }
        if (ctx->pc != 0x16A37Cu) { return; }
    }
    ctx->pc = 0x16A37Cu;
    // 0x16a37c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a380: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x16a380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x16a384: 0xc065458  jal         func_195160
    ctx->pc = 0x16A384u;
    SET_GPR_U32(ctx, 31, 0x16A38Cu);
    ctx->pc = 0x16A388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A384u;
            // 0x16a388: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195160u;
    if (runtime->hasFunction(0x195160u)) {
        auto targetFn = runtime->lookupFunction(0x195160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A38Cu; }
        if (ctx->pc != 0x16A38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_Wave_0x195160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A38Cu; }
        if (ctx->pc != 0x16A38Cu) { return; }
    }
    ctx->pc = 0x16A38Cu;
    // 0x16a38c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a390: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x16a390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x16a394: 0xc065458  jal         func_195160
    ctx->pc = 0x16A394u;
    SET_GPR_U32(ctx, 31, 0x16A39Cu);
    ctx->pc = 0x16A398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A394u;
            // 0x16a398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195160u;
    if (runtime->hasFunction(0x195160u)) {
        auto targetFn = runtime->lookupFunction(0x195160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A39Cu; }
        if (ctx->pc != 0x16A39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_Wave_0x195160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A39Cu; }
        if (ctx->pc != 0x16A39Cu) { return; }
    }
    ctx->pc = 0x16A39Cu;
    // 0x16a39c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3a0: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x16a3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x16a3a4: 0xc065458  jal         func_195160
    ctx->pc = 0x16A3A4u;
    SET_GPR_U32(ctx, 31, 0x16A3ACu);
    ctx->pc = 0x16A3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A3A4u;
            // 0x16a3a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195160u;
    if (runtime->hasFunction(0x195160u)) {
        auto targetFn = runtime->lookupFunction(0x195160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A3ACu; }
        if (ctx->pc != 0x16A3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_Wave_0x195160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A3ACu; }
        if (ctx->pc != 0x16A3ACu) { return; }
    }
    ctx->pc = 0x16A3ACu;
    // 0x16a3ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3b0: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x16a3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x16a3b4: 0xc065458  jal         func_195160
    ctx->pc = 0x16A3B4u;
    SET_GPR_U32(ctx, 31, 0x16A3BCu);
    ctx->pc = 0x16A3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A3B4u;
            // 0x16a3b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195160u;
    if (runtime->hasFunction(0x195160u)) {
        auto targetFn = runtime->lookupFunction(0x195160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A3BCu; }
        if (ctx->pc != 0x16A3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_Wave_0x195160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A3BCu; }
        if (ctx->pc != 0x16A3BCu) { return; }
    }
    ctx->pc = 0x16A3BCu;
    // 0x16a3bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3c0: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x16a3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x16a3c4: 0xc065458  jal         func_195160
    ctx->pc = 0x16A3C4u;
    SET_GPR_U32(ctx, 31, 0x16A3CCu);
    ctx->pc = 0x16A3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A3C4u;
            // 0x16a3c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195160u;
    if (runtime->hasFunction(0x195160u)) {
        auto targetFn = runtime->lookupFunction(0x195160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A3CCu; }
        if (ctx->pc != 0x16A3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_Wave_0x195160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A3CCu; }
        if (ctx->pc != 0x16A3CCu) { return; }
    }
    ctx->pc = 0x16A3CCu;
    // 0x16a3cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3d0: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x16a3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x16a3d4: 0xc0651cc  jal         func_194730
    ctx->pc = 0x16A3D4u;
    SET_GPR_U32(ctx, 31, 0x16A3DCu);
    ctx->pc = 0x16A3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A3D4u;
            // 0x16a3d8: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194730u;
    if (runtime->hasFunction(0x194730u)) {
        auto targetFn = runtime->lookupFunction(0x194730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A3DCu; }
        if (ctx->pc != 0x16A3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Laser_Big_0x194730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A3DCu; }
        if (ctx->pc != 0x16A3DCu) { return; }
    }
    ctx->pc = 0x16A3DCu;
    // 0x16a3dc: 0x0  nop
    ctx->pc = 0x16a3dcu;
    // NOP
label_16a3e0:
    // 0x16a3e0: 0x2a012009  slti        $at, $s0, 0x2009
    ctx->pc = 0x16a3e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8201) ? 1 : 0);
    // 0x16a3e4: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x16A3E4u;
    {
        const bool branch_taken_0x16a3e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A3E4u;
            // 0x16a3e8: 0x2a01209e  slti        $at, $s0, 0x209E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8350) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a3e4) {
            ctx->pc = 0x16A428u;
            goto label_16a428;
        }
    }
    ctx->pc = 0x16A3ECu;
    // 0x16a3ec: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x16A3ECu;
    {
        const bool branch_taken_0x16a3ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A3ECu;
            // 0x16a3f0: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a3ec) {
            ctx->pc = 0x16A428u;
            goto label_16a428;
        }
    }
    ctx->pc = 0x16A3F4u;
    // 0x16a3f4: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x16a3f4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16a3f8: 0x0  nop
    ctx->pc = 0x16a3f8u;
    // NOP
    // 0x16a3fc: 0x0  nop
    ctx->pc = 0x16a3fcu;
    // NOP
    // 0x16a400: 0x1810  mfhi        $v1
    ctx->pc = 0x16a400u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x16a404: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16A404u;
    {
        const bool branch_taken_0x16a404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A404u;
            // 0x16a408: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a404) {
            ctx->pc = 0x16A428u;
            goto label_16a428;
        }
    }
    ctx->pc = 0x16A40Cu;
    // 0x16a40c: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x16a40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x16a410: 0xc065198  jal         func_194660
    ctx->pc = 0x16A410u;
    SET_GPR_U32(ctx, 31, 0x16A418u);
    ctx->pc = 0x16A414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A410u;
            // 0x16a414: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194660u;
    if (runtime->hasFunction(0x194660u)) {
        auto targetFn = runtime->lookupFunction(0x194660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A418u; }
        if (ctx->pc != 0x16A418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Laser_Big_Dammy_0x194660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A418u; }
        if (ctx->pc != 0x16A418u) { return; }
    }
    ctx->pc = 0x16A418u;
    // 0x16a418: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16a418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a41c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x16a41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x16a420: 0xc05d080  jal         func_174200
    ctx->pc = 0x16A420u;
    SET_GPR_U32(ctx, 31, 0x16A428u);
    ctx->pc = 0x16A424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A420u;
            // 0x16a424: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A428u; }
        if (ctx->pc != 0x16A428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A428u; }
        if (ctx->pc != 0x16A428u) { return; }
    }
    ctx->pc = 0x16A428u;
label_16a428:
    // 0x16a428: 0x2a01206d  slti        $at, $s0, 0x206D
    ctx->pc = 0x16a428u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8301) ? 1 : 0);
    // 0x16a42c: 0x14200026  bnez        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x16A42Cu;
    {
        const bool branch_taken_0x16a42c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A42Cu;
            // 0x16a430: 0x2a012134  slti        $at, $s0, 0x2134 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8500) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a42c) {
            ctx->pc = 0x16A4C8u;
            goto label_16a4c8;
        }
    }
    ctx->pc = 0x16A434u;
    // 0x16a434: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x16A434u;
    {
        const bool branch_taken_0x16a434 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A434u;
            // 0x16a438: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a434) {
            ctx->pc = 0x16A4C8u;
            goto label_16a4c8;
        }
    }
    ctx->pc = 0x16A43Cu;
    // 0x16a43c: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x16a43cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16a440: 0x0  nop
    ctx->pc = 0x16a440u;
    // NOP
    // 0x16a444: 0x0  nop
    ctx->pc = 0x16a444u;
    // NOP
    // 0x16a448: 0x1810  mfhi        $v1
    ctx->pc = 0x16a448u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x16a44c: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x16A44Cu;
    {
        const bool branch_taken_0x16a44c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a44c) {
            ctx->pc = 0x16A4C8u;
            goto label_16a4c8;
        }
    }
    ctx->pc = 0x16A454u;
    // 0x16a454: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16a454u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a458: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x16a458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x16a45c: 0xc05d080  jal         func_174200
    ctx->pc = 0x16A45Cu;
    SET_GPR_U32(ctx, 31, 0x16A464u);
    ctx->pc = 0x16A460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A45Cu;
            // 0x16a460: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A464u; }
        if (ctx->pc != 0x16A464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A464u; }
        if (ctx->pc != 0x16A464u) { return; }
    }
    ctx->pc = 0x16A464u;
    // 0x16a464: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a468: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x16a468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x16a46c: 0xc065458  jal         func_195160
    ctx->pc = 0x16A46Cu;
    SET_GPR_U32(ctx, 31, 0x16A474u);
    ctx->pc = 0x16A470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A46Cu;
            // 0x16a470: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195160u;
    if (runtime->hasFunction(0x195160u)) {
        auto targetFn = runtime->lookupFunction(0x195160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A474u; }
        if (ctx->pc != 0x16A474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_Wave_0x195160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A474u; }
        if (ctx->pc != 0x16A474u) { return; }
    }
    ctx->pc = 0x16A474u;
    // 0x16a474: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a478: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x16a478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x16a47c: 0xc065458  jal         func_195160
    ctx->pc = 0x16A47Cu;
    SET_GPR_U32(ctx, 31, 0x16A484u);
    ctx->pc = 0x16A480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A47Cu;
            // 0x16a480: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195160u;
    if (runtime->hasFunction(0x195160u)) {
        auto targetFn = runtime->lookupFunction(0x195160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A484u; }
        if (ctx->pc != 0x16A484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_Wave_0x195160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A484u; }
        if (ctx->pc != 0x16A484u) { return; }
    }
    ctx->pc = 0x16A484u;
    // 0x16a484: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a488: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x16a488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x16a48c: 0xc065458  jal         func_195160
    ctx->pc = 0x16A48Cu;
    SET_GPR_U32(ctx, 31, 0x16A494u);
    ctx->pc = 0x16A490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A48Cu;
            // 0x16a490: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195160u;
    if (runtime->hasFunction(0x195160u)) {
        auto targetFn = runtime->lookupFunction(0x195160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A494u; }
        if (ctx->pc != 0x16A494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_Wave_0x195160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A494u; }
        if (ctx->pc != 0x16A494u) { return; }
    }
    ctx->pc = 0x16A494u;
    // 0x16a494: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a498: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x16a498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x16a49c: 0xc065458  jal         func_195160
    ctx->pc = 0x16A49Cu;
    SET_GPR_U32(ctx, 31, 0x16A4A4u);
    ctx->pc = 0x16A4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A49Cu;
            // 0x16a4a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195160u;
    if (runtime->hasFunction(0x195160u)) {
        auto targetFn = runtime->lookupFunction(0x195160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A4A4u; }
        if (ctx->pc != 0x16A4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_Wave_0x195160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A4A4u; }
        if (ctx->pc != 0x16A4A4u) { return; }
    }
    ctx->pc = 0x16A4A4u;
    // 0x16a4a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a4a8: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x16a4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x16a4ac: 0xc065458  jal         func_195160
    ctx->pc = 0x16A4ACu;
    SET_GPR_U32(ctx, 31, 0x16A4B4u);
    ctx->pc = 0x16A4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A4ACu;
            // 0x16a4b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195160u;
    if (runtime->hasFunction(0x195160u)) {
        auto targetFn = runtime->lookupFunction(0x195160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A4B4u; }
        if (ctx->pc != 0x16A4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_Wave_0x195160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A4B4u; }
        if (ctx->pc != 0x16A4B4u) { return; }
    }
    ctx->pc = 0x16A4B4u;
    // 0x16a4b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a4b8: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x16a4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x16a4bc: 0xc0651cc  jal         func_194730
    ctx->pc = 0x16A4BCu;
    SET_GPR_U32(ctx, 31, 0x16A4C4u);
    ctx->pc = 0x16A4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A4BCu;
            // 0x16a4c0: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194730u;
    if (runtime->hasFunction(0x194730u)) {
        auto targetFn = runtime->lookupFunction(0x194730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A4C4u; }
        if (ctx->pc != 0x16A4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Laser_Big_0x194730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A4C4u; }
        if (ctx->pc != 0x16A4C4u) { return; }
    }
    ctx->pc = 0x16A4C4u;
    // 0x16a4c4: 0x0  nop
    ctx->pc = 0x16a4c4u;
    // NOP
label_16a4c8:
    // 0x16a4c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a4cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x16A4D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A4D0u;
            // 0x16a4d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169A90u: goto label_169a90;
            case 0x169AA8u: goto label_169aa8;
            case 0x169AC0u: goto label_169ac0;
            case 0x169AE8u: goto label_169ae8;
            case 0x169B10u: goto label_169b10;
            case 0x169B28u: goto label_169b28;
            case 0x169B50u: goto label_169b50;
            case 0x169B78u: goto label_169b78;
            case 0x169B90u: goto label_169b90;
            case 0x169BB8u: goto label_169bb8;
            case 0x169BE0u: goto label_169be0;
            case 0x169C08u: goto label_169c08;
            case 0x169C40u: goto label_169c40;
            case 0x169C88u: goto label_169c88;
            case 0x169CA0u: goto label_169ca0;
            case 0x169CB8u: goto label_169cb8;
            case 0x169CD0u: goto label_169cd0;
            case 0x169CE8u: goto label_169ce8;
            case 0x169D10u: goto label_169d10;
            case 0x169D28u: goto label_169d28;
            case 0x169D40u: goto label_169d40;
            case 0x169D58u: goto label_169d58;
            case 0x169D70u: goto label_169d70;
            case 0x169D98u: goto label_169d98;
            case 0x169DC0u: goto label_169dc0;
            case 0x169DD8u: goto label_169dd8;
            case 0x169E00u: goto label_169e00;
            case 0x169E28u: goto label_169e28;
            case 0x169E50u: goto label_169e50;
            case 0x169E68u: goto label_169e68;
            case 0x169E90u: goto label_169e90;
            case 0x169EA8u: goto label_169ea8;
            case 0x169ED0u: goto label_169ed0;
            case 0x169F18u: goto label_169f18;
            case 0x169F30u: goto label_169f30;
            case 0x169F58u: goto label_169f58;
            case 0x169F70u: goto label_169f70;
            case 0x169F88u: goto label_169f88;
            case 0x169FA0u: goto label_169fa0;
            case 0x169FB8u: goto label_169fb8;
            case 0x169FD0u: goto label_169fd0;
            case 0x169FE8u: goto label_169fe8;
            case 0x16A000u: goto label_16a000;
            case 0x16A018u: goto label_16a018;
            case 0x16A030u: goto label_16a030;
            case 0x16A058u: goto label_16a058;
            case 0x16A080u: goto label_16a080;
            case 0x16A0A8u: goto label_16a0a8;
            case 0x16A0D0u: goto label_16a0d0;
            case 0x16A118u: goto label_16a118;
            case 0x16A130u: goto label_16a130;
            case 0x16A148u: goto label_16a148;
            case 0x16A170u: goto label_16a170;
            case 0x16A198u: goto label_16a198;
            case 0x16A1C0u: goto label_16a1c0;
            case 0x16A1E8u: goto label_16a1e8;
            case 0x16A208u: goto label_16a208;
            case 0x16A230u: goto label_16a230;
            case 0x16A258u: goto label_16a258;
            case 0x16A280u: goto label_16a280;
            case 0x16A2A8u: goto label_16a2a8;
            case 0x16A2D0u: goto label_16a2d0;
            case 0x16A2F0u: goto label_16a2f0;
            case 0x16A340u: goto label_16a340;
            case 0x16A3E0u: goto label_16a3e0;
            case 0x16A428u: goto label_16a428;
            case 0x16A4C8u: goto label_16a4c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A4D8u;
}
