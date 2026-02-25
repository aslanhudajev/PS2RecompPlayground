#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CutInDraw
// Address: 0x14f4c0 - 0x14f5a4
void CutInDraw_0x14f4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CutInDraw_0x14f4c0");
#endif

    ctx->pc = 0x14f4c0u;

    // 0x14f4c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14f4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14f4c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14f4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14f4c8: 0xc056f40  jal         func_15BD00
    ctx->pc = 0x14F4C8u;
    SET_GPR_U32(ctx, 31, 0x14F4D0u);
    ctx->pc = 0x14F4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F4C8u;
            // 0x14f4cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD00u;
    if (runtime->hasFunction(0x15BD00u)) {
        auto targetFn = runtime->lookupFunction(0x15BD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F4D0u; }
        if (ctx->pc != 0x14F4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isCutin_0x15bd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F4D0u; }
        if (ctx->pc != 0x14F4D0u) { return; }
    }
    ctx->pc = 0x14F4D0u;
    // 0x14f4d0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x14F4D0u;
    {
        const bool branch_taken_0x14f4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f4d0) {
            ctx->pc = 0x14F530u;
            goto label_14f530;
        }
    }
    ctx->pc = 0x14F4D8u;
    // 0x14f4d8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x14f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x14f4dc: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x14f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x14f4e0: 0x24429f60  addiu       $v0, $v0, -0x60A0
    ctx->pc = 0x14f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942560));
    // 0x14f4e4: 0x24639d60  addiu       $v1, $v1, -0x62A0
    ctx->pc = 0x14f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942048));
    // 0x14f4e8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x14f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x14f4ec: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x14f4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x14f4f0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x14f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x14f4f4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x14f4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x14f4f8: 0x24429d50  addiu       $v0, $v0, -0x62B0
    ctx->pc = 0x14f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942032));
    // 0x14f4fc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14F4FCu;
    SET_GPR_U32(ctx, 31, 0x14F504u);
    ctx->pc = 0x14F500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F4FCu;
            // 0x14f500: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F504u; }
        if (ctx->pc != 0x14F504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F504u; }
        if (ctx->pc != 0x14F504u) { return; }
    }
    ctx->pc = 0x14F504u;
    // 0x14f504: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x14f504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x14f508: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x14f508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14f50c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14f50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f510: 0xc053d70  jal         func_14F5C0
    ctx->pc = 0x14F510u;
    SET_GPR_U32(ctx, 31, 0x14F518u);
    ctx->pc = 0x14F514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F510u;
            // 0x14f514: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F5C0u;
    if (runtime->hasFunction(0x14F5C0u)) {
        auto targetFn = runtime->lookupFunction(0x14F5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F518u; }
        if (ctx->pc != 0x14F518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x14f5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F518u; }
        if (ctx->pc != 0x14F518u) { return; }
    }
    ctx->pc = 0x14F518u;
    // 0x14f518: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x14f518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14f51c: 0xc053d6c  jal         func_14F5B0
    ctx->pc = 0x14F51Cu;
    SET_GPR_U32(ctx, 31, 0x14F524u);
    ctx->pc = 0x14F520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F51Cu;
            // 0x14f520: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F5B0u;
    if (runtime->hasFunction(0x14F5B0u)) {
        auto targetFn = runtime->lookupFunction(0x14F5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F524u; }
        if (ctx->pc != 0x14F524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x14f5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F524u; }
        if (ctx->pc != 0x14F524u) { return; }
    }
    ctx->pc = 0x14F524u;
    // 0x14f524: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x14F524u;
    SET_GPR_U32(ctx, 31, 0x14F52Cu);
    ctx->pc = 0x14F528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F524u;
            // 0x14f528: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F52Cu; }
        if (ctx->pc != 0x14F52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F52Cu; }
        if (ctx->pc != 0x14F52Cu) { return; }
    }
    ctx->pc = 0x14F52Cu;
    // 0x14f52c: 0x0  nop
    ctx->pc = 0x14f52cu;
    // NOP
