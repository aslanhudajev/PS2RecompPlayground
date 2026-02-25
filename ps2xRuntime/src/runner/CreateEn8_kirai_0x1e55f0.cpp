#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn8_kirai
// Address: 0x1e55f0 - 0x1e583c
void CreateEn8_kirai_0x1e55f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn8_kirai_0x1e55f0");
#endif

    ctx->pc = 0x1e55f0u;

    // 0x1e55f0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1e55f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1e55f4: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e55f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1e55f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e55f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e55fc: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e55fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1e5600: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e5600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e5604: 0x24635870  addiu       $v1, $v1, 0x5870
    ctx->pc = 0x1e5604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22640));
    // 0x1e5608: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e5608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e560c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e560cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5610: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e5614: 0x24425a90  addiu       $v0, $v0, 0x5A90
    ctx->pc = 0x1e5614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23184));
    // 0x1e5618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e561c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e561cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5620: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1e5620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1e5624: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e5624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5628: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1e5628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1e562c: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e562cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1e5630: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e5630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1e5634: 0x246360f0  addiu       $v1, $v1, 0x60F0
    ctx->pc = 0x1e5634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24816));
    // 0x1e5638: 0x24425840  addiu       $v0, $v0, 0x5840
    ctx->pc = 0x1e5638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22592));
    // 0x1e563c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1e563cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1e5640: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x1e5640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1e5644: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1e5644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1e5648: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1e5648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1e564c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1E564Cu;
    SET_GPR_U32(ctx, 31, 0x1E5654u);
    ctx->pc = 0x1E5650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E564Cu;
            // 0x1e5650: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5654u; }
        if (ctx->pc != 0x1E5654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5654u; }
        if (ctx->pc != 0x1E5654u) { return; }
    }
    ctx->pc = 0x1E5654u;
    // 0x1e5654: 0xc060544  jal         func_181510
    ctx->pc = 0x1E5654u;
    SET_GPR_U32(ctx, 31, 0x1E565Cu);
    ctx->pc = 0x1E5658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5654u;
            // 0x1e5658: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E565Cu; }
        if (ctx->pc != 0x1E565Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E565Cu; }
        if (ctx->pc != 0x1E565Cu) { return; }
    }
    ctx->pc = 0x1E565Cu;
    // 0x1e565c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e565cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1e5660: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1e5660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1e5664: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1e5664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e5668: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1e5668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1e566c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e566cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e5670: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1e5670u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5674: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1e5674u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5678: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e5678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e567c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e567cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e5680: 0x2e610007  sltiu       $at, $s3, 0x7
    ctx->pc = 0x1e5680u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1e5684: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1e5684u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e5688: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e5688u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1e568c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1e568cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e5690: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e5690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e5694: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1e5694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x1e5698: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1e5698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1e569c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e569cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e56a0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1e56a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1e56a4: 0x1020005a  beqz        $at, . + 4 + (0x5A << 2)
    ctx->pc = 0x1E56A4u;
    {
        const bool branch_taken_0x1e56a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E56A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E56A4u;
            // 0x1e56a8: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e56a4) {
            ctx->pc = 0x1E5810u;
            goto label_1e5810;
        }
    }
    ctx->pc = 0x1E56ACu;
    // 0x1e56ac: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1e56acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1e56b0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1e56b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1e56b4: 0x24632f00  addiu       $v1, $v1, 0x2F00
    ctx->pc = 0x1e56b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12032));
    // 0x1e56b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e56bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e56bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e56c0: 0x400008  jr          $v0
    ctx->pc = 0x1E56C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E56C8u: goto label_1e56c8;
            case 0x1E56F0u: goto label_1e56f0;
            case 0x1E5720u: goto label_1e5720;
            case 0x1E5750u: goto label_1e5750;
            case 0x1E5780u: goto label_1e5780;
            case 0x1E57B0u: goto label_1e57b0;
            case 0x1E57E0u: goto label_1e57e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E56C8u;
label_1e56c8:
    // 0x1e56c8: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1e56c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1e56cc: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1e56ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1e56d0: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1e56d0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)13107u)));
    // 0x1e56d4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1e56d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1e56d8: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1e56d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1e56dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e56dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e56e0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1e56e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1e56e4: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1e56e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1e56e8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1E56E8u;
    {
        const bool branch_taken_0x1e56e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E56ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E56E8u;
            // 0x1e56ec: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e56e8) {
            ctx->pc = 0x1E5810u;
            goto label_1e5810;
        }
    }
    ctx->pc = 0x1E56F0u;
label_1e56f0:
    // 0x1e56f0: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1e56f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1e56f4: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1e56f4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1e56f8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1e56f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1e56fc: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1e56fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1e5700: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e5700u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1e5704: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1e5704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1e5708: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1e5708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1e570c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1e570cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1e5710: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e5710u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e5714: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1e5714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1e5718: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1E5718u;
    {
        const bool branch_taken_0x1e5718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E571Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5718u;
            // 0x1e571c: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5718) {
            ctx->pc = 0x1E5810u;
            goto label_1e5810;
        }
    }
    ctx->pc = 0x1E5720u;
