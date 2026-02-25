#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn4_03
// Address: 0x1a5840 - 0x1a5abc
void CreateEn4_03_0x1a5840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn4_03_0x1a5840");
#endif

    ctx->pc = 0x1a5840u;

    // 0x1a5840: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1a5840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1a5844: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a5844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a5848: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a5848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a584c: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a584cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a5850: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a5850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a5854: 0x24635af0  addiu       $v1, $v1, 0x5AF0
    ctx->pc = 0x1a5854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23280));
    // 0x1a5858: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a5858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a585c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a585cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5860: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a5860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a5864: 0x24425d40  addiu       $v0, $v0, 0x5D40
    ctx->pc = 0x1a5864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23872));
    // 0x1a5868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a586c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a586cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5870: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1a5870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1a5874: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a5874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5878: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1a5878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1a587c: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a587cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a5880: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a5880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a5884: 0x24636800  addiu       $v1, $v1, 0x6800
    ctx->pc = 0x1a5884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26624));
    // 0x1a5888: 0x24425ac0  addiu       $v0, $v0, 0x5AC0
    ctx->pc = 0x1a5888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23232));
    // 0x1a588c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1a588cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1a5890: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x1a5890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1a5894: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1a5894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1a5898: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1a5898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1a589c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1A589Cu;
    SET_GPR_U32(ctx, 31, 0x1A58A4u);
    ctx->pc = 0x1A58A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A589Cu;
            // 0x1a58a0: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A58A4u; }
        if (ctx->pc != 0x1A58A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A58A4u; }
        if (ctx->pc != 0x1A58A4u) { return; }
    }
    ctx->pc = 0x1A58A4u;
    // 0x1a58a4: 0xc060544  jal         func_181510
    ctx->pc = 0x1A58A4u;
    SET_GPR_U32(ctx, 31, 0x1A58ACu);
    ctx->pc = 0x1A58A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A58A4u;
            // 0x1a58a8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A58ACu; }
        if (ctx->pc != 0x1A58ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A58ACu; }
        if (ctx->pc != 0x1A58ACu) { return; }
    }
    ctx->pc = 0x1A58ACu;
    // 0x1a58ac: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a58acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1a58b0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1a58b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1a58b4: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1a58b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a58b8: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1a58b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1a58bc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a58bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a58c0: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1a58c0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a58c4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1a58c4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a58c8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a58c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a58cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a58ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a58d0: 0x2e610006  sltiu       $at, $s3, 0x6
    ctx->pc = 0x1a58d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1a58d4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1a58d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a58d8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a58d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1a58dc: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1a58dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a58e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a58e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a58e4: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1a58e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x1a58e8: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1a58e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1a58ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a58ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a58f0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1a58f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1a58f4: 0x10200068  beqz        $at, . + 4 + (0x68 << 2)
    ctx->pc = 0x1A58F4u;
    {
        const bool branch_taken_0x1a58f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A58F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A58F4u;
            // 0x1a58f8: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a58f4) {
            ctx->pc = 0x1A5A98u;
            goto label_1a5a98;
        }
    }
    ctx->pc = 0x1A58FCu;
    // 0x1a58fc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1a58fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1a5900: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1a5900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1a5904: 0x24632960  addiu       $v1, $v1, 0x2960
    ctx->pc = 0x1a5904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10592));
    // 0x1a5908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a590c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a590cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5910: 0x400008  jr          $v0
    ctx->pc = 0x1A5910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5918u: goto label_1a5918;
            case 0x1A5958u: goto label_1a5958;
            case 0x1A5998u: goto label_1a5998;
            case 0x1A59E8u: goto label_1a59e8;
            case 0x1A5A38u: goto label_1a5a38;
            case 0x1A5A68u: goto label_1a5a68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5918u;
label_1a5918:
    // 0x1a5918: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1a5918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1a591c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1a591cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1a5920: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x1a5920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
    // 0x1a5924: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1a5924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1a5928: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1a5928u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1a592c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1a592cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1a5930: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x1a5930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
    // 0x1a5934: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1a5934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1a5938: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1a5938u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1a593c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a593cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1a5940: 0x3c023fc8  lui         $v0, 0x3FC8
    ctx->pc = 0x1a5940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16328 << 16));
    // 0x1a5944: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1a5944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1a5948: 0x3443f5c3  ori         $v1, $v0, 0xF5C3
    ctx->pc = 0x1a5948u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62915u)));
    // 0x1a594c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a594cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5950: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1A5950u;
    {
        const bool branch_taken_0x1a5950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5950u;
            // 0x1a5954: 0xac430118  sw          $v1, 0x118($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5950) {
            ctx->pc = 0x1A5A98u;
            goto label_1a5a98;
        }
    }
    ctx->pc = 0x1A5958u;
