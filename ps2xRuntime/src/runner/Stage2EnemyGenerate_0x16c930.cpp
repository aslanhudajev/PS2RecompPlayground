#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage2EnemyGenerate
// Address: 0x16c930 - 0x16d3f0
void Stage2EnemyGenerate_0x16c930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage2EnemyGenerate_0x16c930");
#endif

    ctx->pc = 0x16c930u;

    // 0x16c930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c934: 0x24030ed8  addiu       $v1, $zero, 0xED8
    ctx->pc = 0x16c934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3800));
    // 0x16c938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16c93c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16c940: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16c940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c944: 0x12030274  beq         $s0, $v1, . + 4 + (0x274 << 2)
    ctx->pc = 0x16C944u;
    {
        const bool branch_taken_0x16c944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C944u;
            // 0x16c948: 0x24030c4e  addiu       $v1, $zero, 0xC4E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c944) {
            ctx->pc = 0x16D318u;
            goto label_16d318;
        }
    }
    ctx->pc = 0x16C94Cu;
    // 0x16c94c: 0x12030268  beq         $s0, $v1, . + 4 + (0x268 << 2)
    ctx->pc = 0x16C94Cu;
    {
        const bool branch_taken_0x16c94c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c94c) {
            ctx->pc = 0x16D2F0u;
            goto label_16d2f0;
        }
    }
    ctx->pc = 0x16C954u;
    // 0x16c954: 0x24030c1c  addiu       $v1, $zero, 0xC1C
    ctx->pc = 0x16c954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3100));
    // 0x16c958: 0x1203025f  beq         $s0, $v1, . + 4 + (0x25F << 2)
    ctx->pc = 0x16C958u;
    {
        const bool branch_taken_0x16c958 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C958u;
            // 0x16c95c: 0x24030ba4  addiu       $v1, $zero, 0xBA4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2980));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c958) {
            ctx->pc = 0x16D2D8u;
            goto label_16d2d8;
        }
    }
    ctx->pc = 0x16C960u;
    // 0x16c960: 0x12030257  beq         $s0, $v1, . + 4 + (0x257 << 2)
    ctx->pc = 0x16C960u;
    {
        const bool branch_taken_0x16c960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c960) {
            ctx->pc = 0x16D2C0u;
            goto label_16d2c0;
        }
    }
    ctx->pc = 0x16C968u;
    // 0x16c968: 0x24030b90  addiu       $v1, $zero, 0xB90
    ctx->pc = 0x16c968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2960));
    // 0x16c96c: 0x1203024e  beq         $s0, $v1, . + 4 + (0x24E << 2)
    ctx->pc = 0x16C96Cu;
    {
        const bool branch_taken_0x16c96c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C96Cu;
            // 0x16c970: 0x24030b7c  addiu       $v1, $zero, 0xB7C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2940));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c96c) {
            ctx->pc = 0x16D2A8u;
            goto label_16d2a8;
        }
    }
    ctx->pc = 0x16C974u;
    // 0x16c974: 0x12030246  beq         $s0, $v1, . + 4 + (0x246 << 2)
    ctx->pc = 0x16C974u;
    {
        const bool branch_taken_0x16c974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c974) {
            ctx->pc = 0x16D290u;
            goto label_16d290;
        }
    }
    ctx->pc = 0x16C97Cu;
    // 0x16c97c: 0x24030b68  addiu       $v1, $zero, 0xB68
    ctx->pc = 0x16c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2920));
    // 0x16c980: 0x1203023d  beq         $s0, $v1, . + 4 + (0x23D << 2)
    ctx->pc = 0x16C980u;
    {
        const bool branch_taken_0x16c980 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C980u;
            // 0x16c984: 0x24030b54  addiu       $v1, $zero, 0xB54 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2900));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c980) {
            ctx->pc = 0x16D278u;
            goto label_16d278;
        }
    }
    ctx->pc = 0x16C988u;
    // 0x16c988: 0x12030235  beq         $s0, $v1, . + 4 + (0x235 << 2)
    ctx->pc = 0x16C988u;
    {
        const bool branch_taken_0x16c988 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c988) {
            ctx->pc = 0x16D260u;
            goto label_16d260;
        }
    }
    ctx->pc = 0x16C990u;
    // 0x16c990: 0x24030b40  addiu       $v1, $zero, 0xB40
    ctx->pc = 0x16c990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2880));
    // 0x16c994: 0x1203022c  beq         $s0, $v1, . + 4 + (0x22C << 2)
    ctx->pc = 0x16C994u;
    {
        const bool branch_taken_0x16c994 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C994u;
            // 0x16c998: 0x24030b2c  addiu       $v1, $zero, 0xB2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2860));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c994) {
            ctx->pc = 0x16D248u;
            goto label_16d248;
        }
    }
    ctx->pc = 0x16C99Cu;
    // 0x16c99c: 0x12030224  beq         $s0, $v1, . + 4 + (0x224 << 2)
    ctx->pc = 0x16C99Cu;
    {
        const bool branch_taken_0x16c99c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c99c) {
            ctx->pc = 0x16D230u;
            goto label_16d230;
        }
    }
    ctx->pc = 0x16C9A4u;
    // 0x16c9a4: 0x24030b18  addiu       $v1, $zero, 0xB18
    ctx->pc = 0x16c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2840));
    // 0x16c9a8: 0x1203021b  beq         $s0, $v1, . + 4 + (0x21B << 2)
    ctx->pc = 0x16C9A8u;
    {
        const bool branch_taken_0x16c9a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C9A8u;
            // 0x16c9ac: 0x24030b04  addiu       $v1, $zero, 0xB04 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c9a8) {
            ctx->pc = 0x16D218u;
            goto label_16d218;
        }
    }
    ctx->pc = 0x16C9B0u;
    // 0x16c9b0: 0x12030213  beq         $s0, $v1, . + 4 + (0x213 << 2)
    ctx->pc = 0x16C9B0u;
    {
        const bool branch_taken_0x16c9b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c9b0) {
            ctx->pc = 0x16D200u;
            goto label_16d200;
        }
    }
    ctx->pc = 0x16C9B8u;
    // 0x16c9b8: 0x24030af0  addiu       $v1, $zero, 0xAF0
    ctx->pc = 0x16c9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2800));
    // 0x16c9bc: 0x1203020a  beq         $s0, $v1, . + 4 + (0x20A << 2)
    ctx->pc = 0x16C9BCu;
    {
        const bool branch_taken_0x16c9bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C9BCu;
            // 0x16c9c0: 0x24030a8c  addiu       $v1, $zero, 0xA8C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c9bc) {
            ctx->pc = 0x16D1E8u;
            goto label_16d1e8;
        }
    }
    ctx->pc = 0x16C9C4u;
    // 0x16c9c4: 0x12030202  beq         $s0, $v1, . + 4 + (0x202 << 2)
    ctx->pc = 0x16C9C4u;
    {
        const bool branch_taken_0x16c9c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c9c4) {
            ctx->pc = 0x16D1D0u;
            goto label_16d1d0;
        }
    }
    ctx->pc = 0x16C9CCu;
    // 0x16c9cc: 0x24030a78  addiu       $v1, $zero, 0xA78
    ctx->pc = 0x16c9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2680));
    // 0x16c9d0: 0x120301f9  beq         $s0, $v1, . + 4 + (0x1F9 << 2)
    ctx->pc = 0x16C9D0u;
    {
        const bool branch_taken_0x16c9d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C9D0u;
            // 0x16c9d4: 0x24030a64  addiu       $v1, $zero, 0xA64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2660));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c9d0) {
            ctx->pc = 0x16D1B8u;
            goto label_16d1b8;
        }
    }
    ctx->pc = 0x16C9D8u;
    // 0x16c9d8: 0x120301f1  beq         $s0, $v1, . + 4 + (0x1F1 << 2)
    ctx->pc = 0x16C9D8u;
    {
        const bool branch_taken_0x16c9d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c9d8) {
            ctx->pc = 0x16D1A0u;
            goto label_16d1a0;
        }
    }
    ctx->pc = 0x16C9E0u;
    // 0x16c9e0: 0x24030a50  addiu       $v1, $zero, 0xA50
    ctx->pc = 0x16c9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2640));
    // 0x16c9e4: 0x120301e8  beq         $s0, $v1, . + 4 + (0x1E8 << 2)
    ctx->pc = 0x16C9E4u;
    {
        const bool branch_taken_0x16c9e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C9E4u;
            // 0x16c9e8: 0x24030a3c  addiu       $v1, $zero, 0xA3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2620));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c9e4) {
            ctx->pc = 0x16D188u;
            goto label_16d188;
        }
    }
    ctx->pc = 0x16C9ECu;
    // 0x16c9ec: 0x120301e0  beq         $s0, $v1, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x16C9ECu;
    {
        const bool branch_taken_0x16c9ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c9ec) {
            ctx->pc = 0x16D170u;
            goto label_16d170;
        }
    }
    ctx->pc = 0x16C9F4u;
    // 0x16c9f4: 0x24030a28  addiu       $v1, $zero, 0xA28
    ctx->pc = 0x16c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
    // 0x16c9f8: 0x120301d7  beq         $s0, $v1, . + 4 + (0x1D7 << 2)
    ctx->pc = 0x16C9F8u;
    {
        const bool branch_taken_0x16c9f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C9F8u;
            // 0x16c9fc: 0x24030a14  addiu       $v1, $zero, 0xA14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2580));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c9f8) {
            ctx->pc = 0x16D158u;
            goto label_16d158;
        }
    }
    ctx->pc = 0x16CA00u;
    // 0x16ca00: 0x120301cf  beq         $s0, $v1, . + 4 + (0x1CF << 2)
    ctx->pc = 0x16CA00u;
    {
        const bool branch_taken_0x16ca00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ca00) {
            ctx->pc = 0x16D140u;
            goto label_16d140;
        }
    }
    ctx->pc = 0x16CA08u;
    // 0x16ca08: 0x24030a00  addiu       $v1, $zero, 0xA00
    ctx->pc = 0x16ca08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    // 0x16ca0c: 0x120301c6  beq         $s0, $v1, . + 4 + (0x1C6 << 2)
    ctx->pc = 0x16CA0Cu;
    {
        const bool branch_taken_0x16ca0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA0Cu;
            // 0x16ca10: 0x240309ec  addiu       $v1, $zero, 0x9EC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2540));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca0c) {
            ctx->pc = 0x16D128u;
            goto label_16d128;
        }
    }
    ctx->pc = 0x16CA14u;
    // 0x16ca14: 0x120301be  beq         $s0, $v1, . + 4 + (0x1BE << 2)
    ctx->pc = 0x16CA14u;
    {
        const bool branch_taken_0x16ca14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ca14) {
            ctx->pc = 0x16D110u;
            goto label_16d110;
        }
    }
    ctx->pc = 0x16CA1Cu;
    // 0x16ca1c: 0x240309d8  addiu       $v1, $zero, 0x9D8
    ctx->pc = 0x16ca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2520));
    // 0x16ca20: 0x120301b5  beq         $s0, $v1, . + 4 + (0x1B5 << 2)
    ctx->pc = 0x16CA20u;
    {
        const bool branch_taken_0x16ca20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA20u;
            // 0x16ca24: 0x240307a8  addiu       $v1, $zero, 0x7A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca20) {
            ctx->pc = 0x16D0F8u;
            goto label_16d0f8;
        }
    }
    ctx->pc = 0x16CA28u;
    // 0x16ca28: 0x120301ad  beq         $s0, $v1, . + 4 + (0x1AD << 2)
    ctx->pc = 0x16CA28u;
    {
        const bool branch_taken_0x16ca28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ca28) {
            ctx->pc = 0x16D0E0u;
            goto label_16d0e0;
        }
    }
    ctx->pc = 0x16CA30u;
    // 0x16ca30: 0x24030794  addiu       $v1, $zero, 0x794
    ctx->pc = 0x16ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1940));
    // 0x16ca34: 0x120301a4  beq         $s0, $v1, . + 4 + (0x1A4 << 2)
    ctx->pc = 0x16CA34u;
    {
        const bool branch_taken_0x16ca34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA34u;
            // 0x16ca38: 0x24030780  addiu       $v1, $zero, 0x780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca34) {
            ctx->pc = 0x16D0C8u;
            goto label_16d0c8;
        }
    }
    ctx->pc = 0x16CA3Cu;
    // 0x16ca3c: 0x1203019c  beq         $s0, $v1, . + 4 + (0x19C << 2)
    ctx->pc = 0x16CA3Cu;
    {
        const bool branch_taken_0x16ca3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ca3c) {
            ctx->pc = 0x16D0B0u;
            goto label_16d0b0;
        }
    }
    ctx->pc = 0x16CA44u;
    // 0x16ca44: 0x2403076c  addiu       $v1, $zero, 0x76C
    ctx->pc = 0x16ca44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1900));
    // 0x16ca48: 0x12030193  beq         $s0, $v1, . + 4 + (0x193 << 2)
    ctx->pc = 0x16CA48u;
    {
        const bool branch_taken_0x16ca48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA48u;
            // 0x16ca4c: 0x24030758  addiu       $v1, $zero, 0x758 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca48) {
            ctx->pc = 0x16D098u;
            goto label_16d098;
        }
    }
    ctx->pc = 0x16CA50u;
    // 0x16ca50: 0x1203018b  beq         $s0, $v1, . + 4 + (0x18B << 2)
    ctx->pc = 0x16CA50u;
    {
        const bool branch_taken_0x16ca50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ca50) {
            ctx->pc = 0x16D080u;
            goto label_16d080;
        }
    }
    ctx->pc = 0x16CA58u;
    // 0x16ca58: 0x24030744  addiu       $v1, $zero, 0x744
    ctx->pc = 0x16ca58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1860));
    // 0x16ca5c: 0x12030182  beq         $s0, $v1, . + 4 + (0x182 << 2)
    ctx->pc = 0x16CA5Cu;
    {
        const bool branch_taken_0x16ca5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA5Cu;
            // 0x16ca60: 0x24030708  addiu       $v1, $zero, 0x708 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca5c) {
            ctx->pc = 0x16D068u;
            goto label_16d068;
        }
    }
    ctx->pc = 0x16CA64u;
    // 0x16ca64: 0x1203017a  beq         $s0, $v1, . + 4 + (0x17A << 2)
    ctx->pc = 0x16CA64u;
    {
        const bool branch_taken_0x16ca64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ca64) {
            ctx->pc = 0x16D050u;
            goto label_16d050;
        }
    }
    ctx->pc = 0x16CA6Cu;
    // 0x16ca6c: 0x24030640  addiu       $v1, $zero, 0x640
    ctx->pc = 0x16ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
    // 0x16ca70: 0x1203016d  beq         $s0, $v1, . + 4 + (0x16D << 2)
    ctx->pc = 0x16CA70u;
    {
        const bool branch_taken_0x16ca70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA70u;
            // 0x16ca74: 0x24030546  addiu       $v1, $zero, 0x546 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca70) {
            ctx->pc = 0x16D028u;
            goto label_16d028;
        }
    }
    ctx->pc = 0x16CA78u;
    // 0x16ca78: 0x12030165  beq         $s0, $v1, . + 4 + (0x165 << 2)
    ctx->pc = 0x16CA78u;
    {
        const bool branch_taken_0x16ca78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ca78) {
            ctx->pc = 0x16D010u;
            goto label_16d010;
        }
    }
    ctx->pc = 0x16CA80u;
    // 0x16ca80: 0x2403044c  addiu       $v1, $zero, 0x44C
    ctx->pc = 0x16ca80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
    // 0x16ca84: 0x1203015c  beq         $s0, $v1, . + 4 + (0x15C << 2)
    ctx->pc = 0x16CA84u;
    {
        const bool branch_taken_0x16ca84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA84u;
            // 0x16ca88: 0x240303e8  addiu       $v1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca84) {
            ctx->pc = 0x16CFF8u;
            goto label_16cff8;
        }
    }
    ctx->pc = 0x16CA8Cu;
    // 0x16ca8c: 0x1203011c  beq         $s0, $v1, . + 4 + (0x11C << 2)
    ctx->pc = 0x16CA8Cu;
    {
        const bool branch_taken_0x16ca8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ca8c) {
            ctx->pc = 0x16CF00u;
            goto label_16cf00;
        }
    }
    ctx->pc = 0x16CA94u;
    // 0x16ca94: 0x24030398  addiu       $v1, $zero, 0x398
    ctx->pc = 0x16ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 920));
    // 0x16ca98: 0x12030113  beq         $s0, $v1, . + 4 + (0x113 << 2)
    ctx->pc = 0x16CA98u;
    {
        const bool branch_taken_0x16ca98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA98u;
            // 0x16ca9c: 0x24030384  addiu       $v1, $zero, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca98) {
            ctx->pc = 0x16CEE8u;
            goto label_16cee8;
        }
    }
    ctx->pc = 0x16CAA0u;
    // 0x16caa0: 0x1203010b  beq         $s0, $v1, . + 4 + (0x10B << 2)
    ctx->pc = 0x16CAA0u;
    {
        const bool branch_taken_0x16caa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16caa0) {
            ctx->pc = 0x16CED0u;
            goto label_16ced0;
        }
    }
    ctx->pc = 0x16CAA8u;
    // 0x16caa8: 0x24030370  addiu       $v1, $zero, 0x370
    ctx->pc = 0x16caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 880));
    // 0x16caac: 0x12030102  beq         $s0, $v1, . + 4 + (0x102 << 2)
    ctx->pc = 0x16CAACu;
    {
        const bool branch_taken_0x16caac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CAACu;
            // 0x16cab0: 0x2403035c  addiu       $v1, $zero, 0x35C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16caac) {
            ctx->pc = 0x16CEB8u;
            goto label_16ceb8;
        }
    }
    ctx->pc = 0x16CAB4u;
    // 0x16cab4: 0x120300fa  beq         $s0, $v1, . + 4 + (0xFA << 2)
    ctx->pc = 0x16CAB4u;
    {
        const bool branch_taken_0x16cab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cab4) {
            ctx->pc = 0x16CEA0u;
            goto label_16cea0;
        }
    }
    ctx->pc = 0x16CABCu;
    // 0x16cabc: 0x24030348  addiu       $v1, $zero, 0x348
    ctx->pc = 0x16cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 840));
    // 0x16cac0: 0x120300f1  beq         $s0, $v1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x16CAC0u;
    {
        const bool branch_taken_0x16cac0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CAC0u;
            // 0x16cac4: 0x24030334  addiu       $v1, $zero, 0x334 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cac0) {
            ctx->pc = 0x16CE88u;
            goto label_16ce88;
        }
    }
    ctx->pc = 0x16CAC8u;
    // 0x16cac8: 0x120300e9  beq         $s0, $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x16CAC8u;
    {
        const bool branch_taken_0x16cac8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cac8) {
            ctx->pc = 0x16CE70u;
            goto label_16ce70;
        }
    }
    ctx->pc = 0x16CAD0u;
    // 0x16cad0: 0x24030320  addiu       $v1, $zero, 0x320
    ctx->pc = 0x16cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x16cad4: 0x120300e0  beq         $s0, $v1, . + 4 + (0xE0 << 2)
    ctx->pc = 0x16CAD4u;
    {
        const bool branch_taken_0x16cad4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CAD4u;
            // 0x16cad8: 0x2403030c  addiu       $v1, $zero, 0x30C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 780));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cad4) {
            ctx->pc = 0x16CE58u;
            goto label_16ce58;
        }
    }
    ctx->pc = 0x16CADCu;
    // 0x16cadc: 0x120300d8  beq         $s0, $v1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x16CADCu;
    {
        const bool branch_taken_0x16cadc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cadc) {
            ctx->pc = 0x16CE40u;
            goto label_16ce40;
        }
    }
    ctx->pc = 0x16CAE4u;
    // 0x16cae4: 0x240302f8  addiu       $v1, $zero, 0x2F8
    ctx->pc = 0x16cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 760));
    // 0x16cae8: 0x120300cf  beq         $s0, $v1, . + 4 + (0xCF << 2)
    ctx->pc = 0x16CAE8u;
    {
        const bool branch_taken_0x16cae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CAE8u;
            // 0x16caec: 0x240302e4  addiu       $v1, $zero, 0x2E4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 740));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cae8) {
            ctx->pc = 0x16CE28u;
            goto label_16ce28;
        }
    }
    ctx->pc = 0x16CAF0u;
    // 0x16caf0: 0x120300c7  beq         $s0, $v1, . + 4 + (0xC7 << 2)
    ctx->pc = 0x16CAF0u;
    {
        const bool branch_taken_0x16caf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16caf0) {
            ctx->pc = 0x16CE10u;
            goto label_16ce10;
        }
    }
    ctx->pc = 0x16CAF8u;
    // 0x16caf8: 0x240302d0  addiu       $v1, $zero, 0x2D0
    ctx->pc = 0x16caf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
    // 0x16cafc: 0x120300be  beq         $s0, $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x16CAFCu;
    {
        const bool branch_taken_0x16cafc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CAFCu;
            // 0x16cb00: 0x240302bc  addiu       $v1, $zero, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cafc) {
            ctx->pc = 0x16CDF8u;
            goto label_16cdf8;
        }
    }
    ctx->pc = 0x16CB04u;
    // 0x16cb04: 0x120300b6  beq         $s0, $v1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x16CB04u;
    {
        const bool branch_taken_0x16cb04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cb04) {
            ctx->pc = 0x16CDE0u;
            goto label_16cde0;
        }
    }
    ctx->pc = 0x16CB0Cu;
    // 0x16cb0c: 0x240302a8  addiu       $v1, $zero, 0x2A8
    ctx->pc = 0x16cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 680));
    // 0x16cb10: 0x120300ad  beq         $s0, $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x16CB10u;
    {
        const bool branch_taken_0x16cb10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CB10u;
            // 0x16cb14: 0x24030294  addiu       $v1, $zero, 0x294 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 660));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb10) {
            ctx->pc = 0x16CDC8u;
            goto label_16cdc8;
        }
    }
    ctx->pc = 0x16CB18u;
    // 0x16cb18: 0x120300a5  beq         $s0, $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x16CB18u;
    {
        const bool branch_taken_0x16cb18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cb18) {
            ctx->pc = 0x16CDB0u;
            goto label_16cdb0;
        }
    }
    ctx->pc = 0x16CB20u;
    // 0x16cb20: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x16cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x16cb24: 0x1203009c  beq         $s0, $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x16CB24u;
    {
        const bool branch_taken_0x16cb24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CB24u;
            // 0x16cb28: 0x2403026c  addiu       $v1, $zero, 0x26C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb24) {
            ctx->pc = 0x16CD98u;
            goto label_16cd98;
        }
    }
    ctx->pc = 0x16CB2Cu;
    // 0x16cb2c: 0x12030094  beq         $s0, $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x16CB2Cu;
    {
        const bool branch_taken_0x16cb2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cb2c) {
            ctx->pc = 0x16CD80u;
            goto label_16cd80;
        }
    }
    ctx->pc = 0x16CB34u;
    // 0x16cb34: 0x24030230  addiu       $v1, $zero, 0x230
    ctx->pc = 0x16cb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x16cb38: 0x1203008b  beq         $s0, $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x16CB38u;
    {
        const bool branch_taken_0x16cb38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CB38u;
            // 0x16cb3c: 0x2403021c  addiu       $v1, $zero, 0x21C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb38) {
            ctx->pc = 0x16CD68u;
            goto label_16cd68;
        }
    }
    ctx->pc = 0x16CB40u;
    // 0x16cb40: 0x12030083  beq         $s0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x16CB40u;
    {
        const bool branch_taken_0x16cb40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cb40) {
            ctx->pc = 0x16CD50u;
            goto label_16cd50;
        }
    }
    ctx->pc = 0x16CB48u;
    // 0x16cb48: 0x24030208  addiu       $v1, $zero, 0x208
    ctx->pc = 0x16cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x16cb4c: 0x1203007a  beq         $s0, $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x16CB4Cu;
    {
        const bool branch_taken_0x16cb4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CB4Cu;
            // 0x16cb50: 0x240301f4  addiu       $v1, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb4c) {
            ctx->pc = 0x16CD38u;
            goto label_16cd38;
        }
    }
    ctx->pc = 0x16CB54u;
    // 0x16cb54: 0x12030072  beq         $s0, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x16CB54u;
    {
        const bool branch_taken_0x16cb54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cb54) {
            ctx->pc = 0x16CD20u;
            goto label_16cd20;
        }
    }
    ctx->pc = 0x16CB5Cu;
    // 0x16cb5c: 0x240301e0  addiu       $v1, $zero, 0x1E0
    ctx->pc = 0x16cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x16cb60: 0x12030069  beq         $s0, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x16CB60u;
    {
        const bool branch_taken_0x16cb60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CB60u;
            // 0x16cb64: 0x240301b8  addiu       $v1, $zero, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb60) {
            ctx->pc = 0x16CD08u;
            goto label_16cd08;
        }
    }
    ctx->pc = 0x16CB68u;
    // 0x16cb68: 0x12030061  beq         $s0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x16CB68u;
    {
        const bool branch_taken_0x16cb68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cb68) {
            ctx->pc = 0x16CCF0u;
            goto label_16ccf0;
        }
    }
    ctx->pc = 0x16CB70u;
    // 0x16cb70: 0x240301a4  addiu       $v1, $zero, 0x1A4
    ctx->pc = 0x16cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x16cb74: 0x12030058  beq         $s0, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x16CB74u;
    {
        const bool branch_taken_0x16cb74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CB74u;
            // 0x16cb78: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb74) {
            ctx->pc = 0x16CCD8u;
            goto label_16ccd8;
        }
    }
    ctx->pc = 0x16CB7Cu;
    // 0x16cb7c: 0x12030050  beq         $s0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x16CB7Cu;
    {
        const bool branch_taken_0x16cb7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cb7c) {
            ctx->pc = 0x16CCC0u;
            goto label_16ccc0;
        }
    }
    ctx->pc = 0x16CB84u;
    // 0x16cb84: 0x2403017c  addiu       $v1, $zero, 0x17C
    ctx->pc = 0x16cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
    // 0x16cb88: 0x12030047  beq         $s0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x16CB88u;
    {
        const bool branch_taken_0x16cb88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CB88u;
            // 0x16cb8c: 0x24030168  addiu       $v1, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb88) {
            ctx->pc = 0x16CCA8u;
            goto label_16cca8;
        }
    }
    ctx->pc = 0x16CB90u;
    // 0x16cb90: 0x1203003f  beq         $s0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x16CB90u;
    {
        const bool branch_taken_0x16cb90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cb90) {
            ctx->pc = 0x16CC90u;
            goto label_16cc90;
        }
    }
    ctx->pc = 0x16CB98u;
    // 0x16cb98: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x16cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x16cb9c: 0x12030036  beq         $s0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x16CB9Cu;
    {
        const bool branch_taken_0x16cb9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CB9Cu;
            // 0x16cba0: 0x2403012c  addiu       $v1, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb9c) {
            ctx->pc = 0x16CC78u;
            goto label_16cc78;
        }
    }
    ctx->pc = 0x16CBA4u;
    // 0x16cba4: 0x1203002e  beq         $s0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x16CBA4u;
    {
        const bool branch_taken_0x16cba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cba4) {
            ctx->pc = 0x16CC60u;
            goto label_16cc60;
        }
    }
    ctx->pc = 0x16CBACu;
    // 0x16cbac: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x16cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x16cbb0: 0x12030025  beq         $s0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x16CBB0u;
    {
        const bool branch_taken_0x16cbb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CBB0u;
            // 0x16cbb4: 0x240300f0  addiu       $v1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cbb0) {
            ctx->pc = 0x16CC48u;
            goto label_16cc48;
        }
    }
    ctx->pc = 0x16CBB8u;
    // 0x16cbb8: 0x1203001d  beq         $s0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x16CBB8u;
    {
        const bool branch_taken_0x16cbb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cbb8) {
            ctx->pc = 0x16CC30u;
            goto label_16cc30;
        }
    }
    ctx->pc = 0x16CBC0u;
    // 0x16cbc0: 0x240300dc  addiu       $v1, $zero, 0xDC
    ctx->pc = 0x16cbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x16cbc4: 0x12030014  beq         $s0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x16CBC4u;
    {
        const bool branch_taken_0x16cbc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CBC4u;
            // 0x16cbc8: 0x240300c8  addiu       $v1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cbc4) {
            ctx->pc = 0x16CC18u;
            goto label_16cc18;
        }
    }
    ctx->pc = 0x16CBCCu;
    // 0x16cbcc: 0x1203000c  beq         $s0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x16CBCCu;
    {
        const bool branch_taken_0x16cbcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16CBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CBCCu;
            // 0x16cbd0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cbcc) {
            ctx->pc = 0x16CC00u;
            goto label_16cc00;
        }
    }
    ctx->pc = 0x16CBD4u;
    // 0x16cbd4: 0x12040004  beq         $s0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16CBD4u;
    {
        const bool branch_taken_0x16cbd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x16cbd4) {
            ctx->pc = 0x16CBE8u;
            goto label_16cbe8;
        }
    }
    ctx->pc = 0x16CBDCu;
    // 0x16cbdc: 0x100001d6  b           . + 4 + (0x1D6 << 2)
    ctx->pc = 0x16CBDCu;
    {
        const bool branch_taken_0x16cbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cbdc) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CBE4u;
    // 0x16cbe4: 0x0  nop
    ctx->pc = 0x16cbe4u;
    // NOP
