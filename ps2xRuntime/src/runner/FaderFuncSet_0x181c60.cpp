#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: FaderFuncSet
// Address: 0x181c60 - 0x181eb0
void FaderFuncSet_0x181c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("FaderFuncSet_0x181c60");
#endif

    ctx->pc = 0x181c60u;

    // 0x181c60: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181c64: 0xac24b610  sw          $a0, -0x49F0($at)
    ctx->pc = 0x181c64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948368), GPR_U32(ctx, 4));
    // 0x181c68: 0x2c81000a  sltiu       $at, $a0, 0xA
    ctx->pc = 0x181c68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x181c6c: 0x1020008e  beqz        $at, . + 4 + (0x8E << 2)
    ctx->pc = 0x181C6Cu;
    {
        const bool branch_taken_0x181c6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x181C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181C6Cu;
            // 0x181c70: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c6c) {
            ctx->pc = 0x181EA8u;
            goto label_181ea8;
        }
    }
    ctx->pc = 0x181C74u;
    // 0x181c74: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x181c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x181c78: 0x24842100  addiu       $a0, $a0, 0x2100
    ctx->pc = 0x181c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8448));
    // 0x181c7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x181c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x181c80: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x181c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x181c84: 0x600008  jr          $v1
    ctx->pc = 0x181C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181C90u: goto label_181c90;
            case 0x181CC0u: goto label_181cc0;
            case 0x181CF8u: goto label_181cf8;
            case 0x181D30u: goto label_181d30;
            case 0x181D68u: goto label_181d68;
            case 0x181DA0u: goto label_181da0;
            case 0x181DD8u: goto label_181dd8;
            case 0x181E10u: goto label_181e10;
            case 0x181E40u: goto label_181e40;
            case 0x181E70u: goto label_181e70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x181C8Cu;
    // 0x181c8c: 0x0  nop
    ctx->pc = 0x181c8cu;
    // NOP
label_181c90:
    // 0x181c90: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181c94: 0xa020b5e8  sb          $zero, -0x4A18($at)
    ctx->pc = 0x181c94u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948328), (uint8_t)GPR_U32(ctx, 0));
    // 0x181c98: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181c9c: 0xa020b5e9  sb          $zero, -0x4A17($at)
    ctx->pc = 0x181c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948329), (uint8_t)GPR_U32(ctx, 0));
    // 0x181ca0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181ca4: 0xa020b5ea  sb          $zero, -0x4A16($at)
    ctx->pc = 0x181ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948330), (uint8_t)GPR_U32(ctx, 0));
    // 0x181ca8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181cac: 0xa020b5eb  sb          $zero, -0x4A15($at)
    ctx->pc = 0x181cacu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948331), (uint8_t)GPR_U32(ctx, 0));
    // 0x181cb0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181cb4: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x181CB4u;
    {
        const bool branch_taken_0x181cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181CB4u;
            // 0x181cb8: 0xac20b5e0  sw          $zero, -0x4A20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294948320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181cb4) {
            ctx->pc = 0x181EA8u;
            goto label_181ea8;
        }
    }
    ctx->pc = 0x181CBCu;
    // 0x181cbc: 0x0  nop
    ctx->pc = 0x181cbcu;
    // NOP
label_181cc0:
    // 0x181cc0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x181cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x181cc4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181cc8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x181cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x181ccc: 0xa024b5e8  sb          $a0, -0x4A18($at)
    ctx->pc = 0x181cccu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948328), (uint8_t)GPR_U32(ctx, 4));
    // 0x181cd0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181cd4: 0xa023b5eb  sb          $v1, -0x4A15($at)
    ctx->pc = 0x181cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948331), (uint8_t)GPR_U32(ctx, 3));
    // 0x181cd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181cdc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181ce0: 0xac23b5e0  sw          $v1, -0x4A20($at)
    ctx->pc = 0x181ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948320), GPR_U32(ctx, 3));
    // 0x181ce4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181ce8: 0xa024b5e9  sb          $a0, -0x4A17($at)
    ctx->pc = 0x181ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948329), (uint8_t)GPR_U32(ctx, 4));
    // 0x181cec: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181cf0: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x181CF0u;
    {
        const bool branch_taken_0x181cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181CF0u;
            // 0x181cf4: 0xa024b5ea  sb          $a0, -0x4A16($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294948330), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181cf0) {
            ctx->pc = 0x181EA8u;
            goto label_181ea8;
        }
    }
    ctx->pc = 0x181CF8u;
