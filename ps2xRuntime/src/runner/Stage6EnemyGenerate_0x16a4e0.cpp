#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage6EnemyGenerate
// Address: 0x16a4e0 - 0x16af04
void Stage6EnemyGenerate_0x16a4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage6EnemyGenerate_0x16a4e0");
#endif

    ctx->pc = 0x16a4e0u;

    // 0x16a4e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16a4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a4e4: 0x24030ed8  addiu       $v1, $zero, 0xED8
    ctx->pc = 0x16a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3800));
    // 0x16a4e8: 0x1083027d  beq         $a0, $v1, . + 4 + (0x27D << 2)
    ctx->pc = 0x16A4E8u;
    {
        const bool branch_taken_0x16a4e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A4E8u;
            // 0x16a4ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4e8) {
            ctx->pc = 0x16AEE0u;
            goto label_16aee0;
        }
    }
    ctx->pc = 0x16A4F0u;
    // 0x16a4f0: 0x24030e4c  addiu       $v1, $zero, 0xE4C
    ctx->pc = 0x16a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3660));
    // 0x16a4f4: 0x10830274  beq         $a0, $v1, . + 4 + (0x274 << 2)
    ctx->pc = 0x16A4F4u;
    {
        const bool branch_taken_0x16a4f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A4F4u;
            // 0x16a4f8: 0x24030e38  addiu       $v1, $zero, 0xE38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4f4) {
            ctx->pc = 0x16AEC8u;
            goto label_16aec8;
        }
    }
    ctx->pc = 0x16A4FCu;
    // 0x16a4fc: 0x1083026c  beq         $a0, $v1, . + 4 + (0x26C << 2)
    ctx->pc = 0x16A4FCu;
    {
        const bool branch_taken_0x16a4fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a4fc) {
            ctx->pc = 0x16AEB0u;
            goto label_16aeb0;
        }
    }
    ctx->pc = 0x16A504u;
    // 0x16a504: 0x24030e24  addiu       $v1, $zero, 0xE24
    ctx->pc = 0x16a504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3620));
    // 0x16a508: 0x10830263  beq         $a0, $v1, . + 4 + (0x263 << 2)
    ctx->pc = 0x16A508u;
    {
        const bool branch_taken_0x16a508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A508u;
            // 0x16a50c: 0x24030e10  addiu       $v1, $zero, 0xE10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a508) {
            ctx->pc = 0x16AE98u;
            goto label_16ae98;
        }
    }
    ctx->pc = 0x16A510u;
    // 0x16a510: 0x1083025b  beq         $a0, $v1, . + 4 + (0x25B << 2)
    ctx->pc = 0x16A510u;
    {
        const bool branch_taken_0x16a510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a510) {
            ctx->pc = 0x16AE80u;
            goto label_16ae80;
        }
    }
    ctx->pc = 0x16A518u;
    // 0x16a518: 0x24030dfc  addiu       $v1, $zero, 0xDFC
    ctx->pc = 0x16a518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3580));
    // 0x16a51c: 0x10830252  beq         $a0, $v1, . + 4 + (0x252 << 2)
    ctx->pc = 0x16A51Cu;
    {
        const bool branch_taken_0x16a51c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A51Cu;
            // 0x16a520: 0x24030de8  addiu       $v1, $zero, 0xDE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a51c) {
            ctx->pc = 0x16AE68u;
            goto label_16ae68;
        }
    }
    ctx->pc = 0x16A524u;
    // 0x16a524: 0x1083024a  beq         $a0, $v1, . + 4 + (0x24A << 2)
    ctx->pc = 0x16A524u;
    {
        const bool branch_taken_0x16a524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a524) {
            ctx->pc = 0x16AE50u;
            goto label_16ae50;
        }
    }
    ctx->pc = 0x16A52Cu;
    // 0x16a52c: 0x24030dd4  addiu       $v1, $zero, 0xDD4
    ctx->pc = 0x16a52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3540));
    // 0x16a530: 0x10830241  beq         $a0, $v1, . + 4 + (0x241 << 2)
    ctx->pc = 0x16A530u;
    {
        const bool branch_taken_0x16a530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A530u;
            // 0x16a534: 0x24030dc0  addiu       $v1, $zero, 0xDC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a530) {
            ctx->pc = 0x16AE38u;
            goto label_16ae38;
        }
    }
    ctx->pc = 0x16A538u;
    // 0x16a538: 0x10830239  beq         $a0, $v1, . + 4 + (0x239 << 2)
    ctx->pc = 0x16A538u;
    {
        const bool branch_taken_0x16a538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a538) {
            ctx->pc = 0x16AE20u;
            goto label_16ae20;
        }
    }
    ctx->pc = 0x16A540u;
    // 0x16a540: 0x24030dac  addiu       $v1, $zero, 0xDAC
    ctx->pc = 0x16a540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3500));
    // 0x16a544: 0x10830230  beq         $a0, $v1, . + 4 + (0x230 << 2)
    ctx->pc = 0x16A544u;
    {
        const bool branch_taken_0x16a544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A544u;
            // 0x16a548: 0x24030d48  addiu       $v1, $zero, 0xD48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a544) {
            ctx->pc = 0x16AE08u;
            goto label_16ae08;
        }
    }
    ctx->pc = 0x16A54Cu;
    // 0x16a54c: 0x10830228  beq         $a0, $v1, . + 4 + (0x228 << 2)
    ctx->pc = 0x16A54Cu;
    {
        const bool branch_taken_0x16a54c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a54c) {
            ctx->pc = 0x16ADF0u;
            goto label_16adf0;
        }
    }
    ctx->pc = 0x16A554u;
    // 0x16a554: 0x24030d20  addiu       $v1, $zero, 0xD20
    ctx->pc = 0x16a554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3360));
    // 0x16a558: 0x1083021f  beq         $a0, $v1, . + 4 + (0x21F << 2)
    ctx->pc = 0x16A558u;
    {
        const bool branch_taken_0x16a558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A558u;
            // 0x16a55c: 0x24030d0c  addiu       $v1, $zero, 0xD0C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a558) {
            ctx->pc = 0x16ADD8u;
            goto label_16add8;
        }
    }
    ctx->pc = 0x16A560u;
    // 0x16a560: 0x10830217  beq         $a0, $v1, . + 4 + (0x217 << 2)
    ctx->pc = 0x16A560u;
    {
        const bool branch_taken_0x16a560 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a560) {
            ctx->pc = 0x16ADC0u;
            goto label_16adc0;
        }
    }
    ctx->pc = 0x16A568u;
    // 0x16a568: 0x24030cf8  addiu       $v1, $zero, 0xCF8
    ctx->pc = 0x16a568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3320));
    // 0x16a56c: 0x1083020e  beq         $a0, $v1, . + 4 + (0x20E << 2)
    ctx->pc = 0x16A56Cu;
    {
        const bool branch_taken_0x16a56c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A56Cu;
            // 0x16a570: 0x24030ce4  addiu       $v1, $zero, 0xCE4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a56c) {
            ctx->pc = 0x16ADA8u;
            goto label_16ada8;
        }
    }
    ctx->pc = 0x16A574u;
    // 0x16a574: 0x10830206  beq         $a0, $v1, . + 4 + (0x206 << 2)
    ctx->pc = 0x16A574u;
    {
        const bool branch_taken_0x16a574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a574) {
            ctx->pc = 0x16AD90u;
            goto label_16ad90;
        }
    }
    ctx->pc = 0x16A57Cu;
    // 0x16a57c: 0x24030cd0  addiu       $v1, $zero, 0xCD0
    ctx->pc = 0x16a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3280));
    // 0x16a580: 0x108301fd  beq         $a0, $v1, . + 4 + (0x1FD << 2)
    ctx->pc = 0x16A580u;
    {
        const bool branch_taken_0x16a580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A580u;
            // 0x16a584: 0x24030cbc  addiu       $v1, $zero, 0xCBC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a580) {
            ctx->pc = 0x16AD78u;
            goto label_16ad78;
        }
    }
    ctx->pc = 0x16A588u;
    // 0x16a588: 0x108301f5  beq         $a0, $v1, . + 4 + (0x1F5 << 2)
    ctx->pc = 0x16A588u;
    {
        const bool branch_taken_0x16a588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a588) {
            ctx->pc = 0x16AD60u;
            goto label_16ad60;
        }
    }
    ctx->pc = 0x16A590u;
    // 0x16a590: 0x24030ca8  addiu       $v1, $zero, 0xCA8
    ctx->pc = 0x16a590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3240));
    // 0x16a594: 0x108301ec  beq         $a0, $v1, . + 4 + (0x1EC << 2)
    ctx->pc = 0x16A594u;
    {
        const bool branch_taken_0x16a594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A594u;
            // 0x16a598: 0x24030c94  addiu       $v1, $zero, 0xC94 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a594) {
            ctx->pc = 0x16AD48u;
            goto label_16ad48;
        }
    }
    ctx->pc = 0x16A59Cu;
    // 0x16a59c: 0x108301e4  beq         $a0, $v1, . + 4 + (0x1E4 << 2)
    ctx->pc = 0x16A59Cu;
    {
        const bool branch_taken_0x16a59c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a59c) {
            ctx->pc = 0x16AD30u;
            goto label_16ad30;
        }
    }
    ctx->pc = 0x16A5A4u;
    // 0x16a5a4: 0x24030c80  addiu       $v1, $zero, 0xC80
    ctx->pc = 0x16a5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3200));
    // 0x16a5a8: 0x108301db  beq         $a0, $v1, . + 4 + (0x1DB << 2)
    ctx->pc = 0x16A5A8u;
    {
        const bool branch_taken_0x16a5a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A5A8u;
            // 0x16a5ac: 0x24030c1c  addiu       $v1, $zero, 0xC1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5a8) {
            ctx->pc = 0x16AD18u;
            goto label_16ad18;
        }
    }
    ctx->pc = 0x16A5B0u;
    // 0x16a5b0: 0x108301cf  beq         $a0, $v1, . + 4 + (0x1CF << 2)
    ctx->pc = 0x16A5B0u;
    {
        const bool branch_taken_0x16a5b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a5b0) {
            ctx->pc = 0x16ACF0u;
            goto label_16acf0;
        }
    }
    ctx->pc = 0x16A5B8u;
    // 0x16a5b8: 0x24030bb8  addiu       $v1, $zero, 0xBB8
    ctx->pc = 0x16a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x16a5bc: 0x108301c6  beq         $a0, $v1, . + 4 + (0x1C6 << 2)
    ctx->pc = 0x16A5BCu;
    {
        const bool branch_taken_0x16a5bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A5BCu;
            // 0x16a5c0: 0x24030b86  addiu       $v1, $zero, 0xB86 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2950));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5bc) {
            ctx->pc = 0x16ACD8u;
            goto label_16acd8;
        }
    }
    ctx->pc = 0x16A5C4u;
    // 0x16a5c4: 0x108301ba  beq         $a0, $v1, . + 4 + (0x1BA << 2)
    ctx->pc = 0x16A5C4u;
    {
        const bool branch_taken_0x16a5c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a5c4) {
            ctx->pc = 0x16ACB0u;
            goto label_16acb0;
        }
    }
    ctx->pc = 0x16A5CCu;
    // 0x16a5cc: 0x24030b40  addiu       $v1, $zero, 0xB40
    ctx->pc = 0x16a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2880));
    // 0x16a5d0: 0x108301ad  beq         $a0, $v1, . + 4 + (0x1AD << 2)
    ctx->pc = 0x16A5D0u;
    {
        const bool branch_taken_0x16a5d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A5D0u;
            // 0x16a5d4: 0x24030b2c  addiu       $v1, $zero, 0xB2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2860));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5d0) {
            ctx->pc = 0x16AC88u;
            goto label_16ac88;
        }
    }
    ctx->pc = 0x16A5D8u;
    // 0x16a5d8: 0x108301a1  beq         $a0, $v1, . + 4 + (0x1A1 << 2)
    ctx->pc = 0x16A5D8u;
    {
        const bool branch_taken_0x16a5d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a5d8) {
            ctx->pc = 0x16AC60u;
            goto label_16ac60;
        }
    }
    ctx->pc = 0x16A5E0u;
    // 0x16a5e0: 0x24030b18  addiu       $v1, $zero, 0xB18
    ctx->pc = 0x16a5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2840));
    // 0x16a5e4: 0x10830194  beq         $a0, $v1, . + 4 + (0x194 << 2)
    ctx->pc = 0x16A5E4u;
    {
        const bool branch_taken_0x16a5e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A5E4u;
            // 0x16a5e8: 0x24030b04  addiu       $v1, $zero, 0xB04 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5e4) {
            ctx->pc = 0x16AC38u;
            goto label_16ac38;
        }
    }
    ctx->pc = 0x16A5ECu;
    // 0x16a5ec: 0x10830188  beq         $a0, $v1, . + 4 + (0x188 << 2)
    ctx->pc = 0x16A5ECu;
    {
        const bool branch_taken_0x16a5ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a5ec) {
            ctx->pc = 0x16AC10u;
            goto label_16ac10;
        }
    }
    ctx->pc = 0x16A5F4u;
    // 0x16a5f4: 0x24030af0  addiu       $v1, $zero, 0xAF0
    ctx->pc = 0x16a5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2800));
    // 0x16a5f8: 0x1083017b  beq         $a0, $v1, . + 4 + (0x17B << 2)
    ctx->pc = 0x16A5F8u;
    {
        const bool branch_taken_0x16a5f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A5F8u;
            // 0x16a5fc: 0x240309c4  addiu       $v1, $zero, 0x9C4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5f8) {
            ctx->pc = 0x16ABE8u;
            goto label_16abe8;
        }
    }
    ctx->pc = 0x16A600u;
    // 0x16a600: 0x10830173  beq         $a0, $v1, . + 4 + (0x173 << 2)
    ctx->pc = 0x16A600u;
    {
        const bool branch_taken_0x16a600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a600) {
            ctx->pc = 0x16ABD0u;
            goto label_16abd0;
        }
    }
    ctx->pc = 0x16A608u;
    // 0x16a608: 0x24030960  addiu       $v1, $zero, 0x960
    ctx->pc = 0x16a608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2400));
    // 0x16a60c: 0x1083016a  beq         $a0, $v1, . + 4 + (0x16A << 2)
    ctx->pc = 0x16A60Cu;
    {
        const bool branch_taken_0x16a60c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A60Cu;
            // 0x16a610: 0x240308fc  addiu       $v1, $zero, 0x8FC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a60c) {
            ctx->pc = 0x16ABB8u;
            goto label_16abb8;
        }
    }
    ctx->pc = 0x16A614u;
    // 0x16a614: 0x10830162  beq         $a0, $v1, . + 4 + (0x162 << 2)
    ctx->pc = 0x16A614u;
    {
        const bool branch_taken_0x16a614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a614) {
            ctx->pc = 0x16ABA0u;
            goto label_16aba0;
        }
    }
    ctx->pc = 0x16A61Cu;
    // 0x16a61c: 0x240308ca  addiu       $v1, $zero, 0x8CA
    ctx->pc = 0x16a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2250));
    // 0x16a620: 0x10830159  beq         $a0, $v1, . + 4 + (0x159 << 2)
    ctx->pc = 0x16A620u;
    {
        const bool branch_taken_0x16a620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A620u;
            // 0x16a624: 0x240308ac  addiu       $v1, $zero, 0x8AC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a620) {
            ctx->pc = 0x16AB88u;
            goto label_16ab88;
        }
    }
    ctx->pc = 0x16A628u;
    // 0x16a628: 0x1083014d  beq         $a0, $v1, . + 4 + (0x14D << 2)
    ctx->pc = 0x16A628u;
    {
        const bool branch_taken_0x16a628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a628) {
            ctx->pc = 0x16AB60u;
            goto label_16ab60;
        }
    }
    ctx->pc = 0x16A630u;
    // 0x16a630: 0x24030898  addiu       $v1, $zero, 0x898
    ctx->pc = 0x16a630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x16a634: 0x10830140  beq         $a0, $v1, . + 4 + (0x140 << 2)
    ctx->pc = 0x16A634u;
    {
        const bool branch_taken_0x16a634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A634u;
            // 0x16a638: 0x24030834  addiu       $v1, $zero, 0x834 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a634) {
            ctx->pc = 0x16AB38u;
            goto label_16ab38;
        }
    }
    ctx->pc = 0x16A63Cu;
    // 0x16a63c: 0x10830128  beq         $a0, $v1, . + 4 + (0x128 << 2)
    ctx->pc = 0x16A63Cu;
    {
        const bool branch_taken_0x16a63c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a63c) {
            ctx->pc = 0x16AAE0u;
            goto label_16aae0;
        }
    }
    ctx->pc = 0x16A644u;
    // 0x16a644: 0x240307d0  addiu       $v1, $zero, 0x7D0
    ctx->pc = 0x16a644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x16a648: 0x1083011f  beq         $a0, $v1, . + 4 + (0x11F << 2)
    ctx->pc = 0x16A648u;
    {
        const bool branch_taken_0x16a648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A648u;
            // 0x16a64c: 0x24030780  addiu       $v1, $zero, 0x780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a648) {
            ctx->pc = 0x16AAC8u;
            goto label_16aac8;
        }
    }
    ctx->pc = 0x16A650u;
    // 0x16a650: 0x10830113  beq         $a0, $v1, . + 4 + (0x113 << 2)
    ctx->pc = 0x16A650u;
    {
        const bool branch_taken_0x16a650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a650) {
            ctx->pc = 0x16AAA0u;
            goto label_16aaa0;
        }
    }
    ctx->pc = 0x16A658u;
    // 0x16a658: 0x2403076c  addiu       $v1, $zero, 0x76C
    ctx->pc = 0x16a658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1900));
    // 0x16a65c: 0x1083010a  beq         $a0, $v1, . + 4 + (0x10A << 2)
    ctx->pc = 0x16A65Cu;
    {
        const bool branch_taken_0x16a65c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A65Cu;
            // 0x16a660: 0x24030708  addiu       $v1, $zero, 0x708 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a65c) {
            ctx->pc = 0x16AA88u;
            goto label_16aa88;
        }
    }
    ctx->pc = 0x16A664u;
    // 0x16a664: 0x108300ee  beq         $a0, $v1, . + 4 + (0xEE << 2)
    ctx->pc = 0x16A664u;
    {
        const bool branch_taken_0x16a664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a664) {
            ctx->pc = 0x16AA20u;
            goto label_16aa20;
        }
    }
    ctx->pc = 0x16A66Cu;
    // 0x16a66c: 0x240306d6  addiu       $v1, $zero, 0x6D6
    ctx->pc = 0x16a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1750));
    // 0x16a670: 0x108300e5  beq         $a0, $v1, . + 4 + (0xE5 << 2)
    ctx->pc = 0x16A670u;
    {
        const bool branch_taken_0x16a670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A670u;
            // 0x16a674: 0x240306a4  addiu       $v1, $zero, 0x6A4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a670) {
            ctx->pc = 0x16AA08u;
            goto label_16aa08;
        }
    }
    ctx->pc = 0x16A678u;
    // 0x16a678: 0x108300dd  beq         $a0, $v1, . + 4 + (0xDD << 2)
    ctx->pc = 0x16A678u;
    {
        const bool branch_taken_0x16a678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a678) {
            ctx->pc = 0x16A9F0u;
            goto label_16a9f0;
        }
    }
    ctx->pc = 0x16A680u;
    // 0x16a680: 0x24030641  addiu       $v1, $zero, 0x641
    ctx->pc = 0x16a680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1601));
    // 0x16a684: 0x108300d4  beq         $a0, $v1, . + 4 + (0xD4 << 2)
    ctx->pc = 0x16A684u;
    {
        const bool branch_taken_0x16a684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A684u;
            // 0x16a688: 0x24030640  addiu       $v1, $zero, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a684) {
            ctx->pc = 0x16A9D8u;
            goto label_16a9d8;
        }
    }
    ctx->pc = 0x16A68Cu;
    // 0x16a68c: 0x1083021a  beq         $a0, $v1, . + 4 + (0x21A << 2)
    ctx->pc = 0x16A68Cu;
    {
        const bool branch_taken_0x16a68c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a68c) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A694u;
    // 0x16a694: 0x240305fa  addiu       $v1, $zero, 0x5FA
    ctx->pc = 0x16a694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1530));
    // 0x16a698: 0x108300c9  beq         $a0, $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x16A698u;
    {
        const bool branch_taken_0x16a698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A698u;
            // 0x16a69c: 0x240305dc  addiu       $v1, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a698) {
            ctx->pc = 0x16A9C0u;
            goto label_16a9c0;
        }
    }
    ctx->pc = 0x16A6A0u;
    // 0x16a6a0: 0x108300c1  beq         $a0, $v1, . + 4 + (0xC1 << 2)
    ctx->pc = 0x16A6A0u;
    {
        const bool branch_taken_0x16a6a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a6a0) {
            ctx->pc = 0x16A9A8u;
            goto label_16a9a8;
        }
    }
    ctx->pc = 0x16A6A8u;
    // 0x16a6a8: 0x24030578  addiu       $v1, $zero, 0x578
    ctx->pc = 0x16a6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
    // 0x16a6ac: 0x10830212  beq         $a0, $v1, . + 4 + (0x212 << 2)
    ctx->pc = 0x16A6ACu;
    {
        const bool branch_taken_0x16a6ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A6ACu;
            // 0x16a6b0: 0x24030532  addiu       $v1, $zero, 0x532 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1330));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6ac) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A6B4u;
    // 0x16a6b4: 0x108300b6  beq         $a0, $v1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x16A6B4u;
    {
        const bool branch_taken_0x16a6b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a6b4) {
            ctx->pc = 0x16A990u;
            goto label_16a990;
        }
    }
    ctx->pc = 0x16A6BCu;
    // 0x16a6bc: 0x24030514  addiu       $v1, $zero, 0x514
    ctx->pc = 0x16a6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1300));
    // 0x16a6c0: 0x108300ad  beq         $a0, $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x16A6C0u;
    {
        const bool branch_taken_0x16a6c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A6C0u;
            // 0x16a6c4: 0x240304b0  addiu       $v1, $zero, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6c0) {
            ctx->pc = 0x16A978u;
            goto label_16a978;
        }
    }
    ctx->pc = 0x16A6C8u;
    // 0x16a6c8: 0x108300a5  beq         $a0, $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x16A6C8u;
    {
        const bool branch_taken_0x16a6c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a6c8) {
            ctx->pc = 0x16A960u;
            goto label_16a960;
        }
    }
    ctx->pc = 0x16A6D0u;
    // 0x16a6d0: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x16a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x16a6d4: 0x10830098  beq         $a0, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x16A6D4u;
    {
        const bool branch_taken_0x16a6d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A6D4u;
            // 0x16a6d8: 0x24030352  addiu       $v1, $zero, 0x352 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 850));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6d4) {
            ctx->pc = 0x16A938u;
            goto label_16a938;
        }
    }
    ctx->pc = 0x16A6DCu;
    // 0x16a6dc: 0x10830090  beq         $a0, $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x16A6DCu;
    {
        const bool branch_taken_0x16a6dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a6dc) {
            ctx->pc = 0x16A920u;
            goto label_16a920;
        }
    }
    ctx->pc = 0x16A6E4u;
    // 0x16a6e4: 0x24030320  addiu       $v1, $zero, 0x320
    ctx->pc = 0x16a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x16a6e8: 0x10830203  beq         $a0, $v1, . + 4 + (0x203 << 2)
    ctx->pc = 0x16A6E8u;
    {
        const bool branch_taken_0x16a6e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A6E8u;
            // 0x16a6ec: 0x240302ee  addiu       $v1, $zero, 0x2EE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6e8) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A6F0u;
    // 0x16a6f0: 0x1083007d  beq         $a0, $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x16A6F0u;
    {
        const bool branch_taken_0x16a6f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a6f0) {
            ctx->pc = 0x16A8E8u;
            goto label_16a8e8;
        }
    }
    ctx->pc = 0x16A6F8u;
    // 0x16a6f8: 0x240302bc  addiu       $v1, $zero, 0x2BC
    ctx->pc = 0x16a6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
    // 0x16a6fc: 0x10830074  beq         $a0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x16A6FCu;
    {
        const bool branch_taken_0x16a6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A6FCu;
            // 0x16a700: 0x2403028a  addiu       $v1, $zero, 0x28A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 650));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6fc) {
            ctx->pc = 0x16A8D0u;
            goto label_16a8d0;
        }
    }
    ctx->pc = 0x16A704u;
    // 0x16a704: 0x10830064  beq         $a0, $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x16A704u;
    {
        const bool branch_taken_0x16a704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a704) {
            ctx->pc = 0x16A898u;
            goto label_16a898;
        }
    }
    ctx->pc = 0x16A70Cu;
    // 0x16a70c: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x16a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x16a710: 0x1083005b  beq         $a0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x16A710u;
    {
        const bool branch_taken_0x16a710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A710u;
            // 0x16a714: 0x24030226  addiu       $v1, $zero, 0x226 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a710) {
            ctx->pc = 0x16A880u;
            goto label_16a880;
        }
    }
    ctx->pc = 0x16A718u;
    // 0x16a718: 0x108301f7  beq         $a0, $v1, . + 4 + (0x1F7 << 2)
    ctx->pc = 0x16A718u;
    {
        const bool branch_taken_0x16a718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a718) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A720u;
    // 0x16a720: 0x240301f4  addiu       $v1, $zero, 0x1F4
    ctx->pc = 0x16a720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x16a724: 0x10830050  beq         $a0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x16A724u;
    {
        const bool branch_taken_0x16a724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A724u;
            // 0x16a728: 0x240301c2  addiu       $v1, $zero, 0x1C2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a724) {
            ctx->pc = 0x16A868u;
            goto label_16a868;
        }
    }
    ctx->pc = 0x16A72Cu;
    // 0x16a72c: 0x108301f2  beq         $a0, $v1, . + 4 + (0x1F2 << 2)
    ctx->pc = 0x16A72Cu;
    {
        const bool branch_taken_0x16a72c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a72c) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A734u;
    // 0x16a734: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x16a734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x16a738: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x16A738u;
    {
        const bool branch_taken_0x16a738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A738u;
            // 0x16a73c: 0x2403014a  addiu       $v1, $zero, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a738) {
            ctx->pc = 0x16A830u;
            goto label_16a830;
        }
    }
    ctx->pc = 0x16A740u;
    // 0x16a740: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x16A740u;
    {
        const bool branch_taken_0x16a740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a740) {
            ctx->pc = 0x16A808u;
            goto label_16a808;
        }
    }
    ctx->pc = 0x16A748u;
    // 0x16a748: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x16a748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x16a74c: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x16A74Cu;
    {
        const bool branch_taken_0x16a74c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A74Cu;
            // 0x16a750: 0x240300e6  addiu       $v1, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a74c) {
            ctx->pc = 0x16A7D0u;
            goto label_16a7d0;
        }
    }
    ctx->pc = 0x16A754u;
    // 0x16a754: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x16A754u;
    {
        const bool branch_taken_0x16a754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a754) {
            ctx->pc = 0x16A7A8u;
            goto label_16a7a8;
        }
    }
    ctx->pc = 0x16A75Cu;
    // 0x16a75c: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x16a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x16a760: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16A760u;
    {
        const bool branch_taken_0x16a760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A760u;
            // 0x16a764: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a760) {
            ctx->pc = 0x16A790u;
            goto label_16a790;
        }
    }
    ctx->pc = 0x16A768u;
    // 0x16a768: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A768u;
    {
        const bool branch_taken_0x16a768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a768) {
            ctx->pc = 0x16A778u;
            goto label_16a778;
        }
    }
    ctx->pc = 0x16A770u;
    // 0x16a770: 0x100001e1  b           . + 4 + (0x1E1 << 2)
    ctx->pc = 0x16A770u;
    {
        const bool branch_taken_0x16a770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a770) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A778u;
