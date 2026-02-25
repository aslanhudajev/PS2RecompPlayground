#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Clone_ResetMatrix
// Address: 0x1815d0 - 0x181698
void Clone_ResetMatrix_0x1815d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Clone_ResetMatrix_0x1815d0");
#endif

    ctx->pc = 0x1815d0u;

    // 0x1815d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1815d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1815d4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1815d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1815d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1815d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1815dc: 0x24a5a290  addiu       $a1, $a1, -0x5D70
    ctx->pc = 0x1815dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943376));
    // 0x1815e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1815e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1815e4: 0xc04b76e  jal         func_12DDB8
    ctx->pc = 0x1815E4u;
    SET_GPR_U32(ctx, 31, 0x1815ECu);
    ctx->pc = 0x1815E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1815E4u;
            // 0x1815e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDB8u;
    if (runtime->hasFunction(0x12DDB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815ECu; }
        if (ctx->pc != 0x1815ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x12ddb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815ECu; }
        if (ctx->pc != 0x1815ECu) { return; }
    }
    ctx->pc = 0x1815ECu;
    // 0x1815ec: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x1815ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x1815f0: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x1815f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1815f4: 0xc04b76a  jal         func_12DDA8
    ctx->pc = 0x1815F4u;
    SET_GPR_U32(ctx, 31, 0x1815FCu);
    ctx->pc = 0x1815F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1815F4u;
            // 0x1815f8: 0x24a53dc0  addiu       $a1, $a1, 0x3DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815FCu; }
        if (ctx->pc != 0x1815FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815FCu; }
        if (ctx->pc != 0x1815FCu) { return; }
    }
    ctx->pc = 0x1815FCu;
    // 0x1815fc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1815fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x181600: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x181600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x181604: 0xc04b76a  jal         func_12DDA8
    ctx->pc = 0x181604u;
    SET_GPR_U32(ctx, 31, 0x18160Cu);
    ctx->pc = 0x181608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181604u;
            // 0x181608: 0x24a5a2d0  addiu       $a1, $a1, -0x5D30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18160Cu; }
        if (ctx->pc != 0x18160Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18160Cu; }
        if (ctx->pc != 0x18160Cu) { return; }
    }
    ctx->pc = 0x18160Cu;
    // 0x18160c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x18160cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x181610: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x181610u;
    SET_GPR_U32(ctx, 31, 0x181618u);
    ctx->pc = 0x181614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181610u;
            // 0x181614: 0x2484a290  addiu       $a0, $a0, -0x5D70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181618u; }
        if (ctx->pc != 0x181618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181618u; }
        if (ctx->pc != 0x181618u) { return; }
    }
    ctx->pc = 0x181618u;
    // 0x181618: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18161c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x18161cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x181620: 0xc42c3dc0  lwc1        $f12, 0x3DC0($at)
    ctx->pc = 0x181620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x181624: 0x2484a290  addiu       $a0, $a0, -0x5D70
    ctx->pc = 0x181624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943376));
    // 0x181628: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x181628u;
    SET_GPR_U32(ctx, 31, 0x181630u);
    ctx->pc = 0x18162Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181628u;
            // 0x18162c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181630u; }
        if (ctx->pc != 0x181630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181630u; }
        if (ctx->pc != 0x181630u) { return; }
    }
    ctx->pc = 0x181630u;
    // 0x181630: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x181634: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x181634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x181638: 0xc42c3dc4  lwc1        $f12, 0x3DC4($at)
    ctx->pc = 0x181638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18163c: 0x2484a290  addiu       $a0, $a0, -0x5D70
    ctx->pc = 0x18163cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943376));
    // 0x181640: 0xc04b804  jal         func_12E010
    ctx->pc = 0x181640u;
    SET_GPR_U32(ctx, 31, 0x181648u);
    ctx->pc = 0x181644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181640u;
            // 0x181644: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181648u; }
        if (ctx->pc != 0x181648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181648u; }
        if (ctx->pc != 0x181648u) { return; }
    }
    ctx->pc = 0x181648u;
    // 0x181648: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18164c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x18164cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x181650: 0xc42c3dc8  lwc1        $f12, 0x3DC8($at)
    ctx->pc = 0x181650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x181654: 0x2484a290  addiu       $a0, $a0, -0x5D70
    ctx->pc = 0x181654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943376));
    // 0x181658: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x181658u;
    SET_GPR_U32(ctx, 31, 0x181660u);
    ctx->pc = 0x18165Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181658u;
            // 0x18165c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181660u; }
        if (ctx->pc != 0x181660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181660u; }
        if (ctx->pc != 0x181660u) { return; }
    }
    ctx->pc = 0x181660u;
    // 0x181660: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x181660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x181664: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x181664u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x181668: 0x2484a290  addiu       $a0, $a0, -0x5D70
    ctx->pc = 0x181668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943376));
    // 0x18166c: 0x24c6a2d0  addiu       $a2, $a2, -0x5D30
    ctx->pc = 0x18166cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943440));
    // 0x181670: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x181670u;
    SET_GPR_U32(ctx, 31, 0x181678u);
    ctx->pc = 0x181674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181670u;
            // 0x181674: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181678u; }
        if (ctx->pc != 0x181678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181678u; }
        if (ctx->pc != 0x181678u) { return; }
    }
    ctx->pc = 0x181678u;
    // 0x181678: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x181678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18167c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18167cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181680: 0xc04b76e  jal         func_12DDB8
    ctx->pc = 0x181680u;
    SET_GPR_U32(ctx, 31, 0x181688u);
    ctx->pc = 0x181684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181680u;
            // 0x181684: 0x24a5a290  addiu       $a1, $a1, -0x5D70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDB8u;
    if (runtime->hasFunction(0x12DDB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181688u; }
        if (ctx->pc != 0x181688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x12ddb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181688u; }
        if (ctx->pc != 0x181688u) { return; }
    }
    ctx->pc = 0x181688u;
    // 0x181688: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18168c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18168cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181690: 0x3e00008  jr          $ra
    ctx->pc = 0x181690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181690u;
            // 0x181694: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181698u;
}