label_181cf8:
    // 0x181cf8: 0x240400fe  addiu       $a0, $zero, 0xFE
    ctx->pc = 0x181cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x181cfc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181d00: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x181d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x181d04: 0xa024b5e8  sb          $a0, -0x4A18($at)
    ctx->pc = 0x181d04u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948328), (uint8_t)GPR_U32(ctx, 4));
    // 0x181d08: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181d0c: 0xa023b5eb  sb          $v1, -0x4A15($at)
    ctx->pc = 0x181d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948331), (uint8_t)GPR_U32(ctx, 3));
    // 0x181d10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181d14: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181d18: 0xac23b5e0  sw          $v1, -0x4A20($at)
    ctx->pc = 0x181d18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948320), GPR_U32(ctx, 3));
    // 0x181d1c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181d20: 0xa024b5e9  sb          $a0, -0x4A17($at)
    ctx->pc = 0x181d20u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948329), (uint8_t)GPR_U32(ctx, 4));
    // 0x181d24: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181d28: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x181D28u;
    {
        const bool branch_taken_0x181d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181D28u;
            // 0x181d2c: 0xa024b5ea  sb          $a0, -0x4A16($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294948330), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181d28) {
            ctx->pc = 0x181EA8u;
            goto label_181ea8;
        }
    }
    ctx->pc = 0x181D30u;
label_181d30:
    // 0x181d30: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181d34: 0xa020b5eb  sb          $zero, -0x4A15($at)
    ctx->pc = 0x181d34u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948331), (uint8_t)GPR_U32(ctx, 0));
    // 0x181d38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181d3c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181d40: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x181d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x181d44: 0xac23b5e0  sw          $v1, -0x4A20($at)
    ctx->pc = 0x181d44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948320), GPR_U32(ctx, 3));
    // 0x181d48: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181d4c: 0xa024b5e8  sb          $a0, -0x4A18($at)
    ctx->pc = 0x181d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948328), (uint8_t)GPR_U32(ctx, 4));
    // 0x181d50: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181d54: 0xa024b5e9  sb          $a0, -0x4A17($at)
    ctx->pc = 0x181d54u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948329), (uint8_t)GPR_U32(ctx, 4));
    // 0x181d58: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181d5c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x181D5Cu;
    {
        const bool branch_taken_0x181d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181D5Cu;
            // 0x181d60: 0xa024b5ea  sb          $a0, -0x4A16($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294948330), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181d5c) {
            ctx->pc = 0x181EA8u;
            goto label_181ea8;
        }
    }
    ctx->pc = 0x181D64u;
    // 0x181d64: 0x0  nop
    ctx->pc = 0x181d64u;
    // NOP
label_181d68:
    // 0x181d68: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181d6c: 0xa020b5eb  sb          $zero, -0x4A15($at)
    ctx->pc = 0x181d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948331), (uint8_t)GPR_U32(ctx, 0));
    // 0x181d70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181d74: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181d78: 0x240400fe  addiu       $a0, $zero, 0xFE
    ctx->pc = 0x181d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x181d7c: 0xac23b5e0  sw          $v1, -0x4A20($at)
    ctx->pc = 0x181d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948320), GPR_U32(ctx, 3));
    // 0x181d80: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181d84: 0xa024b5e8  sb          $a0, -0x4A18($at)
    ctx->pc = 0x181d84u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948328), (uint8_t)GPR_U32(ctx, 4));
    // 0x181d88: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181d8c: 0xa024b5e9  sb          $a0, -0x4A17($at)
    ctx->pc = 0x181d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948329), (uint8_t)GPR_U32(ctx, 4));
    // 0x181d90: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181d94: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x181D94u;
    {
        const bool branch_taken_0x181d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181D94u;
            // 0x181d98: 0xa024b5ea  sb          $a0, -0x4A16($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294948330), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181d94) {
            ctx->pc = 0x181EA8u;
            goto label_181ea8;
        }
    }
    ctx->pc = 0x181D9Cu;
    // 0x181d9c: 0x0  nop
    ctx->pc = 0x181d9cu;
    // NOP
label_181da0:
    // 0x181da0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181da4: 0xa020b5e8  sb          $zero, -0x4A18($at)
    ctx->pc = 0x181da4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948328), (uint8_t)GPR_U32(ctx, 0));
    // 0x181da8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x181da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x181dac: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181db0: 0xa020b5e9  sb          $zero, -0x4A17($at)
    ctx->pc = 0x181db0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948329), (uint8_t)GPR_U32(ctx, 0));
    // 0x181db4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181db8: 0xa023b5eb  sb          $v1, -0x4A15($at)
    ctx->pc = 0x181db8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948331), (uint8_t)GPR_U32(ctx, 3));
    // 0x181dbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181dc0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181dc4: 0xac23b5e0  sw          $v1, -0x4A20($at)
    ctx->pc = 0x181dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948320), GPR_U32(ctx, 3));
    // 0x181dc8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181dcc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x181DCCu;
    {
        const bool branch_taken_0x181dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181DCCu;
            // 0x181dd0: 0xa020b5ea  sb          $zero, -0x4A16($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294948330), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181dcc) {
            ctx->pc = 0x181EA8u;
            goto label_181ea8;
        }
    }
    ctx->pc = 0x181DD4u;
    // 0x181dd4: 0x0  nop
    ctx->pc = 0x181dd4u;
    // NOP
