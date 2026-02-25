#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage1EnemyGenerate
// Address: 0x16d3f0 - 0x16dc1c
void Stage1EnemyGenerate_0x16d3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage1EnemyGenerate_0x16d3f0");
#endif

    ctx->pc = 0x16d3f0u;

    // 0x16d3f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16d3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d3f4: 0x24030e74  addiu       $v1, $zero, 0xE74
    ctx->pc = 0x16d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3700));
    // 0x16d3f8: 0x108301ff  beq         $a0, $v1, . + 4 + (0x1FF << 2)
    ctx->pc = 0x16D3F8u;
    {
        const bool branch_taken_0x16d3f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D3F8u;
            // 0x16d3fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3f8) {
            ctx->pc = 0x16DBF8u;
            goto label_16dbf8;
        }
    }
    ctx->pc = 0x16D400u;
    // 0x16d400: 0x24030c80  addiu       $v1, $zero, 0xC80
    ctx->pc = 0x16d400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3200));
    // 0x16d404: 0x108301f6  beq         $a0, $v1, . + 4 + (0x1F6 << 2)
    ctx->pc = 0x16D404u;
    {
        const bool branch_taken_0x16d404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D404u;
            // 0x16d408: 0x24030c1c  addiu       $v1, $zero, 0xC1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d404) {
            ctx->pc = 0x16DBE0u;
            goto label_16dbe0;
        }
    }
    ctx->pc = 0x16D40Cu;
    // 0x16d40c: 0x108301ee  beq         $a0, $v1, . + 4 + (0x1EE << 2)
    ctx->pc = 0x16D40Cu;
    {
        const bool branch_taken_0x16d40c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d40c) {
            ctx->pc = 0x16DBC8u;
            goto label_16dbc8;
        }
    }
    ctx->pc = 0x16D414u;
    // 0x16d414: 0x24030bb8  addiu       $v1, $zero, 0xBB8
    ctx->pc = 0x16d414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x16d418: 0x108301e5  beq         $a0, $v1, . + 4 + (0x1E5 << 2)
    ctx->pc = 0x16D418u;
    {
        const bool branch_taken_0x16d418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D418u;
            // 0x16d41c: 0x24030b54  addiu       $v1, $zero, 0xB54 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2900));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d418) {
            ctx->pc = 0x16DBB0u;
            goto label_16dbb0;
        }
    }
    ctx->pc = 0x16D420u;
    // 0x16d420: 0x108301dd  beq         $a0, $v1, . + 4 + (0x1DD << 2)
    ctx->pc = 0x16D420u;
    {
        const bool branch_taken_0x16d420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d420) {
            ctx->pc = 0x16DB98u;
            goto label_16db98;
        }
    }
    ctx->pc = 0x16D428u;
    // 0x16d428: 0x24030af0  addiu       $v1, $zero, 0xAF0
    ctx->pc = 0x16d428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2800));
    // 0x16d42c: 0x108301d4  beq         $a0, $v1, . + 4 + (0x1D4 << 2)
    ctx->pc = 0x16D42Cu;
    {
        const bool branch_taken_0x16d42c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D42Cu;
            // 0x16d430: 0x24030a8c  addiu       $v1, $zero, 0xA8C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d42c) {
            ctx->pc = 0x16DB80u;
            goto label_16db80;
        }
    }
    ctx->pc = 0x16D434u;
    // 0x16d434: 0x108301cc  beq         $a0, $v1, . + 4 + (0x1CC << 2)
    ctx->pc = 0x16D434u;
    {
        const bool branch_taken_0x16d434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d434) {
            ctx->pc = 0x16DB68u;
            goto label_16db68;
        }
    }
    ctx->pc = 0x16D43Cu;
    // 0x16d43c: 0x240308c0  addiu       $v1, $zero, 0x8C0
    ctx->pc = 0x16d43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2240));
    // 0x16d440: 0x108301c3  beq         $a0, $v1, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x16D440u;
    {
        const bool branch_taken_0x16d440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D440u;
            // 0x16d444: 0x240308b6  addiu       $v1, $zero, 0x8B6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2230));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d440) {
            ctx->pc = 0x16DB50u;
            goto label_16db50;
        }
    }
    ctx->pc = 0x16D448u;
    // 0x16d448: 0x108301b7  beq         $a0, $v1, . + 4 + (0x1B7 << 2)
    ctx->pc = 0x16D448u;
    {
        const bool branch_taken_0x16d448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d448) {
            ctx->pc = 0x16DB28u;
            goto label_16db28;
        }
    }
    ctx->pc = 0x16D450u;
    // 0x16d450: 0x240308a2  addiu       $v1, $zero, 0x8A2
    ctx->pc = 0x16d450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2210));
    // 0x16d454: 0x108301ae  beq         $a0, $v1, . + 4 + (0x1AE << 2)
    ctx->pc = 0x16D454u;
    {
        const bool branch_taken_0x16d454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D454u;
            // 0x16d458: 0x24030898  addiu       $v1, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d454) {
            ctx->pc = 0x16DB10u;
            goto label_16db10;
        }
    }
    ctx->pc = 0x16D45Cu;
    // 0x16d45c: 0x108301a2  beq         $a0, $v1, . + 4 + (0x1A2 << 2)
    ctx->pc = 0x16D45Cu;
    {
        const bool branch_taken_0x16d45c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d45c) {
            ctx->pc = 0x16DAE8u;
            goto label_16dae8;
        }
    }
    ctx->pc = 0x16D464u;
    // 0x16d464: 0x24030820  addiu       $v1, $zero, 0x820
    ctx->pc = 0x16d464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2080));
    // 0x16d468: 0x10830199  beq         $a0, $v1, . + 4 + (0x199 << 2)
    ctx->pc = 0x16D468u;
    {
        const bool branch_taken_0x16d468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D468u;
            // 0x16d46c: 0x240307f8  addiu       $v1, $zero, 0x7F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d468) {
            ctx->pc = 0x16DAD0u;
            goto label_16dad0;
        }
    }
    ctx->pc = 0x16D470u;
    // 0x16d470: 0x10830191  beq         $a0, $v1, . + 4 + (0x191 << 2)
    ctx->pc = 0x16D470u;
    {
        const bool branch_taken_0x16d470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d470) {
            ctx->pc = 0x16DAB8u;
            goto label_16dab8;
        }
    }
    ctx->pc = 0x16D478u;
    // 0x16d478: 0x240307e4  addiu       $v1, $zero, 0x7E4
    ctx->pc = 0x16d478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2020));
    // 0x16d47c: 0x10830188  beq         $a0, $v1, . + 4 + (0x188 << 2)
    ctx->pc = 0x16D47Cu;
    {
        const bool branch_taken_0x16d47c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D47Cu;
            // 0x16d480: 0x240307d0  addiu       $v1, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d47c) {
            ctx->pc = 0x16DAA0u;
            goto label_16daa0;
        }
    }
    ctx->pc = 0x16D484u;
    // 0x16d484: 0x10830180  beq         $a0, $v1, . + 4 + (0x180 << 2)
    ctx->pc = 0x16D484u;
    {
        const bool branch_taken_0x16d484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d484) {
            ctx->pc = 0x16DA88u;
            goto label_16da88;
        }
    }
    ctx->pc = 0x16D48Cu;
    // 0x16d48c: 0x240307c6  addiu       $v1, $zero, 0x7C6
    ctx->pc = 0x16d48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1990));
    // 0x16d490: 0x10830177  beq         $a0, $v1, . + 4 + (0x177 << 2)
    ctx->pc = 0x16D490u;
    {
        const bool branch_taken_0x16d490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D490u;
            // 0x16d494: 0x240307bc  addiu       $v1, $zero, 0x7BC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1980));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d490) {
            ctx->pc = 0x16DA70u;
            goto label_16da70;
        }
    }
    ctx->pc = 0x16D498u;
    // 0x16d498: 0x1083016f  beq         $a0, $v1, . + 4 + (0x16F << 2)
    ctx->pc = 0x16D498u;
    {
        const bool branch_taken_0x16d498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d498) {
            ctx->pc = 0x16DA58u;
            goto label_16da58;
        }
    }
    ctx->pc = 0x16D4A0u;
    // 0x16d4a0: 0x240307b2  addiu       $v1, $zero, 0x7B2
    ctx->pc = 0x16d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1970));
    // 0x16d4a4: 0x10830166  beq         $a0, $v1, . + 4 + (0x166 << 2)
    ctx->pc = 0x16D4A4u;
    {
        const bool branch_taken_0x16d4a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D4A4u;
            // 0x16d4a8: 0x240307a8  addiu       $v1, $zero, 0x7A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d4a4) {
            ctx->pc = 0x16DA40u;
            goto label_16da40;
        }
    }
    ctx->pc = 0x16D4ACu;
    // 0x16d4ac: 0x1083015e  beq         $a0, $v1, . + 4 + (0x15E << 2)
    ctx->pc = 0x16D4ACu;
    {
        const bool branch_taken_0x16d4ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d4ac) {
            ctx->pc = 0x16DA28u;
            goto label_16da28;
        }
    }
    ctx->pc = 0x16D4B4u;
    // 0x16d4b4: 0x24030708  addiu       $v1, $zero, 0x708
    ctx->pc = 0x16d4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
    // 0x16d4b8: 0x10830155  beq         $a0, $v1, . + 4 + (0x155 << 2)
    ctx->pc = 0x16D4B8u;
    {
        const bool branch_taken_0x16d4b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D4B8u;
            // 0x16d4bc: 0x2403064a  addiu       $v1, $zero, 0x64A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1610));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d4b8) {
            ctx->pc = 0x16DA10u;
            goto label_16da10;
        }
    }
    ctx->pc = 0x16D4C0u;
    // 0x16d4c0: 0x1083014d  beq         $a0, $v1, . + 4 + (0x14D << 2)
    ctx->pc = 0x16D4C0u;
    {
        const bool branch_taken_0x16d4c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d4c0) {
            ctx->pc = 0x16D9F8u;
            goto label_16d9f8;
        }
    }
    ctx->pc = 0x16D4C8u;
    // 0x16d4c8: 0x24030640  addiu       $v1, $zero, 0x640
    ctx->pc = 0x16d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
    // 0x16d4cc: 0x10830138  beq         $a0, $v1, . + 4 + (0x138 << 2)
    ctx->pc = 0x16D4CCu;
    {
        const bool branch_taken_0x16d4cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D4CCu;
            // 0x16d4d0: 0x24030618  addiu       $v1, $zero, 0x618 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d4cc) {
            ctx->pc = 0x16D9B0u;
            goto label_16d9b0;
        }
    }
    ctx->pc = 0x16D4D4u;
    // 0x16d4d4: 0x1083012c  beq         $a0, $v1, . + 4 + (0x12C << 2)
    ctx->pc = 0x16D4D4u;
    {
        const bool branch_taken_0x16d4d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d4d4) {
            ctx->pc = 0x16D988u;
            goto label_16d988;
        }
    }
    ctx->pc = 0x16D4DCu;
    // 0x16d4dc: 0x240305fa  addiu       $v1, $zero, 0x5FA
    ctx->pc = 0x16d4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1530));
    // 0x16d4e0: 0x1083011f  beq         $a0, $v1, . + 4 + (0x11F << 2)
    ctx->pc = 0x16D4E0u;
    {
        const bool branch_taken_0x16d4e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D4E0u;
            // 0x16d4e4: 0x240305dc  addiu       $v1, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d4e0) {
            ctx->pc = 0x16D960u;
            goto label_16d960;
        }
    }
    ctx->pc = 0x16D4E8u;
    // 0x16d4e8: 0x10830113  beq         $a0, $v1, . + 4 + (0x113 << 2)
    ctx->pc = 0x16D4E8u;
    {
        const bool branch_taken_0x16d4e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d4e8) {
            ctx->pc = 0x16D938u;
            goto label_16d938;
        }
    }
    ctx->pc = 0x16D4F0u;
    // 0x16d4f0: 0x240305b4  addiu       $v1, $zero, 0x5B4
    ctx->pc = 0x16d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1460));
    // 0x16d4f4: 0x10830106  beq         $a0, $v1, . + 4 + (0x106 << 2)
    ctx->pc = 0x16D4F4u;
    {
        const bool branch_taken_0x16d4f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D4F4u;
            // 0x16d4f8: 0x24030596  addiu       $v1, $zero, 0x596 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1430));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d4f4) {
            ctx->pc = 0x16D910u;
            goto label_16d910;
        }
    }
    ctx->pc = 0x16D4FCu;
    // 0x16d4fc: 0x108300fa  beq         $a0, $v1, . + 4 + (0xFA << 2)
    ctx->pc = 0x16D4FCu;
    {
        const bool branch_taken_0x16d4fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d4fc) {
            ctx->pc = 0x16D8E8u;
            goto label_16d8e8;
        }
    }
    ctx->pc = 0x16D504u;
    // 0x16d504: 0x24030578  addiu       $v1, $zero, 0x578
    ctx->pc = 0x16d504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
    // 0x16d508: 0x108300ed  beq         $a0, $v1, . + 4 + (0xED << 2)
    ctx->pc = 0x16D508u;
    {
        const bool branch_taken_0x16d508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D508u;
            // 0x16d50c: 0x24030550  addiu       $v1, $zero, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d508) {
            ctx->pc = 0x16D8C0u;
            goto label_16d8c0;
        }
    }
    ctx->pc = 0x16D510u;
    // 0x16d510: 0x108300e1  beq         $a0, $v1, . + 4 + (0xE1 << 2)
    ctx->pc = 0x16D510u;
    {
        const bool branch_taken_0x16d510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d510) {
            ctx->pc = 0x16D898u;
            goto label_16d898;
        }
    }
    ctx->pc = 0x16D518u;
    // 0x16d518: 0x24030532  addiu       $v1, $zero, 0x532
    ctx->pc = 0x16d518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1330));
    // 0x16d51c: 0x108300d4  beq         $a0, $v1, . + 4 + (0xD4 << 2)
    ctx->pc = 0x16D51Cu;
    {
        const bool branch_taken_0x16d51c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D51Cu;
            // 0x16d520: 0x24030514  addiu       $v1, $zero, 0x514 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d51c) {
            ctx->pc = 0x16D870u;
            goto label_16d870;
        }
    }
    ctx->pc = 0x16D524u;
    // 0x16d524: 0x108300c8  beq         $a0, $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x16D524u;
    {
        const bool branch_taken_0x16d524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d524) {
            ctx->pc = 0x16D848u;
            goto label_16d848;
        }
    }
    ctx->pc = 0x16D52Cu;
    // 0x16d52c: 0x240304c4  addiu       $v1, $zero, 0x4C4
    ctx->pc = 0x16d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1220));
    // 0x16d530: 0x108300bf  beq         $a0, $v1, . + 4 + (0xBF << 2)
    ctx->pc = 0x16D530u;
    {
        const bool branch_taken_0x16d530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D530u;
            // 0x16d534: 0x240304b0  addiu       $v1, $zero, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d530) {
            ctx->pc = 0x16D830u;
            goto label_16d830;
        }
    }
    ctx->pc = 0x16D538u;
    // 0x16d538: 0x108300b7  beq         $a0, $v1, . + 4 + (0xB7 << 2)
    ctx->pc = 0x16D538u;
    {
        const bool branch_taken_0x16d538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d538) {
            ctx->pc = 0x16D818u;
            goto label_16d818;
        }
    }
    ctx->pc = 0x16D540u;
    // 0x16d540: 0x2403049c  addiu       $v1, $zero, 0x49C
    ctx->pc = 0x16d540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1180));
    // 0x16d544: 0x108300ae  beq         $a0, $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x16D544u;
    {
        const bool branch_taken_0x16d544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D544u;
            // 0x16d548: 0x24030488  addiu       $v1, $zero, 0x488 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d544) {
            ctx->pc = 0x16D800u;
            goto label_16d800;
        }
    }
    ctx->pc = 0x16D54Cu;
    // 0x16d54c: 0x108300a6  beq         $a0, $v1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x16D54Cu;
    {
        const bool branch_taken_0x16d54c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d54c) {
            ctx->pc = 0x16D7E8u;
            goto label_16d7e8;
        }
    }
    ctx->pc = 0x16D554u;
    // 0x16d554: 0x24030474  addiu       $v1, $zero, 0x474
    ctx->pc = 0x16d554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1140));
    // 0x16d558: 0x1083009d  beq         $a0, $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x16D558u;
    {
        const bool branch_taken_0x16d558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D558u;
            // 0x16d55c: 0x24030460  addiu       $v1, $zero, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d558) {
            ctx->pc = 0x16D7D0u;
            goto label_16d7d0;
        }
    }
    ctx->pc = 0x16D560u;
    // 0x16d560: 0x10830095  beq         $a0, $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x16D560u;
    {
        const bool branch_taken_0x16d560 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d560) {
            ctx->pc = 0x16D7B8u;
            goto label_16d7b8;
        }
    }
    ctx->pc = 0x16D568u;
    // 0x16d568: 0x2403044c  addiu       $v1, $zero, 0x44C
    ctx->pc = 0x16d568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
    // 0x16d56c: 0x1083008c  beq         $a0, $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x16D56Cu;
    {
        const bool branch_taken_0x16d56c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D56Cu;
            // 0x16d570: 0x24030410  addiu       $v1, $zero, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d56c) {
            ctx->pc = 0x16D7A0u;
            goto label_16d7a0;
        }
    }
    ctx->pc = 0x16D574u;
    // 0x16d574: 0x10830084  beq         $a0, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x16D574u;
    {
        const bool branch_taken_0x16d574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d574) {
            ctx->pc = 0x16D788u;
            goto label_16d788;
        }
    }
    ctx->pc = 0x16D57Cu;
    // 0x16d57c: 0x240303fc  addiu       $v1, $zero, 0x3FC
    ctx->pc = 0x16d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
    // 0x16d580: 0x1083007b  beq         $a0, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x16D580u;
    {
        const bool branch_taken_0x16d580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D580u;
            // 0x16d584: 0x240303e8  addiu       $v1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d580) {
            ctx->pc = 0x16D770u;
            goto label_16d770;
        }
    }
    ctx->pc = 0x16D588u;
    // 0x16d588: 0x10830073  beq         $a0, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x16D588u;
    {
        const bool branch_taken_0x16d588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d588) {
            ctx->pc = 0x16D758u;
            goto label_16d758;
        }
    }
    ctx->pc = 0x16D590u;
    // 0x16d590: 0x240303d4  addiu       $v1, $zero, 0x3D4
    ctx->pc = 0x16d590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 980));
    // 0x16d594: 0x1083006a  beq         $a0, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x16D594u;
    {
        const bool branch_taken_0x16d594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D594u;
            // 0x16d598: 0x240303c0  addiu       $v1, $zero, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d594) {
            ctx->pc = 0x16D740u;
            goto label_16d740;
        }
    }
    ctx->pc = 0x16D59Cu;
    // 0x16d59c: 0x10830062  beq         $a0, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x16D59Cu;
    {
        const bool branch_taken_0x16d59c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d59c) {
            ctx->pc = 0x16D728u;
            goto label_16d728;
        }
    }
    ctx->pc = 0x16D5A4u;
    // 0x16d5a4: 0x240303ac  addiu       $v1, $zero, 0x3AC
    ctx->pc = 0x16d5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 940));
    // 0x16d5a8: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x16D5A8u;
    {
        const bool branch_taken_0x16d5a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D5A8u;
            // 0x16d5ac: 0x24030398  addiu       $v1, $zero, 0x398 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d5a8) {
            ctx->pc = 0x16D710u;
            goto label_16d710;
        }
    }
    ctx->pc = 0x16D5B0u;
    // 0x16d5b0: 0x10830051  beq         $a0, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x16D5B0u;
    {
        const bool branch_taken_0x16d5b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d5b0) {
            ctx->pc = 0x16D6F8u;
            goto label_16d6f8;
        }
    }
    ctx->pc = 0x16D5B8u;
    // 0x16d5b8: 0x24030384  addiu       $v1, $zero, 0x384
    ctx->pc = 0x16d5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
    // 0x16d5bc: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x16D5BCu;
    {
        const bool branch_taken_0x16d5bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D5BCu;
            // 0x16d5c0: 0x2403030c  addiu       $v1, $zero, 0x30C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 780));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d5bc) {
            ctx->pc = 0x16D6E0u;
            goto label_16d6e0;
        }
    }
    ctx->pc = 0x16D5C4u;
    // 0x16d5c4: 0x10830040  beq         $a0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x16D5C4u;
    {
        const bool branch_taken_0x16d5c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d5c4) {
            ctx->pc = 0x16D6C8u;
            goto label_16d6c8;
        }
    }
    ctx->pc = 0x16D5CCu;
    // 0x16d5cc: 0x240302e4  addiu       $v1, $zero, 0x2E4
    ctx->pc = 0x16d5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 740));
    // 0x16d5d0: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x16D5D0u;
    {
        const bool branch_taken_0x16d5d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D5D0u;
            // 0x16d5d4: 0x240302d0  addiu       $v1, $zero, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d5d0) {
            ctx->pc = 0x16D6B0u;
            goto label_16d6b0;
        }
    }
    ctx->pc = 0x16D5D8u;
    // 0x16d5d8: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x16D5D8u;
    {
        const bool branch_taken_0x16d5d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d5d8) {
            ctx->pc = 0x16D698u;
            goto label_16d698;
        }
    }
    ctx->pc = 0x16D5E0u;
    // 0x16d5e0: 0x240302bc  addiu       $v1, $zero, 0x2BC
    ctx->pc = 0x16d5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
    // 0x16d5e4: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x16D5E4u;
    {
        const bool branch_taken_0x16d5e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D5E4u;
            // 0x16d5e8: 0x240301c2  addiu       $v1, $zero, 0x1C2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d5e4) {
            ctx->pc = 0x16D680u;
            goto label_16d680;
        }
    }
    ctx->pc = 0x16D5ECu;
    // 0x16d5ec: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x16D5ECu;
    {
        const bool branch_taken_0x16d5ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d5ec) {
            ctx->pc = 0x16D670u;
            goto label_16d670;
        }
    }
    ctx->pc = 0x16D5F4u;
    // 0x16d5f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16d5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d5f8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D5F8u;
    {
        const bool branch_taken_0x16d5f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d5f8) {
            ctx->pc = 0x16D608u;
            goto label_16d608;
        }
    }
    ctx->pc = 0x16D600u;
    // 0x16d600: 0x10000183  b           . + 4 + (0x183 << 2)
    ctx->pc = 0x16D600u;
    {
        const bool branch_taken_0x16d600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d600) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D608u;
