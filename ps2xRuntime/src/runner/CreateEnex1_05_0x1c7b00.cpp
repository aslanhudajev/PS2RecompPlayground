#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEnex1_05
// Address: 0x1c7b00 - 0x1c7cfc
void CreateEnex1_05_0x1c7b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEnex1_05_0x1c7b00");
#endif

    ctx->pc = 0x1c7b00u;

    // 0x1c7b00: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1c7b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1c7b04: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1c7b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x1c7b08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c7b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c7b0c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1c7b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1c7b10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c7b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c7b14: 0x24637d30  addiu       $v1, $v1, 0x7D30
    ctx->pc = 0x1c7b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32048));
    // 0x1c7b18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c7b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c7b1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c7b1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c7b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c7b24: 0x24427f60  addiu       $v0, $v0, 0x7F60
    ctx->pc = 0x1c7b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32608));
    // 0x1c7b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c7b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c7b2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c7b2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b30: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1c7b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1c7b34: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c7b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b38: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1c7b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1c7b3c: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1c7b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1c7b40: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1c7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1c7b44: 0x246386b0  addiu       $v1, $v1, -0x7950
    ctx->pc = 0x1c7b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936240));
    // 0x1c7b48: 0x24427d00  addiu       $v0, $v0, 0x7D00
    ctx->pc = 0x1c7b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32000));
    // 0x1c7b4c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1c7b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1c7b50: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x1c7b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1c7b54: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1c7b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1c7b58: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1c7b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1c7b5c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1C7B5Cu;
    SET_GPR_U32(ctx, 31, 0x1C7B64u);
    ctx->pc = 0x1C7B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7B5Cu;
            // 0x1c7b60: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7B64u; }
        if (ctx->pc != 0x1C7B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7B64u; }
        if (ctx->pc != 0x1C7B64u) { return; }
    }
    ctx->pc = 0x1C7B64u;
    // 0x1c7b64: 0xc060544  jal         func_181510
    ctx->pc = 0x1C7B64u;
    SET_GPR_U32(ctx, 31, 0x1C7B6Cu);
    ctx->pc = 0x1C7B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7B64u;
            // 0x1c7b68: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7B6Cu; }
        if (ctx->pc != 0x1C7B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7B6Cu; }
        if (ctx->pc != 0x1C7B6Cu) { return; }
    }
    ctx->pc = 0x1C7B6Cu;
    // 0x1c7b6c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1c7b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1c7b70: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1c7b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1c7b74: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1c7b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7b78: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1c7b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1c7b7c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c7b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c7b80: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1c7b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c7b84: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1c7b84u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7b88: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1c7b88u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7b8c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c7b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c7b90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c7b90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c7b94: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1c7b94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1c7b98: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c7b98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1c7b9c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1c7b9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c7ba0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c7ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c7ba4: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1c7ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1c7ba8: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1c7ba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1c7bac: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1c7bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c7bb0: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1c7bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1c7bb4: 0x1262003c  beq         $s3, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1C7BB4u;
    {
        const bool branch_taken_0x1c7bb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7BB4u;
            // 0x1c7bb8: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7bb4) {
            ctx->pc = 0x1C7CA8u;
            goto label_1c7ca8;
        }
    }
    ctx->pc = 0x1C7BBCu;
    // 0x1c7bbc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c7bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7bc0: 0x1262002d  beq         $s3, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1C7BC0u;
    {
        const bool branch_taken_0x1c7bc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7BC0u;
            // 0x1c7bc4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7bc0) {
            ctx->pc = 0x1C7C78u;
            goto label_1c7c78;
        }
    }
    ctx->pc = 0x1C7BC8u;
    // 0x1c7bc8: 0x1262001f  beq         $s3, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C7BC8u;
    {
        const bool branch_taken_0x1c7bc8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c7bc8) {
            ctx->pc = 0x1C7C48u;
            goto label_1c7c48;
        }
    }
    ctx->pc = 0x1C7BD0u;
    // 0x1c7bd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7bd4: 0x12620010  beq         $s3, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C7BD4u;
    {
        const bool branch_taken_0x1c7bd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c7bd4) {
            ctx->pc = 0x1C7C18u;
            goto label_1c7c18;
        }
    }
    ctx->pc = 0x1C7BDCu;
    // 0x1c7bdc: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7BDCu;
    {
        const bool branch_taken_0x1c7bdc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7bdc) {
            ctx->pc = 0x1C7BF0u;
            goto label_1c7bf0;
        }
    }
    ctx->pc = 0x1C7BE4u;
    // 0x1c7be4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1C7BE4u;
    {
        const bool branch_taken_0x1c7be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7be4) {
            ctx->pc = 0x1C7CD0u;
            goto label_1c7cd0;
        }
    }
    ctx->pc = 0x1C7BECu;
    // 0x1c7bec: 0x0  nop
    ctx->pc = 0x1c7becu;
    // NOP