label_1a5958:
    // 0x1a5958: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1a5958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1a595c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1a595cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1a5960: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1a5960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1a5964: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1a5964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1a5968: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1a5968u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1a596c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1a596cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1a5970: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1a5970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1a5974: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1a5974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1a5978: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1a5978u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1a597c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a597cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1a5980: 0x3c02bfc8  lui         $v0, 0xBFC8
    ctx->pc = 0x1a5980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49096 << 16));
    // 0x1a5984: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1a5984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1a5988: 0x3443f5c3  ori         $v1, $v0, 0xF5C3
    ctx->pc = 0x1a5988u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62915u)));
    // 0x1a598c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a598cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5990: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1A5990u;
    {
        const bool branch_taken_0x1a5990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5990u;
            // 0x1a5994: 0xac430118  sw          $v1, 0x118($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5990) {
            ctx->pc = 0x1A5A98u;
            goto label_1a5a98;
        }
    }
    ctx->pc = 0x1A5998u;
label_1a5998:
    // 0x1a5998: 0x3c02bca3  lui         $v0, 0xBCA3
    ctx->pc = 0x1a5998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
    // 0x1a599c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1a599cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1a59a0: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x1a59a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
    // 0x1a59a4: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1a59a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1a59a8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1a59a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1a59ac: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1a59acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1a59b0: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x1a59b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
    // 0x1a59b4: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1a59b4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1a59b8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a59b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1a59bc: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1a59bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x1a59c0: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x1a59c0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1a59c4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a59c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1a59c8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1a59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1a59cc: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1a59ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1a59d0: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x1a59d0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1a59d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a59d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a59d8: 0xac440118  sw          $a0, 0x118($v0)
    ctx->pc = 0x1a59d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 4));
    // 0x1a59dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a59dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a59e0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1A59E0u;
    {
        const bool branch_taken_0x1a59e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A59E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A59E0u;
            // 0x1a59e4: 0xac430114  sw          $v1, 0x114($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a59e0) {
            ctx->pc = 0x1A5A98u;
            goto label_1a5a98;
        }
    }
    ctx->pc = 0x1A59E8u;
label_1a59e8:
    // 0x1a59e8: 0x3c02bca3  lui         $v0, 0xBCA3
    ctx->pc = 0x1a59e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
    // 0x1a59ec: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1a59ecu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1a59f0: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1a59f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1a59f4: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1a59f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1a59f8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1a59f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1a59fc: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1a59fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1a5a00: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1a5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1a5a04: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1a5a04u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1a5a08: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a5a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1a5a0c: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1a5a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x1a5a10: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x1a5a10u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1a5a14: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a5a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1a5a18: 0x3c02bf66  lui         $v0, 0xBF66
    ctx->pc = 0x1a5a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48998 << 16));
    // 0x1a5a1c: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1a5a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1a5a20: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x1a5a20u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1a5a24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5a28: 0xac440118  sw          $a0, 0x118($v0)
    ctx->pc = 0x1a5a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 4));
    // 0x1a5a2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5a30: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1A5A30u;
    {
        const bool branch_taken_0x1a5a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A30u;
            // 0x1a5a34: 0xac430114  sw          $v1, 0x114($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a30) {
            ctx->pc = 0x1A5A98u;
            goto label_1a5a98;
        }
    }
    ctx->pc = 0x1A5A38u;
label_1a5a38:
    // 0x1a5a38: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1a5a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1a5a3c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1a5a3cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1a5a40: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1a5a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1a5a44: 0x3c02bba3  lui         $v0, 0xBBA3
    ctx->pc = 0x1a5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
    // 0x1a5a48: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1a5a48u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1a5a4c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1a5a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1a5a50: 0x3c02ba83  lui         $v0, 0xBA83
    ctx->pc = 0x1a5a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47747 << 16));
    // 0x1a5a54: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1a5a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x1a5a58: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1a5a58u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1a5a5c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a5a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1a5a60: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A5A60u;
    {
        const bool branch_taken_0x1a5a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A60u;
            // 0x1a5a64: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a60) {
            ctx->pc = 0x1A5A98u;
            goto label_1a5a98;
        }
    }
    ctx->pc = 0x1A5A68u;
label_1a5a68:
    // 0x1a5a68: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1a5a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1a5a6c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1a5a6cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1a5a70: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1a5a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1a5a74: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1a5a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x1a5a78: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1a5a78u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1a5a7c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1a5a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1a5a80: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1a5a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x1a5a84: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1a5a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x1a5a88: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1a5a88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1a5a8c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a5a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1a5a90: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1a5a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x1a5a94: 0x0  nop
    ctx->pc = 0x1a5a94u;
    // NOP
label_1a5a98:
    // 0x1a5a98: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1A5A98u;
    SET_GPR_U32(ctx, 31, 0x1A5AA0u);
    ctx->pc = 0x1A5A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A98u;
            // 0x1a5a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5AA0u; }
        if (ctx->pc != 0x1A5AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5AA0u; }
        if (ctx->pc != 0x1A5AA0u) { return; }
    }
    ctx->pc = 0x1A5AA0u;
    // 0x1a5aa0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a5aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a5aa4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a5aa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5aa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a5aa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5aac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a5aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5ab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5AB4u;
            // 0x1a5ab8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5918u: goto label_1a5918;
            case 0x1A5958u: goto label_1a5958;
            case 0x1A5998u: goto label_1a5998;
            case 0x1A59E8u: goto label_1a59e8;
            case 0x1A5A38u: goto label_1a5a38;
            case 0x1A5A68u: goto label_1a5a68;
            case 0x1A5A98u: goto label_1a5a98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5ABCu;
}
