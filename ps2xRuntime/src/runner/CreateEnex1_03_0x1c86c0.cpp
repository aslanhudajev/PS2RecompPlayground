#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEnex1_03
// Address: 0x1c86c0 - 0x1c89fc
void CreateEnex1_03_0x1c86c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEnex1_03_0x1c86c0");
#endif

    ctx->pc = 0x1c86c0u;

    // 0x1c86c0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1c86c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1c86c4: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1c86c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1c86c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c86c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c86cc: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1c86ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1c86d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c86d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c86d4: 0x24638a30  addiu       $v1, $v1, -0x75D0
    ctx->pc = 0x1c86d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937136));
    // 0x1c86d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c86d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c86dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c86dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c86e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c86e4: 0x24428c80  addiu       $v0, $v0, -0x7380
    ctx->pc = 0x1c86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937728));
    // 0x1c86e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c86e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c86ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c86ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86f0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1c86f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1c86f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c86f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86f8: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1c86f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1c86fc: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1c86fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1c8700: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1c8700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1c8704: 0x246397d0  addiu       $v1, $v1, -0x6830
    ctx->pc = 0x1c8704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940624));
    // 0x1c8708: 0x24428a00  addiu       $v0, $v0, -0x7600
    ctx->pc = 0x1c8708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937088));
    // 0x1c870c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1c870cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1c8710: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x1c8710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1c8714: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1c8714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1c8718: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1c8718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1c871c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1C871Cu;
    SET_GPR_U32(ctx, 31, 0x1C8724u);
    ctx->pc = 0x1C8720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C871Cu;
            // 0x1c8720: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8724u; }
        if (ctx->pc != 0x1C8724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8724u; }
        if (ctx->pc != 0x1C8724u) { return; }
    }
    ctx->pc = 0x1C8724u;
    // 0x1c8724: 0xc060544  jal         func_181510
    ctx->pc = 0x1C8724u;
    SET_GPR_U32(ctx, 31, 0x1C872Cu);
    ctx->pc = 0x1C8728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8724u;
            // 0x1c8728: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C872Cu; }
        if (ctx->pc != 0x1C872Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C872Cu; }
        if (ctx->pc != 0x1C872Cu) { return; }
    }
    ctx->pc = 0x1C872Cu;
    // 0x1c872c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1c872cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1c8730: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1c8730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1c8734: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1c8734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8738: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1c8738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1c873c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c873cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c8740: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1c8740u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8744: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1c8744u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8748: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c8748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c874c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c874cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c8750: 0x2e610006  sltiu       $at, $s3, 0x6
    ctx->pc = 0x1c8750u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1c8754: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1c8754u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1c8758: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c8758u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1c875c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1c875cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c8760: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c8760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c8764: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1c8764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x1c8768: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1c8768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1c876c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c8770: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1c8770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1c8774: 0x10200098  beqz        $at, . + 4 + (0x98 << 2)
    ctx->pc = 0x1C8774u;
    {
        const bool branch_taken_0x1c8774 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8774u;
            // 0x1c8778: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8774) {
            ctx->pc = 0x1C89D8u;
            goto label_1c89d8;
        }
    }
    ctx->pc = 0x1C877Cu;
    // 0x1c877c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1c877cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1c8780: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1c8780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1c8784: 0x24632c10  addiu       $v1, $v1, 0x2C10
    ctx->pc = 0x1c8784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11280));
    // 0x1c8788: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c878c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c878cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8790: 0x400008  jr          $v0
    ctx->pc = 0x1C8790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8798u: goto label_1c8798;
            case 0x1C87D0u: goto label_1c87d0;
            case 0x1C8800u: goto label_1c8800;
            case 0x1C8858u: goto label_1c8858;
            case 0x1C88B0u: goto label_1c88b0;
            case 0x1C8948u: goto label_1c8948;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8798u;
label_1c8798:
    // 0x1c8798: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c8798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c879c: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1c879cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1c87a0: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x1c87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
    // 0x1c87a4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1c87a4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1c87a8: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1c87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x1c87ac: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1c87acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1c87b0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c87b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c87b4: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1c87b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1c87b8: 0x3c02bba3  lui         $v0, 0xBBA3
    ctx->pc = 0x1c87b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
    // 0x1c87bc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c87bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c87c0: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1c87c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1c87c4: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1C87C4u;
    {
        const bool branch_taken_0x1c87c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C87C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C87C4u;
            // 0x1c87c8: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c87c4) {
            ctx->pc = 0x1C89D8u;
            goto label_1c89d8;
        }
    }
    ctx->pc = 0x1C87CCu;
    // 0x1c87cc: 0x0  nop
    ctx->pc = 0x1c87ccu;
    // NOP