label_1c7bf0:
    // 0x1c7bf0: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1c7bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1c7bf4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1c7bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1c7bf8: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1c7bf8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)13107u)));
    // 0x1c7bfc: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1c7bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1c7c00: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1c7c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1c7c04: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c7c04u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1c7c08: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1c7c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1c7c0c: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1c7c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1c7c10: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1C7C10u;
    {
        const bool branch_taken_0x1c7c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C10u;
            // 0x1c7c14: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c10) {
            ctx->pc = 0x1C7CD0u;
            goto label_1c7cd0;
        }
    }
    ctx->pc = 0x1C7C18u;
label_1c7c18:
    // 0x1c7c18: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1c7c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1c7c1c: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1c7c1cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c7c20: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1c7c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1c7c24: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1c7c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1c7c28: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1c7c28u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c7c2c: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1c7c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1c7c30: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1c7c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1c7c34: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1c7c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1c7c38: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c7c38u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1c7c3c: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1c7c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1c7c40: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1C7C40u;
    {
        const bool branch_taken_0x1c7c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C40u;
            // 0x1c7c44: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c40) {
            ctx->pc = 0x1C7CD0u;
            goto label_1c7cd0;
        }
    }
    ctx->pc = 0x1C7C48u;
label_1c7c48:
    // 0x1c7c48: 0x3c02be99  lui         $v0, 0xBE99
    ctx->pc = 0x1c7c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48793 << 16));
    // 0x1c7c4c: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1c7c4cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c7c50: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1c7c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1c7c54: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1c7c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1c7c58: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1c7c58u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c7c5c: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1c7c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1c7c60: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1c7c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1c7c64: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1c7c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1c7c68: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c7c68u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1c7c6c: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1c7c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1c7c70: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1C7C70u;
    {
        const bool branch_taken_0x1c7c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C70u;
            // 0x1c7c74: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c70) {
            ctx->pc = 0x1C7CD0u;
            goto label_1c7cd0;
        }
    }
    ctx->pc = 0x1C7C78u;
label_1c7c78:
    // 0x1c7c78: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1c7c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1c7c7c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1c7c7cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c7c80: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1c7c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1c7c84: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1c7c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1c7c88: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1c7c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1c7c8c: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1c7c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1c7c90: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c7c90u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1c7c94: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1c7c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1c7c98: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1c7c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1c7c9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C7C9Cu;
    {
        const bool branch_taken_0x1c7c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C9Cu;
            // 0x1c7ca0: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c9c) {
            ctx->pc = 0x1C7CD0u;
            goto label_1c7cd0;
        }
    }
    ctx->pc = 0x1C7CA4u;
    // 0x1c7ca4: 0x0  nop
    ctx->pc = 0x1c7ca4u;
    // NOP
label_1c7ca8:
    // 0x1c7ca8: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x1c7ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x1c7cac: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1c7cacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c7cb0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1c7cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1c7cb4: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1c7cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1c7cb8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1c7cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1c7cbc: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1c7cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1c7cc0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c7cc0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1c7cc4: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1c7cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1c7cc8: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1c7cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1c7ccc: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1c7cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_1c7cd0:
    // 0x1c7cd0: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1C7CD0u;
    SET_GPR_U32(ctx, 31, 0x1C7CD8u);
    ctx->pc = 0x1C7CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CD0u;
            // 0x1c7cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CD8u; }
        if (ctx->pc != 0x1C7CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CD8u; }
        if (ctx->pc != 0x1C7CD8u) { return; }
    }
    ctx->pc = 0x1C7CD8u;
    // 0x1c7cd8: 0xc071fd8  jal         func_1C7F60
    ctx->pc = 0x1C7CD8u;
    SET_GPR_U32(ctx, 31, 0x1C7CE0u);
    ctx->pc = 0x1C7CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CD8u;
            // 0x1c7cdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7F60u;
    if (runtime->hasFunction(0x1C7F60u)) {
        auto targetFn = runtime->lookupFunction(0x1C7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CE0u; }
        if (ctx->pc != 0x1C7CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enex1_05Move_0x1c7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CE0u; }
        if (ctx->pc != 0x1C7CE0u) { return; }
    }
    ctx->pc = 0x1C7CE0u;
    // 0x1c7ce0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c7ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c7ce4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c7ce4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7ce8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c7ce8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7cec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c7cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7cf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c7cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CF4u;
            // 0x1c7cf8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7BF0u: goto label_1c7bf0;
            case 0x1C7C18u: goto label_1c7c18;
            case 0x1C7C48u: goto label_1c7c48;
            case 0x1C7C78u: goto label_1c7c78;
            case 0x1C7CA8u: goto label_1c7ca8;
            case 0x1C7CD0u: goto label_1c7cd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C7CFCu;
}