label_1e5720:
    // 0x1e5720: 0x3c02be99  lui         $v0, 0xBE99
    ctx->pc = 0x1e5720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48793 << 16));
    // 0x1e5724: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1e5724u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1e5728: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1e5728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1e572c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1e572cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1e5730: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e5730u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1e5734: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1e5734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1e5738: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1e5738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1e573c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1e573cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1e5740: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e5740u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e5744: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1e5744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1e5748: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1E5748u;
    {
        const bool branch_taken_0x1e5748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E574Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5748u;
            // 0x1e574c: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5748) {
            ctx->pc = 0x1E5810u;
            goto label_1e5810;
        }
    }
    ctx->pc = 0x1E5750u;
label_1e5750:
    // 0x1e5750: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1e5750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1e5754: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e5754u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1e5758: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1e5758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1e575c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1e575cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1e5760: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1e5760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1e5764: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1e5764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1e5768: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e5768u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e576c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1e576cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1e5770: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1e5770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1e5774: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1E5774u;
    {
        const bool branch_taken_0x1e5774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5774u;
            // 0x1e5778: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5774) {
            ctx->pc = 0x1E5810u;
            goto label_1e5810;
        }
    }
    ctx->pc = 0x1E577Cu;
    // 0x1e577c: 0x0  nop
    ctx->pc = 0x1e577cu;
    // NOP
label_1e5780:
    // 0x1e5780: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x1e5780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x1e5784: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e5784u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1e5788: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1e5788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1e578c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1e578cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1e5790: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1e5790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1e5794: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1e5794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1e5798: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e5798u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e579c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1e579cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1e57a0: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1e57a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1e57a4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1E57A4u;
    {
        const bool branch_taken_0x1e57a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E57A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E57A4u;
            // 0x1e57a8: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e57a4) {
            ctx->pc = 0x1E5810u;
            goto label_1e5810;
        }
    }
    ctx->pc = 0x1E57ACu;
    // 0x1e57ac: 0x0  nop
    ctx->pc = 0x1e57acu;
    // NOP
label_1e57b0:
    // 0x1e57b0: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1e57b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1e57b4: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x1e57b4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1e57b8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1e57b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1e57bc: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1e57bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1e57c0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e57c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e57c4: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1e57c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1e57c8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1e57c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1e57cc: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1e57ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1e57d0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e57d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e57d4: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1e57d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1e57d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E57D8u;
    {
        const bool branch_taken_0x1e57d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E57DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E57D8u;
            // 0x1e57dc: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e57d8) {
            ctx->pc = 0x1E5810u;
            goto label_1e5810;
        }
    }
    ctx->pc = 0x1E57E0u;
label_1e57e0:
    // 0x1e57e0: 0x3c02bf66  lui         $v0, 0xBF66
    ctx->pc = 0x1e57e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48998 << 16));
    // 0x1e57e4: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x1e57e4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1e57e8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1e57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1e57ec: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1e57ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1e57f0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e57f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e57f4: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1e57f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1e57f8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1e57f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1e57fc: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1e57fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1e5800: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e5800u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e5804: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1e5804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1e5808: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1e5808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1e580c: 0x0  nop
    ctx->pc = 0x1e580cu;
    // NOP
label_1e5810:
    // 0x1e5810: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1E5810u;
    SET_GPR_U32(ctx, 31, 0x1E5818u);
    ctx->pc = 0x1E5814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5810u;
            // 0x1e5814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5818u; }
        if (ctx->pc != 0x1E5818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5818u; }
        if (ctx->pc != 0x1E5818u) { return; }
    }
    ctx->pc = 0x1E5818u;
    // 0x1e5818: 0xc0796a4  jal         func_1E5A90
    ctx->pc = 0x1E5818u;
    SET_GPR_U32(ctx, 31, 0x1E5820u);
    ctx->pc = 0x1E581Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5818u;
            // 0x1e581c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5A90u;
    if (runtime->hasFunction(0x1E5A90u)) {
        auto targetFn = runtime->lookupFunction(0x1E5A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5820u; }
        if (ctx->pc != 0x1E5820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        En8_kiraiMove_0x1e5a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5820u; }
        if (ctx->pc != 0x1E5820u) { return; }
    }
    ctx->pc = 0x1E5820u;
    // 0x1e5820: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e5820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e5824: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e5824u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5828: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e5828u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e582c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e582cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5830: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5834: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5834u;
            // 0x1e5838: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E56C8u: goto label_1e56c8;
            case 0x1E56F0u: goto label_1e56f0;
            case 0x1E5720u: goto label_1e5720;
            case 0x1E5750u: goto label_1e5750;
            case 0x1E5780u: goto label_1e5780;
            case 0x1E57B0u: goto label_1e57b0;
            case 0x1E57E0u: goto label_1e57e0;
            case 0x1E5810u: goto label_1e5810;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E583Cu;
}