label_16d608:
    // 0x16d608: 0xc056054  jal         func_158150
    ctx->pc = 0x16D608u;
    SET_GPR_U32(ctx, 31, 0x16D610u);
    ctx->pc = 0x158150u;
    if (runtime->hasFunction(0x158150u)) {
        auto targetFn = runtime->lookupFunction(0x158150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D610u; }
        if (ctx->pc != 0x16D610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuNo_0x158150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D610u; }
        if (ctx->pc != 0x16D610u) { return; }
    }
    ctx->pc = 0x16D610u;
    // 0x16d610: 0xc05d004  jal         func_174010
    ctx->pc = 0x16D610u;
    SET_GPR_U32(ctx, 31, 0x16D618u);
    ctx->pc = 0x16D614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D610u;
            // 0x16d614: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D618u; }
        if (ctx->pc != 0x16D618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D618u; }
        if (ctx->pc != 0x16D618u) { return; }
    }
    ctx->pc = 0x16D618u;
    // 0x16d618: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16d618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16d61c: 0x8c233530  lw          $v1, 0x3530($at)
    ctx->pc = 0x16d61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x16d620: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D620u;
    {
        const bool branch_taken_0x16d620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d620) {
            ctx->pc = 0x16D640u;
            goto label_16d640;
        }
    }
    ctx->pc = 0x16D628u;
    // 0x16d628: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x16d628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x16d62c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16d62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16d630: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x16d630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16d634: 0xc05d080  jal         func_174200
    ctx->pc = 0x16D634u;
    SET_GPR_U32(ctx, 31, 0x16D63Cu);
    ctx->pc = 0x16D638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D634u;
            // 0x16d638: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D63Cu; }
        if (ctx->pc != 0x16D63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D63Cu; }
        if (ctx->pc != 0x16D63Cu) { return; }
    }
    ctx->pc = 0x16D63Cu;
    // 0x16d63c: 0x0  nop
    ctx->pc = 0x16d63cu;
    // NOP