label_14f530:
    // 0x14f530: 0xc056f40  jal         func_15BD00
    ctx->pc = 0x14F530u;
    SET_GPR_U32(ctx, 31, 0x14F538u);
    ctx->pc = 0x14F534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F530u;
            // 0x14f534: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD00u;
    if (runtime->hasFunction(0x15BD00u)) {
        auto targetFn = runtime->lookupFunction(0x15BD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F538u; }
        if (ctx->pc != 0x14F538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isCutin_0x15bd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F538u; }
        if (ctx->pc != 0x14F538u) { return; }
    }
    ctx->pc = 0x14F538u;
    // 0x14f538: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x14F538u;
    {
        const bool branch_taken_0x14f538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f538) {
            ctx->pc = 0x14F598u;
            goto label_14f598;
        }
    }
    ctx->pc = 0x14F540u;
    // 0x14f540: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x14f540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x14f544: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x14f544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x14f548: 0x2442a060  addiu       $v0, $v0, -0x5FA0
    ctx->pc = 0x14f548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942816));
    // 0x14f54c: 0x24639e60  addiu       $v1, $v1, -0x61A0
    ctx->pc = 0x14f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942304));
    // 0x14f550: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x14f550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x14f554: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x14f554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x14f558: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x14f558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x14f55c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x14f55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x14f560: 0x24429d54  addiu       $v0, $v0, -0x62AC
    ctx->pc = 0x14f560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942036));
    // 0x14f564: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14F564u;
    SET_GPR_U32(ctx, 31, 0x14F56Cu);
    ctx->pc = 0x14F568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F564u;
            // 0x14f568: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F56Cu; }
        if (ctx->pc != 0x14F56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F56Cu; }
        if (ctx->pc != 0x14F56Cu) { return; }
    }
    ctx->pc = 0x14F56Cu;
    // 0x14f56c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x14f56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x14f570: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x14f570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14f574: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14f574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f578: 0xc053d70  jal         func_14F5C0
    ctx->pc = 0x14F578u;
    SET_GPR_U32(ctx, 31, 0x14F580u);
    ctx->pc = 0x14F57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F578u;
            // 0x14f57c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F5C0u;
    if (runtime->hasFunction(0x14F5C0u)) {
        auto targetFn = runtime->lookupFunction(0x14F5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F580u; }
        if (ctx->pc != 0x14F580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x14f5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F580u; }
        if (ctx->pc != 0x14F580u) { return; }
    }
    ctx->pc = 0x14F580u;
    // 0x14f580: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x14f580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14f584: 0xc053d6c  jal         func_14F5B0
    ctx->pc = 0x14F584u;
    SET_GPR_U32(ctx, 31, 0x14F58Cu);
    ctx->pc = 0x14F588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F584u;
            // 0x14f588: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F5B0u;
    if (runtime->hasFunction(0x14F5B0u)) {
        auto targetFn = runtime->lookupFunction(0x14F5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F58Cu; }
        if (ctx->pc != 0x14F58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x14f5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F58Cu; }
        if (ctx->pc != 0x14F58Cu) { return; }
    }
    ctx->pc = 0x14F58Cu;
    // 0x14f58c: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x14F58Cu;
    SET_GPR_U32(ctx, 31, 0x14F594u);
    ctx->pc = 0x14F590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F58Cu;
            // 0x14f590: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F594u; }
        if (ctx->pc != 0x14F594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F594u; }
        if (ctx->pc != 0x14F594u) { return; }
    }
    ctx->pc = 0x14F594u;
    // 0x14f594: 0x0  nop
    ctx->pc = 0x14f594u;
    // NOP
label_14f598:
    // 0x14f598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14f598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f59c: 0x3e00008  jr          $ra
    ctx->pc = 0x14F59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F59Cu;
            // 0x14f5a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F530u: goto label_14f530;
            case 0x14F598u: goto label_14f598;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14F5A4u;
}