label_1c87d0:
    // 0x1c87d0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c87d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c87d4: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1c87d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1c87d8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1c87d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1c87dc: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1c87dcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1c87e0: 0x3c02bba3  lui         $v0, 0xBBA3
    ctx->pc = 0x1c87e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
    // 0x1c87e4: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1c87e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1c87e8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c87e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c87ec: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1c87ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1c87f0: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1c87f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1c87f4: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1C87F4u;
    {
        const bool branch_taken_0x1c87f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C87F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C87F4u;
            // 0x1c87f8: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c87f4) {
            ctx->pc = 0x1C89D8u;
            goto label_1c89d8;
        }
    }
    ctx->pc = 0x1C87FCu;
    // 0x1c87fc: 0x0  nop
    ctx->pc = 0x1c87fcu;
    // NOP
label_1c8800:
    // 0x1c8800: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1c8800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1c8804: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1c8804u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1c8808: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1c8808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1c880c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1c880cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1c8810: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1c8810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1c8814: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1c8814u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c8818: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1c8818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1c881c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c881cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c8820: 0x3c02bfd5  lui         $v0, 0xBFD5
    ctx->pc = 0x1c8820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49109 << 16));
    // 0x1c8824: 0x3446c28f  ori         $a2, $v0, 0xC28F
    ctx->pc = 0x1c8824u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1c8828: 0x3c023c75  lui         $v0, 0x3C75
    ctx->pc = 0x1c8828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
    // 0x1c882c: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x1c882cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1c8830: 0x3c02bd4c  lui         $v0, 0xBD4C
    ctx->pc = 0x1c8830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
    // 0x1c8834: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c8834u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1c8838: 0xac860118  sw          $a2, 0x118($a0)
    ctx->pc = 0x1c8838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 6));
    // 0x1c883c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c883cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c8840: 0xac850114  sw          $a1, 0x114($a0)
    ctx->pc = 0x1c8840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 5));
    // 0x1c8844: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1c8844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1c8848: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1c8848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1c884c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1C884Cu;
    {
        const bool branch_taken_0x1c884c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C884Cu;
            // 0x1c8850: 0xae0200e4  sw          $v0, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c884c) {
            ctx->pc = 0x1C89D8u;
            goto label_1c89d8;
        }
    }
    ctx->pc = 0x1C8854u;
    // 0x1c8854: 0x0  nop
    ctx->pc = 0x1c8854u;
    // NOP
label_1c8858:
    // 0x1c8858: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1c8858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1c885c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1c885cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1c8860: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x1c8860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
    // 0x1c8864: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x1c8864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x1c8868: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1c8868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1c886c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1c886cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c8870: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1c8870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1c8874: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c8874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c8878: 0x3c023fd5  lui         $v0, 0x3FD5
    ctx->pc = 0x1c8878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16341 << 16));
    // 0x1c887c: 0x3446c28f  ori         $a2, $v0, 0xC28F
    ctx->pc = 0x1c887cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1c8880: 0x3c02bc75  lui         $v0, 0xBC75
    ctx->pc = 0x1c8880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
    // 0x1c8884: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x1c8884u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1c8888: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1c8888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1c888c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c888cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1c8890: 0xac860118  sw          $a2, 0x118($a0)
    ctx->pc = 0x1c8890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 6));
    // 0x1c8894: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c8894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c8898: 0xac850114  sw          $a1, 0x114($a0)
    ctx->pc = 0x1c8898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 5));
    // 0x1c889c: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1c889cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1c88a0: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1c88a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1c88a4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1C88A4u;
    {
        const bool branch_taken_0x1c88a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C88A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C88A4u;
            // 0x1c88a8: 0xae0200e4  sw          $v0, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88a4) {
            ctx->pc = 0x1C89D8u;
            goto label_1c89d8;
        }
    }
    ctx->pc = 0x1C88ACu;
    // 0x1c88ac: 0x0  nop
    ctx->pc = 0x1c88acu;
    // NOP
