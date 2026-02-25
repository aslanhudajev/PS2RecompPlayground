#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: cameraview
// Address: 0x167cf0 - 0x167dc8
void cameraview_0x167cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("cameraview_0x167cf0");
#endif

    ctx->pc = 0x167cf0u;

    // 0x167cf0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x167cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x167cf4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x167cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x167cf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x167cfc: 0x24429da0  addiu       $v0, $v0, -0x6260
    ctx->pc = 0x167cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942112));
    // 0x167d00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167d04: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x167d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x167d08: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x167d08u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167d0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x167d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d10: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x167d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x167d14: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x167d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x167d18: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x167d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x167d1c: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x167d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x167d20: 0x24429db0  addiu       $v0, $v0, -0x6250
    ctx->pc = 0x167d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942128));
    // 0x167d24: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x167d24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167d28: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x167D28u;
    SET_GPR_U32(ctx, 31, 0x167D30u);
    ctx->pc = 0x167D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167D28u;
            // 0x167d2c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D30u; }
        if (ctx->pc != 0x167D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D30u; }
        if (ctx->pc != 0x167D30u) { return; }
    }
    ctx->pc = 0x167D30u;
    // 0x167d30: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x167d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x167d34: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x167d34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x167d38: 0x24c64c30  addiu       $a2, $a2, 0x4C30
    ctx->pc = 0x167d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19504));
    // 0x167d3c: 0xc04b82e  jal         func_12E0B8
    ctx->pc = 0x167D3Cu;
    SET_GPR_U32(ctx, 31, 0x167D44u);
    ctx->pc = 0x167D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167D3Cu;
            // 0x167d40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E0B8u;
    if (runtime->hasFunction(0x12E0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12E0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D44u; }
        if (ctx->pc != 0x167D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrix_0x12e0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D44u; }
        if (ctx->pc != 0x167D44u) { return; }
    }
    ctx->pc = 0x167D44u;
    // 0x167d44: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x167d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x167d48: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x167d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x167d4c: 0xc04b6be  jal         func_12DAF8
    ctx->pc = 0x167D4Cu;
    SET_GPR_U32(ctx, 31, 0x167D54u);
    ctx->pc = 0x167D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167D4Cu;
            // 0x167d50: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DAF8u;
    if (runtime->hasFunction(0x12DAF8u)) {
        auto targetFn = runtime->lookupFunction(0x12DAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D54u; }
        if (ctx->pc != 0x167D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x12daf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D54u; }
        if (ctx->pc != 0x167D54u) { return; }
    }
    ctx->pc = 0x167D54u;
    // 0x167d54: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x167d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x167d58: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x167d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x167d5c: 0xc04b6be  jal         func_12DAF8
    ctx->pc = 0x167D5Cu;
    SET_GPR_U32(ctx, 31, 0x167D64u);
    ctx->pc = 0x167D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167D5Cu;
            // 0x167d60: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DAF8u;
    if (runtime->hasFunction(0x12DAF8u)) {
        auto targetFn = runtime->lookupFunction(0x12DAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D64u; }
        if (ctx->pc != 0x167D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x12daf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D64u; }
        if (ctx->pc != 0x167D64u) { return; }
    }
    ctx->pc = 0x167D64u;
    // 0x167d64: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x167d64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x167d68: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x167d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x167d6c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x167d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x167d70: 0xc04b6be  jal         func_12DAF8
    ctx->pc = 0x167D70u;
    SET_GPR_U32(ctx, 31, 0x167D78u);
    ctx->pc = 0x167D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167D70u;
            // 0x167d74: 0x24c69d70  addiu       $a2, $a2, -0x6290 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DAF8u;
    if (runtime->hasFunction(0x12DAF8u)) {
        auto targetFn = runtime->lookupFunction(0x12DAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D78u; }
        if (ctx->pc != 0x167D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x12daf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D78u; }
        if (ctx->pc != 0x167D78u) { return; }
    }
    ctx->pc = 0x167D78u;
    // 0x167d78: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x167d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x167d7c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x167d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x167d80: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x167d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x167d84: 0xc04b84c  jal         func_12E130
    ctx->pc = 0x167D84u;
    SET_GPR_U32(ctx, 31, 0x167D8Cu);
    ctx->pc = 0x167D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167D84u;
            // 0x167d88: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E130u;
    if (runtime->hasFunction(0x12E130u)) {
        auto targetFn = runtime->lookupFunction(0x12E130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D8Cu; }
        if (ctx->pc != 0x167D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CameraMatrix_0x12e130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D8Cu; }
        if (ctx->pc != 0x167D8Cu) { return; }
    }
    ctx->pc = 0x167D8Cu;
    // 0x167d8c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x167d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x167d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d94: 0x24a54ca0  addiu       $a1, $a1, 0x4CA0
    ctx->pc = 0x167d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19616));
    // 0x167d98: 0xc04b6ca  jal         func_12DB28
    ctx->pc = 0x167D98u;
    SET_GPR_U32(ctx, 31, 0x167DA0u);
    ctx->pc = 0x167D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167D98u;
            // 0x167d9c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DB28u;
    if (runtime->hasFunction(0x12DB28u)) {
        auto targetFn = runtime->lookupFunction(0x12DB28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167DA0u; }
        if (ctx->pc != 0x167DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0MulMatrix_0x12db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167DA0u; }
        if (ctx->pc != 0x167DA0u) { return; }
    }
    ctx->pc = 0x167DA0u;
    // 0x167da0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x167da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x167da4: 0xc04b76e  jal         func_12DDB8
    ctx->pc = 0x167DA4u;
    SET_GPR_U32(ctx, 31, 0x167DACu);
    ctx->pc = 0x167DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167DA4u;
            // 0x167da8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDB8u;
    if (runtime->hasFunction(0x12DDB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167DACu; }
        if (ctx->pc != 0x167DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x12ddb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167DACu; }
        if (ctx->pc != 0x167DACu) { return; }
    }
    ctx->pc = 0x167DACu;
    // 0x167dac: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x167dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x167db0: 0xc04b990  jal         func_12E640
    ctx->pc = 0x167DB0u;
    SET_GPR_U32(ctx, 31, 0x167DB8u);
    ctx->pc = 0x167DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167DB0u;
            // 0x167db4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E640u;
    if (runtime->hasFunction(0x12E640u)) {
        auto targetFn = runtime->lookupFunction(0x12E640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167DB8u; }
        if (ctx->pc != 0x167DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVectorXYZ_0x12e640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167DB8u; }
        if (ctx->pc != 0x167DB8u) { return; }
    }
    ctx->pc = 0x167DB8u;
    // 0x167db8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167dbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x167DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167DC0u;
            // 0x167dc4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167DC8u;
}