label_16a778:
    // 0x16a778: 0xc05d004  jal         func_174010
    ctx->pc = 0x16A778u;
    SET_GPR_U32(ctx, 31, 0x16A780u);
    ctx->pc = 0x16A77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A778u;
            // 0x16a77c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A780u; }
        if (ctx->pc != 0x16A780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A780u; }
        if (ctx->pc != 0x16A780u) { return; }
    }
    ctx->pc = 0x16A780u;
    // 0x16a780: 0xc056050  jal         func_158140
    ctx->pc = 0x16A780u;
    SET_GPR_U32(ctx, 31, 0x16A788u);
    ctx->pc = 0x158140u;
    if (runtime->hasFunction(0x158140u)) {
        auto targetFn = runtime->lookupFunction(0x158140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A788u; }
        if (ctx->pc != 0x16A788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuOk_0x158140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A788u; }
        if (ctx->pc != 0x16A788u) { return; }
    }
    ctx->pc = 0x16A788u;
    // 0x16a788: 0x100001db  b           . + 4 + (0x1DB << 2)
    ctx->pc = 0x16A788u;
    {
        const bool branch_taken_0x16a788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a788) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A790u;
label_16a790:
    // 0x16a790: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16a790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16a794: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x16a794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16a798: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16A798u;
    SET_GPR_U32(ctx, 31, 0x16A7A0u);
    ctx->pc = 0x16A79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A798u;
            // 0x16a79c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7A0u; }
        if (ctx->pc != 0x16A7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7A0u; }
        if (ctx->pc != 0x16A7A0u) { return; }
    }
    ctx->pc = 0x16A7A0u;
    // 0x16a7a0: 0x100001d5  b           . + 4 + (0x1D5 << 2)
    ctx->pc = 0x16A7A0u;
    {
        const bool branch_taken_0x16a7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a7a0) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A7A8u;