label_1c88b0:
    // 0x1c88b0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C88B0u;
    SET_GPR_U32(ctx, 31, 0x1C88B8u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88B8u; }
        if (ctx->pc != 0x1C88B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88B8u; }
        if (ctx->pc != 0x1C88B8u) { return; }
    }
    ctx->pc = 0x1C88B8u;
    // 0x1c88b8: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C88B8u;
    SET_GPR_U32(ctx, 31, 0x1C88C0u);
    ctx->pc = 0x1C88BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C88B8u;
            // 0x1c88bc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88C0u; }
        if (ctx->pc != 0x1C88C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88C0u; }
        if (ctx->pc != 0x1C88C0u) { return; }
    }
    ctx->pc = 0x1C88C0u;
    // 0x1c88c0: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x1c88c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x1c88c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c88c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c88c8: 0xc040880  jal         func_102200
    ctx->pc = 0x1C88C8u;
    SET_GPR_U32(ctx, 31, 0x1C88D0u);
    ctx->pc = 0x1C88CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C88C8u;
            // 0x1c88cc: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88D0u; }
        if (ctx->pc != 0x1C88D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88D0u; }
        if (ctx->pc != 0x1C88D0u) { return; }
    }
    ctx->pc = 0x1C88D0u;
    // 0x1c88d0: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1C88D0u;
    SET_GPR_U32(ctx, 31, 0x1C88D8u);
    ctx->pc = 0x1C88D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C88D0u;
            // 0x1c88d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88D8u; }
        if (ctx->pc != 0x1C88D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88D8u; }
        if (ctx->pc != 0x1C88D8u) { return; }
    }
    ctx->pc = 0x1C88D8u;
    // 0x1c88d8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C88D8u;
    SET_GPR_U32(ctx, 31, 0x1C88E0u);
    ctx->pc = 0x1C88DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C88D8u;
            // 0x1c88dc: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88E0u; }
        if (ctx->pc != 0x1C88E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88E0u; }
        if (ctx->pc != 0x1C88E0u) { return; }
    }
    ctx->pc = 0x1C88E0u;
    // 0x1c88e0: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C88E0u;
    SET_GPR_U32(ctx, 31, 0x1C88E8u);
    ctx->pc = 0x1C88E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C88E0u;
            // 0x1c88e4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88E8u; }
        if (ctx->pc != 0x1C88E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88E8u; }
        if (ctx->pc != 0x1C88E8u) { return; }
    }
    ctx->pc = 0x1C88E8u;
    // 0x1c88e8: 0x3c043fd3  lui         $a0, 0x3FD3
    ctx->pc = 0x1c88e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16339 << 16));
    // 0x1c88ec: 0x3c033333  lui         $v1, 0x3333
    ctx->pc = 0x1c88ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
    // 0x1c88f0: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x1c88f0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)13107u)));
    // 0x1c88f4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1c88f4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)13107u)));
    // 0x1c88f8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c88f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c88fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c88fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8900: 0xc040880  jal         func_102200
    ctx->pc = 0x1C8900u;
    SET_GPR_U32(ctx, 31, 0x1C8908u);
    ctx->pc = 0x1C8904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8900u;
            // 0x1c8904: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8908u; }
        if (ctx->pc != 0x1C8908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8908u; }
        if (ctx->pc != 0x1C8908u) { return; }
    }
    ctx->pc = 0x1C8908u;
    // 0x1c8908: 0x3c043fd9  lui         $a0, 0x3FD9
    ctx->pc = 0x1c8908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16345 << 16));
    // 0x1c890c: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x1c890cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)40960u)));
    // 0x1c8910: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1c8910u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c8914: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1c8914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c8918: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c8918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c891c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c891cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8920: 0xc040850  jal         func_102140
    ctx->pc = 0x1C8920u;
    SET_GPR_U32(ctx, 31, 0x1C8928u);
    ctx->pc = 0x1C8924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8920u;
            // 0x1c8924: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8928u; }
        if (ctx->pc != 0x1C8928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8928u; }
        if (ctx->pc != 0x1C8928u) { return; }
    }
    ctx->pc = 0x1C8928u;
    // 0x1c8928: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1C8928u;
    SET_GPR_U32(ctx, 31, 0x1C8930u);
    ctx->pc = 0x1C892Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8928u;
            // 0x1c892c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8930u; }
        if (ctx->pc != 0x1C8930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8930u; }
        if (ctx->pc != 0x1C8930u) { return; }
    }
    ctx->pc = 0x1C8930u;
    // 0x1c8930: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c8930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1c8934: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1c8934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1c8938: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1c8938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1c893c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1C893Cu;
    {
        const bool branch_taken_0x1c893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C893Cu;
            // 0x1c8940: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c893c) {
            ctx->pc = 0x1C89D8u;
            goto label_1c89d8;
        }
    }
    ctx->pc = 0x1C8944u;
    // 0x1c8944: 0x0  nop
    ctx->pc = 0x1c8944u;
    // NOP