label_16d640:
    // 0x16d640: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16d640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16d644: 0x8c233534  lw          $v1, 0x3534($at)
    ctx->pc = 0x16d644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x16d648: 0x10600171  beqz        $v1, . + 4 + (0x171 << 2)
    ctx->pc = 0x16D648u;
    {
        const bool branch_taken_0x16d648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d648) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D650u;
    // 0x16d650: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x16d650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x16d654: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16d654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16d658: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x16d658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16d65c: 0xc05d080  jal         func_174200
    ctx->pc = 0x16D65Cu;
    SET_GPR_U32(ctx, 31, 0x16D664u);
    ctx->pc = 0x16D660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D65Cu;
            // 0x16d660: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D664u; }
        if (ctx->pc != 0x16D664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D664u; }
        if (ctx->pc != 0x16D664u) { return; }
    }
    ctx->pc = 0x16D664u;
    // 0x16d664: 0x1000016a  b           . + 4 + (0x16A << 2)
    ctx->pc = 0x16D664u;
    {
        const bool branch_taken_0x16d664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d664) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D66Cu;
    // 0x16d66c: 0x0  nop
    ctx->pc = 0x16d66cu;
    // NOP
label_16d670:
    // 0x16d670: 0xc056050  jal         func_158140
    ctx->pc = 0x16D670u;
    SET_GPR_U32(ctx, 31, 0x16D678u);
    ctx->pc = 0x158140u;
    if (runtime->hasFunction(0x158140u)) {
        auto targetFn = runtime->lookupFunction(0x158140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D678u; }
        if (ctx->pc != 0x16D678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuOk_0x158140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D678u; }
        if (ctx->pc != 0x16D678u) { return; }
    }
    ctx->pc = 0x16D678u;
    // 0x16d678: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x16D678u;
    {
        const bool branch_taken_0x16d678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d678) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D680u;
