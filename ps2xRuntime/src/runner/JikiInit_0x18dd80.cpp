#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: JikiInit
// Address: 0x18dd80 - 0x18e0e0
void JikiInit_0x18dd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("JikiInit_0x18dd80");
#endif

    ctx->pc = 0x18dd80u;

    // 0x18dd80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18dd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18dd84: 0x24040185  addiu       $a0, $zero, 0x185
    ctx->pc = 0x18dd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 389));
    // 0x18dd88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18dd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18dd8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18dd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18dd90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18dd94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18dd94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd98: 0xc05c20c  jal         func_170830
    ctx->pc = 0x18DD98u;
    SET_GPR_U32(ctx, 31, 0x18DDA0u);
    ctx->pc = 0x18DD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD98u;
            // 0x18dd9c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDA0u; }
        if (ctx->pc != 0x18DDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDA0u; }
        if (ctx->pc != 0x18DDA0u) { return; }
    }
    ctx->pc = 0x18DDA0u;
    // 0x18dda0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18dda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18dda4: 0x24040182  addiu       $a0, $zero, 0x182
    ctx->pc = 0x18dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 386));
    // 0x18dda8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x18dda8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ddac: 0xc05c20c  jal         func_170830
    ctx->pc = 0x18DDACu;
    SET_GPR_U32(ctx, 31, 0x18DDB4u);
    ctx->pc = 0x18DDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DDACu;
            // 0x18ddb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDB4u; }
        if (ctx->pc != 0x18DDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDB4u; }
        if (ctx->pc != 0x18DDB4u) { return; }
    }
    ctx->pc = 0x18DDB4u;
    // 0x18ddb4: 0x24040186  addiu       $a0, $zero, 0x186
    ctx->pc = 0x18ddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
    // 0x18ddb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18ddb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ddbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18ddbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ddc0: 0xc05c20c  jal         func_170830
    ctx->pc = 0x18DDC0u;
    SET_GPR_U32(ctx, 31, 0x18DDC8u);
    ctx->pc = 0x18DDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DDC0u;
            // 0x18ddc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDC8u; }
        if (ctx->pc != 0x18DDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDC8u; }
        if (ctx->pc != 0x18DDC8u) { return; }
    }
    ctx->pc = 0x18DDC8u;
    // 0x18ddc8: 0x24040184  addiu       $a0, $zero, 0x184
    ctx->pc = 0x18ddc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x18ddcc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18ddccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18ddd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18ddd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ddd4: 0xc05c20c  jal         func_170830
    ctx->pc = 0x18DDD4u;
    SET_GPR_U32(ctx, 31, 0x18DDDCu);
    ctx->pc = 0x18DDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DDD4u;
            // 0x18ddd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDDCu; }
        if (ctx->pc != 0x18DDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDDCu; }
        if (ctx->pc != 0x18DDDCu) { return; }
    }
    ctx->pc = 0x18DDDCu;
    // 0x18dddc: 0x24040187  addiu       $a0, $zero, 0x187
    ctx->pc = 0x18dddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 391));
    // 0x18dde0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x18dde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18dde4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18dde4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18dde8: 0xc05c20c  jal         func_170830
    ctx->pc = 0x18DDE8u;
    SET_GPR_U32(ctx, 31, 0x18DDF0u);
    ctx->pc = 0x18DDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DDE8u;
            // 0x18ddec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDF0u; }
        if (ctx->pc != 0x18DDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDF0u; }
        if (ctx->pc != 0x18DDF0u) { return; }
    }
    ctx->pc = 0x18DDF0u;
    // 0x18ddf0: 0x24040183  addiu       $a0, $zero, 0x183
    ctx->pc = 0x18ddf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
    // 0x18ddf4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18ddf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18ddf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18ddf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ddfc: 0xc05c20c  jal         func_170830
    ctx->pc = 0x18DDFCu;
    SET_GPR_U32(ctx, 31, 0x18DE04u);
    ctx->pc = 0x18DE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DDFCu;
            // 0x18de00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE04u; }
        if (ctx->pc != 0x18DE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE04u; }
        if (ctx->pc != 0x18DE04u) { return; }
    }
    ctx->pc = 0x18DE04u;
    // 0x18de04: 0x24040191  addiu       $a0, $zero, 0x191
    ctx->pc = 0x18de04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 401));
    // 0x18de08: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x18de08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18de0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18de0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18de10: 0xc05c20c  jal         func_170830
    ctx->pc = 0x18DE10u;
    SET_GPR_U32(ctx, 31, 0x18DE18u);
    ctx->pc = 0x18DE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE10u;
            // 0x18de14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE18u; }
        if (ctx->pc != 0x18DE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE18u; }
        if (ctx->pc != 0x18DE18u) { return; }
    }
    ctx->pc = 0x18DE18u;
    // 0x18de18: 0x2404018e  addiu       $a0, $zero, 0x18E
    ctx->pc = 0x18de18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 398));
    // 0x18de1c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x18de1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18de20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18de20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18de24: 0xc05c20c  jal         func_170830
    ctx->pc = 0x18DE24u;
    SET_GPR_U32(ctx, 31, 0x18DE2Cu);
    ctx->pc = 0x18DE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE24u;
            // 0x18de28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE2Cu; }
        if (ctx->pc != 0x18DE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE2Cu; }
        if (ctx->pc != 0x18DE2Cu) { return; }
    }
    ctx->pc = 0x18DE2Cu;
    // 0x18de2c: 0x24040192  addiu       $a0, $zero, 0x192
    ctx->pc = 0x18de2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 402));
    // 0x18de30: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18de30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18de34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18de34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18de38: 0xc05c20c  jal         func_170830
    ctx->pc = 0x18DE38u;
    SET_GPR_U32(ctx, 31, 0x18DE40u);
    ctx->pc = 0x18DE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE38u;
            // 0x18de3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE40u; }
        if (ctx->pc != 0x18DE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE40u; }
        if (ctx->pc != 0x18DE40u) { return; }
    }
    ctx->pc = 0x18DE40u;
    // 0x18de40: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x18de40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x18de44: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x18de44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x18de48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18de48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18de4c: 0xc05c20c  jal         func_170830
    ctx->pc = 0x18DE4Cu;
    SET_GPR_U32(ctx, 31, 0x18DE54u);
    ctx->pc = 0x18DE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE4Cu;
            // 0x18de50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE54u; }
        if (ctx->pc != 0x18DE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE54u; }
        if (ctx->pc != 0x18DE54u) { return; }
    }
    ctx->pc = 0x18DE54u;
    // 0x18de54: 0x24040193  addiu       $a0, $zero, 0x193
    ctx->pc = 0x18de54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 403));
    // 0x18de58: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x18de58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18de5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18de5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18de60: 0xc05c20c  jal         func_170830
    ctx->pc = 0x18DE60u;
    SET_GPR_U32(ctx, 31, 0x18DE68u);
    ctx->pc = 0x18DE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE60u;
            // 0x18de64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE68u; }
        if (ctx->pc != 0x18DE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE68u; }
        if (ctx->pc != 0x18DE68u) { return; }
    }
    ctx->pc = 0x18DE68u;
    // 0x18de68: 0x2404018f  addiu       $a0, $zero, 0x18F
    ctx->pc = 0x18de68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
    // 0x18de6c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x18de6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x18de70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18de70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18de74: 0xc05c20c  jal         func_170830
    ctx->pc = 0x18DE74u;
    SET_GPR_U32(ctx, 31, 0x18DE7Cu);
    ctx->pc = 0x18DE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE74u;
            // 0x18de78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE7Cu; }
        if (ctx->pc != 0x18DE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE7Cu; }
        if (ctx->pc != 0x18DE7Cu) { return; }
    }
    ctx->pc = 0x18DE7Cu;
    // 0x18de7c: 0x2404018b  addiu       $a0, $zero, 0x18B
    ctx->pc = 0x18de7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 395));
    // 0x18de80: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x18de80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18de84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18de84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18de88: 0xc05c20c  jal         func_170830
    ctx->pc = 0x18DE88u;
    SET_GPR_U32(ctx, 31, 0x18DE90u);
    ctx->pc = 0x18DE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE88u;
            // 0x18de8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE90u; }
        if (ctx->pc != 0x18DE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE90u; }
        if (ctx->pc != 0x18DE90u) { return; }
    }
    ctx->pc = 0x18DE90u;
    // 0x18de90: 0x24040188  addiu       $a0, $zero, 0x188
    ctx->pc = 0x18de90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
    // 0x18de94: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x18de94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18de98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18de98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18de9c: 0xc05c20c  jal         func_170830
    ctx->pc = 0x18DE9Cu;
    SET_GPR_U32(ctx, 31, 0x18DEA4u);
    ctx->pc = 0x18DEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE9Cu;
            // 0x18dea0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEA4u; }
        if (ctx->pc != 0x18DEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEA4u; }
        if (ctx->pc != 0x18DEA4u) { return; }
    }
    ctx->pc = 0x18DEA4u;
    // 0x18dea4: 0x2404018c  addiu       $a0, $zero, 0x18C
    ctx->pc = 0x18dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 396));
    // 0x18dea8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x18dea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x18deac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18deacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18deb0: 0xc05c20c  jal         func_170830
    ctx->pc = 0x18DEB0u;
    SET_GPR_U32(ctx, 31, 0x18DEB8u);
    ctx->pc = 0x18DEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DEB0u;
            // 0x18deb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEB8u; }
        if (ctx->pc != 0x18DEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEB8u; }
        if (ctx->pc != 0x18DEB8u) { return; }
    }
    ctx->pc = 0x18DEB8u;
    // 0x18deb8: 0x2404018a  addiu       $a0, $zero, 0x18A
    ctx->pc = 0x18deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 394));
    // 0x18debc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x18debcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18dec0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18dec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18dec4: 0xc05c20c  jal         func_170830
    ctx->pc = 0x18DEC4u;
    SET_GPR_U32(ctx, 31, 0x18DECCu);
    ctx->pc = 0x18DEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DEC4u;
            // 0x18dec8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DECCu; }
        if (ctx->pc != 0x18DECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DECCu; }
        if (ctx->pc != 0x18DECCu) { return; }
    }
    ctx->pc = 0x18DECCu;
    // 0x18decc: 0x2404018d  addiu       $a0, $zero, 0x18D
    ctx->pc = 0x18deccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 397));
    // 0x18ded0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x18ded0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18ded4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18ded4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ded8: 0xc05c20c  jal         func_170830
    ctx->pc = 0x18DED8u;
    SET_GPR_U32(ctx, 31, 0x18DEE0u);
    ctx->pc = 0x18DEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DED8u;
            // 0x18dedc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEE0u; }
        if (ctx->pc != 0x18DEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEE0u; }
        if (ctx->pc != 0x18DEE0u) { return; }
    }
    ctx->pc = 0x18DEE0u;
    // 0x18dee0: 0x24040189  addiu       $a0, $zero, 0x189
    ctx->pc = 0x18dee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 393));
    // 0x18dee4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x18dee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x18dee8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18dee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18deec: 0xc05c20c  jal         func_170830
    ctx->pc = 0x18DEECu;
    SET_GPR_U32(ctx, 31, 0x18DEF4u);
    ctx->pc = 0x18DEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DEECu;
            // 0x18def0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEF4u; }
        if (ctx->pc != 0x18DEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEF4u; }
        if (ctx->pc != 0x18DEF4u) { return; }
    }
    ctx->pc = 0x18DEF4u;
    // 0x18def4: 0x24040194  addiu       $a0, $zero, 0x194
    ctx->pc = 0x18def4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
    // 0x18def8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x18def8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x18defc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18defcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18df00: 0xc05c20c  jal         func_170830
    ctx->pc = 0x18DF00u;
    SET_GPR_U32(ctx, 31, 0x18DF08u);
    ctx->pc = 0x18DF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF00u;
            // 0x18df04: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF08u; }
        if (ctx->pc != 0x18DF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF08u; }
        if (ctx->pc != 0x18DF08u) { return; }
    }
    ctx->pc = 0x18DF08u;
    // 0x18df08: 0x2404017f  addiu       $a0, $zero, 0x17F
    ctx->pc = 0x18df08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
    // 0x18df0c: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x18DF0Cu;
    SET_GPR_U32(ctx, 31, 0x18DF14u);
    ctx->pc = 0x18DF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF0Cu;
            // 0x18df10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF14u; }
        if (ctx->pc != 0x18DF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF14u; }
        if (ctx->pc != 0x18DF14u) { return; }
    }
    ctx->pc = 0x18DF14u;
    // 0x18df14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18df14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18df18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df1c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18DF1Cu;
    SET_GPR_U32(ctx, 31, 0x18DF24u);
    ctx->pc = 0x18DF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF1Cu;
            // 0x18df20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF24u; }
        if (ctx->pc != 0x18DF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF24u; }
        if (ctx->pc != 0x18DF24u) { return; }
    }
    ctx->pc = 0x18DF24u;
    // 0x18df24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18df24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df28: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18DF28u;
    SET_GPR_U32(ctx, 31, 0x18DF30u);
    ctx->pc = 0x18DF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF28u;
            // 0x18df2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF30u; }
        if (ctx->pc != 0x18DF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF30u; }
        if (ctx->pc != 0x18DF30u) { return; }
    }
    ctx->pc = 0x18DF30u;
    // 0x18df30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18df30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df34: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18DF34u;
    SET_GPR_U32(ctx, 31, 0x18DF3Cu);
    ctx->pc = 0x18DF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF34u;
            // 0x18df38: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF3Cu; }
        if (ctx->pc != 0x18DF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF3Cu; }
        if (ctx->pc != 0x18DF3Cu) { return; }
    }
    ctx->pc = 0x18DF3Cu;
    // 0x18df3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18df3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df40: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18DF40u;
    SET_GPR_U32(ctx, 31, 0x18DF48u);
    ctx->pc = 0x18DF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF40u;
            // 0x18df44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF48u; }
        if (ctx->pc != 0x18DF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF48u; }
        if (ctx->pc != 0x18DF48u) { return; }
    }
    ctx->pc = 0x18DF48u;
    // 0x18df48: 0x24040181  addiu       $a0, $zero, 0x181
    ctx->pc = 0x18df48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
    // 0x18df4c: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x18DF4Cu;
    SET_GPR_U32(ctx, 31, 0x18DF54u);
    ctx->pc = 0x18DF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF4Cu;
            // 0x18df50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF54u; }
        if (ctx->pc != 0x18DF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF54u; }
        if (ctx->pc != 0x18DF54u) { return; }
    }
    ctx->pc = 0x18DF54u;
    // 0x18df54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18df54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18df58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df5c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18DF5Cu;
    SET_GPR_U32(ctx, 31, 0x18DF64u);
    ctx->pc = 0x18DF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF5Cu;
            // 0x18df60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF64u; }
        if (ctx->pc != 0x18DF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF64u; }
        if (ctx->pc != 0x18DF64u) { return; }
    }
    ctx->pc = 0x18DF64u;
    // 0x18df64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18df64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df68: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18DF68u;
    SET_GPR_U32(ctx, 31, 0x18DF70u);
    ctx->pc = 0x18DF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF68u;
            // 0x18df6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF70u; }
        if (ctx->pc != 0x18DF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF70u; }
        if (ctx->pc != 0x18DF70u) { return; }
    }
    ctx->pc = 0x18DF70u;
    // 0x18df70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18df70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df74: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18DF74u;
    SET_GPR_U32(ctx, 31, 0x18DF7Cu);
    ctx->pc = 0x18DF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF74u;
            // 0x18df78: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF7Cu; }
        if (ctx->pc != 0x18DF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF7Cu; }
        if (ctx->pc != 0x18DF7Cu) { return; }
    }
    ctx->pc = 0x18DF7Cu;
    // 0x18df7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18df7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df80: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18DF80u;
    SET_GPR_U32(ctx, 31, 0x18DF88u);
    ctx->pc = 0x18DF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF80u;
            // 0x18df84: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF88u; }
        if (ctx->pc != 0x18DF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF88u; }
        if (ctx->pc != 0x18DF88u) { return; }
    }
    ctx->pc = 0x18DF88u;
    // 0x18df88: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x18df88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x18df8c: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x18DF8Cu;
    SET_GPR_U32(ctx, 31, 0x18DF94u);
    ctx->pc = 0x18DF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF8Cu;
            // 0x18df90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF94u; }
        if (ctx->pc != 0x18DF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF94u; }
        if (ctx->pc != 0x18DF94u) { return; }
    }
    ctx->pc = 0x18DF94u;
    // 0x18df94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18df94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18df98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df9c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18DF9Cu;
    SET_GPR_U32(ctx, 31, 0x18DFA4u);
    ctx->pc = 0x18DFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF9Cu;
            // 0x18dfa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFA4u; }
        if (ctx->pc != 0x18DFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFA4u; }
        if (ctx->pc != 0x18DFA4u) { return; }
    }
    ctx->pc = 0x18DFA4u;
    // 0x18dfa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dfa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dfa8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18DFA8u;
    SET_GPR_U32(ctx, 31, 0x18DFB0u);
    ctx->pc = 0x18DFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DFA8u;
            // 0x18dfac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFB0u; }
        if (ctx->pc != 0x18DFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFB0u; }
        if (ctx->pc != 0x18DFB0u) { return; }
    }
    ctx->pc = 0x18DFB0u;
    // 0x18dfb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dfb4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18DFB4u;
    SET_GPR_U32(ctx, 31, 0x18DFBCu);
    ctx->pc = 0x18DFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DFB4u;
            // 0x18dfb8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFBCu; }
        if (ctx->pc != 0x18DFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFBCu; }
        if (ctx->pc != 0x18DFBCu) { return; }
    }
    ctx->pc = 0x18DFBCu;
    // 0x18dfbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dfc0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18DFC0u;
    SET_GPR_U32(ctx, 31, 0x18DFC8u);
    ctx->pc = 0x18DFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DFC0u;
            // 0x18dfc4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFC8u; }
        if (ctx->pc != 0x18DFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFC8u; }
        if (ctx->pc != 0x18DFC8u) { return; }
    }
    ctx->pc = 0x18DFC8u;
    // 0x18dfc8: 0x2404017f  addiu       $a0, $zero, 0x17F
    ctx->pc = 0x18dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
    // 0x18dfcc: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x18DFCCu;
    SET_GPR_U32(ctx, 31, 0x18DFD4u);
    ctx->pc = 0x18DFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DFCCu;
            // 0x18dfd0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFD4u; }
        if (ctx->pc != 0x18DFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFD4u; }
        if (ctx->pc != 0x18DFD4u) { return; }
    }
    ctx->pc = 0x18DFD4u;
    // 0x18dfd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18dfd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dfd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18dfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dfdc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18DFDCu;
    SET_GPR_U32(ctx, 31, 0x18DFE4u);
    ctx->pc = 0x18DFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DFDCu;
            // 0x18dfe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFE4u; }
        if (ctx->pc != 0x18DFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFE4u; }
        if (ctx->pc != 0x18DFE4u) { return; }
    }
    ctx->pc = 0x18DFE4u;
    // 0x18dfe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dfe8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18DFE8u;
    SET_GPR_U32(ctx, 31, 0x18DFF0u);
    ctx->pc = 0x18DFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DFE8u;
            // 0x18dfec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFF0u; }
        if (ctx->pc != 0x18DFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFF0u; }
        if (ctx->pc != 0x18DFF0u) { return; }
    }
    ctx->pc = 0x18DFF0u;
    // 0x18dff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dff4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18DFF4u;
    SET_GPR_U32(ctx, 31, 0x18DFFCu);
    ctx->pc = 0x18DFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DFF4u;
            // 0x18dff8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFFCu; }
        if (ctx->pc != 0x18DFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFFCu; }
        if (ctx->pc != 0x18DFFCu) { return; }
    }
    ctx->pc = 0x18DFFCu;
    // 0x18dffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e000: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18E000u;
    SET_GPR_U32(ctx, 31, 0x18E008u);
    ctx->pc = 0x18E004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E000u;
            // 0x18e004: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E008u; }
        if (ctx->pc != 0x18E008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E008u; }
        if (ctx->pc != 0x18E008u) { return; }
    }
    ctx->pc = 0x18E008u;
    // 0x18e008: 0x24040181  addiu       $a0, $zero, 0x181
    ctx->pc = 0x18e008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
    // 0x18e00c: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x18E00Cu;
    SET_GPR_U32(ctx, 31, 0x18E014u);
    ctx->pc = 0x18E010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E00Cu;
            // 0x18e010: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E014u; }
        if (ctx->pc != 0x18E014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E014u; }
        if (ctx->pc != 0x18E014u) { return; }
    }
    ctx->pc = 0x18E014u;
    // 0x18e014: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18e018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e01c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18E01Cu;
    SET_GPR_U32(ctx, 31, 0x18E024u);
    ctx->pc = 0x18E020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E01Cu;
            // 0x18e020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E024u; }
        if (ctx->pc != 0x18E024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E024u; }
        if (ctx->pc != 0x18E024u) { return; }
    }
    ctx->pc = 0x18E024u;
    // 0x18e024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e028: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18E028u;
    SET_GPR_U32(ctx, 31, 0x18E030u);
    ctx->pc = 0x18E02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E028u;
            // 0x18e02c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E030u; }
        if (ctx->pc != 0x18E030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E030u; }
        if (ctx->pc != 0x18E030u) { return; }
    }
    ctx->pc = 0x18E030u;
    // 0x18e030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e034: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18E034u;
    SET_GPR_U32(ctx, 31, 0x18E03Cu);
    ctx->pc = 0x18E038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E034u;
            // 0x18e038: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E03Cu; }
        if (ctx->pc != 0x18E03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E03Cu; }
        if (ctx->pc != 0x18E03Cu) { return; }
    }
    ctx->pc = 0x18E03Cu;
    // 0x18e03c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e040: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18E040u;
    SET_GPR_U32(ctx, 31, 0x18E048u);
    ctx->pc = 0x18E044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E040u;
            // 0x18e044: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E048u; }
        if (ctx->pc != 0x18E048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E048u; }
        if (ctx->pc != 0x18E048u) { return; }
    }
    ctx->pc = 0x18E048u;
    // 0x18e048: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x18e048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x18e04c: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x18E04Cu;
    SET_GPR_U32(ctx, 31, 0x18E054u);
    ctx->pc = 0x18E050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E04Cu;
            // 0x18e050: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E054u; }
        if (ctx->pc != 0x18E054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E054u; }
        if (ctx->pc != 0x18E054u) { return; }
    }
    ctx->pc = 0x18E054u;
    // 0x18e054: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e058: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18e058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e05c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18E05Cu;
    SET_GPR_U32(ctx, 31, 0x18E064u);
    ctx->pc = 0x18E060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E05Cu;
            // 0x18e060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E064u; }
        if (ctx->pc != 0x18E064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E064u; }
        if (ctx->pc != 0x18E064u) { return; }
    }
    ctx->pc = 0x18E064u;
    // 0x18e064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e068: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18E068u;
    SET_GPR_U32(ctx, 31, 0x18E070u);
    ctx->pc = 0x18E06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E068u;
            // 0x18e06c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E070u; }
        if (ctx->pc != 0x18E070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E070u; }
        if (ctx->pc != 0x18E070u) { return; }
    }
    ctx->pc = 0x18E070u;
    // 0x18e070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e074: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18E074u;
    SET_GPR_U32(ctx, 31, 0x18E07Cu);
    ctx->pc = 0x18E078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E074u;
            // 0x18e078: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E07Cu; }
        if (ctx->pc != 0x18E07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E07Cu; }
        if (ctx->pc != 0x18E07Cu) { return; }
    }
    ctx->pc = 0x18E07Cu;
    // 0x18e07c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e080: 0xc060630  jal         func_1818C0
    ctx->pc = 0x18E080u;
    SET_GPR_U32(ctx, 31, 0x18E088u);
    ctx->pc = 0x18E084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E080u;
            // 0x18e084: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E088u; }
        if (ctx->pc != 0x18E088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E088u; }
        if (ctx->pc != 0x18E088u) { return; }
    }
    ctx->pc = 0x18E088u;
    // 0x18e088: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18e088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e08c: 0xc063624  jal         func_18D890
    ctx->pc = 0x18E08Cu;
    SET_GPR_U32(ctx, 31, 0x18E094u);
    ctx->pc = 0x18E090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E08Cu;
            // 0x18e090: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D890u;
    if (runtime->hasFunction(0x18D890u)) {
        auto targetFn = runtime->lookupFunction(0x18D890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E094u; }
        if (ctx->pc != 0x18E094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JikiInitProcess_0x18d890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E094u; }
        if (ctx->pc != 0x18E094u) { return; }
    }
    ctx->pc = 0x18E094u;
    // 0x18e094: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18e094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e098: 0xc063624  jal         func_18D890
    ctx->pc = 0x18E098u;
    SET_GPR_U32(ctx, 31, 0x18E0A0u);
    ctx->pc = 0x18E09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E098u;
            // 0x18e09c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D890u;
    if (runtime->hasFunction(0x18D890u)) {
        auto targetFn = runtime->lookupFunction(0x18D890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0A0u; }
        if (ctx->pc != 0x18E0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JikiInitProcess_0x18d890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0A0u; }
        if (ctx->pc != 0x18E0A0u) { return; }
    }
    ctx->pc = 0x18E0A0u;
    // 0x18e0a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18e0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e0a4: 0xc063624  jal         func_18D890
    ctx->pc = 0x18E0A4u;
    SET_GPR_U32(ctx, 31, 0x18E0ACu);
    ctx->pc = 0x18E0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E0A4u;
            // 0x18e0a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D890u;
    if (runtime->hasFunction(0x18D890u)) {
        auto targetFn = runtime->lookupFunction(0x18D890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0ACu; }
        if (ctx->pc != 0x18E0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JikiInitProcess_0x18d890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0ACu; }
        if (ctx->pc != 0x18E0ACu) { return; }
    }
    ctx->pc = 0x18E0ACu;
    // 0x18e0ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18e0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e0b0: 0xc063624  jal         func_18D890
    ctx->pc = 0x18E0B0u;
    SET_GPR_U32(ctx, 31, 0x18E0B8u);
    ctx->pc = 0x18E0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E0B0u;
            // 0x18e0b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D890u;
    if (runtime->hasFunction(0x18D890u)) {
        auto targetFn = runtime->lookupFunction(0x18D890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0B8u; }
        if (ctx->pc != 0x18E0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JikiInitProcess_0x18d890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0B8u; }
        if (ctx->pc != 0x18E0B8u) { return; }
    }
    ctx->pc = 0x18E0B8u;
    // 0x18e0b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18e0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e0bc: 0xc063624  jal         func_18D890
    ctx->pc = 0x18E0BCu;
    SET_GPR_U32(ctx, 31, 0x18E0C4u);
    ctx->pc = 0x18E0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E0BCu;
            // 0x18e0c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D890u;
    if (runtime->hasFunction(0x18D890u)) {
        auto targetFn = runtime->lookupFunction(0x18D890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0C4u; }
        if (ctx->pc != 0x18E0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JikiInitProcess_0x18d890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0C4u; }
        if (ctx->pc != 0x18E0C4u) { return; }
    }
    ctx->pc = 0x18E0C4u;
    // 0x18e0c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18e0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e0c8: 0xc063624  jal         func_18D890
    ctx->pc = 0x18E0C8u;
    SET_GPR_U32(ctx, 31, 0x18E0D0u);
    ctx->pc = 0x18E0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E0C8u;
            // 0x18e0cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D890u;
    if (runtime->hasFunction(0x18D890u)) {
        auto targetFn = runtime->lookupFunction(0x18D890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0D0u; }
        if (ctx->pc != 0x18E0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JikiInitProcess_0x18d890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0D0u; }
        if (ctx->pc != 0x18E0D0u) { return; }
    }
    ctx->pc = 0x18E0D0u;
    // 0x18e0d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18e0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e0d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e0d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x18E0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E0D8u;
            // 0x18e0dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E0E0u;
}