label_1c8948:
    // 0x1c8948: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C8948u;
    SET_GPR_U32(ctx, 31, 0x1C8950u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8950u; }
        if (ctx->pc != 0x1C8950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8950u; }
        if (ctx->pc != 0x1C8950u) { return; }
    }
    ctx->pc = 0x1C8950u;
    // 0x1c8950: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C8950u;
    SET_GPR_U32(ctx, 31, 0x1C8958u);
    ctx->pc = 0x1C8954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8950u;
            // 0x1c8954: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8958u; }
        if (ctx->pc != 0x1C8958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8958u; }
        if (ctx->pc != 0x1C8958u) { return; }
    }
    ctx->pc = 0x1C8958u;
    // 0x1c8958: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x1c8958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x1c895c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c895cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8960: 0xc040880  jal         func_102200
    ctx->pc = 0x1C8960u;
    SET_GPR_U32(ctx, 31, 0x1C8968u);
    ctx->pc = 0x1C8964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8960u;
            // 0x1c8964: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8968u; }
        if (ctx->pc != 0x1C8968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8968u; }
        if (ctx->pc != 0x1C8968u) { return; }
    }
    ctx->pc = 0x1C8968u;
    // 0x1c8968: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1C8968u;
    SET_GPR_U32(ctx, 31, 0x1C8970u);
    ctx->pc = 0x1C896Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8968u;
            // 0x1c896c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8970u; }
        if (ctx->pc != 0x1C8970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8970u; }
        if (ctx->pc != 0x1C8970u) { return; }
    }
    ctx->pc = 0x1C8970u;
    // 0x1c8970: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C8970u;
    SET_GPR_U32(ctx, 31, 0x1C8978u);
    ctx->pc = 0x1C8974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8970u;
            // 0x1c8974: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8978u; }
        if (ctx->pc != 0x1C8978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8978u; }
        if (ctx->pc != 0x1C8978u) { return; }
    }
    ctx->pc = 0x1C8978u;
    // 0x1c8978: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C8978u;
    SET_GPR_U32(ctx, 31, 0x1C8980u);
    ctx->pc = 0x1C897Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8978u;
            // 0x1c897c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8980u; }
        if (ctx->pc != 0x1C8980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8980u; }
        if (ctx->pc != 0x1C8980u) { return; }
    }
    ctx->pc = 0x1C8980u;
    // 0x1c8980: 0x3c043fd3  lui         $a0, 0x3FD3
    ctx->pc = 0x1c8980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16339 << 16));
    // 0x1c8984: 0x3c033333  lui         $v1, 0x3333
    ctx->pc = 0x1c8984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
    // 0x1c8988: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x1c8988u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)13107u)));
    // 0x1c898c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1c898cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)13107u)));
    // 0x1c8990: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c8990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c8994: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c8994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8998: 0xc040880  jal         func_102200
    ctx->pc = 0x1C8998u;
    SET_GPR_U32(ctx, 31, 0x1C89A0u);
    ctx->pc = 0x1C899Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8998u;
            // 0x1c899c: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C89A0u; }
        if (ctx->pc != 0x1C89A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C89A0u; }
        if (ctx->pc != 0x1C89A0u) { return; }
    }
    ctx->pc = 0x1C89A0u;
    // 0x1c89a0: 0x3c043fd9  lui         $a0, 0x3FD9
    ctx->pc = 0x1c89a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16345 << 16));
    // 0x1c89a4: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x1c89a4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)40960u)));
    // 0x1c89a8: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1c89a8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c89ac: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1c89acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c89b0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c89b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c89b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c89b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89b8: 0xc040850  jal         func_102140
    ctx->pc = 0x1C89B8u;
    SET_GPR_U32(ctx, 31, 0x1C89C0u);
    ctx->pc = 0x1C89BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C89B8u;
            // 0x1c89bc: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C89C0u; }
        if (ctx->pc != 0x1C89C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C89C0u; }
        if (ctx->pc != 0x1C89C0u) { return; }
    }
    ctx->pc = 0x1C89C0u;
    // 0x1c89c0: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1C89C0u;
    SET_GPR_U32(ctx, 31, 0x1C89C8u);
    ctx->pc = 0x1C89C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C89C0u;
            // 0x1c89c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C89C8u; }
        if (ctx->pc != 0x1C89C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C89C8u; }
        if (ctx->pc != 0x1C89C8u) { return; }
    }
    ctx->pc = 0x1C89C8u;
    // 0x1c89c8: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c89c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1c89cc: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1c89ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1c89d0: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1c89d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1c89d4: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1c89d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_1c89d8:
    // 0x1c89d8: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1C89D8u;
    SET_GPR_U32(ctx, 31, 0x1C89E0u);
    ctx->pc = 0x1C89DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C89D8u;
            // 0x1c89dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C89E0u; }
        if (ctx->pc != 0x1C89E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C89E0u; }
        if (ctx->pc != 0x1C89E0u) { return; }
    }
    ctx->pc = 0x1C89E0u;
    // 0x1c89e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c89e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c89e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c89e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c89e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c89e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c89ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c89ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c89f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c89f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c89f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C89F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C89F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C89F4u;
            // 0x1c89f8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8798u: goto label_1c8798;
            case 0x1C87D0u: goto label_1c87d0;
            case 0x1C8800u: goto label_1c8800;
            case 0x1C8858u: goto label_1c8858;
            case 0x1C88B0u: goto label_1c88b0;
            case 0x1C8948u: goto label_1c8948;
            case 0x1C89D8u: goto label_1c89d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C89FCu;
}
