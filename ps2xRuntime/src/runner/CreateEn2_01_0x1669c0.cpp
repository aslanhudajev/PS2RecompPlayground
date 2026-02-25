#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn2_01
// Address: 0x1669c0 - 0x166ccc
void CreateEn2_01_0x1669c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn2_01_0x1669c0");
#endif

    ctx->pc = 0x1669c0u;

    // 0x1669c0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1669c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1669c4: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x1669c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x1669c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1669c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1669cc: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x1669ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x1669d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1669d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1669d4: 0x24636d00  addiu       $v1, $v1, 0x6D00
    ctx->pc = 0x1669d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27904));
    // 0x1669d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1669d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1669dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1669dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1669e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1669e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1669e4: 0x24426f80  addiu       $v0, $v0, 0x6F80
    ctx->pc = 0x1669e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28544));
    // 0x1669e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1669e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1669ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1669ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1669f0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1669f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1669f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1669f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1669f8: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1669f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1669fc: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x1669fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x166a00: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x166a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x166a04: 0x24637920  addiu       $v1, $v1, 0x7920
    ctx->pc = 0x166a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31008));
    // 0x166a08: 0x24426cd0  addiu       $v0, $v0, 0x6CD0
    ctx->pc = 0x166a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27856));
    // 0x166a0c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x166a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x166a10: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x166a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x166a14: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x166a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x166a18: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x166a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x166a1c: 0xc060694  jal         func_181A50
    ctx->pc = 0x166A1Cu;
    SET_GPR_U32(ctx, 31, 0x166A24u);
    ctx->pc = 0x166A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166A1Cu;
            // 0x166a20: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166A24u; }
        if (ctx->pc != 0x166A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166A24u; }
        if (ctx->pc != 0x166A24u) { return; }
    }
    ctx->pc = 0x166A24u;
    // 0x166a24: 0xc060544  jal         func_181510
    ctx->pc = 0x166A24u;
    SET_GPR_U32(ctx, 31, 0x166A2Cu);
    ctx->pc = 0x166A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166A24u;
            // 0x166a28: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166A2Cu; }
        if (ctx->pc != 0x166A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166A2Cu; }
        if (ctx->pc != 0x166A2Cu) { return; }
    }
    ctx->pc = 0x166A2Cu;
    // 0x166a2c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x166a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x166a30: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x166a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x166a34: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x166a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166a38: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x166a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x166a3c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x166a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x166a40: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x166a40u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x166a44: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x166a44u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166a48: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x166a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x166a4c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x166a4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x166a50: 0x2e61000a  sltiu       $at, $s3, 0xA
    ctx->pc = 0x166a50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x166a54: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x166a54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x166a58: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x166a58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x166a5c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x166a5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x166a60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x166a60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x166a64: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x166a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x166a68: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x166a68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x166a6c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x166a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x166a70: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x166a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x166a74: 0x1020008c  beqz        $at, . + 4 + (0x8C << 2)
    ctx->pc = 0x166A74u;
    {
        const bool branch_taken_0x166a74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166A74u;
            // 0x166a78: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a74) {
            ctx->pc = 0x166CA8u;
            goto label_166ca8;
        }
    }
    ctx->pc = 0x166A7Cu;
    // 0x166a7c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x166a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x166a80: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x166a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x166a84: 0x24631070  addiu       $v1, $v1, 0x1070
    ctx->pc = 0x166a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4208));
    // 0x166a88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x166a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x166a8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x166a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166a90: 0x400008  jr          $v0
    ctx->pc = 0x166A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166A98u: goto label_166a98;
            case 0x166AD0u: goto label_166ad0;
            case 0x166B00u: goto label_166b00;
            case 0x166B58u: goto label_166b58;
            case 0x166BB0u: goto label_166bb0;
            case 0x166BF0u: goto label_166bf0;
            case 0x166C50u: goto label_166c50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166A98u;
label_166a98:
    // 0x166a98: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x166a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x166a9c: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x166a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x166aa0: 0x3c02be99  lui         $v0, 0xBE99
    ctx->pc = 0x166aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48793 << 16));
    // 0x166aa4: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x166aa4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x166aa8: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x166aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x166aac: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x166aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x166ab0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x166ab0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x166ab4: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x166ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x166ab8: 0x3c02bba3  lui         $v0, 0xBBA3
    ctx->pc = 0x166ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
    // 0x166abc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x166abcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x166ac0: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x166ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x166ac4: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x166AC4u;
    {
        const bool branch_taken_0x166ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166AC4u;
            // 0x166ac8: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ac4) {
            ctx->pc = 0x166CA8u;
            goto label_166ca8;
        }
    }
    ctx->pc = 0x166ACCu;
    // 0x166acc: 0x0  nop
    ctx->pc = 0x166accu;
    // NOP