label_16cbe8:
    // 0x16cbe8: 0xc05d004  jal         func_174010
    ctx->pc = 0x16CBE8u;
    SET_GPR_U32(ctx, 31, 0x16CBF0u);
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CBF0u; }
        if (ctx->pc != 0x16CBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CBF0u; }
        if (ctx->pc != 0x16CBF0u) { return; }
    }
    ctx->pc = 0x16CBF0u;
    // 0x16cbf0: 0xc056050  jal         func_158140
    ctx->pc = 0x16CBF0u;
    SET_GPR_U32(ctx, 31, 0x16CBF8u);
    ctx->pc = 0x158140u;
    if (runtime->hasFunction(0x158140u)) {
        auto targetFn = runtime->lookupFunction(0x158140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CBF8u; }
        if (ctx->pc != 0x16CBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuOk_0x158140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CBF8u; }
        if (ctx->pc != 0x16CBF8u) { return; }
    }
    ctx->pc = 0x16CBF8u;
    // 0x16cbf8: 0x100001cf  b           . + 4 + (0x1CF << 2)
    ctx->pc = 0x16CBF8u;
    {
        const bool branch_taken_0x16cbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cbf8) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CC00u;
label_16cc00:
    // 0x16cc00: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16cc04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16cc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cc08: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CC08u;
    SET_GPR_U32(ctx, 31, 0x16CC10u);
    ctx->pc = 0x16CC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CC08u;
            // 0x16cc0c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC10u; }
        if (ctx->pc != 0x16CC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC10u; }
        if (ctx->pc != 0x16CC10u) { return; }
    }
    ctx->pc = 0x16CC10u;
    // 0x16cc10: 0x100001c9  b           . + 4 + (0x1C9 << 2)
    ctx->pc = 0x16CC10u;
    {
        const bool branch_taken_0x16cc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cc10) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CC18u;
