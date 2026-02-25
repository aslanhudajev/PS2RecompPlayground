#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsInitGp
// Address: 0x1709b0 - 0x170a70
void wrsInitGp_0x1709b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsInitGp_0x1709b0");
#endif

    ctx->pc = 0x1709b0u;

    // 0x1709b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1709b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1709b4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1709b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1709b8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1709b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1709bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1709bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1709c0: 0x24020201  addiu       $v0, $zero, 0x201
    ctx->pc = 0x1709c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x1709c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1709c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1709c8: 0xac223960  sw          $v0, 0x3960($at)
    ctx->pc = 0x1709c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14688), GPR_U32(ctx, 2));
    // 0x1709cc: 0x24843968  addiu       $a0, $a0, 0x3968
    ctx->pc = 0x1709ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14696));
    // 0x1709d0: 0x24054020  addiu       $a1, $zero, 0x4020
    ctx->pc = 0x1709d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16416));
    // 0x1709d4: 0x24c61330  addiu       $a2, $a2, 0x1330
    ctx->pc = 0x1709d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x1709d8: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x1709d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1709dc: 0xc050788  jal         func_141E20
    ctx->pc = 0x1709DCu;
    SET_GPR_U32(ctx, 31, 0x1709E4u);
    ctx->pc = 0x1709E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1709DCu;
            // 0x1709e0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E20u;
    if (runtime->hasFunction(0x141E20u)) {
        auto targetFn = runtime->lookupFunction(0x141E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1709E4u; }
        if (ctx->pc != 0x1709E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsMalloc_0x141e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1709E4u; }
        if (ctx->pc != 0x1709E4u) { return; }
    }
    ctx->pc = 0x1709E4u;
    // 0x1709e4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1709e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1709e8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1709e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1709ec: 0x8c223960  lw          $v0, 0x3960($at)
    ctx->pc = 0x1709ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14688)));
    // 0x1709f0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1709f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1709f4: 0x2484396c  addiu       $a0, $a0, 0x396C
    ctx->pc = 0x1709f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14700));
    // 0x1709f8: 0x24c61340  addiu       $a2, $a2, 0x1340
    ctx->pc = 0x1709f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4928));
    // 0x1709fc: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x1709fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x170a00: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x170a00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170a04: 0xc050788  jal         func_141E20
    ctx->pc = 0x170A04u;
    SET_GPR_U32(ctx, 31, 0x170A0Cu);
    ctx->pc = 0x170A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170A04u;
            // 0x170a08: 0x22940  sll         $a1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E20u;
    if (runtime->hasFunction(0x141E20u)) {
        auto targetFn = runtime->lookupFunction(0x141E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A0Cu; }
        if (ctx->pc != 0x170A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsMalloc_0x141e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A0Cu; }
        if (ctx->pc != 0x170A0Cu) { return; }
    }
    ctx->pc = 0x170A0Cu;
    // 0x170a0c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x170a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x170a10: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x170a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x170a14: 0x8c263960  lw          $a2, 0x3960($at)
    ctx->pc = 0x170a14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14688)));
    // 0x170a18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x170a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x170a1c: 0x8c253968  lw          $a1, 0x3968($at)
    ctx->pc = 0x170a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14696)));
    // 0x170a20: 0xc041b36  jal         func_106CD8
    ctx->pc = 0x170A20u;
    SET_GPR_U32(ctx, 31, 0x170A28u);
    ctx->pc = 0x170A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170A20u;
            // 0x170a24: 0x24843940  addiu       $a0, $a0, 0x3940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106CD8u;
    if (runtime->hasFunction(0x106CD8u)) {
        auto targetFn = runtime->lookupFunction(0x106CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A28u; }
        if (ctx->pc != 0x170A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpInitChain_0x106cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A28u; }
        if (ctx->pc != 0x170A28u) { return; }
    }
    ctx->pc = 0x170A28u;
    // 0x170a28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x170a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x170a2c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x170a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x170a30: 0x8c263960  lw          $a2, 0x3960($at)
    ctx->pc = 0x170a30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14688)));
    // 0x170a34: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x170a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x170a38: 0x8c25396c  lw          $a1, 0x396C($at)
    ctx->pc = 0x170a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14700)));
    // 0x170a3c: 0xc041b36  jal         func_106CD8
    ctx->pc = 0x170A3Cu;
    SET_GPR_U32(ctx, 31, 0x170A44u);
    ctx->pc = 0x170A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170A3Cu;
            // 0x170a40: 0x24843950  addiu       $a0, $a0, 0x3950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106CD8u;
    if (runtime->hasFunction(0x106CD8u)) {
        auto targetFn = runtime->lookupFunction(0x106CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A44u; }
        if (ctx->pc != 0x170A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpInitChain_0x106cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A44u; }
        if (ctx->pc != 0x170A44u) { return; }
    }
    ctx->pc = 0x170A44u;
    // 0x170a44: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x170a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x170a48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x170a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x170a4c: 0xc041dc4  jal         func_107710
    ctx->pc = 0x170A4Cu;
    SET_GPR_U32(ctx, 31, 0x170A54u);
    ctx->pc = 0x170A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170A4Cu;
            // 0x170a50: 0x24843940  addiu       $a0, $a0, 0x3940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107710u;
    if (runtime->hasFunction(0x107710u)) {
        auto targetFn = runtime->lookupFunction(0x107710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A54u; }
        if (ctx->pc != 0x170A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpSetEndLevel_0x107710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A54u; }
        if (ctx->pc != 0x170A54u) { return; }
    }
    ctx->pc = 0x170A54u;
    // 0x170a54: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x170a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x170a58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x170a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x170a5c: 0xc041dc4  jal         func_107710
    ctx->pc = 0x170A5Cu;
    SET_GPR_U32(ctx, 31, 0x170A64u);
    ctx->pc = 0x170A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170A5Cu;
            // 0x170a60: 0x24843950  addiu       $a0, $a0, 0x3950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107710u;
    if (runtime->hasFunction(0x107710u)) {
        auto targetFn = runtime->lookupFunction(0x107710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A64u; }
        if (ctx->pc != 0x170A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpSetEndLevel_0x107710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A64u; }
        if (ctx->pc != 0x170A64u) { return; }
    }
    ctx->pc = 0x170A64u;
    // 0x170a64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170a68: 0x3e00008  jr          $ra
    ctx->pc = 0x170A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170A68u;
            // 0x170a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170A70u;
}
