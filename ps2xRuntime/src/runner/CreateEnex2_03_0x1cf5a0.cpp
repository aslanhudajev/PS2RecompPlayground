#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEnex2_03
// Address: 0x1cf5a0 - 0x1cf7f4
void CreateEnex2_03_0x1cf5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEnex2_03_0x1cf5a0");
#endif

    ctx->pc = 0x1cf5a0u;

    // 0x1cf5a0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1cf5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1cf5a4: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1cf5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1cf5a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cf5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cf5ac: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1cf5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1cf5b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cf5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cf5b4: 0x2463f830  addiu       $v1, $v1, -0x7D0
    ctx->pc = 0x1cf5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965296));
    // 0x1cf5b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cf5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cf5bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cf5bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf5c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cf5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cf5c4: 0x2442fa70  addiu       $v0, $v0, -0x590
    ctx->pc = 0x1cf5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965872));
    // 0x1cf5c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cf5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cf5cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cf5ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf5d0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1cf5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1cf5d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cf5d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf5d8: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1cf5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1cf5dc: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1cf5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1cf5e0: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1cf5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1cf5e4: 0x24630d20  addiu       $v1, $v1, 0xD20
    ctx->pc = 0x1cf5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3360));
    // 0x1cf5e8: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x1cf5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x1cf5ec: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1cf5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1cf5f0: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x1cf5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1cf5f4: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1cf5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1cf5f8: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1cf5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1cf5fc: 0xc060694  jal         func_181A50
    ctx->pc = 0x1CF5FCu;
    SET_GPR_U32(ctx, 31, 0x1CF604u);
    ctx->pc = 0x1CF600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF5FCu;
            // 0x1cf600: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF604u; }
        if (ctx->pc != 0x1CF604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF604u; }
        if (ctx->pc != 0x1CF604u) { return; }
    }
    ctx->pc = 0x1CF604u;
    // 0x1cf604: 0xc060544  jal         func_181510
    ctx->pc = 0x1CF604u;
    SET_GPR_U32(ctx, 31, 0x1CF60Cu);
    ctx->pc = 0x1CF608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF604u;
            // 0x1cf608: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF60Cu; }
        if (ctx->pc != 0x1CF60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF60Cu; }
        if (ctx->pc != 0x1CF60Cu) { return; }
    }
    ctx->pc = 0x1CF60Cu;
    // 0x1cf60c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1cf60cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1cf610: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1cf610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1cf614: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1cf614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf618: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1cf618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1cf61c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1cf61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cf620: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1cf620u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf624: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1cf624u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf628: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1cf628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cf62c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cf62cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cf630: 0x2e610007  sltiu       $at, $s3, 0x7
    ctx->pc = 0x1cf630u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1cf634: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1cf634u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1cf638: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cf638u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1cf63c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1cf63cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1cf640: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cf640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cf644: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1cf644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x1cf648: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1cf648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1cf64c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1cf64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cf650: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1cf650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1cf654: 0x10200058  beqz        $at, . + 4 + (0x58 << 2)
    ctx->pc = 0x1CF654u;
    {
        const bool branch_taken_0x1cf654 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF654u;
            // 0x1cf658: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf654) {
            ctx->pc = 0x1CF7B8u;
            goto label_1cf7b8;
        }
    }
    ctx->pc = 0x1CF65Cu;
    // 0x1cf65c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1cf65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1cf660: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1cf660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1cf664: 0x24632c90  addiu       $v1, $v1, 0x2C90
    ctx->pc = 0x1cf664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11408));
    // 0x1cf668: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cf668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cf66c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cf66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf670: 0x400008  jr          $v0
    ctx->pc = 0x1CF670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CF678u: goto label_1cf678;
            case 0x1CF6A0u: goto label_1cf6a0;
            case 0x1CF6D0u: goto label_1cf6d0;
            case 0x1CF6F8u: goto label_1cf6f8;
            case 0x1CF720u: goto label_1cf720;
            case 0x1CF748u: goto label_1cf748;
            case 0x1CF780u: goto label_1cf780;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CF678u;
label_1cf678:
    // 0x1cf678: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1cf678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1cf67c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cf67cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cf680: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1cf680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1cf684: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1cf684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1cf688: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1cf688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1cf68c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1cf68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1cf690: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1cf690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1cf694: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1CF694u;
    {
        const bool branch_taken_0x1cf694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF694u;
            // 0x1cf698: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf694) {
            ctx->pc = 0x1CF7B8u;
            goto label_1cf7b8;
        }
    }
    ctx->pc = 0x1CF69Cu;
    // 0x1cf69c: 0x0  nop
    ctx->pc = 0x1cf69cu;
    // NOP
label_1cf6a0:
    // 0x1cf6a0: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1cf6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1cf6a4: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x1cf6a4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1cf6a8: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x1cf6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x1cf6ac: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1cf6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1cf6b0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1cf6b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1cf6b4: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1cf6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1cf6b8: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1cf6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1cf6bc: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1cf6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1cf6c0: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1cf6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1cf6c4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1CF6C4u;
    {
        const bool branch_taken_0x1cf6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF6C4u;
            // 0x1cf6c8: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6c4) {
            ctx->pc = 0x1CF7B8u;
            goto label_1cf7b8;
        }
    }
    ctx->pc = 0x1CF6CCu;
    // 0x1cf6cc: 0x0  nop
    ctx->pc = 0x1cf6ccu;
    // NOP