label_16cc18:
    // 0x16cc18: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16cc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16cc1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16cc1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cc20: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CC20u;
    SET_GPR_U32(ctx, 31, 0x16CC28u);
    ctx->pc = 0x16CC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CC20u;
            // 0x16cc24: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC28u; }
        if (ctx->pc != 0x16CC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC28u; }
        if (ctx->pc != 0x16CC28u) { return; }
    }
    ctx->pc = 0x16CC28u;
    // 0x16cc28: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x16CC28u;
    {
        const bool branch_taken_0x16cc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cc28) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CC30u;
label_16cc30:
    // 0x16cc30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16cc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16cc34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16cc34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cc38: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CC38u;
    SET_GPR_U32(ctx, 31, 0x16CC40u);
    ctx->pc = 0x16CC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CC38u;
            // 0x16cc3c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC40u; }
        if (ctx->pc != 0x16CC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC40u; }
        if (ctx->pc != 0x16CC40u) { return; }
    }
    ctx->pc = 0x16CC40u;
    // 0x16cc40: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x16CC40u;
    {
        const bool branch_taken_0x16cc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cc40) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CC48u;
label_16cc48:
    // 0x16cc48: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16cc4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16cc4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cc50: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CC50u;
    SET_GPR_U32(ctx, 31, 0x16CC58u);
    ctx->pc = 0x16CC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CC50u;
            // 0x16cc54: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC58u; }
        if (ctx->pc != 0x16CC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC58u; }
        if (ctx->pc != 0x16CC58u) { return; }
    }
    ctx->pc = 0x16CC58u;
    // 0x16cc58: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x16CC58u;
    {
        const bool branch_taken_0x16cc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cc58) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CC60u;
label_16cc60:
    // 0x16cc60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16cc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16cc64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16cc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cc68: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CC68u;
    SET_GPR_U32(ctx, 31, 0x16CC70u);
    ctx->pc = 0x16CC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CC68u;
            // 0x16cc6c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC70u; }
        if (ctx->pc != 0x16CC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC70u; }
        if (ctx->pc != 0x16CC70u) { return; }
    }
    ctx->pc = 0x16CC70u;
    // 0x16cc70: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x16CC70u;
    {
        const bool branch_taken_0x16cc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cc70) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CC78u;
label_16cc78:
    // 0x16cc78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16cc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16cc7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16cc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cc80: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CC80u;
    SET_GPR_U32(ctx, 31, 0x16CC88u);
    ctx->pc = 0x16CC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CC80u;
            // 0x16cc84: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC88u; }
        if (ctx->pc != 0x16CC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC88u; }
        if (ctx->pc != 0x16CC88u) { return; }
    }
    ctx->pc = 0x16CC88u;
    // 0x16cc88: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x16CC88u;
    {
        const bool branch_taken_0x16cc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cc88) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CC90u;