label_166ad0:
    // 0x166ad0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x166ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x166ad4: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x166ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x166ad8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x166ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x166adc: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x166adcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x166ae0: 0x3c02bba3  lui         $v0, 0xBBA3
    ctx->pc = 0x166ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
    // 0x166ae4: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x166ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x166ae8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x166ae8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x166aec: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x166aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x166af0: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x166af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x166af4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x166AF4u;
    {
        const bool branch_taken_0x166af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166AF4u;
            // 0x166af8: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166af4) {
            ctx->pc = 0x166CA8u;
            goto label_166ca8;
        }
    }
    ctx->pc = 0x166AFCu;
    // 0x166afc: 0x0  nop
    ctx->pc = 0x166afcu;
    // NOP
label_166b00:
    // 0x166b00: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x166b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x166b04: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x166b04u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x166b08: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x166b08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x166b0c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x166b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x166b10: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x166b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x166b14: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x166b14u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x166b18: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x166b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x166b1c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x166b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x166b20: 0x3c02bfd5  lui         $v0, 0xBFD5
    ctx->pc = 0x166b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49109 << 16));
    // 0x166b24: 0x3446c28f  ori         $a2, $v0, 0xC28F
    ctx->pc = 0x166b24u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x166b28: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x166b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x166b2c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x166b2cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x166b30: 0x3c02bd4c  lui         $v0, 0xBD4C
    ctx->pc = 0x166b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
    // 0x166b34: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x166b34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x166b38: 0xac860118  sw          $a2, 0x118($a0)
    ctx->pc = 0x166b38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 6));
    // 0x166b3c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x166b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x166b40: 0xac850114  sw          $a1, 0x114($a0)
    ctx->pc = 0x166b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 5));
    // 0x166b44: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x166b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x166b48: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x166b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x166b4c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x166B4Cu;
    {
        const bool branch_taken_0x166b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166B4Cu;
            // 0x166b50: 0xae0200e4  sw          $v0, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b4c) {
            ctx->pc = 0x166CA8u;
            goto label_166ca8;
        }
    }
    ctx->pc = 0x166B54u;
    // 0x166b54: 0x0  nop
    ctx->pc = 0x166b54u;
    // NOP
label_166b58:
    // 0x166b58: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x166b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x166b5c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x166b5cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x166b60: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x166b60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
    // 0x166b64: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x166b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x166b68: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x166b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x166b6c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x166b6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x166b70: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x166b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x166b74: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x166b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x166b78: 0x3c023fd5  lui         $v0, 0x3FD5
    ctx->pc = 0x166b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16341 << 16));
    // 0x166b7c: 0x3446c28f  ori         $a2, $v0, 0xC28F
    ctx->pc = 0x166b7cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x166b80: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x166b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
    // 0x166b84: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x166b84u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x166b88: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x166b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x166b8c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x166b8cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x166b90: 0xac860118  sw          $a2, 0x118($a0)
    ctx->pc = 0x166b90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 6));
    // 0x166b94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x166b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x166b98: 0xac850114  sw          $a1, 0x114($a0)
    ctx->pc = 0x166b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 5));
    // 0x166b9c: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x166b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x166ba0: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x166ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x166ba4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x166BA4u;
    {
        const bool branch_taken_0x166ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166BA4u;
            // 0x166ba8: 0xae0200e4  sw          $v0, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ba4) {
            ctx->pc = 0x166CA8u;
            goto label_166ca8;
        }
    }
    ctx->pc = 0x166BACu;
    // 0x166bac: 0x0  nop
    ctx->pc = 0x166bacu;
    // NOP
label_166bb0:
    // 0x166bb0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x166bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x166bb4: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x166bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x166bb8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x166bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x166bbc: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x166bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x166bc0: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x166bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x166bc4: 0x3c02c016  lui         $v0, 0xC016
    ctx->pc = 0x166bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49174 << 16));
    // 0x166bc8: 0x3444b852  ori         $a0, $v0, 0xB852
    ctx->pc = 0x166bc8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)47186u)));
    // 0x166bcc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x166bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x166bd0: 0xac440118  sw          $a0, 0x118($v0)
    ctx->pc = 0x166bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 4));
    // 0x166bd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x166bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x166bd8: 0xac430128  sw          $v1, 0x128($v0)
    ctx->pc = 0x166bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 3));
    // 0x166bdc: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x166bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x166be0: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x166be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x166be4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x166BE4u;
    {
        const bool branch_taken_0x166be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166BE4u;
            // 0x166be8: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166be4) {
            ctx->pc = 0x166CA8u;
            goto label_166ca8;
        }
    }
    ctx->pc = 0x166BECu;
    // 0x166bec: 0x0  nop
    ctx->pc = 0x166becu;
    // NOP
