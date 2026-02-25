#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEnex2_04
// Address: 0x1d3c10 - 0x1d3fc4
void CreateEnex2_04_0x1d3c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEnex2_04_0x1d3c10");
#endif

    ctx->pc = 0x1d3c10u;

    // 0x1d3c10: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1d3c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1d3c14: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d3c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d3c18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d3c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d3c1c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d3c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d3c20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d3c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d3c24: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x1d3c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x1d3c28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d3c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d3c2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d3c2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d3c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d3c34: 0x24424240  addiu       $v0, $v0, 0x4240
    ctx->pc = 0x1d3c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16960));
    // 0x1d3c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d3c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d3c3c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d3c3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c40: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1d3c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1d3c44: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d3c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c48: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1d3c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1d3c4c: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d3c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d3c50: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d3c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d3c54: 0x24635710  addiu       $v1, $v1, 0x5710
    ctx->pc = 0x1d3c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22288));
    // 0x1d3c58: 0x24423fd0  addiu       $v0, $v0, 0x3FD0
    ctx->pc = 0x1d3c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16336));
    // 0x1d3c5c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1d3c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1d3c60: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x1d3c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1d3c64: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1d3c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1d3c68: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1d3c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1d3c6c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1D3C6Cu;
    SET_GPR_U32(ctx, 31, 0x1D3C74u);
    ctx->pc = 0x1D3C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C6Cu;
            // 0x1d3c70: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3C74u; }
        if (ctx->pc != 0x1D3C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3C74u; }
        if (ctx->pc != 0x1D3C74u) { return; }
    }
    ctx->pc = 0x1D3C74u;
    // 0x1d3c74: 0xc060544  jal         func_181510
    ctx->pc = 0x1D3C74u;
    SET_GPR_U32(ctx, 31, 0x1D3C7Cu);
    ctx->pc = 0x1D3C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C74u;
            // 0x1d3c78: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3C7Cu; }
        if (ctx->pc != 0x1D3C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3C7Cu; }
        if (ctx->pc != 0x1D3C7Cu) { return; }
    }
    ctx->pc = 0x1D3C7Cu;
    // 0x1d3c7c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1d3c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1d3c80: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1d3c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1d3c84: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1d3c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d3c88: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1d3c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1d3c8c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1d3c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d3c90: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1d3c90u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d3c94: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1d3c94u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3c98: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d3c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d3c9c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d3c9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d3ca0: 0x2e61000e  sltiu       $at, $s3, 0xE
    ctx->pc = 0x1d3ca0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x1d3ca4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1d3ca4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1d3ca8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d3ca8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1d3cac: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1d3cacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d3cb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3cb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3cb4: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1d3cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x1d3cb8: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1d3cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1d3cbc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d3cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d3cc0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d3cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1d3cc4: 0x102000b6  beqz        $at, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1D3CC4u;
    {
        const bool branch_taken_0x1d3cc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3CC4u;
            // 0x1d3cc8: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3cc4) {
            ctx->pc = 0x1D3FA0u;
            goto label_1d3fa0;
        }
    }
    ctx->pc = 0x1D3CCCu;
    // 0x1d3ccc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1d3cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1d3cd0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1d3cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1d3cd4: 0x24632cd0  addiu       $v1, $v1, 0x2CD0
    ctx->pc = 0x1d3cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11472));
    // 0x1d3cd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3cdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d3cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3ce0: 0x400008  jr          $v0
    ctx->pc = 0x1D3CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3CE8u: goto label_1d3ce8;
            case 0x1D3D20u: goto label_1d3d20;
            case 0x1D3D50u: goto label_1d3d50;
            case 0x1D3DA0u: goto label_1d3da0;
            case 0x1D3DF0u: goto label_1d3df0;
            case 0x1D3E18u: goto label_1d3e18;
            case 0x1D3E40u: goto label_1d3e40;
            case 0x1D3E88u: goto label_1d3e88;
            case 0x1D3ED0u: goto label_1d3ed0;
            case 0x1D3F00u: goto label_1d3f00;
            case 0x1D3F30u: goto label_1d3f30;
            case 0x1D3F50u: goto label_1d3f50;
            case 0x1D3F78u: goto label_1d3f78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3CE8u;