label_16a7a8:
    // 0x16a7a8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16a7ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a7b0: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16A7B0u;
    SET_GPR_U32(ctx, 31, 0x16A7B8u);
    ctx->pc = 0x16A7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A7B0u;
            // 0x16a7b4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7B8u; }
        if (ctx->pc != 0x16A7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7B8u; }
        if (ctx->pc != 0x16A7B8u) { return; }
    }
    ctx->pc = 0x16A7B8u;
    // 0x16a7b8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16a7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16a7bc: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16a7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16a7c0: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16A7C0u;
    SET_GPR_U32(ctx, 31, 0x16A7C8u);
    ctx->pc = 0x16A7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A7C0u;
            // 0x16a7c4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7C8u; }
        if (ctx->pc != 0x16A7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7C8u; }
        if (ctx->pc != 0x16A7C8u) { return; }
    }
    ctx->pc = 0x16A7C8u;
    // 0x16a7c8: 0x100001cb  b           . + 4 + (0x1CB << 2)
    ctx->pc = 0x16A7C8u;
    {
        const bool branch_taken_0x16a7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a7c8) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A7D0u;
label_16a7d0:
    // 0x16a7d0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x16a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16a7d4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16a7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16a7d8: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16A7D8u;
    SET_GPR_U32(ctx, 31, 0x16A7E0u);
    ctx->pc = 0x16A7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A7D8u;
            // 0x16a7dc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7E0u; }
        if (ctx->pc != 0x16A7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7E0u; }
        if (ctx->pc != 0x16A7E0u) { return; }
    }
    ctx->pc = 0x16A7E0u;
    // 0x16a7e0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x16a7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16a7e4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16a7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16a7e8: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16A7E8u;
    SET_GPR_U32(ctx, 31, 0x16A7F0u);
    ctx->pc = 0x16A7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A7E8u;
            // 0x16a7ec: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7F0u; }
        if (ctx->pc != 0x16A7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7F0u; }
        if (ctx->pc != 0x16A7F0u) { return; }
    }
    ctx->pc = 0x16A7F0u;
    // 0x16a7f0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16a7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16a7f4: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x16a7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x16a7f8: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16A7F8u;
    SET_GPR_U32(ctx, 31, 0x16A800u);
    ctx->pc = 0x16A7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A7F8u;
            // 0x16a7fc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A800u; }
        if (ctx->pc != 0x16A800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A800u; }
        if (ctx->pc != 0x16A800u) { return; }
    }
    ctx->pc = 0x16A800u;
    // 0x16a800: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x16A800u;
    {
        const bool branch_taken_0x16a800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a800) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A808u;