label_16cc90:
    // 0x16cc90: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16cc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16cc94: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16cc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16cc98: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CC98u;
    SET_GPR_U32(ctx, 31, 0x16CCA0u);
    ctx->pc = 0x16CC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CC98u;
            // 0x16cc9c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CCA0u; }
        if (ctx->pc != 0x16CCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CCA0u; }
        if (ctx->pc != 0x16CCA0u) { return; }
    }
    ctx->pc = 0x16CCA0u;
    // 0x16cca0: 0x100001a5  b           . + 4 + (0x1A5 << 2)
    ctx->pc = 0x16CCA0u;
    {
        const bool branch_taken_0x16cca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cca0) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CCA8u;
label_16cca8:
    // 0x16cca8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16cca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ccac: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16ccacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16ccb0: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CCB0u;
    SET_GPR_U32(ctx, 31, 0x16CCB8u);
    ctx->pc = 0x16CCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CCB0u;
            // 0x16ccb4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CCB8u; }
        if (ctx->pc != 0x16CCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CCB8u; }
        if (ctx->pc != 0x16CCB8u) { return; }
    }
    ctx->pc = 0x16CCB8u;
    // 0x16ccb8: 0x1000019f  b           . + 4 + (0x19F << 2)
    ctx->pc = 0x16CCB8u;
    {
        const bool branch_taken_0x16ccb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ccb8) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CCC0u;
label_16ccc0:
    // 0x16ccc0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16ccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ccc4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16ccc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16ccc8: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CCC8u;
    SET_GPR_U32(ctx, 31, 0x16CCD0u);
    ctx->pc = 0x16CCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CCC8u;
            // 0x16cccc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CCD0u; }
        if (ctx->pc != 0x16CCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CCD0u; }
        if (ctx->pc != 0x16CCD0u) { return; }
    }
    ctx->pc = 0x16CCD0u;
    // 0x16ccd0: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x16CCD0u;
    {
        const bool branch_taken_0x16ccd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ccd0) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CCD8u;
label_16ccd8:
    // 0x16ccd8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16ccd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ccdc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16ccdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16cce0: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CCE0u;
    SET_GPR_U32(ctx, 31, 0x16CCE8u);
    ctx->pc = 0x16CCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CCE0u;
            // 0x16cce4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CCE8u; }
        if (ctx->pc != 0x16CCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CCE8u; }
        if (ctx->pc != 0x16CCE8u) { return; }
    }
    ctx->pc = 0x16CCE8u;
    // 0x16cce8: 0x10000193  b           . + 4 + (0x193 << 2)
    ctx->pc = 0x16CCE8u;
    {
        const bool branch_taken_0x16cce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cce8) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CCF0u;
label_16ccf0:
    // 0x16ccf0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16ccf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ccf4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16ccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16ccf8: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CCF8u;
    SET_GPR_U32(ctx, 31, 0x16CD00u);
    ctx->pc = 0x16CCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CCF8u;
            // 0x16ccfc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD00u; }
        if (ctx->pc != 0x16CD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD00u; }
        if (ctx->pc != 0x16CD00u) { return; }
    }
    ctx->pc = 0x16CD00u;
    // 0x16cd00: 0x1000018d  b           . + 4 + (0x18D << 2)
    ctx->pc = 0x16CD00u;
    {
        const bool branch_taken_0x16cd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cd00) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CD08u;
label_16cd08:
    // 0x16cd08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16cd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16cd0c: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16cd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16cd10: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CD10u;
    SET_GPR_U32(ctx, 31, 0x16CD18u);
    ctx->pc = 0x16CD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CD10u;
            // 0x16cd14: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD18u; }
        if (ctx->pc != 0x16CD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD18u; }
        if (ctx->pc != 0x16CD18u) { return; }
    }
    ctx->pc = 0x16CD18u;
    // 0x16cd18: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x16CD18u;
    {
        const bool branch_taken_0x16cd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cd18) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CD20u;
label_16cd20:
    // 0x16cd20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16cd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16cd24: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16cd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16cd28: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CD28u;
    SET_GPR_U32(ctx, 31, 0x16CD30u);
    ctx->pc = 0x16CD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CD28u;
            // 0x16cd2c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD30u; }
        if (ctx->pc != 0x16CD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD30u; }
        if (ctx->pc != 0x16CD30u) { return; }
    }
    ctx->pc = 0x16CD30u;
    // 0x16cd30: 0x10000181  b           . + 4 + (0x181 << 2)
    ctx->pc = 0x16CD30u;
    {
        const bool branch_taken_0x16cd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cd30) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CD38u;
label_16cd38:
    // 0x16cd38: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16cd3c: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16cd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16cd40: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CD40u;
    SET_GPR_U32(ctx, 31, 0x16CD48u);
    ctx->pc = 0x16CD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CD40u;
            // 0x16cd44: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD48u; }
        if (ctx->pc != 0x16CD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD48u; }
        if (ctx->pc != 0x16CD48u) { return; }
    }
    ctx->pc = 0x16CD48u;
    // 0x16cd48: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x16CD48u;
    {
        const bool branch_taken_0x16cd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cd48) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CD50u;
label_16cd50:
    // 0x16cd50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16cd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16cd54: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16cd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16cd58: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CD58u;
    SET_GPR_U32(ctx, 31, 0x16CD60u);
    ctx->pc = 0x16CD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CD58u;
            // 0x16cd5c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD60u; }
        if (ctx->pc != 0x16CD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD60u; }
        if (ctx->pc != 0x16CD60u) { return; }
    }
    ctx->pc = 0x16CD60u;
    // 0x16cd60: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x16CD60u;
    {
        const bool branch_taken_0x16cd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cd60) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CD68u;
label_16cd68:
    // 0x16cd68: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16cd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16cd6c: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16cd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16cd70: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CD70u;
    SET_GPR_U32(ctx, 31, 0x16CD78u);
    ctx->pc = 0x16CD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CD70u;
            // 0x16cd74: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD78u; }
        if (ctx->pc != 0x16CD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD78u; }
        if (ctx->pc != 0x16CD78u) { return; }
    }
    ctx->pc = 0x16CD78u;
    // 0x16cd78: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x16CD78u;
    {
        const bool branch_taken_0x16cd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cd78) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CD80u;
label_16cd80:
    // 0x16cd80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16cd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd84: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16cd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16cd88: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CD88u;
    SET_GPR_U32(ctx, 31, 0x16CD90u);
    ctx->pc = 0x16CD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CD88u;
            // 0x16cd8c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD90u; }
        if (ctx->pc != 0x16CD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD90u; }
        if (ctx->pc != 0x16CD90u) { return; }
    }
    ctx->pc = 0x16CD90u;
    // 0x16cd90: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x16CD90u;
    {
        const bool branch_taken_0x16cd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cd90) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CD98u;
label_16cd98:
    // 0x16cd98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16cd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd9c: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16cd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16cda0: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CDA0u;
    SET_GPR_U32(ctx, 31, 0x16CDA8u);
    ctx->pc = 0x16CDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CDA0u;
            // 0x16cda4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDA8u; }
        if (ctx->pc != 0x16CDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDA8u; }
        if (ctx->pc != 0x16CDA8u) { return; }
    }
    ctx->pc = 0x16CDA8u;
    // 0x16cda8: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x16CDA8u;
    {
        const bool branch_taken_0x16cda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cda8) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CDB0u;
label_16cdb0:
    // 0x16cdb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16cdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cdb4: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16cdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16cdb8: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CDB8u;
    SET_GPR_U32(ctx, 31, 0x16CDC0u);
    ctx->pc = 0x16CDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CDB8u;
            // 0x16cdbc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDC0u; }
        if (ctx->pc != 0x16CDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDC0u; }
        if (ctx->pc != 0x16CDC0u) { return; }
    }
    ctx->pc = 0x16CDC0u;
    // 0x16cdc0: 0x1000015d  b           . + 4 + (0x15D << 2)
    ctx->pc = 0x16CDC0u;
    {
        const bool branch_taken_0x16cdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cdc0) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CDC8u;
label_16cdc8:
    // 0x16cdc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16cdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cdcc: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16cdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16cdd0: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CDD0u;
    SET_GPR_U32(ctx, 31, 0x16CDD8u);
    ctx->pc = 0x16CDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CDD0u;
            // 0x16cdd4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDD8u; }
        if (ctx->pc != 0x16CDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDD8u; }
        if (ctx->pc != 0x16CDD8u) { return; }
    }
    ctx->pc = 0x16CDD8u;
    // 0x16cdd8: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x16CDD8u;
    {
        const bool branch_taken_0x16cdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cdd8) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CDE0u;
label_16cde0:
    // 0x16cde0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16cde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cde4: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16cde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16cde8: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CDE8u;
    SET_GPR_U32(ctx, 31, 0x16CDF0u);
    ctx->pc = 0x16CDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CDE8u;
            // 0x16cdec: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDF0u; }
        if (ctx->pc != 0x16CDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDF0u; }
        if (ctx->pc != 0x16CDF0u) { return; }
    }
    ctx->pc = 0x16CDF0u;
    // 0x16cdf0: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x16CDF0u;
    {
        const bool branch_taken_0x16cdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cdf0) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CDF8u;
label_16cdf8:
    // 0x16cdf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16cdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cdfc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16cdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16ce00: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CE00u;
    SET_GPR_U32(ctx, 31, 0x16CE08u);
    ctx->pc = 0x16CE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CE00u;
            // 0x16ce04: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE08u; }
        if (ctx->pc != 0x16CE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE08u; }
        if (ctx->pc != 0x16CE08u) { return; }
    }
    ctx->pc = 0x16CE08u;
    // 0x16ce08: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x16CE08u;
    {
        const bool branch_taken_0x16ce08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ce08) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CE10u;
label_16ce10:
    // 0x16ce10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16ce10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ce14: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16ce14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16ce18: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CE18u;
    SET_GPR_U32(ctx, 31, 0x16CE20u);
    ctx->pc = 0x16CE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CE18u;
            // 0x16ce1c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE20u; }
        if (ctx->pc != 0x16CE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE20u; }
        if (ctx->pc != 0x16CE20u) { return; }
    }
    ctx->pc = 0x16CE20u;
    // 0x16ce20: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x16CE20u;
    {
        const bool branch_taken_0x16ce20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ce20) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CE28u;
label_16ce28:
    // 0x16ce28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16ce28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ce2c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16ce2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16ce30: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CE30u;
    SET_GPR_U32(ctx, 31, 0x16CE38u);
    ctx->pc = 0x16CE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CE30u;
            // 0x16ce34: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE38u; }
        if (ctx->pc != 0x16CE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE38u; }
        if (ctx->pc != 0x16CE38u) { return; }
    }
    ctx->pc = 0x16CE38u;
    // 0x16ce38: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x16CE38u;
    {
        const bool branch_taken_0x16ce38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ce38) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CE40u;
label_16ce40:
    // 0x16ce40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16ce40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ce44: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16ce44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16ce48: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CE48u;
    SET_GPR_U32(ctx, 31, 0x16CE50u);
    ctx->pc = 0x16CE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CE48u;
            // 0x16ce4c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE50u; }
        if (ctx->pc != 0x16CE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE50u; }
        if (ctx->pc != 0x16CE50u) { return; }
    }
    ctx->pc = 0x16CE50u;
    // 0x16ce50: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x16CE50u;
    {
        const bool branch_taken_0x16ce50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ce50) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CE58u;
