#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _groupOfPicturesHeader
// Address: 0x128a80 - 0x128b20
void _groupOfPicturesHeader_0x128a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_groupOfPicturesHeader_0x128a80");
#endif

    ctx->pc = 0x128a80u;

    // 0x128a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x128a84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x128a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128a88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x128a8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128a90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x128a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x128a94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x128a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a98: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x128a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x128a9c: 0x8e020850  lw          $v0, 0x850($s0)
    ctx->pc = 0x128a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2128)));
    // 0x128aa0: 0xae030854  sw          $v1, 0x854($s0)
    ctx->pc = 0x128aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2132), GPR_U32(ctx, 3));
    // 0x128aa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x128aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x128aa8: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128AA8u;
    SET_GPR_U32(ctx, 31, 0x128AB0u);
    ctx->pc = 0x128AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128AA8u;
            // 0x128aac: 0xae02084c  sw          $v0, 0x84C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128AB0u; }
        if (ctx->pc != 0x128AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128AB0u; }
        if (ctx->pc != 0x128AB0u) { return; }
    }
    ctx->pc = 0x128AB0u;
    // 0x128ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ab4: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128AB4u;
    SET_GPR_U32(ctx, 31, 0x128ABCu);
    ctx->pc = 0x128AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128AB4u;
            // 0x128ab8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128ABCu; }
        if (ctx->pc != 0x128ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128ABCu; }
        if (ctx->pc != 0x128ABCu) { return; }
    }
    ctx->pc = 0x128ABCu;
    // 0x128abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ac0: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128AC0u;
    SET_GPR_U32(ctx, 31, 0x128AC8u);
    ctx->pc = 0x128AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128AC0u;
            // 0x128ac4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128AC8u; }
        if (ctx->pc != 0x128AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128AC8u; }
        if (ctx->pc != 0x128AC8u) { return; }
    }
    ctx->pc = 0x128AC8u;
    // 0x128ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128acc: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128ACCu;
    SET_GPR_U32(ctx, 31, 0x128AD4u);
    ctx->pc = 0x128AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128ACCu;
            // 0x128ad0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128AD4u; }
        if (ctx->pc != 0x128AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128AD4u; }
        if (ctx->pc != 0x128AD4u) { return; }
    }
    ctx->pc = 0x128AD4u;
    // 0x128ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ad8: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128AD8u;
    SET_GPR_U32(ctx, 31, 0x128AE0u);
    ctx->pc = 0x128ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128AD8u;
            // 0x128adc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128AE0u; }
        if (ctx->pc != 0x128AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128AE0u; }
        if (ctx->pc != 0x128AE0u) { return; }
    }
    ctx->pc = 0x128AE0u;
    // 0x128ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ae4: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128AE4u;
    SET_GPR_U32(ctx, 31, 0x128AECu);
    ctx->pc = 0x128AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128AE4u;
            // 0x128ae8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128AECu; }
        if (ctx->pc != 0x128AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128AECu; }
        if (ctx->pc != 0x128AECu) { return; }
    }
    ctx->pc = 0x128AECu;
    // 0x128aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128af0: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128AF0u;
    SET_GPR_U32(ctx, 31, 0x128AF8u);
    ctx->pc = 0x128AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128AF0u;
            // 0x128af4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128AF8u; }
        if (ctx->pc != 0x128AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128AF8u; }
        if (ctx->pc != 0x128AF8u) { return; }
    }
    ctx->pc = 0x128AF8u;
    // 0x128af8: 0xae0201a4  sw          $v0, 0x1A4($s0)
    ctx->pc = 0x128af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 2));
    // 0x128afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b00: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128B00u;
    SET_GPR_U32(ctx, 31, 0x128B08u);
    ctx->pc = 0x128B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128B00u;
            // 0x128b04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B08u; }
        if (ctx->pc != 0x128B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B08u; }
        if (ctx->pc != 0x128B08u) { return; }
    }
    ctx->pc = 0x128B08u;
    // 0x128b08: 0xae0201a8  sw          $v0, 0x1A8($s0)
    ctx->pc = 0x128b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
    // 0x128b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x128b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128b14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128b18: 0x804a1aa  j           func_1286A8
    ctx->pc = 0x128B18u;
    ctx->pc = 0x128B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128B18u;
            // 0x128b1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1286A8u;
    if (runtime->hasFunction(0x1286A8u)) {
        auto targetFn = runtime->lookupFunction(0x1286A8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _extensionAndUserData_0x1286a8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x128B20u;
}