label_16a808:
    // 0x16a808: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16a808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16a80c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a810: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16A810u;
    SET_GPR_U32(ctx, 31, 0x16A818u);
    ctx->pc = 0x16A814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A810u;
            // 0x16a814: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A818u; }
        if (ctx->pc != 0x16A818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A818u; }
        if (ctx->pc != 0x16A818u) { return; }
    }
    ctx->pc = 0x16A818u;
    // 0x16a818: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16a818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16a81c: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16a81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16a820: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16A820u;
    SET_GPR_U32(ctx, 31, 0x16A828u);
    ctx->pc = 0x16A824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A820u;
            // 0x16a824: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A828u; }
        if (ctx->pc != 0x16A828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A828u; }
        if (ctx->pc != 0x16A828u) { return; }
    }
    ctx->pc = 0x16A828u;
    // 0x16a828: 0x100001b3  b           . + 4 + (0x1B3 << 2)
    ctx->pc = 0x16A828u;
    {
        const bool branch_taken_0x16a828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a828) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A830u;
label_16a830:
    // 0x16a830: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x16a830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16a834: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16a834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16a838: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16A838u;
    SET_GPR_U32(ctx, 31, 0x16A840u);
    ctx->pc = 0x16A83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A838u;
            // 0x16a83c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A840u; }
        if (ctx->pc != 0x16A840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A840u; }
        if (ctx->pc != 0x16A840u) { return; }
    }
    ctx->pc = 0x16A840u;
    // 0x16a840: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x16a840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16a844: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16a844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16a848: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16A848u;
    SET_GPR_U32(ctx, 31, 0x16A850u);
    ctx->pc = 0x16A84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A848u;
            // 0x16a84c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A850u; }
        if (ctx->pc != 0x16A850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A850u; }
        if (ctx->pc != 0x16A850u) { return; }
    }
    ctx->pc = 0x16A850u;
    // 0x16a850: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16a850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a854: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16a854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16a858: 0xc06a540  jal         func_1A9500
    ctx->pc = 0x16A858u;
    SET_GPR_U32(ctx, 31, 0x16A860u);
    ctx->pc = 0x16A85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A858u;
            // 0x16a85c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9500u;
    if (runtime->hasFunction(0x1A9500u)) {
        auto targetFn = runtime->lookupFunction(0x1A9500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A860u; }
        if (ctx->pc != 0x16A860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_01_0x1a9500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A860u; }
        if (ctx->pc != 0x16A860u) { return; }
    }
    ctx->pc = 0x16A860u;
    // 0x16a860: 0x100001a5  b           . + 4 + (0x1A5 << 2)
    ctx->pc = 0x16A860u;
    {
        const bool branch_taken_0x16a860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a860) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A868u;
label_16a868:
    // 0x16a868: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a86c: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16a86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16a870: 0xc06a540  jal         func_1A9500
    ctx->pc = 0x16A870u;
    SET_GPR_U32(ctx, 31, 0x16A878u);
    ctx->pc = 0x16A874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A870u;
            // 0x16a874: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9500u;
    if (runtime->hasFunction(0x1A9500u)) {
        auto targetFn = runtime->lookupFunction(0x1A9500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A878u; }
        if (ctx->pc != 0x16A878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_01_0x1a9500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A878u; }
        if (ctx->pc != 0x16A878u) { return; }
    }
    ctx->pc = 0x16A878u;
    // 0x16a878: 0x1000019f  b           . + 4 + (0x19F << 2)
    ctx->pc = 0x16A878u;
    {
        const bool branch_taken_0x16a878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a878) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A880u;
label_16a880:
    // 0x16a880: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16a880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a884: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16a884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16a888: 0xc06a540  jal         func_1A9500
    ctx->pc = 0x16A888u;
    SET_GPR_U32(ctx, 31, 0x16A890u);
    ctx->pc = 0x16A88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A888u;
            // 0x16a88c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9500u;
    if (runtime->hasFunction(0x1A9500u)) {
        auto targetFn = runtime->lookupFunction(0x1A9500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A890u; }
        if (ctx->pc != 0x16A890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_01_0x1a9500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A890u; }
        if (ctx->pc != 0x16A890u) { return; }
    }
    ctx->pc = 0x16A890u;
    // 0x16a890: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x16A890u;
    {
        const bool branch_taken_0x16a890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a890) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A898u;
label_16a898:
    // 0x16a898: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16a89c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16a89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16a8a0: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16A8A0u;
    SET_GPR_U32(ctx, 31, 0x16A8A8u);
    ctx->pc = 0x16A8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A8A0u;
            // 0x16a8a4: 0x2406fffa  addiu       $a2, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8A8u; }
        if (ctx->pc != 0x16A8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8A8u; }
        if (ctx->pc != 0x16A8A8u) { return; }
    }
    ctx->pc = 0x16A8A8u;
    // 0x16a8a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16a8ac: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16a8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16a8b0: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16A8B0u;
    SET_GPR_U32(ctx, 31, 0x16A8B8u);
    ctx->pc = 0x16A8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A8B0u;
            // 0x16a8b4: 0x2406fff4  addiu       $a2, $zero, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8B8u; }
        if (ctx->pc != 0x16A8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8B8u; }
        if (ctx->pc != 0x16A8B8u) { return; }
    }
    ctx->pc = 0x16A8B8u;
    // 0x16a8b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16a8bc: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16a8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16a8c0: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16A8C0u;
    SET_GPR_U32(ctx, 31, 0x16A8C8u);
    ctx->pc = 0x16A8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A8C0u;
            // 0x16a8c4: 0x2406ffee  addiu       $a2, $zero, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967278));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8C8u; }
        if (ctx->pc != 0x16A8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8C8u; }
        if (ctx->pc != 0x16A8C8u) { return; }
    }
    ctx->pc = 0x16A8C8u;
    // 0x16a8c8: 0x1000018b  b           . + 4 + (0x18B << 2)
    ctx->pc = 0x16A8C8u;
    {
        const bool branch_taken_0x16a8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a8c8) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A8D0u;
label_16a8d0:
    // 0x16a8d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8d4: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16a8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16a8d8: 0xc06a540  jal         func_1A9500
    ctx->pc = 0x16A8D8u;
    SET_GPR_U32(ctx, 31, 0x16A8E0u);
    ctx->pc = 0x16A8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A8D8u;
            // 0x16a8dc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9500u;
    if (runtime->hasFunction(0x1A9500u)) {
        auto targetFn = runtime->lookupFunction(0x1A9500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8E0u; }
        if (ctx->pc != 0x16A8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_01_0x1a9500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8E0u; }
        if (ctx->pc != 0x16A8E0u) { return; }
    }
    ctx->pc = 0x16A8E0u;
    // 0x16a8e0: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x16A8E0u;
    {
        const bool branch_taken_0x16a8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a8e0) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A8E8u;
label_16a8e8:
    // 0x16a8e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16a8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a8ec: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16a8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16a8f0: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16A8F0u;
    SET_GPR_U32(ctx, 31, 0x16A8F8u);
    ctx->pc = 0x16A8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A8F0u;
            // 0x16a8f4: 0x2406fffa  addiu       $a2, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8F8u; }
        if (ctx->pc != 0x16A8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8F8u; }
        if (ctx->pc != 0x16A8F8u) { return; }
    }
    ctx->pc = 0x16A8F8u;
    // 0x16a8f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a8fc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16a8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16a900: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16A900u;
    SET_GPR_U32(ctx, 31, 0x16A908u);
    ctx->pc = 0x16A904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A900u;
            // 0x16a904: 0x2406fff4  addiu       $a2, $zero, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A908u; }
        if (ctx->pc != 0x16A908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A908u; }
        if (ctx->pc != 0x16A908u) { return; }
    }
    ctx->pc = 0x16A908u;
    // 0x16a908: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16a908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a90c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16a90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16a910: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16A910u;
    SET_GPR_U32(ctx, 31, 0x16A918u);
    ctx->pc = 0x16A914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A910u;
            // 0x16a914: 0x2406ffee  addiu       $a2, $zero, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967278));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A918u; }
        if (ctx->pc != 0x16A918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A918u; }
        if (ctx->pc != 0x16A918u) { return; }
    }
    ctx->pc = 0x16A918u;
    // 0x16a918: 0x10000177  b           . + 4 + (0x177 << 2)
    ctx->pc = 0x16A918u;
    {
        const bool branch_taken_0x16a918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a918) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A920u;
label_16a920:
    // 0x16a920: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a928: 0xc06ad98  jal         func_1AB660
    ctx->pc = 0x16A928u;
    SET_GPR_U32(ctx, 31, 0x16A930u);
    ctx->pc = 0x16A92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A928u;
            // 0x16a92c: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB660u;
    if (runtime->hasFunction(0x1AB660u)) {
        auto targetFn = runtime->lookupFunction(0x1AB660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A930u; }
        if (ctx->pc != 0x16A930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_03_0x1ab660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A930u; }
        if (ctx->pc != 0x16A930u) { return; }
    }
    ctx->pc = 0x16A930u;
    // 0x16a930: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x16A930u;
    {
        const bool branch_taken_0x16a930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a930) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A938u;
label_16a938:
    // 0x16a938: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16a938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a93c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16a93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16a940: 0xc06a540  jal         func_1A9500
    ctx->pc = 0x16A940u;
    SET_GPR_U32(ctx, 31, 0x16A948u);
    ctx->pc = 0x16A944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A940u;
            // 0x16a944: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9500u;
    if (runtime->hasFunction(0x1A9500u)) {
        auto targetFn = runtime->lookupFunction(0x1A9500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A948u; }
        if (ctx->pc != 0x16A948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_01_0x1a9500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A948u; }
        if (ctx->pc != 0x16A948u) { return; }
    }
    ctx->pc = 0x16A948u;
    // 0x16a948: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a94c: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16a94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16a950: 0xc06a540  jal         func_1A9500
    ctx->pc = 0x16A950u;
    SET_GPR_U32(ctx, 31, 0x16A958u);
    ctx->pc = 0x16A954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A950u;
            // 0x16a954: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9500u;
    if (runtime->hasFunction(0x1A9500u)) {
        auto targetFn = runtime->lookupFunction(0x1A9500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A958u; }
        if (ctx->pc != 0x16A958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_01_0x1a9500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A958u; }
        if (ctx->pc != 0x16A958u) { return; }
    }
    ctx->pc = 0x16A958u;
    // 0x16a958: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x16A958u;
    {
        const bool branch_taken_0x16a958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a958) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A960u;