label_1d3ce8:
    // 0x1d3ce8: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x1d3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
    // 0x1d3cec: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1d3cecu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1d3cf0: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1d3cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1d3cf4: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1d3cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1d3cf8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1d3cf8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1d3cfc: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1d3cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1d3d00: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1d3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1d3d04: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1d3d04u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d3d08: 0x3c02bca3  lui         $v0, 0xBCA3
    ctx->pc = 0x1d3d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
    // 0x1d3d0c: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1d3d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x1d3d10: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d3d10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d3d14: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1d3d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1d3d18: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x1D3D18u;
    {
        const bool branch_taken_0x1d3d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3D18u;
            // 0x1d3d1c: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d18) {
            ctx->pc = 0x1D3FA0u;
            goto label_1d3fa0;
        }
    }
    ctx->pc = 0x1D3D20u;
label_1d3d20:
    // 0x1d3d20: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1d3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1d3d24: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1d3d24u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1d3d28: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1d3d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1d3d2c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1d3d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1d3d30: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1d3d30u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1d3d34: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1d3d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1d3d38: 0x3c02bca3  lui         $v0, 0xBCA3
    ctx->pc = 0x1d3d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
    // 0x1d3d3c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d3d3cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d3d40: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1d3d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1d3d44: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1d3d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1d3d48: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x1D3D48u;
    {
        const bool branch_taken_0x1d3d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3D48u;
            // 0x1d3d4c: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d48) {
            ctx->pc = 0x1D3FA0u;
            goto label_1d3fa0;
        }
    }
    ctx->pc = 0x1D3D50u;
label_1d3d50:
    // 0x1d3d50: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d3d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1d3d54: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1d3d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1d3d58: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1d3d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x1d3d5c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1d3d5cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1d3d60: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1d3d64: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1d3d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1d3d68: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x1d3d68u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1d3d6c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1d3d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1d3d70: 0x3c02c016  lui         $v0, 0xC016
    ctx->pc = 0x1d3d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49174 << 16));
    // 0x1d3d74: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1d3d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1d3d78: 0x3443cbe4  ori         $v1, $v0, 0xCBE4
    ctx->pc = 0x1d3d78u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52196u)));
    // 0x1d3d7c: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1d3d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1d3d80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d3d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3d84: 0xac400114  sw          $zero, 0x114($v0)
    ctx->pc = 0x1d3d84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 0));
    // 0x1d3d88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d3d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3d8c: 0xac440110  sw          $a0, 0x110($v0)
    ctx->pc = 0x1d3d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 4));
    // 0x1d3d90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d3d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3d94: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x1D3D94u;
    {
        const bool branch_taken_0x1d3d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3D94u;
            // 0x1d3d98: 0xac430118  sw          $v1, 0x118($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d94) {
            ctx->pc = 0x1D3FA0u;
            goto label_1d3fa0;
        }
    }
    ctx->pc = 0x1D3D9Cu;
    // 0x1d3d9c: 0x0  nop
    ctx->pc = 0x1d3d9cu;
    // NOP
label_1d3da0:
    // 0x1d3da0: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1d3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1d3da4: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1d3da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1d3da8: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1d3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x1d3dac: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1d3dacu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1d3db0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d3db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1d3db4: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1d3db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1d3db8: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x1d3db8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1d3dbc: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1d3dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1d3dc0: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x1d3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x1d3dc4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1d3dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1d3dc8: 0x3443cbe4  ori         $v1, $v0, 0xCBE4
    ctx->pc = 0x1d3dc8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52196u)));
    // 0x1d3dcc: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1d3dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1d3dd0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d3dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3dd4: 0xac400114  sw          $zero, 0x114($v0)
    ctx->pc = 0x1d3dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 0));
    // 0x1d3dd8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d3dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3ddc: 0xac440110  sw          $a0, 0x110($v0)
    ctx->pc = 0x1d3ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 4));
    // 0x1d3de0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d3de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3de4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1D3DE4u;
    {
        const bool branch_taken_0x1d3de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3DE4u;
            // 0x1d3de8: 0xac430118  sw          $v1, 0x118($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3de4) {
            ctx->pc = 0x1D3FA0u;
            goto label_1d3fa0;
        }
    }
    ctx->pc = 0x1D3DECu;
    // 0x1d3dec: 0x0  nop
    ctx->pc = 0x1d3decu;
    // NOP
