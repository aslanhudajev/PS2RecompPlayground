#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: playmovie
// Address: 0x118b60 - 0x118c14
void playmovie_0x118b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x118b60u;

    // 0x118b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118b64: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x118b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x118b68: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118b6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118b70: 0x2451e530  addiu       $s1, $v0, -0x1AD0
    ctx->pc = 0x118b70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960432));
    // 0x118b74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118b78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x118b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118b7c: 0xaf8684cc  sw          $a2, -0x7B34($gp)
    ctx->pc = 0x118b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935756), GPR_U32(ctx, 6));
    // 0x118b80: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x118b80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118b84: 0xaf8584bc  sw          $a1, -0x7B44($gp)
    ctx->pc = 0x118b84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935740), GPR_U32(ctx, 5));
    // 0x118b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118b8c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x118b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x118b90: 0x240502d0  addiu       $a1, $zero, 0x2D0
    ctx->pc = 0x118b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
    // 0x118b94: 0xaf8784d0  sw          $a3, -0x7B30($gp)
    ctx->pc = 0x118b94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935760), GPR_U32(ctx, 7));
    // 0x118b98: 0xc046aa6  jal         func_11AA98
    ctx->pc = 0x118B98u;
    SET_GPR_U32(ctx, 31, 0x118BA0u);
    ctx->pc = 0x118B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118B98u;
            // 0x118b9c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AA98u;
    if (runtime->hasFunction(0x11AA98u)) {
        auto targetFn = runtime->lookupFunction(0x11AA98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118BA0u; }
        if (ctx->pc != 0x118BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dispCreate_0x11aa98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118BA0u; }
        if (ctx->pc != 0x118BA0u) { return; }
    }
    ctx->pc = 0x118BA0u;
    // 0x118ba0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x118ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x118ba4: 0xc046c74  jal         func_11B1D0
    ctx->pc = 0x118BA4u;
    SET_GPR_U32(ctx, 31, 0x118BACu);
    ctx->pc = 0x118BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118BA4u;
            // 0x118ba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B1D0u;
    if (runtime->hasFunction(0x11B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x11B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118BACu; }
        if (ctx->pc != 0x118BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dispClear_0x11b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118BACu; }
        if (ctx->pc != 0x118BACu) { return; }
    }
    ctx->pc = 0x118BACu;
    // 0x118bac: 0xc04639c  jal         func_118E70
    ctx->pc = 0x118BACu;
    SET_GPR_U32(ctx, 31, 0x118BB4u);
    ctx->pc = 0x118BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118BACu;
            // 0x118bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118E70u;
    if (runtime->hasFunction(0x118E70u)) {
        auto targetFn = runtime->lookupFunction(0x118E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118BB4u; }
        if (ctx->pc != 0x118BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        initAll_0x118e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118BB4u; }
        if (ctx->pc != 0x118BB4u) { return; }
    }
    ctx->pc = 0x118BB4u;
    // 0x118bb4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x118BB4u;
    {
        const bool branch_taken_0x118bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118BB4u;
            // 0x118bb8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118bb4) {
            ctx->pc = 0x118C00u;
            goto label_118c00;
        }
    }
    ctx->pc = 0x118BBCu;
    // 0x118bbc: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x118bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x118bc0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x118bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x118bc4: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x118bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x118bc8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x118bc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118bcc: 0x2484e5c8  addiu       $a0, $a0, -0x1A38
    ctx->pc = 0x118bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960584));
    // 0x118bd0: 0x24a5a000  addiu       $a1, $a1, -0x6000
    ctx->pc = 0x118bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942720));
    // 0x118bd4: 0xc046306  jal         func_118C18
    ctx->pc = 0x118BD4u;
    SET_GPR_U32(ctx, 31, 0x118BDCu);
    ctx->pc = 0x118BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118BD4u;
            // 0x118bd8: 0x24c6e680  addiu       $a2, $a2, -0x1980 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C18u;
    if (runtime->hasFunction(0x118C18u)) {
        auto targetFn = runtime->lookupFunction(0x118C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118BDCu; }
        if (ctx->pc != 0x118BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readMpeg_0x118c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118BDCu; }
        if (ctx->pc != 0x118BDCu) { return; }
    }
    ctx->pc = 0x118BDCu;
    // 0x118bdc: 0xc04644c  jal         func_119130
    ctx->pc = 0x118BDCu;
    SET_GPR_U32(ctx, 31, 0x118BE4u);
    ctx->pc = 0x119130u;
    if (runtime->hasFunction(0x119130u)) {
        auto targetFn = runtime->lookupFunction(0x119130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118BE4u; }
        if (ctx->pc != 0x118BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        termAll_0x119130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118BE4u; }
        if (ctx->pc != 0x118BE4u) { return; }
    }
    ctx->pc = 0x118BE4u;
    // 0x118be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118be8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118bec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118becu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118bf0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118bf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118bf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118bf8: 0x8046b42  j           func_11AD08
    ctx->pc = 0x118BF8u;
    ctx->pc = 0x118BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118BF8u;
            // 0x118bfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AD08u;
    if (runtime->hasFunction(0x11AD08u)) {
        auto targetFn = runtime->lookupFunction(0x11AD08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        dispDelete_0x11ad08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x118C00u;
label_118c00:
    // 0x118c00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118c00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118c04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118c08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x118C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118C0Cu;
            // 0x118c10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118C00u: goto label_118c00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x118C14u;
}