label_166bf0:
    // 0x166bf0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x166BF0u;
    SET_GPR_U32(ctx, 31, 0x166BF8u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166BF8u; }
        if (ctx->pc != 0x166BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166BF8u; }
        if (ctx->pc != 0x166BF8u) { return; }
    }
    ctx->pc = 0x166BF8u;
    // 0x166bf8: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x166BF8u;
    SET_GPR_U32(ctx, 31, 0x166C00u);
    ctx->pc = 0x166BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166BF8u;
            // 0x166bfc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C00u; }
        if (ctx->pc != 0x166C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C00u; }
        if (ctx->pc != 0x166C00u) { return; }
    }
    ctx->pc = 0x166C00u;
    // 0x166c00: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x166c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x166c04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166c08: 0xc040880  jal         func_102200
    ctx->pc = 0x166C08u;
    SET_GPR_U32(ctx, 31, 0x166C10u);
    ctx->pc = 0x166C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166C08u;
            // 0x166c0c: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C10u; }
        if (ctx->pc != 0x166C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C10u; }
        if (ctx->pc != 0x166C10u) { return; }
    }
    ctx->pc = 0x166C10u;
    // 0x166c10: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x166C10u;
    SET_GPR_U32(ctx, 31, 0x166C18u);
    ctx->pc = 0x166C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166C10u;
            // 0x166c14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C18u; }
        if (ctx->pc != 0x166C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C18u; }
        if (ctx->pc != 0x166C18u) { return; }
    }
    ctx->pc = 0x166C18u;
    // 0x166c18: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x166C18u;
    SET_GPR_U32(ctx, 31, 0x166C20u);
    ctx->pc = 0x166C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166C18u;
            // 0x166c1c: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C20u; }
        if (ctx->pc != 0x166C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C20u; }
        if (ctx->pc != 0x166C20u) { return; }
    }
    ctx->pc = 0x166C20u;
    // 0x166c20: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x166c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x166c24: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x166c24u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x166c28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x166c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x166c2c: 0x0  nop
    ctx->pc = 0x166c2cu;
    // NOP
    // 0x166c30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x166c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x166c34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x166c34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x166c38: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x166c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x166c3c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x166c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x166c40: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x166c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x166c44: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x166C44u;
    {
        const bool branch_taken_0x166c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166C44u;
            // 0x166c48: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c44) {
            ctx->pc = 0x166CA8u;
            goto label_166ca8;
        }
    }
    ctx->pc = 0x166C4Cu;
    // 0x166c4c: 0x0  nop
    ctx->pc = 0x166c4cu;
    // NOP
label_166c50:
    // 0x166c50: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x166C50u;
    SET_GPR_U32(ctx, 31, 0x166C58u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C58u; }
        if (ctx->pc != 0x166C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C58u; }
        if (ctx->pc != 0x166C58u) { return; }
    }
    ctx->pc = 0x166C58u;
    // 0x166c58: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x166C58u;
    SET_GPR_U32(ctx, 31, 0x166C60u);
    ctx->pc = 0x166C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166C58u;
            // 0x166c5c: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C60u; }
        if (ctx->pc != 0x166C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C60u; }
        if (ctx->pc != 0x166C60u) { return; }
    }
    ctx->pc = 0x166C60u;
    // 0x166c60: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x166c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x166c64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166c68: 0xc040880  jal         func_102200
    ctx->pc = 0x166C68u;
    SET_GPR_U32(ctx, 31, 0x166C70u);
    ctx->pc = 0x166C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166C68u;
            // 0x166c6c: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C70u; }
        if (ctx->pc != 0x166C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C70u; }
        if (ctx->pc != 0x166C70u) { return; }
    }
    ctx->pc = 0x166C70u;
    // 0x166c70: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x166C70u;
    SET_GPR_U32(ctx, 31, 0x166C78u);
    ctx->pc = 0x166C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166C70u;
            // 0x166c74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C78u; }
        if (ctx->pc != 0x166C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C78u; }
        if (ctx->pc != 0x166C78u) { return; }
    }
    ctx->pc = 0x166C78u;
    // 0x166c78: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x166C78u;
    SET_GPR_U32(ctx, 31, 0x166C80u);
    ctx->pc = 0x166C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166C78u;
            // 0x166c7c: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C80u; }
        if (ctx->pc != 0x166C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C80u; }
        if (ctx->pc != 0x166C80u) { return; }
    }
    ctx->pc = 0x166C80u;
    // 0x166c80: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x166c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x166c84: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x166c84u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x166c88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x166c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x166c8c: 0x0  nop
    ctx->pc = 0x166c8cu;
    // NOP
    // 0x166c90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x166c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x166c94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x166c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x166c98: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x166c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x166c9c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x166c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x166ca0: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x166ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x166ca4: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x166ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_166ca8:
    // 0x166ca8: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x166CA8u;
    SET_GPR_U32(ctx, 31, 0x166CB0u);
    ctx->pc = 0x166CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166CA8u;
            // 0x166cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166CB0u; }
        if (ctx->pc != 0x166CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166CB0u; }
        if (ctx->pc != 0x166CB0u) { return; }
    }
    ctx->pc = 0x166CB0u;
    // 0x166cb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x166cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166cb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x166cb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166cb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x166cb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166cbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166cbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166cc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x166CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166CC4u;
            // 0x166cc8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166A98u: goto label_166a98;
            case 0x166AD0u: goto label_166ad0;
            case 0x166B00u: goto label_166b00;
            case 0x166B58u: goto label_166b58;
            case 0x166BB0u: goto label_166bb0;
            case 0x166BF0u: goto label_166bf0;
            case 0x166C50u: goto label_166c50;
            case 0x166CA8u: goto label_166ca8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166CCCu;
}