label_16d680:
    // 0x16d680: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16d680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16d684: 0x2405fff8  addiu       $a1, $zero, -0x8
    ctx->pc = 0x16d684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x16d688: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D688u;
    SET_GPR_U32(ctx, 31, 0x16D690u);
    ctx->pc = 0x16D68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D688u;
            // 0x16d68c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D690u; }
        if (ctx->pc != 0x16D690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D690u; }
        if (ctx->pc != 0x16D690u) { return; }
    }
    ctx->pc = 0x16D690u;
    // 0x16d690: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x16D690u;
    {
        const bool branch_taken_0x16d690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d690) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D698u;
label_16d698:
    // 0x16d698: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16d698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16d69c: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16d69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16d6a0: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D6A0u;
    SET_GPR_U32(ctx, 31, 0x16D6A8u);
    ctx->pc = 0x16D6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D6A0u;
            // 0x16d6a4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6A8u; }
        if (ctx->pc != 0x16D6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6A8u; }
        if (ctx->pc != 0x16D6A8u) { return; }
    }
    ctx->pc = 0x16D6A8u;
    // 0x16d6a8: 0x10000159  b           . + 4 + (0x159 << 2)
    ctx->pc = 0x16D6A8u;
    {
        const bool branch_taken_0x16d6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d6a8) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D6B0u;
label_16d6b0:
    // 0x16d6b0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16d6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16d6b4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x16d6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16d6b8: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D6B8u;
    SET_GPR_U32(ctx, 31, 0x16D6C0u);
    ctx->pc = 0x16D6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D6B8u;
            // 0x16d6bc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6C0u; }
        if (ctx->pc != 0x16D6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6C0u; }
        if (ctx->pc != 0x16D6C0u) { return; }
    }
    ctx->pc = 0x16D6C0u;
    // 0x16d6c0: 0x10000153  b           . + 4 + (0x153 << 2)
    ctx->pc = 0x16D6C0u;
    {
        const bool branch_taken_0x16d6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d6c0) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D6C8u;
label_16d6c8:
    // 0x16d6c8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16d6cc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16d6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16d6d0: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D6D0u;
    SET_GPR_U32(ctx, 31, 0x16D6D8u);
    ctx->pc = 0x16D6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D6D0u;
            // 0x16d6d4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6D8u; }
        if (ctx->pc != 0x16D6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6D8u; }
        if (ctx->pc != 0x16D6D8u) { return; }
    }
    ctx->pc = 0x16D6D8u;
    // 0x16d6d8: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x16D6D8u;
    {
        const bool branch_taken_0x16d6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d6d8) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D6E0u;
label_16d6e0:
    // 0x16d6e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d6e4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x16d6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16d6e8: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D6E8u;
    SET_GPR_U32(ctx, 31, 0x16D6F0u);
    ctx->pc = 0x16D6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D6E8u;
            // 0x16d6ec: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6F0u; }
        if (ctx->pc != 0x16D6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6F0u; }
        if (ctx->pc != 0x16D6F0u) { return; }
    }
    ctx->pc = 0x16D6F0u;
    // 0x16d6f0: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x16D6F0u;
    {
        const bool branch_taken_0x16d6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d6f0) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D6F8u;
label_16d6f8:
    // 0x16d6f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d6fc: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x16d6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x16d700: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D700u;
    SET_GPR_U32(ctx, 31, 0x16D708u);
    ctx->pc = 0x16D704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D700u;
            // 0x16d704: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D708u; }
        if (ctx->pc != 0x16D708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D708u; }
        if (ctx->pc != 0x16D708u) { return; }
    }
    ctx->pc = 0x16D708u;
    // 0x16d708: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x16D708u;
    {
        const bool branch_taken_0x16d708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d708) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D710u;
label_16d710:
    // 0x16d710: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d714: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x16d714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16d718: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D718u;
    SET_GPR_U32(ctx, 31, 0x16D720u);
    ctx->pc = 0x16D71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D718u;
            // 0x16d71c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D720u; }
        if (ctx->pc != 0x16D720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D720u; }
        if (ctx->pc != 0x16D720u) { return; }
    }
    ctx->pc = 0x16D720u;
    // 0x16d720: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x16D720u;
    {
        const bool branch_taken_0x16d720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d720) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D728u;
label_16d728:
    // 0x16d728: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d72c: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x16d72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x16d730: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D730u;
    SET_GPR_U32(ctx, 31, 0x16D738u);
    ctx->pc = 0x16D734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D730u;
            // 0x16d734: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D738u; }
        if (ctx->pc != 0x16D738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D738u; }
        if (ctx->pc != 0x16D738u) { return; }
    }
    ctx->pc = 0x16D738u;
    // 0x16d738: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x16D738u;
    {
        const bool branch_taken_0x16d738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d738) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D740u;
label_16d740:
    // 0x16d740: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d744: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x16d744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16d748: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D748u;
    SET_GPR_U32(ctx, 31, 0x16D750u);
    ctx->pc = 0x16D74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D748u;
            // 0x16d74c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D750u; }
        if (ctx->pc != 0x16D750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D750u; }
        if (ctx->pc != 0x16D750u) { return; }
    }
    ctx->pc = 0x16D750u;
    // 0x16d750: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x16D750u;
    {
        const bool branch_taken_0x16d750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d750) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D758u;
label_16d758:
    // 0x16d758: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d75c: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x16d75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x16d760: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D760u;
    SET_GPR_U32(ctx, 31, 0x16D768u);
    ctx->pc = 0x16D764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D760u;
            // 0x16d764: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D768u; }
        if (ctx->pc != 0x16D768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D768u; }
        if (ctx->pc != 0x16D768u) { return; }
    }
    ctx->pc = 0x16D768u;
    // 0x16d768: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x16D768u;
    {
        const bool branch_taken_0x16d768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d768) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D770u;
label_16d770:
    // 0x16d770: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d774: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x16d774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16d778: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D778u;
    SET_GPR_U32(ctx, 31, 0x16D780u);
    ctx->pc = 0x16D77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D778u;
            // 0x16d77c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D780u; }
        if (ctx->pc != 0x16D780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D780u; }
        if (ctx->pc != 0x16D780u) { return; }
    }
    ctx->pc = 0x16D780u;
    // 0x16d780: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x16D780u;
    {
        const bool branch_taken_0x16d780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d780) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D788u;
label_16d788:
    // 0x16d788: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d78c: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x16d78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x16d790: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D790u;
    SET_GPR_U32(ctx, 31, 0x16D798u);
    ctx->pc = 0x16D794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D790u;
            // 0x16d794: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D798u; }
        if (ctx->pc != 0x16D798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D798u; }
        if (ctx->pc != 0x16D798u) { return; }
    }
    ctx->pc = 0x16D798u;
    // 0x16d798: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x16D798u;
    {
        const bool branch_taken_0x16d798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d798) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D7A0u;
label_16d7a0:
    // 0x16d7a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16d7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16d7a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d7a8: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D7A8u;
    SET_GPR_U32(ctx, 31, 0x16D7B0u);
    ctx->pc = 0x16D7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D7A8u;
            // 0x16d7ac: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D7B0u; }
        if (ctx->pc != 0x16D7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D7B0u; }
        if (ctx->pc != 0x16D7B0u) { return; }
    }
    ctx->pc = 0x16D7B0u;
    // 0x16d7b0: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x16D7B0u;
    {
        const bool branch_taken_0x16d7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d7b0) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D7B8u;