label_16ce58:
    // 0x16ce58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16ce58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ce5c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16ce5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16ce60: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CE60u;
    SET_GPR_U32(ctx, 31, 0x16CE68u);
    ctx->pc = 0x16CE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CE60u;
            // 0x16ce64: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE68u; }
        if (ctx->pc != 0x16CE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE68u; }
        if (ctx->pc != 0x16CE68u) { return; }
    }
    ctx->pc = 0x16CE68u;
    // 0x16ce68: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x16CE68u;
    {
        const bool branch_taken_0x16ce68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ce68) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CE70u;
label_16ce70:
    // 0x16ce70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16ce70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ce74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ce74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce78: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CE78u;
    SET_GPR_U32(ctx, 31, 0x16CE80u);
    ctx->pc = 0x16CE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CE78u;
            // 0x16ce7c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE80u; }
        if (ctx->pc != 0x16CE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE80u; }
        if (ctx->pc != 0x16CE80u) { return; }
    }
    ctx->pc = 0x16CE80u;
    // 0x16ce80: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x16CE80u;
    {
        const bool branch_taken_0x16ce80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ce80) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CE88u;
label_16ce88:
    // 0x16ce88: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16ce88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ce8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ce8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce90: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CE90u;
    SET_GPR_U32(ctx, 31, 0x16CE98u);
    ctx->pc = 0x16CE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CE90u;
            // 0x16ce94: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE98u; }
        if (ctx->pc != 0x16CE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE98u; }
        if (ctx->pc != 0x16CE98u) { return; }
    }
    ctx->pc = 0x16CE98u;
    // 0x16ce98: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x16CE98u;
    {
        const bool branch_taken_0x16ce98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ce98) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CEA0u;
label_16cea0:
    // 0x16cea0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16cea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16cea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16cea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cea8: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CEA8u;
    SET_GPR_U32(ctx, 31, 0x16CEB0u);
    ctx->pc = 0x16CEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CEA8u;
            // 0x16ceac: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CEB0u; }
        if (ctx->pc != 0x16CEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CEB0u; }
        if (ctx->pc != 0x16CEB0u) { return; }
    }
    ctx->pc = 0x16CEB0u;
    // 0x16ceb0: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x16CEB0u;
    {
        const bool branch_taken_0x16ceb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ceb0) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CEB8u;
label_16ceb8:
    // 0x16ceb8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16ceb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16cebc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16cebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cec0: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CEC0u;
    SET_GPR_U32(ctx, 31, 0x16CEC8u);
    ctx->pc = 0x16CEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CEC0u;
            // 0x16cec4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CEC8u; }
        if (ctx->pc != 0x16CEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CEC8u; }
        if (ctx->pc != 0x16CEC8u) { return; }
    }
    ctx->pc = 0x16CEC8u;
    // 0x16cec8: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x16CEC8u;
    {
        const bool branch_taken_0x16cec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cec8) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CED0u;
label_16ced0:
    // 0x16ced0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16ced0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16ced4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ced4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ced8: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CED8u;
    SET_GPR_U32(ctx, 31, 0x16CEE0u);
    ctx->pc = 0x16CEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CED8u;
            // 0x16cedc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CEE0u; }
        if (ctx->pc != 0x16CEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CEE0u; }
        if (ctx->pc != 0x16CEE0u) { return; }
    }
    ctx->pc = 0x16CEE0u;
    // 0x16cee0: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x16CEE0u;
    {
        const bool branch_taken_0x16cee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cee0) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CEE8u;
label_16cee8:
    // 0x16cee8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16cee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16ceec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ceecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cef0: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16CEF0u;
    SET_GPR_U32(ctx, 31, 0x16CEF8u);
    ctx->pc = 0x16CEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CEF0u;
            // 0x16cef4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CEF8u; }
        if (ctx->pc != 0x16CEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CEF8u; }
        if (ctx->pc != 0x16CEF8u) { return; }
    }
    ctx->pc = 0x16CEF8u;
    // 0x16cef8: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x16CEF8u;
    {
        const bool branch_taken_0x16cef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cef8) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CF00u;
label_16cf00:
    // 0x16cf00: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16cf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16cf04: 0x2405ff88  addiu       $a1, $zero, -0x78
    ctx->pc = 0x16cf04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
    // 0x16cf08: 0xc059a70  jal         func_1669C0
    ctx->pc = 0x16CF08u;
    SET_GPR_U32(ctx, 31, 0x16CF10u);
    ctx->pc = 0x16CF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF08u;
            // 0x16cf0c: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1669C0u;
    if (runtime->hasFunction(0x1669C0u)) {
        auto targetFn = runtime->lookupFunction(0x1669C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF10u; }
        if (ctx->pc != 0x16CF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_01_0x1669c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF10u; }
        if (ctx->pc != 0x16CF10u) { return; }
    }
    ctx->pc = 0x16CF10u;
    // 0x16cf10: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16cf10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16cf14: 0x2405ff92  addiu       $a1, $zero, -0x6E
    ctx->pc = 0x16cf14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967186));
    // 0x16cf18: 0xc059a70  jal         func_1669C0
    ctx->pc = 0x16CF18u;
    SET_GPR_U32(ctx, 31, 0x16CF20u);
    ctx->pc = 0x16CF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF18u;
            // 0x16cf1c: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1669C0u;
    if (runtime->hasFunction(0x1669C0u)) {
        auto targetFn = runtime->lookupFunction(0x1669C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF20u; }
        if (ctx->pc != 0x16CF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_01_0x1669c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF20u; }
        if (ctx->pc != 0x16CF20u) { return; }
    }
    ctx->pc = 0x16CF20u;
    // 0x16cf20: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x16cf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16cf24: 0x2405ff9c  addiu       $a1, $zero, -0x64
    ctx->pc = 0x16cf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x16cf28: 0xc059a70  jal         func_1669C0
    ctx->pc = 0x16CF28u;
    SET_GPR_U32(ctx, 31, 0x16CF30u);
    ctx->pc = 0x16CF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF28u;
            // 0x16cf2c: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1669C0u;
    if (runtime->hasFunction(0x1669C0u)) {
        auto targetFn = runtime->lookupFunction(0x1669C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF30u; }
        if (ctx->pc != 0x16CF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_01_0x1669c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF30u; }
        if (ctx->pc != 0x16CF30u) { return; }
    }
    ctx->pc = 0x16CF30u;
    // 0x16cf30: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x16cf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16cf34: 0x2405ff9c  addiu       $a1, $zero, -0x64
    ctx->pc = 0x16cf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x16cf38: 0xc059a70  jal         func_1669C0
    ctx->pc = 0x16CF38u;
    SET_GPR_U32(ctx, 31, 0x16CF40u);
    ctx->pc = 0x16CF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF38u;
            // 0x16cf3c: 0x2406006e  addiu       $a2, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1669C0u;
    if (runtime->hasFunction(0x1669C0u)) {
        auto targetFn = runtime->lookupFunction(0x1669C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF40u; }
        if (ctx->pc != 0x16CF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_01_0x1669c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF40u; }
        if (ctx->pc != 0x16CF40u) { return; }
    }
    ctx->pc = 0x16CF40u;
    // 0x16cf40: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16cf40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16cf44: 0x2405ff9c  addiu       $a1, $zero, -0x64
    ctx->pc = 0x16cf44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x16cf48: 0xc059a70  jal         func_1669C0
    ctx->pc = 0x16CF48u;
    SET_GPR_U32(ctx, 31, 0x16CF50u);
    ctx->pc = 0x16CF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF48u;
            // 0x16cf4c: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1669C0u;
    if (runtime->hasFunction(0x1669C0u)) {
        auto targetFn = runtime->lookupFunction(0x1669C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF50u; }
        if (ctx->pc != 0x16CF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_01_0x1669c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF50u; }
        if (ctx->pc != 0x16CF50u) { return; }
    }
    ctx->pc = 0x16CF50u;
    // 0x16cf50: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16cf54: 0x2405ff9c  addiu       $a1, $zero, -0x64
    ctx->pc = 0x16cf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x16cf58: 0xc059a70  jal         func_1669C0
    ctx->pc = 0x16CF58u;
    SET_GPR_U32(ctx, 31, 0x16CF60u);
    ctx->pc = 0x16CF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF58u;
            // 0x16cf5c: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1669C0u;
    if (runtime->hasFunction(0x1669C0u)) {
        auto targetFn = runtime->lookupFunction(0x1669C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF60u; }
        if (ctx->pc != 0x16CF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_01_0x1669c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF60u; }
        if (ctx->pc != 0x16CF60u) { return; }
    }
    ctx->pc = 0x16CF60u;
    // 0x16cf60: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x16cf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16cf64: 0x2405ffa6  addiu       $a1, $zero, -0x5A
    ctx->pc = 0x16cf64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967206));
    // 0x16cf68: 0xc059a70  jal         func_1669C0
    ctx->pc = 0x16CF68u;
    SET_GPR_U32(ctx, 31, 0x16CF70u);
    ctx->pc = 0x16CF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF68u;
            // 0x16cf6c: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1669C0u;
    if (runtime->hasFunction(0x1669C0u)) {
        auto targetFn = runtime->lookupFunction(0x1669C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF70u; }
        if (ctx->pc != 0x16CF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_01_0x1669c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF70u; }
        if (ctx->pc != 0x16CF70u) { return; }
    }
    ctx->pc = 0x16CF70u;
    // 0x16cf70: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16cf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16cf74: 0x2405ffb0  addiu       $a1, $zero, -0x50
    ctx->pc = 0x16cf74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967216));
    // 0x16cf78: 0xc059a70  jal         func_1669C0
    ctx->pc = 0x16CF78u;
    SET_GPR_U32(ctx, 31, 0x16CF80u);
    ctx->pc = 0x16CF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF78u;
            // 0x16cf7c: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1669C0u;
    if (runtime->hasFunction(0x1669C0u)) {
        auto targetFn = runtime->lookupFunction(0x1669C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF80u; }
        if (ctx->pc != 0x16CF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_01_0x1669c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF80u; }
        if (ctx->pc != 0x16CF80u) { return; }
    }
    ctx->pc = 0x16CF80u;
    // 0x16cf80: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x16cf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16cf84: 0x2405ffb0  addiu       $a1, $zero, -0x50
    ctx->pc = 0x16cf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967216));
    // 0x16cf88: 0xc059a70  jal         func_1669C0
    ctx->pc = 0x16CF88u;
    SET_GPR_U32(ctx, 31, 0x16CF90u);
    ctx->pc = 0x16CF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF88u;
            // 0x16cf8c: 0x2406005a  addiu       $a2, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1669C0u;
    if (runtime->hasFunction(0x1669C0u)) {
        auto targetFn = runtime->lookupFunction(0x1669C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF90u; }
        if (ctx->pc != 0x16CF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_01_0x1669c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF90u; }
        if (ctx->pc != 0x16CF90u) { return; }
    }
    ctx->pc = 0x16CF90u;
    // 0x16cf90: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x16cf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16cf94: 0x2405ffb0  addiu       $a1, $zero, -0x50
    ctx->pc = 0x16cf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967216));
    // 0x16cf98: 0xc059a70  jal         func_1669C0
    ctx->pc = 0x16CF98u;
    SET_GPR_U32(ctx, 31, 0x16CFA0u);
    ctx->pc = 0x16CF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF98u;
            // 0x16cf9c: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1669C0u;
    if (runtime->hasFunction(0x1669C0u)) {
        auto targetFn = runtime->lookupFunction(0x1669C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CFA0u; }
        if (ctx->pc != 0x16CFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_01_0x1669c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CFA0u; }
        if (ctx->pc != 0x16CFA0u) { return; }
    }
    ctx->pc = 0x16CFA0u;
    // 0x16cfa0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x16cfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16cfa4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16cfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16cfa8: 0xc059a70  jal         func_1669C0
    ctx->pc = 0x16CFA8u;
    SET_GPR_U32(ctx, 31, 0x16CFB0u);
    ctx->pc = 0x16CFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CFA8u;
            // 0x16cfac: 0x24060046  addiu       $a2, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1669C0u;
    if (runtime->hasFunction(0x1669C0u)) {
        auto targetFn = runtime->lookupFunction(0x1669C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CFB0u; }
        if (ctx->pc != 0x16CFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_01_0x1669c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CFB0u; }
        if (ctx->pc != 0x16CFB0u) { return; }
    }
    ctx->pc = 0x16CFB0u;
    // 0x16cfb0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x16cfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16cfb4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16cfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16cfb8: 0xc059a70  jal         func_1669C0
    ctx->pc = 0x16CFB8u;
    SET_GPR_U32(ctx, 31, 0x16CFC0u);
    ctx->pc = 0x16CFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CFB8u;
            // 0x16cfbc: 0x24060046  addiu       $a2, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1669C0u;
    if (runtime->hasFunction(0x1669C0u)) {
        auto targetFn = runtime->lookupFunction(0x1669C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CFC0u; }
        if (ctx->pc != 0x16CFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_01_0x1669c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CFC0u; }
        if (ctx->pc != 0x16CFC0u) { return; }
    }
    ctx->pc = 0x16CFC0u;
    // 0x16cfc0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16cfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16cfc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16cfc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cfc8: 0xc059a70  jal         func_1669C0
    ctx->pc = 0x16CFC8u;
    SET_GPR_U32(ctx, 31, 0x16CFD0u);
    ctx->pc = 0x16CFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CFC8u;
            // 0x16cfcc: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1669C0u;
    if (runtime->hasFunction(0x1669C0u)) {
        auto targetFn = runtime->lookupFunction(0x1669C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CFD0u; }
        if (ctx->pc != 0x16CFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_01_0x1669c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CFD0u; }
        if (ctx->pc != 0x16CFD0u) { return; }
    }
    ctx->pc = 0x16CFD0u;
    // 0x16cfd0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16cfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16cfd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16cfd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cfd8: 0xc059a70  jal         func_1669C0
    ctx->pc = 0x16CFD8u;
    SET_GPR_U32(ctx, 31, 0x16CFE0u);
    ctx->pc = 0x16CFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CFD8u;
            // 0x16cfdc: 0x2406005a  addiu       $a2, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1669C0u;
    if (runtime->hasFunction(0x1669C0u)) {
        auto targetFn = runtime->lookupFunction(0x1669C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CFE0u; }
        if (ctx->pc != 0x16CFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_01_0x1669c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CFE0u; }
        if (ctx->pc != 0x16CFE0u) { return; }
    }
    ctx->pc = 0x16CFE0u;
    // 0x16cfe0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x16cfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16cfe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16cfe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cfe8: 0xc059a70  jal         func_1669C0
    ctx->pc = 0x16CFE8u;
    SET_GPR_U32(ctx, 31, 0x16CFF0u);
    ctx->pc = 0x16CFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CFE8u;
            // 0x16cfec: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1669C0u;
    if (runtime->hasFunction(0x1669C0u)) {
        auto targetFn = runtime->lookupFunction(0x1669C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CFF0u; }
        if (ctx->pc != 0x16CFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_01_0x1669c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CFF0u; }
        if (ctx->pc != 0x16CFF0u) { return; }
    }
    ctx->pc = 0x16CFF0u;
    // 0x16cff0: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x16CFF0u;
    {
        const bool branch_taken_0x16cff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cff0) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16CFF8u;