label_16a960:
    // 0x16a960: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16a960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a968: 0xc06ad98  jal         func_1AB660
    ctx->pc = 0x16A968u;
    SET_GPR_U32(ctx, 31, 0x16A970u);
    ctx->pc = 0x16A96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A968u;
            // 0x16a96c: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB660u;
    if (runtime->hasFunction(0x1AB660u)) {
        auto targetFn = runtime->lookupFunction(0x1AB660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A970u; }
        if (ctx->pc != 0x16A970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_03_0x1ab660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A970u; }
        if (ctx->pc != 0x16A970u) { return; }
    }
    ctx->pc = 0x16A970u;
    // 0x16a970: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x16A970u;
    {
        const bool branch_taken_0x16a970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a970) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A978u;
label_16a978:
    // 0x16a978: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16a978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16a97c: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x16a97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x16a980: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16A980u;
    SET_GPR_U32(ctx, 31, 0x16A988u);
    ctx->pc = 0x16A984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A980u;
            // 0x16a984: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A988u; }
        if (ctx->pc != 0x16A988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A988u; }
        if (ctx->pc != 0x16A988u) { return; }
    }
    ctx->pc = 0x16A988u;
    // 0x16a988: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x16A988u;
    {
        const bool branch_taken_0x16a988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a988) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A990u;
label_16a990:
    // 0x16a990: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16a990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16a994: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16a994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16a998: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16A998u;
    SET_GPR_U32(ctx, 31, 0x16A9A0u);
    ctx->pc = 0x16A99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A998u;
            // 0x16a99c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A9A0u; }
        if (ctx->pc != 0x16A9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A9A0u; }
        if (ctx->pc != 0x16A9A0u) { return; }
    }
    ctx->pc = 0x16A9A0u;
    // 0x16a9a0: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x16A9A0u;
    {
        const bool branch_taken_0x16a9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a9a0) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A9A8u;
label_16a9a8:
    // 0x16a9a8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16a9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16a9ac: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x16a9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16a9b0: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16A9B0u;
    SET_GPR_U32(ctx, 31, 0x16A9B8u);
    ctx->pc = 0x16A9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A9B0u;
            // 0x16a9b4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A9B8u; }
        if (ctx->pc != 0x16A9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A9B8u; }
        if (ctx->pc != 0x16A9B8u) { return; }
    }
    ctx->pc = 0x16A9B8u;
    // 0x16a9b8: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x16A9B8u;
    {
        const bool branch_taken_0x16a9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a9b8) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A9C0u;
label_16a9c0:
    // 0x16a9c0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16a9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16a9c4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16a9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16a9c8: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16A9C8u;
    SET_GPR_U32(ctx, 31, 0x16A9D0u);
    ctx->pc = 0x16A9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A9C8u;
            // 0x16a9cc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A9D0u; }
        if (ctx->pc != 0x16A9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A9D0u; }
        if (ctx->pc != 0x16A9D0u) { return; }
    }
    ctx->pc = 0x16A9D0u;
    // 0x16a9d0: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x16A9D0u;
    {
        const bool branch_taken_0x16a9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a9d0) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A9D8u;
label_16a9d8:
    // 0x16a9d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9dc: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16a9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16a9e0: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x16A9E0u;
    SET_GPR_U32(ctx, 31, 0x16A9E8u);
    ctx->pc = 0x16A9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A9E0u;
            // 0x16a9e4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A9E8u; }
        if (ctx->pc != 0x16A9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItemCareer_0x1df800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A9E8u; }
        if (ctx->pc != 0x16A9E8u) { return; }
    }
    ctx->pc = 0x16A9E8u;
    // 0x16a9e8: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x16A9E8u;
    {
        const bool branch_taken_0x16a9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a9e8) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16A9F0u;
label_16a9f0:
    // 0x16a9f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16a9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a9f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9f8: 0xc06b578  jal         func_1AD5E0
    ctx->pc = 0x16A9F8u;
    SET_GPR_U32(ctx, 31, 0x16AA00u);
    ctx->pc = 0x16A9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A9F8u;
            // 0x16a9fc: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5E0u;
    if (runtime->hasFunction(0x1AD5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1AD5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA00u; }
        if (ctx->pc != 0x16AA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_05_0x1ad5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA00u; }
        if (ctx->pc != 0x16AA00u) { return; }
    }
    ctx->pc = 0x16AA00u;
    // 0x16aa00: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x16AA00u;
    {
        const bool branch_taken_0x16aa00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aa00) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AA08u;
label_16aa08:
    // 0x16aa08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16aa08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16aa0c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16aa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16aa10: 0xc06b578  jal         func_1AD5E0
    ctx->pc = 0x16AA10u;
    SET_GPR_U32(ctx, 31, 0x16AA18u);
    ctx->pc = 0x16AA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA10u;
            // 0x16aa14: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5E0u;
    if (runtime->hasFunction(0x1AD5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1AD5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA18u; }
        if (ctx->pc != 0x16AA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_05_0x1ad5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA18u; }
        if (ctx->pc != 0x16AA18u) { return; }
    }
    ctx->pc = 0x16AA18u;
    // 0x16aa18: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x16AA18u;
    {
        const bool branch_taken_0x16aa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aa18) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AA20u;
label_16aa20:
    // 0x16aa20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16aa20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa24: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16aa24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16aa28: 0xc06b578  jal         func_1AD5E0
    ctx->pc = 0x16AA28u;
    SET_GPR_U32(ctx, 31, 0x16AA30u);
    ctx->pc = 0x16AA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA28u;
            // 0x16aa2c: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5E0u;
    if (runtime->hasFunction(0x1AD5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1AD5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA30u; }
        if (ctx->pc != 0x16AA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_05_0x1ad5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA30u; }
        if (ctx->pc != 0x16AA30u) { return; }
    }
    ctx->pc = 0x16AA30u;
    // 0x16aa30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16aa30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16aa34: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16aa34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16aa38: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AA38u;
    SET_GPR_U32(ctx, 31, 0x16AA40u);
    ctx->pc = 0x16AA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA38u;
            // 0x16aa3c: 0x2406fffa  addiu       $a2, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA40u; }
        if (ctx->pc != 0x16AA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA40u; }
        if (ctx->pc != 0x16AA40u) { return; }
    }
    ctx->pc = 0x16AA40u;
    // 0x16aa40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16aa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16aa44: 0x2405ffd3  addiu       $a1, $zero, -0x2D
    ctx->pc = 0x16aa44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
    // 0x16aa48: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AA48u;
    SET_GPR_U32(ctx, 31, 0x16AA50u);
    ctx->pc = 0x16AA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA48u;
            // 0x16aa4c: 0x2406fff4  addiu       $a2, $zero, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA50u; }
        if (ctx->pc != 0x16AA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA50u; }
        if (ctx->pc != 0x16AA50u) { return; }
    }
    ctx->pc = 0x16AA50u;
    // 0x16aa50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16aa50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16aa54: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16aa54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x16aa58: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AA58u;
    SET_GPR_U32(ctx, 31, 0x16AA60u);
    ctx->pc = 0x16AA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA58u;
            // 0x16aa5c: 0x2406ffee  addiu       $a2, $zero, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967278));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA60u; }
        if (ctx->pc != 0x16AA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA60u; }
        if (ctx->pc != 0x16AA60u) { return; }
    }
    ctx->pc = 0x16AA60u;
    // 0x16aa60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16aa60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16aa64: 0x2405ffce  addiu       $a1, $zero, -0x32
    ctx->pc = 0x16aa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
    // 0x16aa68: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AA68u;
    SET_GPR_U32(ctx, 31, 0x16AA70u);
    ctx->pc = 0x16AA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA68u;
            // 0x16aa6c: 0x2406fffa  addiu       $a2, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA70u; }
        if (ctx->pc != 0x16AA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA70u; }
        if (ctx->pc != 0x16AA70u) { return; }
    }
    ctx->pc = 0x16AA70u;
    // 0x16aa70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16aa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16aa74: 0x2405ffce  addiu       $a1, $zero, -0x32
    ctx->pc = 0x16aa74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
    // 0x16aa78: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AA78u;
    SET_GPR_U32(ctx, 31, 0x16AA80u);
    ctx->pc = 0x16AA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA78u;
            // 0x16aa7c: 0x2406ffee  addiu       $a2, $zero, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967278));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA80u; }
        if (ctx->pc != 0x16AA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA80u; }
        if (ctx->pc != 0x16AA80u) { return; }
    }
    ctx->pc = 0x16AA80u;
    // 0x16aa80: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x16AA80u;
    {
        const bool branch_taken_0x16aa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aa80) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AA88u;
label_16aa88:
    // 0x16aa88: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x16aa88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16aa8c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x16aa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16aa90: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AA90u;
    SET_GPR_U32(ctx, 31, 0x16AA98u);
    ctx->pc = 0x16AA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA90u;
            // 0x16aa94: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA98u; }
        if (ctx->pc != 0x16AA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA98u; }
        if (ctx->pc != 0x16AA98u) { return; }
    }
    ctx->pc = 0x16AA98u;
    // 0x16aa98: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x16AA98u;
    {
        const bool branch_taken_0x16aa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aa98) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AAA0u;
label_16aaa0:
    // 0x16aaa0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x16aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16aaa4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16aaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16aaa8: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AAA8u;
    SET_GPR_U32(ctx, 31, 0x16AAB0u);
    ctx->pc = 0x16AAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AAA8u;
            // 0x16aaac: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AAB0u; }
        if (ctx->pc != 0x16AAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AAB0u; }
        if (ctx->pc != 0x16AAB0u) { return; }
    }
    ctx->pc = 0x16AAB0u;
    // 0x16aab0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x16aab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16aab4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x16aab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x16aab8: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AAB8u;
    SET_GPR_U32(ctx, 31, 0x16AAC0u);
    ctx->pc = 0x16AABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AAB8u;
            // 0x16aabc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AAC0u; }
        if (ctx->pc != 0x16AAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AAC0u; }
        if (ctx->pc != 0x16AAC0u) { return; }
    }
    ctx->pc = 0x16AAC0u;
    // 0x16aac0: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x16AAC0u;
    {
        const bool branch_taken_0x16aac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aac0) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AAC8u;
label_16aac8:
    // 0x16aac8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16aac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16aacc: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16aaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16aad0: 0xc06b578  jal         func_1AD5E0
    ctx->pc = 0x16AAD0u;
    SET_GPR_U32(ctx, 31, 0x16AAD8u);
    ctx->pc = 0x16AAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AAD0u;
            // 0x16aad4: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5E0u;
    if (runtime->hasFunction(0x1AD5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1AD5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AAD8u; }
        if (ctx->pc != 0x16AAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_05_0x1ad5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AAD8u; }
        if (ctx->pc != 0x16AAD8u) { return; }
    }
    ctx->pc = 0x16AAD8u;
    // 0x16aad8: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x16AAD8u;
    {
        const bool branch_taken_0x16aad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aad8) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AAE0u;
