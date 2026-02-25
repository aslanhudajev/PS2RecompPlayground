#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn3_02
// Address: 0x19bd90 - 0x19be8c
void CreateEn3_02_0x19bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn3_02_0x19bd90");
#endif

    ctx->pc = 0x19bd90u;

    // 0x19bd90: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x19bd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x19bd94: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x19bd94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x19bd98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19bd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19bd9c: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x19bda0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19bda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19bda4: 0x2463bec0  addiu       $v1, $v1, -0x4140
    ctx->pc = 0x19bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950592));
    // 0x19bda8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19bda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19bdac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19bdacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bdb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19bdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19bdb4: 0x2442c110  addiu       $v0, $v0, -0x3EF0
    ctx->pc = 0x19bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951184));
    // 0x19bdb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19bdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19bdbc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19bdbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bdc0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x19bdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x19bdc4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19bdc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bdc8: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x19bdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x19bdcc: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x19bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x19bdd0: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x19bdd4: 0x2463c7e0  addiu       $v1, $v1, -0x3820
    ctx->pc = 0x19bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952928));
    // 0x19bdd8: 0x2442be90  addiu       $v0, $v0, -0x4170
    ctx->pc = 0x19bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950544));
    // 0x19bddc: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x19bddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x19bde0: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x19bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x19bde4: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x19bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x19bde8: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x19bde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x19bdec: 0xc060694  jal         func_181A50
    ctx->pc = 0x19BDECu;
    SET_GPR_U32(ctx, 31, 0x19BDF4u);
    ctx->pc = 0x19BDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BDECu;
            // 0x19bdf0: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDF4u; }
        if (ctx->pc != 0x19BDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDF4u; }
        if (ctx->pc != 0x19BDF4u) { return; }
    }
    ctx->pc = 0x19BDF4u;
    // 0x19bdf4: 0xc060544  jal         func_181510
    ctx->pc = 0x19BDF4u;
    SET_GPR_U32(ctx, 31, 0x19BDFCu);
    ctx->pc = 0x19BDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BDF4u;
            // 0x19bdf8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDFCu; }
        if (ctx->pc != 0x19BDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDFCu; }
        if (ctx->pc != 0x19BDFCu) { return; }
    }
    ctx->pc = 0x19BDFCu;
    // 0x19bdfc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x19bdfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x19be00: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x19be00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x19be04: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x19be04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19be08: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x19be08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x19be0c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x19be0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x19be10: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x19be10u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19be14: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x19be14u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19be18: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19be18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19be1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19be1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19be20: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x19be20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x19be24: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19be24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x19be28: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x19be28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19be2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19be2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19be30: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x19be30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x19be34: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x19be34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x19be38: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19be38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19be3c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19be3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x19be40: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BE40u;
    {
        const bool branch_taken_0x19be40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE40u;
            // 0x19be44: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be40) {
            ctx->pc = 0x19BE50u;
            goto label_19be50;
        }
    }
    ctx->pc = 0x19BE48u;
    // 0x19be48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19BE48u;
    {
        const bool branch_taken_0x19be48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19be48) {
            ctx->pc = 0x19BE68u;
            goto label_19be68;
        }
    }
    ctx->pc = 0x19BE50u;
label_19be50:
    // 0x19be50: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x19be50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x19be54: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x19be54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x19be58: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x19be58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x19be5c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x19be5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x19be60: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x19be60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x19be64: 0x0  nop
    ctx->pc = 0x19be64u;
    // NOP
label_19be68:
    // 0x19be68: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x19BE68u;
    SET_GPR_U32(ctx, 31, 0x19BE70u);
    ctx->pc = 0x19BE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE68u;
            // 0x19be6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE70u; }
        if (ctx->pc != 0x19BE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE70u; }
        if (ctx->pc != 0x19BE70u) { return; }
    }
    ctx->pc = 0x19BE70u;
    // 0x19be70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19be70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19be74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19be74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19be78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19be78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19be7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19be7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19be80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19be80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19be84: 0x3e00008  jr          $ra
    ctx->pc = 0x19BE84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE84u;
            // 0x19be88: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE50u: goto label_19be50;
            case 0x19BE68u: goto label_19be68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19BE8Cu;
}
