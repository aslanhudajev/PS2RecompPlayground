#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitTLBFunctions
// Address: 0x137268 - 0x13732c
void InitTLBFunctions_0x137268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitTLBFunctions_0x137268");
#endif

    ctx->pc = 0x137268u;

    // 0x137268: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x137268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13726c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x13726cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x137270: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x137270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x137274: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x137274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x137278: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x137278u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13727c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13727cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x137280: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x137280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x137284: 0x24500848  addiu       $s0, $v0, 0x848
    ctx->pc = 0x137284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2120));
    // 0x137288: 0x8c440848  lw          $a0, 0x848($v0)
    ctx->pc = 0x137288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2120)));
    // 0x13728c: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x13728cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x137290: 0xc04dc96  jal         func_137258
    ctx->pc = 0x137290u;
    SET_GPR_U32(ctx, 31, 0x137298u);
    ctx->pc = 0x137294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137290u;
            // 0x137294: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137258u;
    if (runtime->hasFunction(0x137258u)) {
        auto targetFn = runtime->lookupFunction(0x137258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137298u; }
        if (ctx->pc != 0x137298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x137258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137298u; }
        if (ctx->pc != 0x137298u) { return; }
    }
    ctx->pc = 0x137298u;
    // 0x137298: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x137298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x13729c: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x13729cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x1372a0: 0x24060330  addiu       $a2, $zero, 0x330
    ctx->pc = 0x1372a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x1372a4: 0x24a504c8  addiu       $a1, $a1, 0x4C8
    ctx->pc = 0x1372a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1224));
    // 0x1372a8: 0xc04dc80  jal         func_137200
    ctx->pc = 0x1372A8u;
    SET_GPR_U32(ctx, 31, 0x1372B0u);
    ctx->pc = 0x1372ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1372A8u;
            // 0x1372ac: 0x34845000  ori         $a0, $a0, 0x5000 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)20480u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137200u;
    if (runtime->hasFunction(0x137200u)) {
        auto targetFn = runtime->lookupFunction(0x137200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1372B0u; }
        if (ctx->pc != 0x1372B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy_0x137200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1372B0u; }
        if (ctx->pc != 0x1372B0u) { return; }
    }
    ctx->pc = 0x1372B0u;
    // 0x1372b0: 0xc04bbb8  jal         func_12EEE0
    ctx->pc = 0x1372B0u;
    SET_GPR_U32(ctx, 31, 0x1372B8u);
    ctx->pc = 0x1372B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1372B0u;
            // 0x1372b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEE0u;
    if (runtime->hasFunction(0x12EEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1372B8u; }
        if (ctx->pc != 0x1372B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x12eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1372B8u; }
        if (ctx->pc != 0x1372B8u) { return; }
    }
    ctx->pc = 0x1372B8u;
    // 0x1372b8: 0xc04bbb8  jal         func_12EEE0
    ctx->pc = 0x1372B8u;
    SET_GPR_U32(ctx, 31, 0x1372C0u);
    ctx->pc = 0x1372BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1372B8u;
            // 0x1372bc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEE0u;
    if (runtime->hasFunction(0x12EEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1372C0u; }
        if (ctx->pc != 0x1372C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x12eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1372C0u; }
        if (ctx->pc != 0x1372C0u) { return; }
    }
    ctx->pc = 0x1372C0u;
    // 0x1372c0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1372c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1372c4: 0xc04dc96  jal         func_137258
    ctx->pc = 0x1372C4u;
    SET_GPR_U32(ctx, 31, 0x1372CCu);
    ctx->pc = 0x1372C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1372C4u;
            // 0x1372c8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137258u;
    if (runtime->hasFunction(0x137258u)) {
        auto targetFn = runtime->lookupFunction(0x137258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1372CCu; }
        if (ctx->pc != 0x1372CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x137258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1372CCu; }
        if (ctx->pc != 0x1372CCu) { return; }
    }
    ctx->pc = 0x1372CCu;
    // 0x1372cc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1372ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1372d0: 0xc04dc96  jal         func_137258
    ctx->pc = 0x1372D0u;
    SET_GPR_U32(ctx, 31, 0x1372D8u);
    ctx->pc = 0x1372D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1372D0u;
            // 0x1372d4: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137258u;
    if (runtime->hasFunction(0x137258u)) {
        auto targetFn = runtime->lookupFunction(0x137258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1372D8u; }
        if (ctx->pc != 0x1372D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x137258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1372D8u; }
        if (ctx->pc != 0x1372D8u) { return; }
    }
    ctx->pc = 0x1372D8u;
    // 0x1372d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1372d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1372dc: 0x0  nop
    ctx->pc = 0x1372dcu;
    // NOP
label_1372e0:
    // 0x1372e0: 0xc04dc92  jal         func_137248
    ctx->pc = 0x1372E0u;
    SET_GPR_U32(ctx, 31, 0x1372E8u);
    ctx->pc = 0x1372E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1372E0u;
            // 0x1372e4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137248u;
    if (runtime->hasFunction(0x137248u)) {
        auto targetFn = runtime->lookupFunction(0x137248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1372E8u; }
        if (ctx->pc != 0x1372E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryAddress_0x137248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1372E8u; }
        if (ctx->pc != 0x1372E8u) { return; }
    }
    ctx->pc = 0x1372E8u;
    // 0x1372e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1372e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1372ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1372ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1372f0: 0xc04dc96  jal         func_137258
    ctx->pc = 0x1372F0u;
    SET_GPR_U32(ctx, 31, 0x1372F8u);
    ctx->pc = 0x1372F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1372F0u;
            // 0x1372f4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137258u;
    if (runtime->hasFunction(0x137258u)) {
        auto targetFn = runtime->lookupFunction(0x137258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1372F8u; }
        if (ctx->pc != 0x1372F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x137258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1372F8u; }
        if (ctx->pc != 0x1372F8u) { return; }
    }
    ctx->pc = 0x1372F8u;
    // 0x1372f8: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1372f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1372fc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1372FCu;
    {
        const bool branch_taken_0x1372fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1372fc) {
            ctx->pc = 0x137300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1372FCu;
            // 0x137300: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1372E0u;
            goto label_1372e0;
        }
    }
    ctx->pc = 0x137304u;
    // 0x137304: 0xc04dc92  jal         func_137248
    ctx->pc = 0x137304u;
    SET_GPR_U32(ctx, 31, 0x13730Cu);
    ctx->pc = 0x137308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137304u;
            // 0x137308: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137248u;
    if (runtime->hasFunction(0x137248u)) {
        auto targetFn = runtime->lookupFunction(0x137248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13730Cu; }
        if (ctx->pc != 0x13730Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryAddress_0x137248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13730Cu; }
        if (ctx->pc != 0x13730Cu) { return; }
    }
    ctx->pc = 0x13730Cu;
    // 0x13730c: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x13730cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x137310: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x137310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137314: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x137314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137318: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x137318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13731c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13731cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137320: 0xac620840  sw          $v0, 0x840($v1)
    ctx->pc = 0x137320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2112), GPR_U32(ctx, 2));
    // 0x137324: 0x3e00008  jr          $ra
    ctx->pc = 0x137324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137324u;
            // 0x137328: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1372E0u: goto label_1372e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13732Cu;
}