label_16aae0:
    // 0x16aae0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16aae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16aae4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16aae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16aae8: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AAE8u;
    SET_GPR_U32(ctx, 31, 0x16AAF0u);
    ctx->pc = 0x16AAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AAE8u;
            // 0x16aaec: 0x2406fffa  addiu       $a2, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AAF0u; }
        if (ctx->pc != 0x16AAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AAF0u; }
        if (ctx->pc != 0x16AAF0u) { return; }
    }
    ctx->pc = 0x16AAF0u;
    // 0x16aaf0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16aaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16aaf4: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x16aaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x16aaf8: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AAF8u;
    SET_GPR_U32(ctx, 31, 0x16AB00u);
    ctx->pc = 0x16AAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AAF8u;
            // 0x16aafc: 0x2406fff4  addiu       $a2, $zero, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB00u; }
        if (ctx->pc != 0x16AB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB00u; }
        if (ctx->pc != 0x16AB00u) { return; }
    }
    ctx->pc = 0x16AB00u;
    // 0x16ab00: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ab04: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x16ab04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16ab08: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AB08u;
    SET_GPR_U32(ctx, 31, 0x16AB10u);
    ctx->pc = 0x16AB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB08u;
            // 0x16ab0c: 0x2406ffee  addiu       $a2, $zero, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967278));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB10u; }
        if (ctx->pc != 0x16AB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB10u; }
        if (ctx->pc != 0x16AB10u) { return; }
    }
    ctx->pc = 0x16AB10u;
    // 0x16ab10: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16ab10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ab14: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x16ab14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x16ab18: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AB18u;
    SET_GPR_U32(ctx, 31, 0x16AB20u);
    ctx->pc = 0x16AB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB18u;
            // 0x16ab1c: 0x2406fffa  addiu       $a2, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB20u; }
        if (ctx->pc != 0x16AB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB20u; }
        if (ctx->pc != 0x16AB20u) { return; }
    }
    ctx->pc = 0x16AB20u;
    // 0x16ab20: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16ab20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ab24: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x16ab24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x16ab28: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AB28u;
    SET_GPR_U32(ctx, 31, 0x16AB30u);
    ctx->pc = 0x16AB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB28u;
            // 0x16ab2c: 0x2406ffee  addiu       $a2, $zero, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967278));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB30u; }
        if (ctx->pc != 0x16AB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB30u; }
        if (ctx->pc != 0x16AB30u) { return; }
    }
    ctx->pc = 0x16AB30u;
    // 0x16ab30: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x16AB30u;
    {
        const bool branch_taken_0x16ab30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ab30) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AB38u;
label_16ab38:
    // 0x16ab38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16ab38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab3c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16ab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16ab40: 0xc06b578  jal         func_1AD5E0
    ctx->pc = 0x16AB40u;
    SET_GPR_U32(ctx, 31, 0x16AB48u);
    ctx->pc = 0x16AB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB40u;
            // 0x16ab44: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5E0u;
    if (runtime->hasFunction(0x1AD5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1AD5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB48u; }
        if (ctx->pc != 0x16AB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_05_0x1ad5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB48u; }
        if (ctx->pc != 0x16AB48u) { return; }
    }
    ctx->pc = 0x16AB48u;
    // 0x16ab48: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x16ab48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16ab4c: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x16ab4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x16ab50: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AB50u;
    SET_GPR_U32(ctx, 31, 0x16AB58u);
    ctx->pc = 0x16AB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB50u;
            // 0x16ab54: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB58u; }
        if (ctx->pc != 0x16AB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB58u; }
        if (ctx->pc != 0x16AB58u) { return; }
    }
    ctx->pc = 0x16AB58u;
    // 0x16ab58: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x16AB58u;
    {
        const bool branch_taken_0x16ab58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ab58) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AB60u;
label_16ab60:
    // 0x16ab60: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x16ab60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16ab64: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x16ab64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x16ab68: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AB68u;
    SET_GPR_U32(ctx, 31, 0x16AB70u);
    ctx->pc = 0x16AB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB68u;
            // 0x16ab6c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB70u; }
        if (ctx->pc != 0x16AB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB70u; }
        if (ctx->pc != 0x16AB70u) { return; }
    }
    ctx->pc = 0x16AB70u;
    // 0x16ab70: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x16ab70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16ab74: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x16ab74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x16ab78: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AB78u;
    SET_GPR_U32(ctx, 31, 0x16AB80u);
    ctx->pc = 0x16AB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB78u;
            // 0x16ab7c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB80u; }
        if (ctx->pc != 0x16AB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB80u; }
        if (ctx->pc != 0x16AB80u) { return; }
    }
    ctx->pc = 0x16AB80u;
    // 0x16ab80: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x16AB80u;
    {
        const bool branch_taken_0x16ab80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ab80) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AB88u;
label_16ab88:
    // 0x16ab88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16ab88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ab8c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16ab8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16ab90: 0xc06b578  jal         func_1AD5E0
    ctx->pc = 0x16AB90u;
    SET_GPR_U32(ctx, 31, 0x16AB98u);
    ctx->pc = 0x16AB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB90u;
            // 0x16ab94: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5E0u;
    if (runtime->hasFunction(0x1AD5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1AD5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB98u; }
        if (ctx->pc != 0x16AB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_05_0x1ad5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB98u; }
        if (ctx->pc != 0x16AB98u) { return; }
    }
    ctx->pc = 0x16AB98u;
    // 0x16ab98: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x16AB98u;
    {
        const bool branch_taken_0x16ab98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ab98) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16ABA0u;
label_16aba0:
    // 0x16aba0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16aba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aba4: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16aba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16aba8: 0xc06ad98  jal         func_1AB660
    ctx->pc = 0x16ABA8u;
    SET_GPR_U32(ctx, 31, 0x16ABB0u);
    ctx->pc = 0x16ABACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ABA8u;
            // 0x16abac: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB660u;
    if (runtime->hasFunction(0x1AB660u)) {
        auto targetFn = runtime->lookupFunction(0x1AB660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ABB0u; }
        if (ctx->pc != 0x16ABB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_03_0x1ab660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ABB0u; }
        if (ctx->pc != 0x16ABB0u) { return; }
    }
    ctx->pc = 0x16ABB0u;
    // 0x16abb0: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x16ABB0u;
    {
        const bool branch_taken_0x16abb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16abb0) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16ABB8u;
label_16abb8:
    // 0x16abb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16abb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16abbc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16abbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16abc0: 0xc06ad98  jal         func_1AB660
    ctx->pc = 0x16ABC0u;
    SET_GPR_U32(ctx, 31, 0x16ABC8u);
    ctx->pc = 0x16ABC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ABC0u;
            // 0x16abc4: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB660u;
    if (runtime->hasFunction(0x1AB660u)) {
        auto targetFn = runtime->lookupFunction(0x1AB660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ABC8u; }
        if (ctx->pc != 0x16ABC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_03_0x1ab660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ABC8u; }
        if (ctx->pc != 0x16ABC8u) { return; }
    }
    ctx->pc = 0x16ABC8u;
    // 0x16abc8: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x16ABC8u;
    {
        const bool branch_taken_0x16abc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16abc8) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16ABD0u;
label_16abd0:
    // 0x16abd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16abd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16abd4: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16abd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16abd8: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x16ABD8u;
    SET_GPR_U32(ctx, 31, 0x16ABE0u);
    ctx->pc = 0x16ABDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ABD8u;
            // 0x16abdc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ABE0u; }
        if (ctx->pc != 0x16ABE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItemCareer_0x1df800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ABE0u; }
        if (ctx->pc != 0x16ABE0u) { return; }
    }
    ctx->pc = 0x16ABE0u;
    // 0x16abe0: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x16ABE0u;
    {
        const bool branch_taken_0x16abe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16abe0) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16ABE8u;
label_16abe8:
    // 0x16abe8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x16abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16abec: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16abecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16abf0: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16ABF0u;
    SET_GPR_U32(ctx, 31, 0x16ABF8u);
    ctx->pc = 0x16ABF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ABF0u;
            // 0x16abf4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ABF8u; }
        if (ctx->pc != 0x16ABF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ABF8u; }
        if (ctx->pc != 0x16ABF8u) { return; }
    }
    ctx->pc = 0x16ABF8u;
    // 0x16abf8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x16abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16abfc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16abfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16ac00: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AC00u;
    SET_GPR_U32(ctx, 31, 0x16AC08u);
    ctx->pc = 0x16AC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC00u;
            // 0x16ac04: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC08u; }
        if (ctx->pc != 0x16AC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC08u; }
        if (ctx->pc != 0x16AC08u) { return; }
    }
    ctx->pc = 0x16AC08u;
    // 0x16ac08: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x16AC08u;
    {
        const bool branch_taken_0x16ac08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ac08) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AC10u;
label_16ac10:
    // 0x16ac10: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x16ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16ac14: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16ac14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16ac18: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AC18u;
    SET_GPR_U32(ctx, 31, 0x16AC20u);
    ctx->pc = 0x16AC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC18u;
            // 0x16ac1c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC20u; }
        if (ctx->pc != 0x16AC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC20u; }
        if (ctx->pc != 0x16AC20u) { return; }
    }
    ctx->pc = 0x16AC20u;
    // 0x16ac20: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x16ac20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16ac24: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16ac24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16ac28: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AC28u;
    SET_GPR_U32(ctx, 31, 0x16AC30u);
    ctx->pc = 0x16AC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC28u;
            // 0x16ac2c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC30u; }
        if (ctx->pc != 0x16AC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC30u; }
        if (ctx->pc != 0x16AC30u) { return; }
    }
    ctx->pc = 0x16AC30u;
    // 0x16ac30: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x16AC30u;
    {
        const bool branch_taken_0x16ac30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ac30) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AC38u;
label_16ac38:
    // 0x16ac38: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x16ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16ac3c: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16ac3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16ac40: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AC40u;
    SET_GPR_U32(ctx, 31, 0x16AC48u);
    ctx->pc = 0x16AC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC40u;
            // 0x16ac44: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC48u; }
        if (ctx->pc != 0x16AC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC48u; }
        if (ctx->pc != 0x16AC48u) { return; }
    }
    ctx->pc = 0x16AC48u;
    // 0x16ac48: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x16ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16ac4c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16ac4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16ac50: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AC50u;
    SET_GPR_U32(ctx, 31, 0x16AC58u);
    ctx->pc = 0x16AC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC50u;
            // 0x16ac54: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC58u; }
        if (ctx->pc != 0x16AC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC58u; }
        if (ctx->pc != 0x16AC58u) { return; }
    }
    ctx->pc = 0x16AC58u;
    // 0x16ac58: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x16AC58u;
    {
        const bool branch_taken_0x16ac58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ac58) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AC60u;