label_1cf6d0:
    // 0x1cf6d0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1cf6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1cf6d4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1cf6d4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cf6d8: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1cf6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x1cf6dc: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1cf6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1cf6e0: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1cf6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1cf6e4: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1cf6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1cf6e8: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1cf6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1cf6ec: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1cf6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1cf6f0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1CF6F0u;
    {
        const bool branch_taken_0x1cf6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF6F0u;
            // 0x1cf6f4: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6f0) {
            ctx->pc = 0x1CF7B8u;
            goto label_1cf7b8;
        }
    }
    ctx->pc = 0x1CF6F8u;
label_1cf6f8:
    // 0x1cf6f8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1cf6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1cf6fc: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1cf6fcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cf700: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1cf700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1cf704: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1cf704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1cf708: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1cf708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1cf70c: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1cf70cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1cf710: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1cf710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1cf714: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1cf714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1cf718: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1CF718u;
    {
        const bool branch_taken_0x1cf718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF718u;
            // 0x1cf71c: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf718) {
            ctx->pc = 0x1CF7B8u;
            goto label_1cf7b8;
        }
    }
    ctx->pc = 0x1CF720u;
label_1cf720:
    // 0x1cf720: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1cf720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1cf724: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cf724u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cf728: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1cf728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1cf72c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1cf72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1cf730: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1cf730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1cf734: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1cf734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1cf738: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1cf738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1cf73c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1CF73Cu;
    {
        const bool branch_taken_0x1cf73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF73Cu;
            // 0x1cf740: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf73c) {
            ctx->pc = 0x1CF7B8u;
            goto label_1cf7b8;
        }
    }
    ctx->pc = 0x1CF744u;
    // 0x1cf744: 0x0  nop
    ctx->pc = 0x1cf744u;
    // NOP
label_1cf748:
    // 0x1cf748: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1cf748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x1cf74c: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1cf74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1cf750: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1cf750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1cf754: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1cf754u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1cf758: 0x3c02bd4c  lui         $v0, 0xBD4C
    ctx->pc = 0x1cf758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
    // 0x1cf75c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1cf75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1cf760: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cf760u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cf764: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x1cf764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x1cf768: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1cf768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1cf76c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1cf76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1cf770: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1cf770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1cf774: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cf774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cf778: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1CF778u;
    {
        const bool branch_taken_0x1cf778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF778u;
            // 0x1cf77c: 0xac400118  sw          $zero, 0x118($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf778) {
            ctx->pc = 0x1CF7B8u;
            goto label_1cf7b8;
        }
    }
    ctx->pc = 0x1CF780u;
label_1cf780:
    // 0x1cf780: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1cf780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x1cf784: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1cf784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1cf788: 0x3c02be99  lui         $v0, 0xBE99
    ctx->pc = 0x1cf788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48793 << 16));
    // 0x1cf78c: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1cf78cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1cf790: 0x3c02bd4c  lui         $v0, 0xBD4C
    ctx->pc = 0x1cf790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
    // 0x1cf794: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1cf794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1cf798: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cf798u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1cf79c: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x1cf79cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x1cf7a0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1cf7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1cf7a4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1cf7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1cf7a8: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1cf7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1cf7ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cf7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cf7b0: 0xac400118  sw          $zero, 0x118($v0)
    ctx->pc = 0x1cf7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 0));
    // 0x1cf7b4: 0x0  nop
    ctx->pc = 0x1cf7b4u;
    // NOP
label_1cf7b8:
    // 0x1cf7b8: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1CF7B8u;
    SET_GPR_U32(ctx, 31, 0x1CF7C0u);
    ctx->pc = 0x1CF7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF7B8u;
            // 0x1cf7bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF7C0u; }
        if (ctx->pc != 0x1CF7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF7C0u; }
        if (ctx->pc != 0x1CF7C0u) { return; }
    }
    ctx->pc = 0x1CF7C0u;
    // 0x1cf7c0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1cf7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1cf7c4: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x1cf7c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cf7c8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF7C8u;
    {
        const bool branch_taken_0x1cf7c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF7C8u;
            // 0x1cf7cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf7c8) {
            ctx->pc = 0x1CF7D8u;
            goto label_1cf7d8;
        }
    }
    ctx->pc = 0x1CF7D0u;
    // 0x1cf7d0: 0xc073e9c  jal         func_1CFA70
    ctx->pc = 0x1CF7D0u;
    SET_GPR_U32(ctx, 31, 0x1CF7D8u);
    ctx->pc = 0x1CFA70u;
    if (runtime->hasFunction(0x1CFA70u)) {
        auto targetFn = runtime->lookupFunction(0x1CFA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF7D8u; }
        if (ctx->pc != 0x1CF7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enex2_03Move_0x1cfa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF7D8u; }
        if (ctx->pc != 0x1CF7D8u) { return; }
    }
    ctx->pc = 0x1CF7D8u;
label_1cf7d8:
    // 0x1cf7d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cf7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cf7dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cf7dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf7e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cf7e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf7e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cf7e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf7e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cf7e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF7ECu;
            // 0x1cf7f0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CF678u: goto label_1cf678;
            case 0x1CF6A0u: goto label_1cf6a0;
            case 0x1CF6D0u: goto label_1cf6d0;
            case 0x1CF6F8u: goto label_1cf6f8;
            case 0x1CF720u: goto label_1cf720;
            case 0x1CF748u: goto label_1cf748;
            case 0x1CF780u: goto label_1cf780;
            case 0x1CF7B8u: goto label_1cf7b8;
            case 0x1CF7D8u: goto label_1cf7d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CF7F4u;
}