label_16cff8:
    // 0x16cff8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16cff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cffc: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x16cffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x16d000: 0xc063838  jal         func_18E0E0
    ctx->pc = 0x16D000u;
    SET_GPR_U32(ctx, 31, 0x16D008u);
    ctx->pc = 0x16D004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D000u;
            // 0x16d004: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E0E0u;
    if (runtime->hasFunction(0x18E0E0u)) {
        auto targetFn = runtime->lookupFunction(0x18E0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D008u; }
        if (ctx->pc != 0x16D008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_02_0x18e0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D008u; }
        if (ctx->pc != 0x16D008u) { return; }
    }
    ctx->pc = 0x16D008u;
    // 0x16d008: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x16D008u;
    {
        const bool branch_taken_0x16d008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d008) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D010u;
label_16d010:
    // 0x16d010: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d014: 0x2405ffd3  addiu       $a1, $zero, -0x2D
    ctx->pc = 0x16d014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
    // 0x16d018: 0xc063838  jal         func_18E0E0
    ctx->pc = 0x16D018u;
    SET_GPR_U32(ctx, 31, 0x16D020u);
    ctx->pc = 0x16D01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D018u;
            // 0x16d01c: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E0E0u;
    if (runtime->hasFunction(0x18E0E0u)) {
        auto targetFn = runtime->lookupFunction(0x18E0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D020u; }
        if (ctx->pc != 0x16D020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_02_0x18e0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D020u; }
        if (ctx->pc != 0x16D020u) { return; }
    }
    ctx->pc = 0x16D020u;
    // 0x16d020: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x16D020u;
    {
        const bool branch_taken_0x16d020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d020) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D028u;
label_16d028:
    // 0x16d028: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d02c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x16d02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x16d030: 0xc063838  jal         func_18E0E0
    ctx->pc = 0x16D030u;
    SET_GPR_U32(ctx, 31, 0x16D038u);
    ctx->pc = 0x16D034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D030u;
            // 0x16d034: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E0E0u;
    if (runtime->hasFunction(0x18E0E0u)) {
        auto targetFn = runtime->lookupFunction(0x18E0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D038u; }
        if (ctx->pc != 0x16D038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_02_0x18e0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D038u; }
        if (ctx->pc != 0x16D038u) { return; }
    }
    ctx->pc = 0x16D038u;
    // 0x16d038: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d03c: 0x2405ffc4  addiu       $a1, $zero, -0x3C
    ctx->pc = 0x16d03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967236));
    // 0x16d040: 0xc063838  jal         func_18E0E0
    ctx->pc = 0x16D040u;
    SET_GPR_U32(ctx, 31, 0x16D048u);
    ctx->pc = 0x16D044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D040u;
            // 0x16d044: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E0E0u;
    if (runtime->hasFunction(0x18E0E0u)) {
        auto targetFn = runtime->lookupFunction(0x18E0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D048u; }
        if (ctx->pc != 0x16D048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_02_0x18e0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D048u; }
        if (ctx->pc != 0x16D048u) { return; }
    }
    ctx->pc = 0x16D048u;
    // 0x16d048: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x16D048u;
    {
        const bool branch_taken_0x16d048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d048) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D050u;
label_16d050:
    // 0x16d050: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d058: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x16D058u;
    SET_GPR_U32(ctx, 31, 0x16D060u);
    ctx->pc = 0x16D05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D058u;
            // 0x16d05c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D060u; }
        if (ctx->pc != 0x16D060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItemCareer_0x1df800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D060u; }
        if (ctx->pc != 0x16D060u) { return; }
    }
    ctx->pc = 0x16D060u;
    // 0x16d060: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x16D060u;
    {
        const bool branch_taken_0x16d060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d060) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D068u;
label_16d068:
    // 0x16d068: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d06c: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16d06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16d070: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D070u;
    SET_GPR_U32(ctx, 31, 0x16D078u);
    ctx->pc = 0x16D074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D070u;
            // 0x16d074: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D078u; }
        if (ctx->pc != 0x16D078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D078u; }
        if (ctx->pc != 0x16D078u) { return; }
    }
    ctx->pc = 0x16D078u;
    // 0x16d078: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x16D078u;
    {
        const bool branch_taken_0x16d078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d078) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D080u;
label_16d080:
    // 0x16d080: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d084: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16d084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16d088: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D088u;
    SET_GPR_U32(ctx, 31, 0x16D090u);
    ctx->pc = 0x16D08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D088u;
            // 0x16d08c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D090u; }
        if (ctx->pc != 0x16D090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D090u; }
        if (ctx->pc != 0x16D090u) { return; }
    }
    ctx->pc = 0x16D090u;
    // 0x16d090: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x16D090u;
    {
        const bool branch_taken_0x16d090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d090) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D098u;
label_16d098:
    // 0x16d098: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d09c: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16d09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16d0a0: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D0A0u;
    SET_GPR_U32(ctx, 31, 0x16D0A8u);
    ctx->pc = 0x16D0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D0A0u;
            // 0x16d0a4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D0A8u; }
        if (ctx->pc != 0x16D0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D0A8u; }
        if (ctx->pc != 0x16D0A8u) { return; }
    }
    ctx->pc = 0x16D0A8u;
    // 0x16d0a8: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x16D0A8u;
    {
        const bool branch_taken_0x16d0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d0a8) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D0B0u;
label_16d0b0:
    // 0x16d0b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d0b4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16d0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16d0b8: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D0B8u;
    SET_GPR_U32(ctx, 31, 0x16D0C0u);
    ctx->pc = 0x16D0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D0B8u;
            // 0x16d0bc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D0C0u; }
        if (ctx->pc != 0x16D0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D0C0u; }
        if (ctx->pc != 0x16D0C0u) { return; }
    }
    ctx->pc = 0x16D0C0u;
    // 0x16d0c0: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x16D0C0u;
    {
        const bool branch_taken_0x16d0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d0c0) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D0C8u;
label_16d0c8:
    // 0x16d0c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d0cc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16d0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16d0d0: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D0D0u;
    SET_GPR_U32(ctx, 31, 0x16D0D8u);
    ctx->pc = 0x16D0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D0D0u;
            // 0x16d0d4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D0D8u; }
        if (ctx->pc != 0x16D0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D0D8u; }
        if (ctx->pc != 0x16D0D8u) { return; }
    }
    ctx->pc = 0x16D0D8u;
    // 0x16d0d8: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x16D0D8u;
    {
        const bool branch_taken_0x16d0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d0d8) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D0E0u;
label_16d0e0:
    // 0x16d0e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d0e4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16d0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16d0e8: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D0E8u;
    SET_GPR_U32(ctx, 31, 0x16D0F0u);
    ctx->pc = 0x16D0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D0E8u;
            // 0x16d0ec: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D0F0u; }
        if (ctx->pc != 0x16D0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D0F0u; }
        if (ctx->pc != 0x16D0F0u) { return; }
    }
    ctx->pc = 0x16D0F0u;
    // 0x16d0f0: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x16D0F0u;
    {
        const bool branch_taken_0x16d0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d0f0) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D0F8u;
label_16d0f8:
    // 0x16d0f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16d0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d0fc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16d0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16d100: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D100u;
    SET_GPR_U32(ctx, 31, 0x16D108u);
    ctx->pc = 0x16D104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D100u;
            // 0x16d104: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D108u; }
        if (ctx->pc != 0x16D108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D108u; }
        if (ctx->pc != 0x16D108u) { return; }
    }
    ctx->pc = 0x16D108u;
    // 0x16d108: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x16D108u;
    {
        const bool branch_taken_0x16d108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d108) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D110u;