label_16ac60:
    // 0x16ac60: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x16ac60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16ac64: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16ac64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16ac68: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AC68u;
    SET_GPR_U32(ctx, 31, 0x16AC70u);
    ctx->pc = 0x16AC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC68u;
            // 0x16ac6c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC70u; }
        if (ctx->pc != 0x16AC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC70u; }
        if (ctx->pc != 0x16AC70u) { return; }
    }
    ctx->pc = 0x16AC70u;
    // 0x16ac70: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x16ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16ac74: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16ac74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16ac78: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AC78u;
    SET_GPR_U32(ctx, 31, 0x16AC80u);
    ctx->pc = 0x16AC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC78u;
            // 0x16ac7c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC80u; }
        if (ctx->pc != 0x16AC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC80u; }
        if (ctx->pc != 0x16AC80u) { return; }
    }
    ctx->pc = 0x16AC80u;
    // 0x16ac80: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x16AC80u;
    {
        const bool branch_taken_0x16ac80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ac80) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AC88u;
label_16ac88:
    // 0x16ac88: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x16ac88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16ac8c: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16ac8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16ac90: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AC90u;
    SET_GPR_U32(ctx, 31, 0x16AC98u);
    ctx->pc = 0x16AC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC90u;
            // 0x16ac94: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC98u; }
        if (ctx->pc != 0x16AC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC98u; }
        if (ctx->pc != 0x16AC98u) { return; }
    }
    ctx->pc = 0x16AC98u;
    // 0x16ac98: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x16ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16ac9c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16ac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16aca0: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16ACA0u;
    SET_GPR_U32(ctx, 31, 0x16ACA8u);
    ctx->pc = 0x16ACA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ACA0u;
            // 0x16aca4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ACA8u; }
        if (ctx->pc != 0x16ACA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ACA8u; }
        if (ctx->pc != 0x16ACA8u) { return; }
    }
    ctx->pc = 0x16ACA8u;
    // 0x16aca8: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x16ACA8u;
    {
        const bool branch_taken_0x16aca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aca8) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16ACB0u;
label_16acb0:
    // 0x16acb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16acb4: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16acb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16acb8: 0xc06b578  jal         func_1AD5E0
    ctx->pc = 0x16ACB8u;
    SET_GPR_U32(ctx, 31, 0x16ACC0u);
    ctx->pc = 0x16ACBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ACB8u;
            // 0x16acbc: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5E0u;
    if (runtime->hasFunction(0x1AD5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1AD5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ACC0u; }
        if (ctx->pc != 0x16ACC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_05_0x1ad5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ACC0u; }
        if (ctx->pc != 0x16ACC0u) { return; }
    }
    ctx->pc = 0x16ACC0u;
    // 0x16acc0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16acc4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16acc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16acc8: 0xc06b578  jal         func_1AD5E0
    ctx->pc = 0x16ACC8u;
    SET_GPR_U32(ctx, 31, 0x16ACD0u);
    ctx->pc = 0x16ACCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ACC8u;
            // 0x16accc: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5E0u;
    if (runtime->hasFunction(0x1AD5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1AD5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ACD0u; }
        if (ctx->pc != 0x16ACD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_05_0x1ad5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ACD0u; }
        if (ctx->pc != 0x16ACD0u) { return; }
    }
    ctx->pc = 0x16ACD0u;
    // 0x16acd0: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x16ACD0u;
    {
        const bool branch_taken_0x16acd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16acd0) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16ACD8u;
label_16acd8:
    // 0x16acd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16acd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16acdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16acdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ace0: 0xc06b578  jal         func_1AD5E0
    ctx->pc = 0x16ACE0u;
    SET_GPR_U32(ctx, 31, 0x16ACE8u);
    ctx->pc = 0x16ACE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ACE0u;
            // 0x16ace4: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5E0u;
    if (runtime->hasFunction(0x1AD5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1AD5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ACE8u; }
        if (ctx->pc != 0x16ACE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_05_0x1ad5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ACE8u; }
        if (ctx->pc != 0x16ACE8u) { return; }
    }
    ctx->pc = 0x16ACE8u;
    // 0x16ace8: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x16ACE8u;
    {
        const bool branch_taken_0x16ace8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ace8) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16ACF0u;
label_16acf0:
    // 0x16acf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16acf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16acf4: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16acf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16acf8: 0xc06b578  jal         func_1AD5E0
    ctx->pc = 0x16ACF8u;
    SET_GPR_U32(ctx, 31, 0x16AD00u);
    ctx->pc = 0x16ACFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ACF8u;
            // 0x16acfc: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5E0u;
    if (runtime->hasFunction(0x1AD5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1AD5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD00u; }
        if (ctx->pc != 0x16AD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_05_0x1ad5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD00u; }
        if (ctx->pc != 0x16AD00u) { return; }
    }
    ctx->pc = 0x16AD00u;
    // 0x16ad00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16ad00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad04: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16ad04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16ad08: 0xc06b578  jal         func_1AD5E0
    ctx->pc = 0x16AD08u;
    SET_GPR_U32(ctx, 31, 0x16AD10u);
    ctx->pc = 0x16AD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD08u;
            // 0x16ad0c: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5E0u;
    if (runtime->hasFunction(0x1AD5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1AD5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD10u; }
        if (ctx->pc != 0x16AD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_05_0x1ad5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD10u; }
        if (ctx->pc != 0x16AD10u) { return; }
    }
    ctx->pc = 0x16AD10u;
    // 0x16ad10: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x16AD10u;
    {
        const bool branch_taken_0x16ad10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ad10) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AD18u;
label_16ad18:
    // 0x16ad18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16ad18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad1c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16ad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16ad20: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AD20u;
    SET_GPR_U32(ctx, 31, 0x16AD28u);
    ctx->pc = 0x16AD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD20u;
            // 0x16ad24: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD28u; }
        if (ctx->pc != 0x16AD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD28u; }
        if (ctx->pc != 0x16AD28u) { return; }
    }
    ctx->pc = 0x16AD28u;
    // 0x16ad28: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x16AD28u;
    {
        const bool branch_taken_0x16ad28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ad28) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AD30u;
label_16ad30:
    // 0x16ad30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16ad30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad34: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16ad34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16ad38: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AD38u;
    SET_GPR_U32(ctx, 31, 0x16AD40u);
    ctx->pc = 0x16AD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD38u;
            // 0x16ad3c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD40u; }
        if (ctx->pc != 0x16AD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD40u; }
        if (ctx->pc != 0x16AD40u) { return; }
    }
    ctx->pc = 0x16AD40u;
    // 0x16ad40: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x16AD40u;
    {
        const bool branch_taken_0x16ad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ad40) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AD48u;
label_16ad48:
    // 0x16ad48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16ad48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad4c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16ad4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16ad50: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AD50u;
    SET_GPR_U32(ctx, 31, 0x16AD58u);
    ctx->pc = 0x16AD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD50u;
            // 0x16ad54: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD58u; }
        if (ctx->pc != 0x16AD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD58u; }
        if (ctx->pc != 0x16AD58u) { return; }
    }
    ctx->pc = 0x16AD58u;
    // 0x16ad58: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x16AD58u;
    {
        const bool branch_taken_0x16ad58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ad58) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AD60u;
label_16ad60:
    // 0x16ad60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16ad60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad64: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16ad64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16ad68: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AD68u;
    SET_GPR_U32(ctx, 31, 0x16AD70u);
    ctx->pc = 0x16AD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD68u;
            // 0x16ad6c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD70u; }
        if (ctx->pc != 0x16AD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD70u; }
        if (ctx->pc != 0x16AD70u) { return; }
    }
    ctx->pc = 0x16AD70u;
    // 0x16ad70: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x16AD70u;
    {
        const bool branch_taken_0x16ad70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ad70) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AD78u;
label_16ad78:
    // 0x16ad78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16ad78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad7c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16ad7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16ad80: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AD80u;
    SET_GPR_U32(ctx, 31, 0x16AD88u);
    ctx->pc = 0x16AD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD80u;
            // 0x16ad84: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD88u; }
        if (ctx->pc != 0x16AD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD88u; }
        if (ctx->pc != 0x16AD88u) { return; }
    }
    ctx->pc = 0x16AD88u;
    // 0x16ad88: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x16AD88u;
    {
        const bool branch_taken_0x16ad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ad88) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AD90u;
label_16ad90:
    // 0x16ad90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16ad90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad94: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16ad94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16ad98: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AD98u;
    SET_GPR_U32(ctx, 31, 0x16ADA0u);
    ctx->pc = 0x16AD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD98u;
            // 0x16ad9c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADA0u; }
        if (ctx->pc != 0x16ADA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADA0u; }
        if (ctx->pc != 0x16ADA0u) { return; }
    }
    ctx->pc = 0x16ADA0u;
    // 0x16ada0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x16ADA0u;
    {
        const bool branch_taken_0x16ada0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ada0) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16ADA8u;
label_16ada8:
    // 0x16ada8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16ada8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16adac: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16adacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16adb0: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16ADB0u;
    SET_GPR_U32(ctx, 31, 0x16ADB8u);
    ctx->pc = 0x16ADB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ADB0u;
            // 0x16adb4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADB8u; }
        if (ctx->pc != 0x16ADB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADB8u; }
        if (ctx->pc != 0x16ADB8u) { return; }
    }
    ctx->pc = 0x16ADB8u;
    // 0x16adb8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x16ADB8u;
    {
        const bool branch_taken_0x16adb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16adb8) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16ADC0u;
label_16adc0:
    // 0x16adc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16adc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16adc4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16adc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16adc8: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16ADC8u;
    SET_GPR_U32(ctx, 31, 0x16ADD0u);
    ctx->pc = 0x16ADCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ADC8u;
            // 0x16adcc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADD0u; }
        if (ctx->pc != 0x16ADD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADD0u; }
        if (ctx->pc != 0x16ADD0u) { return; }
    }
    ctx->pc = 0x16ADD0u;
    // 0x16add0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x16ADD0u;
    {
        const bool branch_taken_0x16add0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16add0) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16ADD8u;
label_16add8:
    // 0x16add8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16add8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16addc: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16addcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16ade0: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16ADE0u;
    SET_GPR_U32(ctx, 31, 0x16ADE8u);
    ctx->pc = 0x16ADE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ADE0u;
            // 0x16ade4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADE8u; }
        if (ctx->pc != 0x16ADE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADE8u; }
        if (ctx->pc != 0x16ADE8u) { return; }
    }
    ctx->pc = 0x16ADE8u;
    // 0x16ade8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x16ADE8u;
    {
        const bool branch_taken_0x16ade8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ade8) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16ADF0u;
