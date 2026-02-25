#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn5_02
// Address: 0x1b4ad0 - 0x1b4c0c
void CreateEn5_02_0x1b4ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn5_02_0x1b4ad0");
#endif

    ctx->pc = 0x1b4ad0u;

    // 0x1b4ad0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1b4ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1b4ad4: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b4ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b4ad8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b4ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b4adc: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1b4adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1b4ae0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b4ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b4ae4: 0x24634c40  addiu       $v1, $v1, 0x4C40
    ctx->pc = 0x1b4ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19520));
    // 0x1b4ae8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b4ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b4aec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b4aecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4af0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b4af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b4af4: 0x24424e90  addiu       $v0, $v0, 0x4E90
    ctx->pc = 0x1b4af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20112));
    // 0x1b4af8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4afc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b4afcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b00: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1b4b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1b4b04: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b4b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b08: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1b4b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1b4b0c: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b4b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b4b10: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1b4b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1b4b14: 0x24635670  addiu       $v1, $v1, 0x5670
    ctx->pc = 0x1b4b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22128));
    // 0x1b4b18: 0x24424c10  addiu       $v0, $v0, 0x4C10
    ctx->pc = 0x1b4b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19472));
    // 0x1b4b1c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1b4b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1b4b20: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1b4b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1b4b24: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1b4b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1b4b28: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1b4b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1b4b2c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B4B2Cu;
    SET_GPR_U32(ctx, 31, 0x1B4B34u);
    ctx->pc = 0x1B4B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B2Cu;
            // 0x1b4b30: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B34u; }
        if (ctx->pc != 0x1B4B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B34u; }
        if (ctx->pc != 0x1B4B34u) { return; }
    }
    ctx->pc = 0x1B4B34u;
    // 0x1b4b34: 0xc060544  jal         func_181510
    ctx->pc = 0x1B4B34u;
    SET_GPR_U32(ctx, 31, 0x1B4B3Cu);
    ctx->pc = 0x1B4B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B34u;
            // 0x1b4b38: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B3Cu; }
        if (ctx->pc != 0x1B4B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B3Cu; }
        if (ctx->pc != 0x1B4B3Cu) { return; }
    }
    ctx->pc = 0x1B4B3Cu;
    // 0x1b4b3c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1b4b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1b4b40: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1b4b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1b4b44: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1b4b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4b48: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1b4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1b4b4c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b4b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b4b50: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1b4b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b4b54: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1b4b54u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4b58: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1b4b58u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4b5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b4b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b4b60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b4b60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b4b64: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1b4b64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1b4b68: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b4b68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1b4b6c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1b4b6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1b4b70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b4b70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b4b74: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1b4b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1b4b78: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1b4b78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1b4b7c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1b4b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b4b80: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b4b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1b4b84: 0x12620010  beq         $s3, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B4B84u;
    {
        const bool branch_taken_0x1b4b84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B4B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B84u;
            // 0x1b4b88: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b84) {
            ctx->pc = 0x1B4BC8u;
            goto label_1b4bc8;
        }
    }
    ctx->pc = 0x1B4B8Cu;
    // 0x1b4b8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4b90: 0x1262000d  beq         $s3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B4B90u;
    {
        const bool branch_taken_0x1b4b90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4b90) {
            ctx->pc = 0x1B4BC8u;
            goto label_1b4bc8;
        }
    }
    ctx->pc = 0x1B4B98u;
    // 0x1b4b98: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4B98u;
    {
        const bool branch_taken_0x1b4b98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4b98) {
            ctx->pc = 0x1B4BA8u;
            goto label_1b4ba8;
        }
    }
    ctx->pc = 0x1B4BA0u;
    // 0x1b4ba0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B4BA0u;
    {
        const bool branch_taken_0x1b4ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4ba0) {
            ctx->pc = 0x1B4BE8u;
            goto label_1b4be8;
        }
    }
    ctx->pc = 0x1B4BA8u;
label_1b4ba8:
    // 0x1b4ba8: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1b4ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1b4bac: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1b4bacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1b4bb0: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1b4bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1b4bb4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1b4bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1b4bb8: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1b4bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1b4bbc: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1b4bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1b4bc0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4BC0u;
    {
        const bool branch_taken_0x1b4bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4BC0u;
            // 0x1b4bc4: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4bc0) {
            ctx->pc = 0x1B4BE8u;
            goto label_1b4be8;
        }
    }
    ctx->pc = 0x1B4BC8u;
label_1b4bc8:
    // 0x1b4bc8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1b4bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1b4bcc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b4bccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1b4bd0: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1b4bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1b4bd4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1b4bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1b4bd8: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1b4bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1b4bdc: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1b4bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1b4be0: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1b4be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1b4be4: 0x0  nop
    ctx->pc = 0x1b4be4u;
    // NOP
label_1b4be8:
    // 0x1b4be8: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1B4BE8u;
    SET_GPR_U32(ctx, 31, 0x1B4BF0u);
    ctx->pc = 0x1B4BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4BE8u;
            // 0x1b4bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4BF0u; }
        if (ctx->pc != 0x1B4BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4BF0u; }
        if (ctx->pc != 0x1B4BF0u) { return; }
    }
    ctx->pc = 0x1B4BF0u;
    // 0x1b4bf0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b4bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b4bf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b4bf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b4bf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b4bf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4bfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b4bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4c00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4c04: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4C04u;
            // 0x1b4c08: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4BA8u: goto label_1b4ba8;
            case 0x1B4BC8u: goto label_1b4bc8;
            case 0x1B4BE8u: goto label_1b4be8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B4C0Cu;
}