label_16d110:
    // 0x16d110: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16d110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d114: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16d114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16d118: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D118u;
    SET_GPR_U32(ctx, 31, 0x16D120u);
    ctx->pc = 0x16D11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D118u;
            // 0x16d11c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D120u; }
        if (ctx->pc != 0x16D120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D120u; }
        if (ctx->pc != 0x16D120u) { return; }
    }
    ctx->pc = 0x16D120u;
    // 0x16d120: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x16D120u;
    {
        const bool branch_taken_0x16d120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d120) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D128u;
label_16d128:
    // 0x16d128: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16d128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d12c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16d12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16d130: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D130u;
    SET_GPR_U32(ctx, 31, 0x16D138u);
    ctx->pc = 0x16D134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D130u;
            // 0x16d134: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D138u; }
        if (ctx->pc != 0x16D138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D138u; }
        if (ctx->pc != 0x16D138u) { return; }
    }
    ctx->pc = 0x16D138u;
    // 0x16d138: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x16D138u;
    {
        const bool branch_taken_0x16d138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d138) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D140u;
label_16d140:
    // 0x16d140: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16d140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d144: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16d144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16d148: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D148u;
    SET_GPR_U32(ctx, 31, 0x16D150u);
    ctx->pc = 0x16D14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D148u;
            // 0x16d14c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D150u; }
        if (ctx->pc != 0x16D150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D150u; }
        if (ctx->pc != 0x16D150u) { return; }
    }
    ctx->pc = 0x16D150u;
    // 0x16d150: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x16D150u;
    {
        const bool branch_taken_0x16d150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d150) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D158u;
label_16d158:
    // 0x16d158: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16d158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d15c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16d15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16d160: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D160u;
    SET_GPR_U32(ctx, 31, 0x16D168u);
    ctx->pc = 0x16D164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D160u;
            // 0x16d164: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D168u; }
        if (ctx->pc != 0x16D168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D168u; }
        if (ctx->pc != 0x16D168u) { return; }
    }
    ctx->pc = 0x16D168u;
    // 0x16d168: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x16D168u;
    {
        const bool branch_taken_0x16d168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d168) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D170u;
label_16d170:
    // 0x16d170: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d174: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16d174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16d178: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D178u;
    SET_GPR_U32(ctx, 31, 0x16D180u);
    ctx->pc = 0x16D17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D178u;
            // 0x16d17c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D180u; }
        if (ctx->pc != 0x16D180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D180u; }
        if (ctx->pc != 0x16D180u) { return; }
    }
    ctx->pc = 0x16D180u;
    // 0x16d180: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x16D180u;
    {
        const bool branch_taken_0x16d180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d180) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D188u;
label_16d188:
    // 0x16d188: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d18c: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16d18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16d190: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D190u;
    SET_GPR_U32(ctx, 31, 0x16D198u);
    ctx->pc = 0x16D194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D190u;
            // 0x16d194: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D198u; }
        if (ctx->pc != 0x16D198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D198u; }
        if (ctx->pc != 0x16D198u) { return; }
    }
    ctx->pc = 0x16D198u;
    // 0x16d198: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x16D198u;
    {
        const bool branch_taken_0x16d198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d198) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D1A0u;
label_16d1a0:
    // 0x16d1a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d1a4: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16d1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16d1a8: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D1A8u;
    SET_GPR_U32(ctx, 31, 0x16D1B0u);
    ctx->pc = 0x16D1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D1A8u;
            // 0x16d1ac: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D1B0u; }
        if (ctx->pc != 0x16D1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D1B0u; }
        if (ctx->pc != 0x16D1B0u) { return; }
    }
    ctx->pc = 0x16D1B0u;
    // 0x16d1b0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x16D1B0u;
    {
        const bool branch_taken_0x16d1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d1b0) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D1B8u;
label_16d1b8:
    // 0x16d1b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d1bc: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16d1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16d1c0: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D1C0u;
    SET_GPR_U32(ctx, 31, 0x16D1C8u);
    ctx->pc = 0x16D1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D1C0u;
            // 0x16d1c4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D1C8u; }
        if (ctx->pc != 0x16D1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D1C8u; }
        if (ctx->pc != 0x16D1C8u) { return; }
    }
    ctx->pc = 0x16D1C8u;
    // 0x16d1c8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x16D1C8u;
    {
        const bool branch_taken_0x16d1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d1c8) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D1D0u;
label_16d1d0:
    // 0x16d1d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d1d4: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x16d1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x16d1d8: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D1D8u;
    SET_GPR_U32(ctx, 31, 0x16D1E0u);
    ctx->pc = 0x16D1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D1D8u;
            // 0x16d1dc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D1E0u; }
        if (ctx->pc != 0x16D1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D1E0u; }
        if (ctx->pc != 0x16D1E0u) { return; }
    }
    ctx->pc = 0x16D1E0u;
    // 0x16d1e0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x16D1E0u;
    {
        const bool branch_taken_0x16d1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d1e0) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D1E8u;
label_16d1e8:
    // 0x16d1e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d1ec: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x16d1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x16d1f0: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D1F0u;
    SET_GPR_U32(ctx, 31, 0x16D1F8u);
    ctx->pc = 0x16D1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D1F0u;
            // 0x16d1f4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D1F8u; }
        if (ctx->pc != 0x16D1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D1F8u; }
        if (ctx->pc != 0x16D1F8u) { return; }
    }
    ctx->pc = 0x16D1F8u;
    // 0x16d1f8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x16D1F8u;
    {
        const bool branch_taken_0x16d1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d1f8) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D200u;
label_16d200:
    // 0x16d200: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d204: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x16d204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x16d208: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D208u;
    SET_GPR_U32(ctx, 31, 0x16D210u);
    ctx->pc = 0x16D20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D208u;
            // 0x16d20c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D210u; }
        if (ctx->pc != 0x16D210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D210u; }
        if (ctx->pc != 0x16D210u) { return; }
    }
    ctx->pc = 0x16D210u;
    // 0x16d210: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x16D210u;
    {
        const bool branch_taken_0x16d210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d210) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D218u;
label_16d218:
    // 0x16d218: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d21c: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x16d21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x16d220: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D220u;
    SET_GPR_U32(ctx, 31, 0x16D228u);
    ctx->pc = 0x16D224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D220u;
            // 0x16d224: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D228u; }
        if (ctx->pc != 0x16D228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D228u; }
        if (ctx->pc != 0x16D228u) { return; }
    }
    ctx->pc = 0x16D228u;
    // 0x16d228: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x16D228u;
    {
        const bool branch_taken_0x16d228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d228) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D230u;
label_16d230:
    // 0x16d230: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d234: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x16d234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x16d238: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D238u;
    SET_GPR_U32(ctx, 31, 0x16D240u);
    ctx->pc = 0x16D23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D238u;
            // 0x16d23c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D240u; }
        if (ctx->pc != 0x16D240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D240u; }
        if (ctx->pc != 0x16D240u) { return; }
    }
    ctx->pc = 0x16D240u;
    // 0x16d240: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x16D240u;
    {
        const bool branch_taken_0x16d240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d240) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D248u;
label_16d248:
    // 0x16d248: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d24c: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x16d24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x16d250: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D250u;
    SET_GPR_U32(ctx, 31, 0x16D258u);
    ctx->pc = 0x16D254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D250u;
            // 0x16d254: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D258u; }
        if (ctx->pc != 0x16D258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D258u; }
        if (ctx->pc != 0x16D258u) { return; }
    }
    ctx->pc = 0x16D258u;
    // 0x16d258: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x16D258u;
    {
        const bool branch_taken_0x16d258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d258) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D260u;
label_16d260:
    // 0x16d260: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d264: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16d264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16d268: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D268u;
    SET_GPR_U32(ctx, 31, 0x16D270u);
    ctx->pc = 0x16D26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D268u;
            // 0x16d26c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D270u; }
        if (ctx->pc != 0x16D270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D270u; }
        if (ctx->pc != 0x16D270u) { return; }
    }
    ctx->pc = 0x16D270u;
    // 0x16d270: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x16D270u;
    {
        const bool branch_taken_0x16d270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d270) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D278u;
label_16d278:
    // 0x16d278: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d27c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16d27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16d280: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D280u;
    SET_GPR_U32(ctx, 31, 0x16D288u);
    ctx->pc = 0x16D284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D280u;
            // 0x16d284: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D288u; }
        if (ctx->pc != 0x16D288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D288u; }
        if (ctx->pc != 0x16D288u) { return; }
    }
    ctx->pc = 0x16D288u;
    // 0x16d288: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x16D288u;
    {
        const bool branch_taken_0x16d288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d288) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D290u;
label_16d290:
    // 0x16d290: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d294: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16d294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16d298: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D298u;
    SET_GPR_U32(ctx, 31, 0x16D2A0u);
    ctx->pc = 0x16D29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D298u;
            // 0x16d29c: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2A0u; }
        if (ctx->pc != 0x16D2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2A0u; }
        if (ctx->pc != 0x16D2A0u) { return; }
    }
    ctx->pc = 0x16D2A0u;
    // 0x16d2a0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x16D2A0u;
    {
        const bool branch_taken_0x16d2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d2a0) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D2A8u;
label_16d2a8:
    // 0x16d2a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d2ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16d2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16d2b0: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D2B0u;
    SET_GPR_U32(ctx, 31, 0x16D2B8u);
    ctx->pc = 0x16D2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D2B0u;
            // 0x16d2b4: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2B8u; }
        if (ctx->pc != 0x16D2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2B8u; }
        if (ctx->pc != 0x16D2B8u) { return; }
    }
    ctx->pc = 0x16D2B8u;
    // 0x16d2b8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x16D2B8u;
    {
        const bool branch_taken_0x16d2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d2b8) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D2C0u;
label_16d2c0:
    // 0x16d2c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d2c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16d2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16d2c8: 0xc066168  jal         func_1985A0
    ctx->pc = 0x16D2C8u;
    SET_GPR_U32(ctx, 31, 0x16D2D0u);
    ctx->pc = 0x16D2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D2C8u;
            // 0x16d2cc: 0x2406ffdd  addiu       $a2, $zero, -0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2D0u; }
        if (ctx->pc != 0x16D2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2D0u; }
        if (ctx->pc != 0x16D2D0u) { return; }
    }
    ctx->pc = 0x16D2D0u;
    // 0x16d2d0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16D2D0u;
    {
        const bool branch_taken_0x16d2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d2d0) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D2D8u;
label_16d2d8:
    // 0x16d2d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d2dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d2e0: 0xc0665b0  jal         func_1996C0
    ctx->pc = 0x16D2E0u;
    SET_GPR_U32(ctx, 31, 0x16D2E8u);
    ctx->pc = 0x16D2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D2E0u;
            // 0x16d2e4: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1996C0u;
    if (runtime->hasFunction(0x1996C0u)) {
        auto targetFn = runtime->lookupFunction(0x1996C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2E8u; }
        if (ctx->pc != 0x16D2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_04_0x1996c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2E8u; }
        if (ctx->pc != 0x16D2E8u) { return; }
    }
    ctx->pc = 0x16D2E8u;
    // 0x16d2e8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x16D2E8u;
    {
        const bool branch_taken_0x16d2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d2e8) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D2F0u;
