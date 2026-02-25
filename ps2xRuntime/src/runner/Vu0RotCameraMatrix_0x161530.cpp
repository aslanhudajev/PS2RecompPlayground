#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Vu0RotCameraMatrix
// Address: 0x161530 - 0x1615d8
void Vu0RotCameraMatrix_0x161530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Vu0RotCameraMatrix_0x161530");
#endif

    ctx->pc = 0x161530u;

    // 0x161530: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x161530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x161534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x161534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x161538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16153c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16153cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161540: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x161540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161544: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x161544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161548: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x161548u;
    SET_GPR_U32(ctx, 31, 0x161550u);
    ctx->pc = 0x16154Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161548u;
            // 0x16154c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161550u; }
        if (ctx->pc != 0x161550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161550u; }
        if (ctx->pc != 0x161550u) { return; }
    }
    ctx->pc = 0x161550u;
    // 0x161550: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x161550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x161554: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x161554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x161558: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x161558u;
    SET_GPR_U32(ctx, 31, 0x161560u);
    ctx->pc = 0x16155Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161558u;
            // 0x16155c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161560u; }
        if (ctx->pc != 0x161560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161560u; }
        if (ctx->pc != 0x161560u) { return; }
    }
    ctx->pc = 0x161560u;
    // 0x161560: 0xc60c0034  lwc1        $f12, 0x34($s0)
    ctx->pc = 0x161560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x161564: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x161564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x161568: 0xc04b804  jal         func_12E010
    ctx->pc = 0x161568u;
    SET_GPR_U32(ctx, 31, 0x161570u);
    ctx->pc = 0x16156Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161568u;
            // 0x16156c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161570u; }
        if (ctx->pc != 0x161570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161570u; }
        if (ctx->pc != 0x161570u) { return; }
    }
    ctx->pc = 0x161570u;
    // 0x161570: 0xc60c0038  lwc1        $f12, 0x38($s0)
    ctx->pc = 0x161570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x161574: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x161574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x161578: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x161578u;
    SET_GPR_U32(ctx, 31, 0x161580u);
    ctx->pc = 0x16157Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161578u;
            // 0x16157c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161580u; }
        if (ctx->pc != 0x161580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161580u; }
        if (ctx->pc != 0x161580u) { return; }
    }
    ctx->pc = 0x161580u;
    // 0x161580: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x161580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x161584: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x161584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x161588: 0xc04b6be  jal         func_12DAF8
    ctx->pc = 0x161588u;
    SET_GPR_U32(ctx, 31, 0x161590u);
    ctx->pc = 0x16158Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161588u;
            // 0x16158c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DAF8u;
    if (runtime->hasFunction(0x12DAF8u)) {
        auto targetFn = runtime->lookupFunction(0x12DAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161590u; }
        if (ctx->pc != 0x161590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x12daf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161590u; }
        if (ctx->pc != 0x161590u) { return; }
    }
    ctx->pc = 0x161590u;
    // 0x161590: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x161590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x161594: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x161594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x161598: 0xc04b6be  jal         func_12DAF8
    ctx->pc = 0x161598u;
    SET_GPR_U32(ctx, 31, 0x1615A0u);
    ctx->pc = 0x16159Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161598u;
            // 0x16159c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DAF8u;
    if (runtime->hasFunction(0x12DAF8u)) {
        auto targetFn = runtime->lookupFunction(0x12DAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615A0u; }
        if (ctx->pc != 0x1615A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x12daf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615A0u; }
        if (ctx->pc != 0x1615A0u) { return; }
    }
    ctx->pc = 0x1615A0u;
    // 0x1615a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1615a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1615a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1615a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1615a8: 0xc04b6be  jal         func_12DAF8
    ctx->pc = 0x1615A8u;
    SET_GPR_U32(ctx, 31, 0x1615B0u);
    ctx->pc = 0x1615ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1615A8u;
            // 0x1615ac: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DAF8u;
    if (runtime->hasFunction(0x12DAF8u)) {
        auto targetFn = runtime->lookupFunction(0x12DAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615B0u; }
        if (ctx->pc != 0x1615B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x12daf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615B0u; }
        if (ctx->pc != 0x1615B0u) { return; }
    }
    ctx->pc = 0x1615B0u;
    // 0x1615b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1615b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1615b4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1615b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1615b8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1615b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1615bc: 0xc04b84c  jal         func_12E130
    ctx->pc = 0x1615BCu;
    SET_GPR_U32(ctx, 31, 0x1615C4u);
    ctx->pc = 0x1615C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1615BCu;
            // 0x1615c0: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E130u;
    if (runtime->hasFunction(0x12E130u)) {
        auto targetFn = runtime->lookupFunction(0x12E130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615C4u; }
        if (ctx->pc != 0x1615C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CameraMatrix_0x12e130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615C4u; }
        if (ctx->pc != 0x1615C4u) { return; }
    }
    ctx->pc = 0x1615C4u;
    // 0x1615c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1615c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1615c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1615c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1615cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1615ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1615d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1615D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1615D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1615D0u;
            // 0x1615d4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1615D8u;
}