label_1d3df0:
    // 0x1d3df0: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1d3df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1d3df4: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x1d3df4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1d3df8: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x1d3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x1d3dfc: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1d3dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1d3e00: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1d3e00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1d3e04: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1d3e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1d3e08: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1d3e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1d3e0c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1d3e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1d3e10: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1D3E10u;
    {
        const bool branch_taken_0x1d3e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3E10u;
            // 0x1d3e14: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e10) {
            ctx->pc = 0x1D3FA0u;
            goto label_1d3fa0;
        }
    }
    ctx->pc = 0x1D3E18u;
label_1d3e18:
    // 0x1d3e18: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1d3e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1d3e1c: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x1d3e1cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1d3e20: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1d3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1d3e24: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1d3e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1d3e28: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1d3e28u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1d3e2c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1d3e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1d3e30: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1d3e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1d3e34: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1d3e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1d3e38: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1D3E38u;
    {
        const bool branch_taken_0x1d3e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3E38u;
            // 0x1d3e3c: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e38) {
            ctx->pc = 0x1D3FA0u;
            goto label_1d3fa0;
        }
    }
    ctx->pc = 0x1D3E40u;
label_1d3e40:
    // 0x1d3e40: 0x3c02be99  lui         $v0, 0xBE99
    ctx->pc = 0x1d3e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48793 << 16));
    // 0x1d3e44: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1d3e44u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1d3e48: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1d3e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1d3e4c: 0x3c02bc75  lui         $v0, 0xBC75
    ctx->pc = 0x1d3e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
    // 0x1d3e50: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x1d3e50u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1d3e54: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1d3e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1d3e58: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1d3e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x1d3e5c: 0x3c023c75  lui         $v0, 0x3C75
    ctx->pc = 0x1d3e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
    // 0x1d3e60: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x1d3e60u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1d3e64: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1d3e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1d3e68: 0x3c023fc8  lui         $v0, 0x3FC8
    ctx->pc = 0x1d3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16328 << 16));
    // 0x1d3e6c: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1d3e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1d3e70: 0x3443f5c3  ori         $v1, $v0, 0xF5C3
    ctx->pc = 0x1d3e70u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62915u)));
    // 0x1d3e74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d3e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3e78: 0xac430118  sw          $v1, 0x118($v0)
    ctx->pc = 0x1d3e78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
    // 0x1d3e7c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d3e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3e80: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1D3E80u;
    {
        const bool branch_taken_0x1d3e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3E80u;
            // 0x1d3e84: 0xac430114  sw          $v1, 0x114($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e80) {
            ctx->pc = 0x1D3FA0u;
            goto label_1d3fa0;
        }
    }
    ctx->pc = 0x1D3E88u;
label_1d3e88:
    // 0x1d3e88: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1d3e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1d3e8c: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1d3e8cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1d3e90: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1d3e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1d3e94: 0x3c023c75  lui         $v0, 0x3C75
    ctx->pc = 0x1d3e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
    // 0x1d3e98: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x1d3e98u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1d3e9c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1d3e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1d3ea0: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1d3ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x1d3ea4: 0x3c02bc75  lui         $v0, 0xBC75
    ctx->pc = 0x1d3ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
    // 0x1d3ea8: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x1d3ea8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1d3eac: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1d3eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1d3eb0: 0x3c02bfc8  lui         $v0, 0xBFC8
    ctx->pc = 0x1d3eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49096 << 16));
    // 0x1d3eb4: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1d3eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1d3eb8: 0x3443f5c3  ori         $v1, $v0, 0xF5C3
    ctx->pc = 0x1d3eb8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62915u)));
    // 0x1d3ebc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d3ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3ec0: 0xac430118  sw          $v1, 0x118($v0)
    ctx->pc = 0x1d3ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
    // 0x1d3ec4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d3ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3ec8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1D3EC8u;
    {
        const bool branch_taken_0x1d3ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3EC8u;
            // 0x1d3ecc: 0xac430114  sw          $v1, 0x114($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ec8) {
            ctx->pc = 0x1D3FA0u;
            goto label_1d3fa0;
        }
    }
    ctx->pc = 0x1D3ED0u;