label_16d2f0:
    // 0x16d2f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d2f4: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16d2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x16d2f8: 0xc0665b0  jal         func_1996C0
    ctx->pc = 0x16D2F8u;
    SET_GPR_U32(ctx, 31, 0x16D300u);
    ctx->pc = 0x16D2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D2F8u;
            // 0x16d2fc: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1996C0u;
    if (runtime->hasFunction(0x1996C0u)) {
        auto targetFn = runtime->lookupFunction(0x1996C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D300u; }
        if (ctx->pc != 0x16D300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_04_0x1996c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D300u; }
        if (ctx->pc != 0x16D300u) { return; }
    }
    ctx->pc = 0x16D300u;
    // 0x16d300: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d304: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16d304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16d308: 0xc0665b0  jal         func_1996C0
    ctx->pc = 0x16D308u;
    SET_GPR_U32(ctx, 31, 0x16D310u);
    ctx->pc = 0x16D30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D308u;
            // 0x16d30c: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1996C0u;
    if (runtime->hasFunction(0x1996C0u)) {
        auto targetFn = runtime->lookupFunction(0x1996C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D310u; }
        if (ctx->pc != 0x16D310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_04_0x1996c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D310u; }
        if (ctx->pc != 0x16D310u) { return; }
    }
    ctx->pc = 0x16D310u;
    // 0x16d310: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16D310u;
    {
        const bool branch_taken_0x16d310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d310) {
            ctx->pc = 0x16D338u;
            goto label_16d338;
        }
    }
    ctx->pc = 0x16D318u;
label_16d318:
    // 0x16d318: 0xc051b0c  jal         func_146C30
    ctx->pc = 0x16D318u;
    SET_GPR_U32(ctx, 31, 0x16D320u);
    ctx->pc = 0x146C30u;
    if (runtime->hasFunction(0x146C30u)) {
        auto targetFn = runtime->lookupFunction(0x146C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D320u; }
        if (ctx->pc != 0x16D320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage2scrollspeedup_0x146c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D320u; }
        if (ctx->pc != 0x16D320u) { return; }
    }
    ctx->pc = 0x16D320u;
    // 0x16d320: 0xc05d004  jal         func_174010
    ctx->pc = 0x16D320u;
    SET_GPR_U32(ctx, 31, 0x16D328u);
    ctx->pc = 0x16D324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D320u;
            // 0x16d324: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D328u; }
        if (ctx->pc != 0x16D328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D328u; }
        if (ctx->pc != 0x16D328u) { return; }
    }
    ctx->pc = 0x16D328u;
    // 0x16d328: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d32c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d330: 0xc05d2b4  jal         func_174AD0
    ctx->pc = 0x16D330u;
    SET_GPR_U32(ctx, 31, 0x16D338u);
    ctx->pc = 0x16D334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D330u;
            // 0x16d334: 0x2406ffc4  addiu       $a2, $zero, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174AD0u;
    if (runtime->hasFunction(0x174AD0u)) {
        auto targetFn = runtime->lookupFunction(0x174AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D338u; }
        if (ctx->pc != 0x16D338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStage2Boss_0x174ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D338u; }
        if (ctx->pc != 0x16D338u) { return; }
    }
    ctx->pc = 0x16D338u;
label_16d338:
    // 0x16d338: 0x2a0107d1  slti        $at, $s0, 0x7D1
    ctx->pc = 0x16d338u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2001) ? 1 : 0);
    // 0x16d33c: 0x14200028  bnez        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x16D33Cu;
    {
        const bool branch_taken_0x16d33c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D33Cu;
            // 0x16d340: 0x2a0108fc  slti        $at, $s0, 0x8FC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2300) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d33c) {
            ctx->pc = 0x16D3E0u;
            goto label_16d3e0;
        }
    }
    ctx->pc = 0x16D344u;
    // 0x16d344: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x16D344u;
    {
        const bool branch_taken_0x16d344 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D344u;
            // 0x16d348: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d344) {
            ctx->pc = 0x16D3E0u;
            goto label_16d3e0;
        }
    }
    ctx->pc = 0x16D34Cu;
    // 0x16d34c: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x16d34cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16d350: 0x0  nop
    ctx->pc = 0x16d350u;
    // NOP
    // 0x16d354: 0x0  nop
    ctx->pc = 0x16d354u;
    // NOP
    // 0x16d358: 0x1810  mfhi        $v1
    ctx->pc = 0x16d358u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x16d35c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x16D35Cu;
    {
        const bool branch_taken_0x16d35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d35c) {
            ctx->pc = 0x16D390u;
            goto label_16d390;
        }
    }
    ctx->pc = 0x16D364u;
    // 0x16d364: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x16D364u;
    SET_GPR_U32(ctx, 31, 0x16D36Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D36Cu; }
        if (ctx->pc != 0x16D36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D36Cu; }
        if (ctx->pc != 0x16D36Cu) { return; }
    }
    ctx->pc = 0x16D36Cu;
    // 0x16d36c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x16d36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x16d370: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x16d370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16d374: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x16d374u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16d378: 0x2406ffdd  addiu       $a2, $zero, -0x23
    ctx->pc = 0x16d378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
    // 0x16d37c: 0x0  nop
    ctx->pc = 0x16d37cu;
    // NOP
    // 0x16d380: 0x1010  mfhi        $v0
    ctx->pc = 0x16d380u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x16d384: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x16d384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16d388: 0xc059a70  jal         func_1669C0
    ctx->pc = 0x16D388u;
    SET_GPR_U32(ctx, 31, 0x16D390u);
    ctx->pc = 0x16D38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D388u;
            // 0x16d38c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1669C0u;
    if (runtime->hasFunction(0x1669C0u)) {
        auto targetFn = runtime->lookupFunction(0x1669C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D390u; }
        if (ctx->pc != 0x16D390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_01_0x1669c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D390u; }
        if (ctx->pc != 0x16D390u) { return; }
    }
    ctx->pc = 0x16D390u;
label_16d390:
    // 0x16d390: 0x2604000f  addiu       $a0, $s0, 0xF
    ctx->pc = 0x16d390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x16d394: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x16d394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16d398: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x16d398u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16d39c: 0x0  nop
    ctx->pc = 0x16d39cu;
    // NOP
    // 0x16d3a0: 0x0  nop
    ctx->pc = 0x16d3a0u;
    // NOP
    // 0x16d3a4: 0x1810  mfhi        $v1
    ctx->pc = 0x16d3a4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x16d3a8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x16D3A8u;
    {
        const bool branch_taken_0x16d3a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d3a8) {
            ctx->pc = 0x16D3E0u;
            goto label_16d3e0;
        }
    }
    ctx->pc = 0x16D3B0u;
    // 0x16d3b0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x16D3B0u;
    SET_GPR_U32(ctx, 31, 0x16D3B8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D3B8u; }
        if (ctx->pc != 0x16D3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D3B8u; }
        if (ctx->pc != 0x16D3B8u) { return; }
    }
    ctx->pc = 0x16D3B8u;
    // 0x16d3b8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x16d3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x16d3bc: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x16d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16d3c0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x16d3c0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16d3c4: 0x2406ffdd  addiu       $a2, $zero, -0x23
    ctx->pc = 0x16d3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
    // 0x16d3c8: 0x0  nop
    ctx->pc = 0x16d3c8u;
    // NOP
    // 0x16d3cc: 0x1010  mfhi        $v0
    ctx->pc = 0x16d3ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x16d3d0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x16d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16d3d4: 0xc059a70  jal         func_1669C0
    ctx->pc = 0x16D3D4u;
    SET_GPR_U32(ctx, 31, 0x16D3DCu);
    ctx->pc = 0x16D3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D3D4u;
            // 0x16d3d8: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1669C0u;
    if (runtime->hasFunction(0x1669C0u)) {
        auto targetFn = runtime->lookupFunction(0x1669C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D3DCu; }
        if (ctx->pc != 0x16D3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_01_0x1669c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D3DCu; }
        if (ctx->pc != 0x16D3DCu) { return; }
    }
    ctx->pc = 0x16D3DCu;
    // 0x16d3dc: 0x0  nop
    ctx->pc = 0x16d3dcu;
    // NOP
label_16d3e0:
    // 0x16d3e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d3e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16d3e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x16D3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D3E8u;
            // 0x16d3ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16CBE8u: goto label_16cbe8;
            case 0x16CC00u: goto label_16cc00;
            case 0x16CC18u: goto label_16cc18;
            case 0x16CC30u: goto label_16cc30;
            case 0x16CC48u: goto label_16cc48;
            case 0x16CC60u: goto label_16cc60;
            case 0x16CC78u: goto label_16cc78;
            case 0x16CC90u: goto label_16cc90;
            case 0x16CCA8u: goto label_16cca8;
            case 0x16CCC0u: goto label_16ccc0;
            case 0x16CCD8u: goto label_16ccd8;
            case 0x16CCF0u: goto label_16ccf0;
            case 0x16CD08u: goto label_16cd08;
            case 0x16CD20u: goto label_16cd20;
            case 0x16CD38u: goto label_16cd38;
            case 0x16CD50u: goto label_16cd50;
            case 0x16CD68u: goto label_16cd68;
            case 0x16CD80u: goto label_16cd80;
            case 0x16CD98u: goto label_16cd98;
            case 0x16CDB0u: goto label_16cdb0;
            case 0x16CDC8u: goto label_16cdc8;
            case 0x16CDE0u: goto label_16cde0;
            case 0x16CDF8u: goto label_16cdf8;
            case 0x16CE10u: goto label_16ce10;
            case 0x16CE28u: goto label_16ce28;
            case 0x16CE40u: goto label_16ce40;
            case 0x16CE58u: goto label_16ce58;
            case 0x16CE70u: goto label_16ce70;
            case 0x16CE88u: goto label_16ce88;
            case 0x16CEA0u: goto label_16cea0;
            case 0x16CEB8u: goto label_16ceb8;
            case 0x16CED0u: goto label_16ced0;
            case 0x16CEE8u: goto label_16cee8;
            case 0x16CF00u: goto label_16cf00;
            case 0x16CFF8u: goto label_16cff8;
            case 0x16D010u: goto label_16d010;
            case 0x16D028u: goto label_16d028;
            case 0x16D050u: goto label_16d050;
            case 0x16D068u: goto label_16d068;
            case 0x16D080u: goto label_16d080;
            case 0x16D098u: goto label_16d098;
            case 0x16D0B0u: goto label_16d0b0;
            case 0x16D0C8u: goto label_16d0c8;
            case 0x16D0E0u: goto label_16d0e0;
            case 0x16D0F8u: goto label_16d0f8;
            case 0x16D110u: goto label_16d110;
            case 0x16D128u: goto label_16d128;
            case 0x16D140u: goto label_16d140;
            case 0x16D158u: goto label_16d158;
            case 0x16D170u: goto label_16d170;
            case 0x16D188u: goto label_16d188;
            case 0x16D1A0u: goto label_16d1a0;
            case 0x16D1B8u: goto label_16d1b8;
            case 0x16D1D0u: goto label_16d1d0;
            case 0x16D1E8u: goto label_16d1e8;
            case 0x16D200u: goto label_16d200;
            case 0x16D218u: goto label_16d218;
            case 0x16D230u: goto label_16d230;
            case 0x16D248u: goto label_16d248;
            case 0x16D260u: goto label_16d260;
            case 0x16D278u: goto label_16d278;
            case 0x16D290u: goto label_16d290;
            case 0x16D2A8u: goto label_16d2a8;
            case 0x16D2C0u: goto label_16d2c0;
            case 0x16D2D8u: goto label_16d2d8;
            case 0x16D2F0u: goto label_16d2f0;
            case 0x16D318u: goto label_16d318;
            case 0x16D338u: goto label_16d338;
            case 0x16D390u: goto label_16d390;
            case 0x16D3E0u: goto label_16d3e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D3F0u;
}