label_16d7b8:
    // 0x16d7b8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16d7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16d7bc: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x16d7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x16d7c0: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D7C0u;
    SET_GPR_U32(ctx, 31, 0x16D7C8u);
    ctx->pc = 0x16D7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D7C0u;
            // 0x16d7c4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D7C8u; }
        if (ctx->pc != 0x16D7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D7C8u; }
        if (ctx->pc != 0x16D7C8u) { return; }
    }
    ctx->pc = 0x16D7C8u;
    // 0x16d7c8: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x16D7C8u;
    {
        const bool branch_taken_0x16d7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d7c8) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D7D0u;
label_16d7d0:
    // 0x16d7d0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16d7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16d7d4: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16d7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16d7d8: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D7D8u;
    SET_GPR_U32(ctx, 31, 0x16D7E0u);
    ctx->pc = 0x16D7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D7D8u;
            // 0x16d7dc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D7E0u; }
        if (ctx->pc != 0x16D7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D7E0u; }
        if (ctx->pc != 0x16D7E0u) { return; }
    }
    ctx->pc = 0x16D7E0u;
    // 0x16d7e0: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x16D7E0u;
    {
        const bool branch_taken_0x16d7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d7e0) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D7E8u;
label_16d7e8:
    // 0x16d7e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16d7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16d7ec: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16d7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16d7f0: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D7F0u;
    SET_GPR_U32(ctx, 31, 0x16D7F8u);
    ctx->pc = 0x16D7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D7F0u;
            // 0x16d7f4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D7F8u; }
        if (ctx->pc != 0x16D7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D7F8u; }
        if (ctx->pc != 0x16D7F8u) { return; }
    }
    ctx->pc = 0x16D7F8u;
    // 0x16d7f8: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x16D7F8u;
    {
        const bool branch_taken_0x16d7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d7f8) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D800u;
label_16d800:
    // 0x16d800: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16d800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16d804: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16d804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16d808: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D808u;
    SET_GPR_U32(ctx, 31, 0x16D810u);
    ctx->pc = 0x16D80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D808u;
            // 0x16d80c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D810u; }
        if (ctx->pc != 0x16D810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D810u; }
        if (ctx->pc != 0x16D810u) { return; }
    }
    ctx->pc = 0x16D810u;
    // 0x16d810: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x16D810u;
    {
        const bool branch_taken_0x16d810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d810) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D818u;
label_16d818:
    // 0x16d818: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16d818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16d81c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16d81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16d820: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D820u;
    SET_GPR_U32(ctx, 31, 0x16D828u);
    ctx->pc = 0x16D824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D820u;
            // 0x16d824: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D828u; }
        if (ctx->pc != 0x16D828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D828u; }
        if (ctx->pc != 0x16D828u) { return; }
    }
    ctx->pc = 0x16D828u;
    // 0x16d828: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x16D828u;
    {
        const bool branch_taken_0x16d828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d828) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D830u;
label_16d830:
    // 0x16d830: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16d830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16d834: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x16d834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16d838: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D838u;
    SET_GPR_U32(ctx, 31, 0x16D840u);
    ctx->pc = 0x16D83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D838u;
            // 0x16d83c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D840u; }
        if (ctx->pc != 0x16D840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D840u; }
        if (ctx->pc != 0x16D840u) { return; }
    }
    ctx->pc = 0x16D840u;
    // 0x16d840: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x16D840u;
    {
        const bool branch_taken_0x16d840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d840) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D848u;
label_16d848:
    // 0x16d848: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16d848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d84c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16d84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16d850: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D850u;
    SET_GPR_U32(ctx, 31, 0x16D858u);
    ctx->pc = 0x16D854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D850u;
            // 0x16d854: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D858u; }
        if (ctx->pc != 0x16D858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D858u; }
        if (ctx->pc != 0x16D858u) { return; }
    }
    ctx->pc = 0x16D858u;
    // 0x16d858: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d85c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16d85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16d860: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D860u;
    SET_GPR_U32(ctx, 31, 0x16D868u);
    ctx->pc = 0x16D864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D860u;
            // 0x16d864: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D868u; }
        if (ctx->pc != 0x16D868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D868u; }
        if (ctx->pc != 0x16D868u) { return; }
    }
    ctx->pc = 0x16D868u;
    // 0x16d868: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x16D868u;
    {
        const bool branch_taken_0x16d868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d868) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D870u;
label_16d870:
    // 0x16d870: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16d870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d874: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16d874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16d878: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D878u;
    SET_GPR_U32(ctx, 31, 0x16D880u);
    ctx->pc = 0x16D87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D878u;
            // 0x16d87c: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D880u; }
        if (ctx->pc != 0x16D880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D880u; }
        if (ctx->pc != 0x16D880u) { return; }
    }
    ctx->pc = 0x16D880u;
    // 0x16d880: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d884: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16d884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16d888: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D888u;
    SET_GPR_U32(ctx, 31, 0x16D890u);
    ctx->pc = 0x16D88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D888u;
            // 0x16d88c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D890u; }
        if (ctx->pc != 0x16D890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D890u; }
        if (ctx->pc != 0x16D890u) { return; }
    }
    ctx->pc = 0x16D890u;
    // 0x16d890: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x16D890u;
    {
        const bool branch_taken_0x16d890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d890) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D898u;
label_16d898:
    // 0x16d898: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16d898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d89c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16d89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16d8a0: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D8A0u;
    SET_GPR_U32(ctx, 31, 0x16D8A8u);
    ctx->pc = 0x16D8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D8A0u;
            // 0x16d8a4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D8A8u; }
        if (ctx->pc != 0x16D8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D8A8u; }
        if (ctx->pc != 0x16D8A8u) { return; }
    }
    ctx->pc = 0x16D8A8u;
    // 0x16d8a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d8ac: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16d8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16d8b0: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D8B0u;
    SET_GPR_U32(ctx, 31, 0x16D8B8u);
    ctx->pc = 0x16D8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D8B0u;
            // 0x16d8b4: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D8B8u; }
        if (ctx->pc != 0x16D8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D8B8u; }
        if (ctx->pc != 0x16D8B8u) { return; }
    }
    ctx->pc = 0x16D8B8u;
    // 0x16d8b8: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x16D8B8u;
    {
        const bool branch_taken_0x16d8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d8b8) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D8C0u;
label_16d8c0:
    // 0x16d8c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16d8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d8c4: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16d8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16d8c8: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D8C8u;
    SET_GPR_U32(ctx, 31, 0x16D8D0u);
    ctx->pc = 0x16D8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D8C8u;
            // 0x16d8cc: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D8D0u; }
        if (ctx->pc != 0x16D8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D8D0u; }
        if (ctx->pc != 0x16D8D0u) { return; }
    }
    ctx->pc = 0x16D8D0u;
    // 0x16d8d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d8d4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16d8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16d8d8: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D8D8u;
    SET_GPR_U32(ctx, 31, 0x16D8E0u);
    ctx->pc = 0x16D8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D8D8u;
            // 0x16d8dc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D8E0u; }
        if (ctx->pc != 0x16D8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D8E0u; }
        if (ctx->pc != 0x16D8E0u) { return; }
    }
    ctx->pc = 0x16D8E0u;
    // 0x16d8e0: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x16D8E0u;
    {
        const bool branch_taken_0x16d8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d8e0) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D8E8u;
label_16d8e8:
    // 0x16d8e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16d8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d8ec: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16d8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16d8f0: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D8F0u;
    SET_GPR_U32(ctx, 31, 0x16D8F8u);
    ctx->pc = 0x16D8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D8F0u;
            // 0x16d8f4: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D8F8u; }
        if (ctx->pc != 0x16D8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D8F8u; }
        if (ctx->pc != 0x16D8F8u) { return; }
    }
    ctx->pc = 0x16D8F8u;
    // 0x16d8f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d8fc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16d8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16d900: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D900u;
    SET_GPR_U32(ctx, 31, 0x16D908u);
    ctx->pc = 0x16D904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D900u;
            // 0x16d904: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D908u; }
        if (ctx->pc != 0x16D908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D908u; }
        if (ctx->pc != 0x16D908u) { return; }
    }
    ctx->pc = 0x16D908u;
    // 0x16d908: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x16D908u;
    {
        const bool branch_taken_0x16d908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d908) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D910u;
label_16d910:
    // 0x16d910: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16d910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16d914: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16d914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d918: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D918u;
    SET_GPR_U32(ctx, 31, 0x16D920u);
    ctx->pc = 0x16D91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D918u;
            // 0x16d91c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D920u; }
        if (ctx->pc != 0x16D920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D920u; }
        if (ctx->pc != 0x16D920u) { return; }
    }
    ctx->pc = 0x16D920u;
    // 0x16d920: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d924: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16d924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16d928: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D928u;
    SET_GPR_U32(ctx, 31, 0x16D930u);
    ctx->pc = 0x16D92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D928u;
            // 0x16d92c: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D930u; }
        if (ctx->pc != 0x16D930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D930u; }
        if (ctx->pc != 0x16D930u) { return; }
    }
    ctx->pc = 0x16D930u;
    // 0x16d930: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x16D930u;
    {
        const bool branch_taken_0x16d930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d930) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D938u;
