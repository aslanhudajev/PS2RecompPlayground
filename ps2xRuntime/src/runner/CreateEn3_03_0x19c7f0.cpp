#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn3_03
// Address: 0x19c7f0 - 0x19c914
void CreateEn3_03_0x19c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn3_03_0x19c7f0");
#endif

    ctx->pc = 0x19c7f0u;

    // 0x19c7f0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x19c7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x19c7f4: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x19c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x19c7f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19c7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19c7fc: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x19c800: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19c800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19c804: 0x2463c950  addiu       $v1, $v1, -0x36B0
    ctx->pc = 0x19c804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953296));
    // 0x19c808: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19c808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19c80c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19c80cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c810: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c814: 0x2442cc50  addiu       $v0, $v0, -0x33B0
    ctx->pc = 0x19c814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954064));
    // 0x19c818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c81c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19c81cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c820: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x19c820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x19c824: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19c824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c828: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x19c828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x19c82c: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x19c82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x19c830: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19c830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x19c834: 0x2463ef90  addiu       $v1, $v1, -0x1070
    ctx->pc = 0x19c834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963088));
    // 0x19c838: 0x2442c920  addiu       $v0, $v0, -0x36E0
    ctx->pc = 0x19c838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953248));
    // 0x19c83c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x19c83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x19c840: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x19c840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x19c844: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x19c844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x19c848: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x19c848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x19c84c: 0xc060694  jal         func_181A50
    ctx->pc = 0x19C84Cu;
    SET_GPR_U32(ctx, 31, 0x19C854u);
    ctx->pc = 0x19C850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C84Cu;
            // 0x19c850: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C854u; }
        if (ctx->pc != 0x19C854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C854u; }
        if (ctx->pc != 0x19C854u) { return; }
    }
    ctx->pc = 0x19C854u;
    // 0x19c854: 0xc060544  jal         func_181510
    ctx->pc = 0x19C854u;
    SET_GPR_U32(ctx, 31, 0x19C85Cu);
    ctx->pc = 0x19C858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C854u;
            // 0x19c858: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C85Cu; }
        if (ctx->pc != 0x19C85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C85Cu; }
        if (ctx->pc != 0x19C85Cu) { return; }
    }
    ctx->pc = 0x19C85Cu;
    // 0x19c85c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x19c85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x19c860: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x19c860u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c864: 0x240209c4  addiu       $v0, $zero, 0x9C4
    ctx->pc = 0x19c864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2500));
    // 0x19c868: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x19c868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x19c86c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x19c86cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c870: 0x0  nop
    ctx->pc = 0x19c870u;
    // NOP
    // 0x19c874: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19c874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19c878: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19c878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19c87c: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x19c87cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x19c880: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19c880u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19c884: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19c884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19c888: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19c888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x19c88c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C88Cu;
    {
        const bool branch_taken_0x19c88c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C88Cu;
            // 0x19c890: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c88c) {
            ctx->pc = 0x19C8A0u;
            goto label_19c8a0;
        }
    }
    ctx->pc = 0x19C894u;
    // 0x19c894: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19C894u;
    {
        const bool branch_taken_0x19c894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c894) {
            ctx->pc = 0x19C8F0u;
            goto label_19c8f0;
        }
    }
    ctx->pc = 0x19C89Cu;
    // 0x19c89c: 0x0  nop
    ctx->pc = 0x19c89cu;
    // NOP
label_19c8a0:
    // 0x19c8a0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x19c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x19c8a4: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x19c8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x19c8a8: 0x3c054248  lui         $a1, 0x4248
    ctx->pc = 0x19c8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16968 << 16));
    // 0x19c8ac: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x19c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x19c8b0: 0x3c04bf00  lui         $a0, 0xBF00
    ctx->pc = 0x19c8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48896 << 16));
    // 0x19c8b4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19c8b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x19c8b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x19c8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x19c8bc: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x19c8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x19c8c0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x19c8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x19c8c4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x19c8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x19c8c8: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x19c8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x19c8cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19c8d0: 0xac450128  sw          $a1, 0x128($v0)
    ctx->pc = 0x19c8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 5));
    // 0x19c8d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19c8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19c8d8: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x19c8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
    // 0x19c8dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19c8e0: 0xac440114  sw          $a0, 0x114($v0)
    ctx->pc = 0x19c8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 4));
    // 0x19c8e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19c8e8: 0xac430118  sw          $v1, 0x118($v0)
    ctx->pc = 0x19c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
    // 0x19c8ec: 0x0  nop
    ctx->pc = 0x19c8ecu;
    // NOP
label_19c8f0:
    // 0x19c8f0: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x19C8F0u;
    SET_GPR_U32(ctx, 31, 0x19C8F8u);
    ctx->pc = 0x19C8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C8F0u;
            // 0x19c8f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C8F8u; }
        if (ctx->pc != 0x19C8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C8F8u; }
        if (ctx->pc != 0x19C8F8u) { return; }
    }
    ctx->pc = 0x19C8F8u;
    // 0x19c8f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19c8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19c8fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19c8fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c900: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19c900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c904: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c908: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c90c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C90Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C90Cu;
            // 0x19c910: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C8A0u: goto label_19c8a0;
            case 0x19C8F0u: goto label_19c8f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C914u;
}