label_1d3ed0:
    // 0x1d3ed0: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x1d3ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
    // 0x1d3ed4: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1d3ed4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d3ed8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1d3ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1d3edc: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1d3edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1d3ee0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1d3ee0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1d3ee4: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1d3ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1d3ee8: 0x3c023be5  lui         $v0, 0x3BE5
    ctx->pc = 0x1d3ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15333 << 16));
    // 0x1d3eec: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1d3eecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
    // 0x1d3ef0: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1d3ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1d3ef4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1d3ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1d3ef8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1D3EF8u;
    {
        const bool branch_taken_0x1d3ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3EF8u;
            // 0x1d3efc: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ef8) {
            ctx->pc = 0x1D3FA0u;
            goto label_1d3fa0;
        }
    }
    ctx->pc = 0x1D3F00u;
label_1d3f00:
    // 0x1d3f00: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1d3f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1d3f04: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1d3f04u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d3f08: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1d3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1d3f0c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1d3f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1d3f10: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1d3f10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1d3f14: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1d3f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1d3f18: 0x3c02bbe5  lui         $v0, 0xBBE5
    ctx->pc = 0x1d3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48101 << 16));
    // 0x1d3f1c: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1d3f1cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
    // 0x1d3f20: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1d3f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1d3f24: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1d3f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1d3f28: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3F28u;
    {
        const bool branch_taken_0x1d3f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F28u;
            // 0x1d3f2c: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f28) {
            ctx->pc = 0x1D3FA0u;
            goto label_1d3fa0;
        }
    }
    ctx->pc = 0x1D3F30u;
label_1d3f30:
    // 0x1d3f30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d3f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d3f34: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1d3f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1d3f38: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1d3f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1d3f3c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1d3f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1d3f40: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1d3f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1d3f44: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D3F44u;
    {
        const bool branch_taken_0x1d3f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F44u;
            // 0x1d3f48: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f44) {
            ctx->pc = 0x1D3FA0u;
            goto label_1d3fa0;
        }
    }
    ctx->pc = 0x1D3F4Cu;
    // 0x1d3f4c: 0x0  nop
    ctx->pc = 0x1d3f4cu;
    // NOP
label_1d3f50:
    // 0x1d3f50: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1d3f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1d3f54: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1d3f54u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1d3f58: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1d3f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x1d3f5c: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1d3f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1d3f60: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1d3f60u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1d3f64: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1d3f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1d3f68: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1d3f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1d3f6c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1d3f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1d3f70: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D3F70u;
    {
        const bool branch_taken_0x1d3f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F70u;
            // 0x1d3f74: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f70) {
            ctx->pc = 0x1D3FA0u;
            goto label_1d3fa0;
        }
    }
    ctx->pc = 0x1D3F78u;
label_1d3f78:
    // 0x1d3f78: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1d3f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1d3f7c: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1d3f7cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1d3f80: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1d3f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1d3f84: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1d3f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1d3f88: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1d3f88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1d3f8c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1d3f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1d3f90: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1d3f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1d3f94: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1d3f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1d3f98: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1d3f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1d3f9c: 0x0  nop
    ctx->pc = 0x1d3f9cu;
    // NOP
label_1d3fa0:
    // 0x1d3fa0: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1D3FA0u;
    SET_GPR_U32(ctx, 31, 0x1D3FA8u);
    ctx->pc = 0x1D3FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3FA0u;
            // 0x1d3fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3FA8u; }
        if (ctx->pc != 0x1D3FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3FA8u; }
        if (ctx->pc != 0x1D3FA8u) { return; }
    }
    ctx->pc = 0x1D3FA8u;
    // 0x1d3fa8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d3fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d3fac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d3facu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3fb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d3fb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3fb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d3fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3fb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d3fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3FBCu;
            // 0x1d3fc0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3CE8u: goto label_1d3ce8;
            case 0x1D3D20u: goto label_1d3d20;
            case 0x1D3D50u: goto label_1d3d50;
            case 0x1D3DA0u: goto label_1d3da0;
            case 0x1D3DF0u: goto label_1d3df0;
            case 0x1D3E18u: goto label_1d3e18;
            case 0x1D3E40u: goto label_1d3e40;
            case 0x1D3E88u: goto label_1d3e88;
            case 0x1D3ED0u: goto label_1d3ed0;
            case 0x1D3F00u: goto label_1d3f00;
            case 0x1D3F30u: goto label_1d3f30;
            case 0x1D3F50u: goto label_1d3f50;
            case 0x1D3F78u: goto label_1d3f78;
            case 0x1D3FA0u: goto label_1d3fa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3FC4u;
}