label_16d938:
    // 0x16d938: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16d938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d93c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16d93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16d940: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D940u;
    SET_GPR_U32(ctx, 31, 0x16D948u);
    ctx->pc = 0x16D944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D940u;
            // 0x16d944: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D948u; }
        if (ctx->pc != 0x16D948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D948u; }
        if (ctx->pc != 0x16D948u) { return; }
    }
    ctx->pc = 0x16D948u;
    // 0x16d948: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d94c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16d94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16d950: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D950u;
    SET_GPR_U32(ctx, 31, 0x16D958u);
    ctx->pc = 0x16D954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D950u;
            // 0x16d954: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D958u; }
        if (ctx->pc != 0x16D958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D958u; }
        if (ctx->pc != 0x16D958u) { return; }
    }
    ctx->pc = 0x16D958u;
    // 0x16d958: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x16D958u;
    {
        const bool branch_taken_0x16d958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d958) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D960u;
label_16d960:
    // 0x16d960: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16d960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d964: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16d964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16d968: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D968u;
    SET_GPR_U32(ctx, 31, 0x16D970u);
    ctx->pc = 0x16D96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D968u;
            // 0x16d96c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D970u; }
        if (ctx->pc != 0x16D970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D970u; }
        if (ctx->pc != 0x16D970u) { return; }
    }
    ctx->pc = 0x16D970u;
    // 0x16d970: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d974: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16d974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16d978: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D978u;
    SET_GPR_U32(ctx, 31, 0x16D980u);
    ctx->pc = 0x16D97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D978u;
            // 0x16d97c: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D980u; }
        if (ctx->pc != 0x16D980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D980u; }
        if (ctx->pc != 0x16D980u) { return; }
    }
    ctx->pc = 0x16D980u;
    // 0x16d980: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x16D980u;
    {
        const bool branch_taken_0x16d980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d980) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D988u;
label_16d988:
    // 0x16d988: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16d988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d98c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16d98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16d990: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D990u;
    SET_GPR_U32(ctx, 31, 0x16D998u);
    ctx->pc = 0x16D994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D990u;
            // 0x16d994: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D998u; }
        if (ctx->pc != 0x16D998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D998u; }
        if (ctx->pc != 0x16D998u) { return; }
    }
    ctx->pc = 0x16D998u;
    // 0x16d998: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d99c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16d99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16d9a0: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16D9A0u;
    SET_GPR_U32(ctx, 31, 0x16D9A8u);
    ctx->pc = 0x16D9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D9A0u;
            // 0x16d9a4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D9A8u; }
        if (ctx->pc != 0x16D9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D9A8u; }
        if (ctx->pc != 0x16D9A8u) { return; }
    }
    ctx->pc = 0x16D9A8u;
    // 0x16d9a8: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x16D9A8u;
    {
        const bool branch_taken_0x16d9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d9a8) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D9B0u;
label_16d9b0:
    // 0x16d9b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16d9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d9b4: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x16d9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x16d9b8: 0xc07a5e4  jal         func_1E9790
    ctx->pc = 0x16D9B8u;
    SET_GPR_U32(ctx, 31, 0x16D9C0u);
    ctx->pc = 0x16D9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D9B8u;
            // 0x16d9bc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9790u;
    if (runtime->hasFunction(0x1E9790u)) {
        auto targetFn = runtime->lookupFunction(0x1E9790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D9C0u; }
        if (ctx->pc != 0x16D9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_02_0x1e9790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D9C0u; }
        if (ctx->pc != 0x16D9C0u) { return; }
    }
    ctx->pc = 0x16D9C0u;
    // 0x16d9c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16d9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d9c4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x16d9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16d9c8: 0xc07a5e4  jal         func_1E9790
    ctx->pc = 0x16D9C8u;
    SET_GPR_U32(ctx, 31, 0x16D9D0u);
    ctx->pc = 0x16D9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D9C8u;
            // 0x16d9cc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9790u;
    if (runtime->hasFunction(0x1E9790u)) {
        auto targetFn = runtime->lookupFunction(0x1E9790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D9D0u; }
        if (ctx->pc != 0x16D9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_02_0x1e9790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D9D0u; }
        if (ctx->pc != 0x16D9D0u) { return; }
    }
    ctx->pc = 0x16D9D0u;
    // 0x16d9d0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16d9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d9d4: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x16d9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x16d9d8: 0xc07a5e4  jal         func_1E9790
    ctx->pc = 0x16D9D8u;
    SET_GPR_U32(ctx, 31, 0x16D9E0u);
    ctx->pc = 0x16D9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D9D8u;
            // 0x16d9dc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9790u;
    if (runtime->hasFunction(0x1E9790u)) {
        auto targetFn = runtime->lookupFunction(0x1E9790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D9E0u; }
        if (ctx->pc != 0x16D9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_02_0x1e9790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D9E0u; }
        if (ctx->pc != 0x16D9E0u) { return; }
    }
    ctx->pc = 0x16D9E0u;
    // 0x16d9e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16d9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d9e4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x16d9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x16d9e8: 0xc07a5e4  jal         func_1E9790
    ctx->pc = 0x16D9E8u;
    SET_GPR_U32(ctx, 31, 0x16D9F0u);
    ctx->pc = 0x16D9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D9E8u;
            // 0x16d9ec: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9790u;
    if (runtime->hasFunction(0x1E9790u)) {
        auto targetFn = runtime->lookupFunction(0x1E9790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D9F0u; }
        if (ctx->pc != 0x16D9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_02_0x1e9790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D9F0u; }
        if (ctx->pc != 0x16D9F0u) { return; }
    }
    ctx->pc = 0x16D9F0u;
    // 0x16d9f0: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x16D9F0u;
    {
        const bool branch_taken_0x16d9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d9f0) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16D9F8u;
label_16d9f8:
    // 0x16d9f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16d9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d9fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16da00: 0xc079c88  jal         func_1E7220
    ctx->pc = 0x16DA00u;
    SET_GPR_U32(ctx, 31, 0x16DA08u);
    ctx->pc = 0x16DA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA00u;
            // 0x16da04: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7220u;
    if (runtime->hasFunction(0x1E7220u)) {
        auto targetFn = runtime->lookupFunction(0x1E7220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA08u; }
        if (ctx->pc != 0x16DA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_04_0x1e7220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA08u; }
        if (ctx->pc != 0x16DA08u) { return; }
    }
    ctx->pc = 0x16DA08u;
    // 0x16da08: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x16DA08u;
    {
        const bool branch_taken_0x16da08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da08) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DA10u;
label_16da10:
    // 0x16da10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16da10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16da14: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16da14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16da18: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x16DA18u;
    SET_GPR_U32(ctx, 31, 0x16DA20u);
    ctx->pc = 0x16DA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA18u;
            // 0x16da1c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA20u; }
        if (ctx->pc != 0x16DA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItemCareer_0x1df800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA20u; }
        if (ctx->pc != 0x16DA20u) { return; }
    }
    ctx->pc = 0x16DA20u;
    // 0x16da20: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x16DA20u;
    {
        const bool branch_taken_0x16da20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da20) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DA28u;
label_16da28:
    // 0x16da28: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16da28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16da2c: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x16da2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x16da30: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16DA30u;
    SET_GPR_U32(ctx, 31, 0x16DA38u);
    ctx->pc = 0x16DA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA30u;
            // 0x16da34: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA38u; }
        if (ctx->pc != 0x16DA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA38u; }
        if (ctx->pc != 0x16DA38u) { return; }
    }
    ctx->pc = 0x16DA38u;
    // 0x16da38: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x16DA38u;
    {
        const bool branch_taken_0x16da38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da38) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DA40u;
label_16da40:
    // 0x16da40: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16da40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16da44: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16da44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16da48: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16DA48u;
    SET_GPR_U32(ctx, 31, 0x16DA50u);
    ctx->pc = 0x16DA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA48u;
            // 0x16da4c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA50u; }
        if (ctx->pc != 0x16DA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA50u; }
        if (ctx->pc != 0x16DA50u) { return; }
    }
    ctx->pc = 0x16DA50u;
    // 0x16da50: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x16DA50u;
    {
        const bool branch_taken_0x16da50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da50) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DA58u;