label_16adf0:
    // 0x16adf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16adf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16adf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16adf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16adf8: 0xc06b578  jal         func_1AD5E0
    ctx->pc = 0x16ADF8u;
    SET_GPR_U32(ctx, 31, 0x16AE00u);
    ctx->pc = 0x16ADFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ADF8u;
            // 0x16adfc: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5E0u;
    if (runtime->hasFunction(0x1AD5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1AD5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE00u; }
        if (ctx->pc != 0x16AE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_05_0x1ad5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE00u; }
        if (ctx->pc != 0x16AE00u) { return; }
    }
    ctx->pc = 0x16AE00u;
    // 0x16ae00: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x16AE00u;
    {
        const bool branch_taken_0x16ae00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae00) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AE08u;
label_16ae08:
    // 0x16ae08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16ae08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ae0c: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16ae0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16ae10: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AE10u;
    SET_GPR_U32(ctx, 31, 0x16AE18u);
    ctx->pc = 0x16AE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE10u;
            // 0x16ae14: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE18u; }
        if (ctx->pc != 0x16AE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE18u; }
        if (ctx->pc != 0x16AE18u) { return; }
    }
    ctx->pc = 0x16AE18u;
    // 0x16ae18: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x16AE18u;
    {
        const bool branch_taken_0x16ae18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae18) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AE20u;
label_16ae20:
    // 0x16ae20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ae24: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16ae24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16ae28: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AE28u;
    SET_GPR_U32(ctx, 31, 0x16AE30u);
    ctx->pc = 0x16AE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE28u;
            // 0x16ae2c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE30u; }
        if (ctx->pc != 0x16AE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE30u; }
        if (ctx->pc != 0x16AE30u) { return; }
    }
    ctx->pc = 0x16AE30u;
    // 0x16ae30: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x16AE30u;
    {
        const bool branch_taken_0x16ae30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae30) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AE38u;
label_16ae38:
    // 0x16ae38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16ae38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ae3c: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16ae3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16ae40: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AE40u;
    SET_GPR_U32(ctx, 31, 0x16AE48u);
    ctx->pc = 0x16AE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE40u;
            // 0x16ae44: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE48u; }
        if (ctx->pc != 0x16AE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE48u; }
        if (ctx->pc != 0x16AE48u) { return; }
    }
    ctx->pc = 0x16AE48u;
    // 0x16ae48: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x16AE48u;
    {
        const bool branch_taken_0x16ae48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae48) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AE50u;
label_16ae50:
    // 0x16ae50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16ae50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ae54: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16ae54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16ae58: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AE58u;
    SET_GPR_U32(ctx, 31, 0x16AE60u);
    ctx->pc = 0x16AE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE58u;
            // 0x16ae5c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE60u; }
        if (ctx->pc != 0x16AE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE60u; }
        if (ctx->pc != 0x16AE60u) { return; }
    }
    ctx->pc = 0x16AE60u;
    // 0x16ae60: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x16AE60u;
    {
        const bool branch_taken_0x16ae60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae60) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AE68u;
label_16ae68:
    // 0x16ae68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ae6c: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16ae6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16ae70: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AE70u;
    SET_GPR_U32(ctx, 31, 0x16AE78u);
    ctx->pc = 0x16AE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE70u;
            // 0x16ae74: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE78u; }
        if (ctx->pc != 0x16AE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE78u; }
        if (ctx->pc != 0x16AE78u) { return; }
    }
    ctx->pc = 0x16AE78u;
    // 0x16ae78: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x16AE78u;
    {
        const bool branch_taken_0x16ae78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae78) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AE80u;
label_16ae80:
    // 0x16ae80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16ae80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ae84: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16ae84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16ae88: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AE88u;
    SET_GPR_U32(ctx, 31, 0x16AE90u);
    ctx->pc = 0x16AE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE88u;
            // 0x16ae8c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE90u; }
        if (ctx->pc != 0x16AE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE90u; }
        if (ctx->pc != 0x16AE90u) { return; }
    }
    ctx->pc = 0x16AE90u;
    // 0x16ae90: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16AE90u;
    {
        const bool branch_taken_0x16ae90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae90) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AE98u;
label_16ae98:
    // 0x16ae98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16ae98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ae9c: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16ae9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16aea0: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AEA0u;
    SET_GPR_U32(ctx, 31, 0x16AEA8u);
    ctx->pc = 0x16AEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AEA0u;
            // 0x16aea4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AEA8u; }
        if (ctx->pc != 0x16AEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AEA8u; }
        if (ctx->pc != 0x16AEA8u) { return; }
    }
    ctx->pc = 0x16AEA8u;
    // 0x16aea8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x16AEA8u;
    {
        const bool branch_taken_0x16aea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aea8) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AEB0u;
label_16aeb0:
    // 0x16aeb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16aeb4: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16aeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16aeb8: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AEB8u;
    SET_GPR_U32(ctx, 31, 0x16AEC0u);
    ctx->pc = 0x16AEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AEB8u;
            // 0x16aebc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AEC0u; }
        if (ctx->pc != 0x16AEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AEC0u; }
        if (ctx->pc != 0x16AEC0u) { return; }
    }
    ctx->pc = 0x16AEC0u;
    // 0x16aec0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16AEC0u;
    {
        const bool branch_taken_0x16aec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aec0) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AEC8u;
label_16aec8:
    // 0x16aec8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16aec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16aecc: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16aeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16aed0: 0xc06a834  jal         func_1AA0D0
    ctx->pc = 0x16AED0u;
    SET_GPR_U32(ctx, 31, 0x16AED8u);
    ctx->pc = 0x16AED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AED0u;
            // 0x16aed4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0D0u;
    if (runtime->hasFunction(0x1AA0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AA0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AED8u; }
        if (ctx->pc != 0x16AED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_02_0x1aa0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AED8u; }
        if (ctx->pc != 0x16AED8u) { return; }
    }
    ctx->pc = 0x16AED8u;
    // 0x16aed8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16AED8u;
    {
        const bool branch_taken_0x16aed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aed8) {
            ctx->pc = 0x16AEF8u;
            goto label_16aef8;
        }
    }
    ctx->pc = 0x16AEE0u;
label_16aee0:
    // 0x16aee0: 0xc05d004  jal         func_174010
    ctx->pc = 0x16AEE0u;
    SET_GPR_U32(ctx, 31, 0x16AEE8u);
    ctx->pc = 0x16AEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AEE0u;
            // 0x16aee4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AEE8u; }
        if (ctx->pc != 0x16AEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AEE8u; }
        if (ctx->pc != 0x16AEE8u) { return; }
    }
    ctx->pc = 0x16AEE8u;
    // 0x16aee8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16aee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aeec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16aeecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aef0: 0xc071048  jal         func_1C4120
    ctx->pc = 0x16AEF0u;
    SET_GPR_U32(ctx, 31, 0x16AEF8u);
    ctx->pc = 0x16AEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AEF0u;
            // 0x16aef4: 0x2406ff7e  addiu       $a2, $zero, -0x82 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967166));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4120u;
    if (runtime->hasFunction(0x1C4120u)) {
        auto targetFn = runtime->lookupFunction(0x1C4120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AEF8u; }
        if (ctx->pc != 0x16AEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStage6Boss_0x1c4120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AEF8u; }
        if (ctx->pc != 0x16AEF8u) { return; }
    }
    ctx->pc = 0x16AEF8u;
label_16aef8:
    // 0x16aef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16aef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16aefc: 0x3e00008  jr          $ra
    ctx->pc = 0x16AEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AEFCu;
            // 0x16af00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A778u: goto label_16a778;
            case 0x16A790u: goto label_16a790;
            case 0x16A7A8u: goto label_16a7a8;
            case 0x16A7D0u: goto label_16a7d0;
            case 0x16A808u: goto label_16a808;
            case 0x16A830u: goto label_16a830;
            case 0x16A868u: goto label_16a868;
            case 0x16A880u: goto label_16a880;
            case 0x16A898u: goto label_16a898;
            case 0x16A8D0u: goto label_16a8d0;
            case 0x16A8E8u: goto label_16a8e8;
            case 0x16A920u: goto label_16a920;
            case 0x16A938u: goto label_16a938;
            case 0x16A960u: goto label_16a960;
            case 0x16A978u: goto label_16a978;
            case 0x16A990u: goto label_16a990;
            case 0x16A9A8u: goto label_16a9a8;
            case 0x16A9C0u: goto label_16a9c0;
            case 0x16A9D8u: goto label_16a9d8;
            case 0x16A9F0u: goto label_16a9f0;
            case 0x16AA08u: goto label_16aa08;
            case 0x16AA20u: goto label_16aa20;
            case 0x16AA88u: goto label_16aa88;
            case 0x16AAA0u: goto label_16aaa0;
            case 0x16AAC8u: goto label_16aac8;
            case 0x16AAE0u: goto label_16aae0;
            case 0x16AB38u: goto label_16ab38;
            case 0x16AB60u: goto label_16ab60;
            case 0x16AB88u: goto label_16ab88;
            case 0x16ABA0u: goto label_16aba0;
            case 0x16ABB8u: goto label_16abb8;
            case 0x16ABD0u: goto label_16abd0;
            case 0x16ABE8u: goto label_16abe8;
            case 0x16AC10u: goto label_16ac10;
            case 0x16AC38u: goto label_16ac38;
            case 0x16AC60u: goto label_16ac60;
            case 0x16AC88u: goto label_16ac88;
            case 0x16ACB0u: goto label_16acb0;
            case 0x16ACD8u: goto label_16acd8;
            case 0x16ACF0u: goto label_16acf0;
            case 0x16AD18u: goto label_16ad18;
            case 0x16AD30u: goto label_16ad30;
            case 0x16AD48u: goto label_16ad48;
            case 0x16AD60u: goto label_16ad60;
            case 0x16AD78u: goto label_16ad78;
            case 0x16AD90u: goto label_16ad90;
            case 0x16ADA8u: goto label_16ada8;
            case 0x16ADC0u: goto label_16adc0;
            case 0x16ADD8u: goto label_16add8;
            case 0x16ADF0u: goto label_16adf0;
            case 0x16AE08u: goto label_16ae08;
            case 0x16AE20u: goto label_16ae20;
            case 0x16AE38u: goto label_16ae38;
            case 0x16AE50u: goto label_16ae50;
            case 0x16AE68u: goto label_16ae68;
            case 0x16AE80u: goto label_16ae80;
            case 0x16AE98u: goto label_16ae98;
            case 0x16AEB0u: goto label_16aeb0;
            case 0x16AEC8u: goto label_16aec8;
            case 0x16AEE0u: goto label_16aee0;
            case 0x16AEF8u: goto label_16aef8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16AF04u;
}
