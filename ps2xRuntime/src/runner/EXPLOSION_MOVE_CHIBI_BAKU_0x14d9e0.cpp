#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EXPLOSION_MOVE_CHIBI_BAKU
// Address: 0x14d9e0 - 0x14daac
void EXPLOSION_MOVE_CHIBI_BAKU_0x14d9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EXPLOSION_MOVE_CHIBI_BAKU_0x14d9e0");
#endif

    ctx->pc = 0x14d9e0u;

    // 0x14d9e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d9e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d9e8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x14d9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14d9ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d9f0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x14d9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x14d9f4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x14d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x14d9f8: 0x2861ffe1  slti        $at, $v1, -0x1F
    ctx->pc = 0x14d9f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967265) ? 1 : 0);
    // 0x14d9fc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D9FCu;
    {
        const bool branch_taken_0x14d9fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d9fc) {
            ctx->pc = 0x14DA10u;
            goto label_14da10;
        }
    }
    ctx->pc = 0x14DA04u;
    // 0x14da04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14da04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14da08: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x14da08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x14da0c: 0x0  nop
    ctx->pc = 0x14da0cu;
    // NOP
label_14da10:
    // 0x14da10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14da10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14da14: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x14da14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14da18: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14da18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14da1c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x14da1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14da20: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DA20u;
    {
        const bool branch_taken_0x14da20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14da20) {
            ctx->pc = 0x14DA38u;
            goto label_14da38;
        }
    }
    ctx->pc = 0x14DA28u;
    // 0x14da28: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14DA28u;
    SET_GPR_U32(ctx, 31, 0x14DA30u);
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DA30u; }
        if (ctx->pc != 0x14DA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DA30u; }
        if (ctx->pc != 0x14DA30u) { return; }
    }
    ctx->pc = 0x14DA30u;
    // 0x14da30: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x14DA30u;
    {
        const bool branch_taken_0x14da30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da30) {
            ctx->pc = 0x14DAA0u;
            goto label_14daa0;
        }
    }
    ctx->pc = 0x14DA38u;
label_14da38:
    // 0x14da38: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x14da38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x14da3c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x14da3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14da40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14da40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14da44: 0x0  nop
    ctx->pc = 0x14da44u;
    // NOP
    // 0x14da48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14da48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14da4c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x14DA4Cu;
    {
        const bool branch_taken_0x14da4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14DA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA4Cu;
            // 0x14da50: 0x3c034370  lui         $v1, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da4c) {
            ctx->pc = 0x14DA98u;
            goto label_14da98;
        }
    }
    ctx->pc = 0x14DA54u;
    // 0x14da54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14da54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14da58: 0x0  nop
    ctx->pc = 0x14da58u;
    // NOP
    // 0x14da5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14da5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14da60: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x14DA60u;
    {
        const bool branch_taken_0x14da60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14da60) {
            ctx->pc = 0x14DA98u;
            goto label_14da98;
        }
    }
    ctx->pc = 0x14DA68u;
    // 0x14da68: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x14da68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14da6c: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x14da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x14da70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14da70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14da74: 0x0  nop
    ctx->pc = 0x14da74u;
    // NOP
    // 0x14da78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14da78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14da7c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x14DA7Cu;
    {
        const bool branch_taken_0x14da7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14DA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DA7Cu;
            // 0x14da80: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da7c) {
            ctx->pc = 0x14DA98u;
            goto label_14da98;
        }
    }
    ctx->pc = 0x14DA84u;
    // 0x14da84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14da84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14da88: 0x0  nop
    ctx->pc = 0x14da88u;
    // NOP
    // 0x14da8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14da8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14da90: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x14DA90u;
    {
        const bool branch_taken_0x14da90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14da90) {
            ctx->pc = 0x14DAA0u;
            goto label_14daa0;
        }
    }
    ctx->pc = 0x14DA98u;
label_14da98:
    // 0x14da98: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14DA98u;
    SET_GPR_U32(ctx, 31, 0x14DAA0u);
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DAA0u; }
        if (ctx->pc != 0x14DAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DAA0u; }
        if (ctx->pc != 0x14DAA0u) { return; }
    }
    ctx->pc = 0x14DAA0u;
label_14daa0:
    // 0x14daa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14daa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14daa4: 0x3e00008  jr          $ra
    ctx->pc = 0x14DAA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DAA4u;
            // 0x14daa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14DA10u: goto label_14da10;
            case 0x14DA38u: goto label_14da38;
            case 0x14DA98u: goto label_14da98;
            case 0x14DAA0u: goto label_14daa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14DAACu;
}