label_16da58:
    // 0x16da58: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16da58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16da5c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16da5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16da60: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16DA60u;
    SET_GPR_U32(ctx, 31, 0x16DA68u);
    ctx->pc = 0x16DA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA60u;
            // 0x16da64: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA68u; }
        if (ctx->pc != 0x16DA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA68u; }
        if (ctx->pc != 0x16DA68u) { return; }
    }
    ctx->pc = 0x16DA68u;
    // 0x16da68: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x16DA68u;
    {
        const bool branch_taken_0x16da68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da68) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DA70u;
label_16da70:
    // 0x16da70: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16da70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16da74: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16da74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16da78: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16DA78u;
    SET_GPR_U32(ctx, 31, 0x16DA80u);
    ctx->pc = 0x16DA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA78u;
            // 0x16da7c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA80u; }
        if (ctx->pc != 0x16DA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA80u; }
        if (ctx->pc != 0x16DA80u) { return; }
    }
    ctx->pc = 0x16DA80u;
    // 0x16da80: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x16DA80u;
    {
        const bool branch_taken_0x16da80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da80) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DA88u;
label_16da88:
    // 0x16da88: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16da88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16da8c: 0x2405ffee  addiu       $a1, $zero, -0x12
    ctx->pc = 0x16da8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967278));
    // 0x16da90: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16DA90u;
    SET_GPR_U32(ctx, 31, 0x16DA98u);
    ctx->pc = 0x16DA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DA90u;
            // 0x16da94: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA98u; }
        if (ctx->pc != 0x16DA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA98u; }
        if (ctx->pc != 0x16DA98u) { return; }
    }
    ctx->pc = 0x16DA98u;
    // 0x16da98: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x16DA98u;
    {
        const bool branch_taken_0x16da98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da98) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DAA0u;
label_16daa0:
    // 0x16daa0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16daa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16daa4: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16daa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16daa8: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16DAA8u;
    SET_GPR_U32(ctx, 31, 0x16DAB0u);
    ctx->pc = 0x16DAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DAA8u;
            // 0x16daac: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DAB0u; }
        if (ctx->pc != 0x16DAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DAB0u; }
        if (ctx->pc != 0x16DAB0u) { return; }
    }
    ctx->pc = 0x16DAB0u;
    // 0x16dab0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x16DAB0u;
    {
        const bool branch_taken_0x16dab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dab0) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DAB8u;
label_16dab8:
    // 0x16dab8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16dabc: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x16dabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x16dac0: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16DAC0u;
    SET_GPR_U32(ctx, 31, 0x16DAC8u);
    ctx->pc = 0x16DAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DAC0u;
            // 0x16dac4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DAC8u; }
        if (ctx->pc != 0x16DAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DAC8u; }
        if (ctx->pc != 0x16DAC8u) { return; }
    }
    ctx->pc = 0x16DAC8u;
    // 0x16dac8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x16DAC8u;
    {
        const bool branch_taken_0x16dac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dac8) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DAD0u;
label_16dad0:
    // 0x16dad0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16dad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16dad4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16dad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16dad8: 0xc07a204  jal         func_1E8810
    ctx->pc = 0x16DAD8u;
    SET_GPR_U32(ctx, 31, 0x16DAE0u);
    ctx->pc = 0x16DADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DAD8u;
            // 0x16dadc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8810u;
    if (runtime->hasFunction(0x1E8810u)) {
        auto targetFn = runtime->lookupFunction(0x1E8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DAE0u; }
        if (ctx->pc != 0x16DAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_01_0x1e8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DAE0u; }
        if (ctx->pc != 0x16DAE0u) { return; }
    }
    ctx->pc = 0x16DAE0u;
    // 0x16dae0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x16DAE0u;
    {
        const bool branch_taken_0x16dae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dae0) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DAE8u;
label_16dae8:
    // 0x16dae8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16dae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16daec: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16daecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16daf0: 0xc07a5e4  jal         func_1E9790
    ctx->pc = 0x16DAF0u;
    SET_GPR_U32(ctx, 31, 0x16DAF8u);
    ctx->pc = 0x16DAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DAF0u;
            // 0x16daf4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9790u;
    if (runtime->hasFunction(0x1E9790u)) {
        auto targetFn = runtime->lookupFunction(0x1E9790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DAF8u; }
        if (ctx->pc != 0x16DAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_02_0x1e9790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DAF8u; }
        if (ctx->pc != 0x16DAF8u) { return; }
    }
    ctx->pc = 0x16DAF8u;
    // 0x16daf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16daf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16dafc: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x16dafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x16db00: 0xc07a5e4  jal         func_1E9790
    ctx->pc = 0x16DB00u;
    SET_GPR_U32(ctx, 31, 0x16DB08u);
    ctx->pc = 0x16DB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB00u;
            // 0x16db04: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9790u;
    if (runtime->hasFunction(0x1E9790u)) {
        auto targetFn = runtime->lookupFunction(0x1E9790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB08u; }
        if (ctx->pc != 0x16DB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_02_0x1e9790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB08u; }
        if (ctx->pc != 0x16DB08u) { return; }
    }
    ctx->pc = 0x16DB08u;
    // 0x16db08: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x16DB08u;
    {
        const bool branch_taken_0x16db08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db08) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DB10u;
label_16db10:
    // 0x16db10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16db10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16db14: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16db14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16db18: 0xc079c88  jal         func_1E7220
    ctx->pc = 0x16DB18u;
    SET_GPR_U32(ctx, 31, 0x16DB20u);
    ctx->pc = 0x16DB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB18u;
            // 0x16db1c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7220u;
    if (runtime->hasFunction(0x1E7220u)) {
        auto targetFn = runtime->lookupFunction(0x1E7220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB20u; }
        if (ctx->pc != 0x16DB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_04_0x1e7220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB20u; }
        if (ctx->pc != 0x16DB20u) { return; }
    }
    ctx->pc = 0x16DB20u;
    // 0x16db20: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x16DB20u;
    {
        const bool branch_taken_0x16db20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db20) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DB28u;
label_16db28:
    // 0x16db28: 0x2405ffdd  addiu       $a1, $zero, -0x23
    ctx->pc = 0x16db28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
    // 0x16db2c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16db2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16db30: 0xc07a5e4  jal         func_1E9790
    ctx->pc = 0x16DB30u;
    SET_GPR_U32(ctx, 31, 0x16DB38u);
    ctx->pc = 0x16DB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB30u;
            // 0x16db34: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9790u;
    if (runtime->hasFunction(0x1E9790u)) {
        auto targetFn = runtime->lookupFunction(0x1E9790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB38u; }
        if (ctx->pc != 0x16DB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_02_0x1e9790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB38u; }
        if (ctx->pc != 0x16DB38u) { return; }
    }
    ctx->pc = 0x16DB38u;
    // 0x16db38: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16db38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16db3c: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x16db3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x16db40: 0xc07a5e4  jal         func_1E9790
    ctx->pc = 0x16DB40u;
    SET_GPR_U32(ctx, 31, 0x16DB48u);
    ctx->pc = 0x16DB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB40u;
            // 0x16db44: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9790u;
    if (runtime->hasFunction(0x1E9790u)) {
        auto targetFn = runtime->lookupFunction(0x1E9790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB48u; }
        if (ctx->pc != 0x16DB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_02_0x1e9790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB48u; }
        if (ctx->pc != 0x16DB48u) { return; }
    }
    ctx->pc = 0x16DB48u;
    // 0x16db48: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x16DB48u;
    {
        const bool branch_taken_0x16db48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db48) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DB50u;
label_16db50:
    // 0x16db50: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16db50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16db54: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16db54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16db58: 0xc079c88  jal         func_1E7220
    ctx->pc = 0x16DB58u;
    SET_GPR_U32(ctx, 31, 0x16DB60u);
    ctx->pc = 0x16DB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB58u;
            // 0x16db5c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7220u;
    if (runtime->hasFunction(0x1E7220u)) {
        auto targetFn = runtime->lookupFunction(0x1E7220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB60u; }
        if (ctx->pc != 0x16DB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_04_0x1e7220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB60u; }
        if (ctx->pc != 0x16DB60u) { return; }
    }
    ctx->pc = 0x16DB60u;
    // 0x16db60: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x16DB60u;
    {
        const bool branch_taken_0x16db60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db60) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DB68u;