label_181dd8:
    // 0x181dd8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181ddc: 0xa020b5e8  sb          $zero, -0x4A18($at)
    ctx->pc = 0x181ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948328), (uint8_t)GPR_U32(ctx, 0));
    // 0x181de0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x181de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x181de4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181de8: 0xa020b5e9  sb          $zero, -0x4A17($at)
    ctx->pc = 0x181de8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948329), (uint8_t)GPR_U32(ctx, 0));
    // 0x181dec: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181df0: 0xa023b5eb  sb          $v1, -0x4A15($at)
    ctx->pc = 0x181df0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948331), (uint8_t)GPR_U32(ctx, 3));
    // 0x181df4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181df8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181dfc: 0xac23b5e0  sw          $v1, -0x4A20($at)
    ctx->pc = 0x181dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948320), GPR_U32(ctx, 3));
    // 0x181e00: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181e04: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x181E04u;
    {
        const bool branch_taken_0x181e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181E04u;
            // 0x181e08: 0xa020b5ea  sb          $zero, -0x4A16($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294948330), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e04) {
            ctx->pc = 0x181EA8u;
            goto label_181ea8;
        }
    }
    ctx->pc = 0x181E0Cu;
    // 0x181e0c: 0x0  nop
    ctx->pc = 0x181e0cu;
    // NOP
label_181e10:
    // 0x181e10: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181e14: 0xa020b5e8  sb          $zero, -0x4A18($at)
    ctx->pc = 0x181e14u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948328), (uint8_t)GPR_U32(ctx, 0));
    // 0x181e18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181e1c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181e20: 0xa020b5e9  sb          $zero, -0x4A17($at)
    ctx->pc = 0x181e20u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948329), (uint8_t)GPR_U32(ctx, 0));
    // 0x181e24: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181e28: 0xac23b5e0  sw          $v1, -0x4A20($at)
    ctx->pc = 0x181e28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948320), GPR_U32(ctx, 3));
    // 0x181e2c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181e30: 0xa020b5ea  sb          $zero, -0x4A16($at)
    ctx->pc = 0x181e30u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948330), (uint8_t)GPR_U32(ctx, 0));
    // 0x181e34: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181e38: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x181E38u;
    {
        const bool branch_taken_0x181e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181E38u;
            // 0x181e3c: 0xa020b5eb  sb          $zero, -0x4A15($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294948331), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e38) {
            ctx->pc = 0x181EA8u;
            goto label_181ea8;
        }
    }
    ctx->pc = 0x181E40u;
label_181e40:
    // 0x181e40: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181e44: 0xa020b5e8  sb          $zero, -0x4A18($at)
    ctx->pc = 0x181e44u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948328), (uint8_t)GPR_U32(ctx, 0));
    // 0x181e48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181e4c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181e50: 0xa020b5e9  sb          $zero, -0x4A17($at)
    ctx->pc = 0x181e50u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948329), (uint8_t)GPR_U32(ctx, 0));
    // 0x181e54: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181e58: 0xac23b5e0  sw          $v1, -0x4A20($at)
    ctx->pc = 0x181e58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948320), GPR_U32(ctx, 3));
    // 0x181e5c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181e60: 0xa020b5ea  sb          $zero, -0x4A16($at)
    ctx->pc = 0x181e60u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948330), (uint8_t)GPR_U32(ctx, 0));
    // 0x181e64: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181e68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x181E68u;
    {
        const bool branch_taken_0x181e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181E68u;
            // 0x181e6c: 0xa020b5eb  sb          $zero, -0x4A15($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294948331), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e68) {
            ctx->pc = 0x181EA8u;
            goto label_181ea8;
        }
    }
    ctx->pc = 0x181E70u;
label_181e70:
    // 0x181e70: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x181e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x181e74: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181e78: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x181e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x181e7c: 0xa024b5e8  sb          $a0, -0x4A18($at)
    ctx->pc = 0x181e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948328), (uint8_t)GPR_U32(ctx, 4));
    // 0x181e80: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181e84: 0xa023b5eb  sb          $v1, -0x4A15($at)
    ctx->pc = 0x181e84u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948331), (uint8_t)GPR_U32(ctx, 3));
    // 0x181e88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181e8c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181e90: 0xac23b5e0  sw          $v1, -0x4A20($at)
    ctx->pc = 0x181e90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948320), GPR_U32(ctx, 3));
    // 0x181e94: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181e98: 0xa024b5e9  sb          $a0, -0x4A17($at)
    ctx->pc = 0x181e98u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948329), (uint8_t)GPR_U32(ctx, 4));
    // 0x181e9c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181ea0: 0xa024b5ea  sb          $a0, -0x4A16($at)
    ctx->pc = 0x181ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948330), (uint8_t)GPR_U32(ctx, 4));
    // 0x181ea4: 0x0  nop
    ctx->pc = 0x181ea4u;
    // NOP
label_181ea8:
    // 0x181ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x181EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181C90u: goto label_181c90;
            case 0x181CC0u: goto label_181cc0;
            case 0x181CF8u: goto label_181cf8;
            case 0x181D30u: goto label_181d30;
            case 0x181D68u: goto label_181d68;
            case 0x181DA0u: goto label_181da0;
            case 0x181DD8u: goto label_181dd8;
            case 0x181E10u: goto label_181e10;
            case 0x181E40u: goto label_181e40;
            case 0x181E70u: goto label_181e70;
            case 0x181EA8u: goto label_181ea8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x181EB0u;
}