label_16db68:
    // 0x16db68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16db68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db6c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x16db6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x16db70: 0xc079840  jal         func_1E6100
    ctx->pc = 0x16DB70u;
    SET_GPR_U32(ctx, 31, 0x16DB78u);
    ctx->pc = 0x16DB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB70u;
            // 0x16db74: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6100u;
    if (runtime->hasFunction(0x1E6100u)) {
        auto targetFn = runtime->lookupFunction(0x1E6100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB78u; }
        if (ctx->pc != 0x16DB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_03_0x1e6100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB78u; }
        if (ctx->pc != 0x16DB78u) { return; }
    }
    ctx->pc = 0x16DB78u;
    // 0x16db78: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x16DB78u;
    {
        const bool branch_taken_0x16db78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db78) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DB80u;
label_16db80:
    // 0x16db80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16db80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db84: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x16db84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x16db88: 0xc079840  jal         func_1E6100
    ctx->pc = 0x16DB88u;
    SET_GPR_U32(ctx, 31, 0x16DB90u);
    ctx->pc = 0x16DB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB88u;
            // 0x16db8c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6100u;
    if (runtime->hasFunction(0x1E6100u)) {
        auto targetFn = runtime->lookupFunction(0x1E6100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB90u; }
        if (ctx->pc != 0x16DB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_03_0x1e6100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB90u; }
        if (ctx->pc != 0x16DB90u) { return; }
    }
    ctx->pc = 0x16DB90u;
    // 0x16db90: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x16DB90u;
    {
        const bool branch_taken_0x16db90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db90) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DB98u;
label_16db98:
    // 0x16db98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16db98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db9c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16db9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16dba0: 0xc079840  jal         func_1E6100
    ctx->pc = 0x16DBA0u;
    SET_GPR_U32(ctx, 31, 0x16DBA8u);
    ctx->pc = 0x16DBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DBA0u;
            // 0x16dba4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6100u;
    if (runtime->hasFunction(0x1E6100u)) {
        auto targetFn = runtime->lookupFunction(0x1E6100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DBA8u; }
        if (ctx->pc != 0x16DBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_03_0x1e6100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DBA8u; }
        if (ctx->pc != 0x16DBA8u) { return; }
    }
    ctx->pc = 0x16DBA8u;
    // 0x16dba8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16DBA8u;
    {
        const bool branch_taken_0x16dba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dba8) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DBB0u;
label_16dbb0:
    // 0x16dbb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16dbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dbb4: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16dbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16dbb8: 0xc079840  jal         func_1E6100
    ctx->pc = 0x16DBB8u;
    SET_GPR_U32(ctx, 31, 0x16DBC0u);
    ctx->pc = 0x16DBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DBB8u;
            // 0x16dbbc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6100u;
    if (runtime->hasFunction(0x1E6100u)) {
        auto targetFn = runtime->lookupFunction(0x1E6100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DBC0u; }
        if (ctx->pc != 0x16DBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_03_0x1e6100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DBC0u; }
        if (ctx->pc != 0x16DBC0u) { return; }
    }
    ctx->pc = 0x16DBC0u;
    // 0x16dbc0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x16DBC0u;
    {
        const bool branch_taken_0x16dbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dbc0) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DBC8u;
label_16dbc8:
    // 0x16dbc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16dbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dbcc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x16dbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x16dbd0: 0xc079840  jal         func_1E6100
    ctx->pc = 0x16DBD0u;
    SET_GPR_U32(ctx, 31, 0x16DBD8u);
    ctx->pc = 0x16DBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DBD0u;
            // 0x16dbd4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6100u;
    if (runtime->hasFunction(0x1E6100u)) {
        auto targetFn = runtime->lookupFunction(0x1E6100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DBD8u; }
        if (ctx->pc != 0x16DBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_03_0x1e6100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DBD8u; }
        if (ctx->pc != 0x16DBD8u) { return; }
    }
    ctx->pc = 0x16DBD8u;
    // 0x16dbd8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16DBD8u;
    {
        const bool branch_taken_0x16dbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dbd8) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DBE0u;
label_16dbe0:
    // 0x16dbe0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16dbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dbe4: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x16dbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x16dbe8: 0xc079840  jal         func_1E6100
    ctx->pc = 0x16DBE8u;
    SET_GPR_U32(ctx, 31, 0x16DBF0u);
    ctx->pc = 0x16DBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DBE8u;
            // 0x16dbec: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6100u;
    if (runtime->hasFunction(0x1E6100u)) {
        auto targetFn = runtime->lookupFunction(0x1E6100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DBF0u; }
        if (ctx->pc != 0x16DBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn1_03_0x1e6100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DBF0u; }
        if (ctx->pc != 0x16DBF0u) { return; }
    }
    ctx->pc = 0x16DBF0u;
    // 0x16dbf0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16DBF0u;
    {
        const bool branch_taken_0x16dbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dbf0) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DBF8u;
label_16dbf8:
    // 0x16dbf8: 0xc05d004  jal         func_174010
    ctx->pc = 0x16DBF8u;
    SET_GPR_U32(ctx, 31, 0x16DC00u);
    ctx->pc = 0x16DBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DBF8u;
            // 0x16dbfc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC00u; }
        if (ctx->pc != 0x16DC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC00u; }
        if (ctx->pc != 0x16DC00u) { return; }
    }
    ctx->pc = 0x16DC00u;
    // 0x16dc00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16dc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16dc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc08: 0xc05857c  jal         func_1615F0
    ctx->pc = 0x16DC08u;
    SET_GPR_U32(ctx, 31, 0x16DC10u);
    ctx->pc = 0x16DC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DC08u;
            // 0x16dc0c: 0x2406ff9c  addiu       $a2, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1615F0u;
    if (runtime->hasFunction(0x1615F0u)) {
        auto targetFn = runtime->lookupFunction(0x1615F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC10u; }
        if (ctx->pc != 0x16DC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStage1Boss_0x1615f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC10u; }
        if (ctx->pc != 0x16DC10u) { return; }
    }
    ctx->pc = 0x16DC10u;
label_16dc10:
    // 0x16dc10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16dc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dc14: 0x3e00008  jr          $ra
    ctx->pc = 0x16DC14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DC14u;
            // 0x16dc18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D608u: goto label_16d608;
            case 0x16D640u: goto label_16d640;
            case 0x16D670u: goto label_16d670;
            case 0x16D680u: goto label_16d680;
            case 0x16D698u: goto label_16d698;
            case 0x16D6B0u: goto label_16d6b0;
            case 0x16D6C8u: goto label_16d6c8;
            case 0x16D6E0u: goto label_16d6e0;
            case 0x16D6F8u: goto label_16d6f8;
            case 0x16D710u: goto label_16d710;
            case 0x16D728u: goto label_16d728;
            case 0x16D740u: goto label_16d740;
            case 0x16D758u: goto label_16d758;
            case 0x16D770u: goto label_16d770;
            case 0x16D788u: goto label_16d788;
            case 0x16D7A0u: goto label_16d7a0;
            case 0x16D7B8u: goto label_16d7b8;
            case 0x16D7D0u: goto label_16d7d0;
            case 0x16D7E8u: goto label_16d7e8;
            case 0x16D800u: goto label_16d800;
            case 0x16D818u: goto label_16d818;
            case 0x16D830u: goto label_16d830;
            case 0x16D848u: goto label_16d848;
            case 0x16D870u: goto label_16d870;
            case 0x16D898u: goto label_16d898;
            case 0x16D8C0u: goto label_16d8c0;
            case 0x16D8E8u: goto label_16d8e8;
            case 0x16D910u: goto label_16d910;
            case 0x16D938u: goto label_16d938;
            case 0x16D960u: goto label_16d960;
            case 0x16D988u: goto label_16d988;
            case 0x16D9B0u: goto label_16d9b0;
            case 0x16D9F8u: goto label_16d9f8;
            case 0x16DA10u: goto label_16da10;
            case 0x16DA28u: goto label_16da28;
            case 0x16DA40u: goto label_16da40;
            case 0x16DA58u: goto label_16da58;
            case 0x16DA70u: goto label_16da70;
            case 0x16DA88u: goto label_16da88;
            case 0x16DAA0u: goto label_16daa0;
            case 0x16DAB8u: goto label_16dab8;
            case 0x16DAD0u: goto label_16dad0;
            case 0x16DAE8u: goto label_16dae8;
            case 0x16DB10u: goto label_16db10;
            case 0x16DB28u: goto label_16db28;
            case 0x16DB50u: goto label_16db50;
            case 0x16DB68u: goto label_16db68;
            case 0x16DB80u: goto label_16db80;
            case 0x16DB98u: goto label_16db98;
            case 0x16DBB0u: goto label_16dbb0;
            case 0x16DBC8u: goto label_16dbc8;
            case 0x16DBE0u: goto label_16dbe0;
            case 0x16DBF8u: goto label_16dbf8;
            case 0x16DC10u: goto label_16dc10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16DC1Cu;
}
