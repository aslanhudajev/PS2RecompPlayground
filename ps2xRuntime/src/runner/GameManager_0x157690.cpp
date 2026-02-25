#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GameManager
// Address: 0x157690 - 0x15801c
void GameManager_0x157690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GameManager_0x157690");
#endif

    ctx->pc = 0x157690u;

    // 0x157690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x157690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x157694: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15769c: 0xac203568  sw          $zero, 0x3568($at)
    ctx->pc = 0x15769cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13672), GPR_U32(ctx, 0));
    // 0x1576a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1576a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1576a4: 0xc058868  jal         func_1621A0
    ctx->pc = 0x1576A4u;
    SET_GPR_U32(ctx, 31, 0x1576ACu);
    ctx->pc = 0x1576A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1576A4u;
            // 0x1576a8: 0xac20356c  sw          $zero, 0x356C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1621A0u;
    if (runtime->hasFunction(0x1621A0u)) {
        auto targetFn = runtime->lookupFunction(0x1621A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1576ACu; }
        if (ctx->pc != 0x1576ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bossStateGet_0x1621a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1576ACu; }
        if (ctx->pc != 0x1576ACu) { return; }
    }
    ctx->pc = 0x1576ACu;
    // 0x1576ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1576ACu;
    {
        const bool branch_taken_0x1576ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1576ac) {
            ctx->pc = 0x1576C0u;
            goto label_1576c0;
        }
    }
    ctx->pc = 0x1576B4u;
    // 0x1576b4: 0xc056058  jal         func_158160
    ctx->pc = 0x1576B4u;
    SET_GPR_U32(ctx, 31, 0x1576BCu);
    ctx->pc = 0x158160u;
    if (runtime->hasFunction(0x158160u)) {
        auto targetFn = runtime->lookupFunction(0x158160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1576BCu; }
        if (ctx->pc != 0x1576BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultDisp_0x158160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1576BCu; }
        if (ctx->pc != 0x1576BCu) { return; }
    }
    ctx->pc = 0x1576BCu;
    // 0x1576bc: 0x0  nop
    ctx->pc = 0x1576bcu;
    // NOP
label_1576c0:
    // 0x1576c0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1576c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1576c4: 0x8c239bb8  lw          $v1, -0x6448($at)
    ctx->pc = 0x1576c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941624)));
    // 0x1576c8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1576C8u;
    {
        const bool branch_taken_0x1576c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1576CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1576C8u;
            // 0x1576cc: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576c8) {
            ctx->pc = 0x1576E8u;
            goto label_1576e8;
        }
    }
    ctx->pc = 0x1576D0u;
    // 0x1576d0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1576d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1576d4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1576d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1576d8: 0xc060718  jal         func_181C60
    ctx->pc = 0x1576D8u;
    SET_GPR_U32(ctx, 31, 0x1576E0u);
    ctx->pc = 0x1576DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1576D8u;
            // 0x1576dc: 0xac229bb8  sw          $v0, -0x6448($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1576E0u; }
        if (ctx->pc != 0x1576E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1576E0u; }
        if (ctx->pc != 0x1576E0u) { return; }
    }
    ctx->pc = 0x1576E0u;
    // 0x1576e0: 0x10000229  b           . + 4 + (0x229 << 2)
    ctx->pc = 0x1576E0u;
    {
        const bool branch_taken_0x1576e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1576e0) {
            ctx->pc = 0x157F88u;
            goto label_157f88;
        }
    }
    ctx->pc = 0x1576E8u;
label_1576e8:
    // 0x1576e8: 0x461001f  bgez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1576E8u;
    {
        const bool branch_taken_0x1576e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1576ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1576E8u;
            // 0x1576ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576e8) {
            ctx->pc = 0x157768u;
            goto label_157768;
        }
    }
    ctx->pc = 0x1576F0u;
    // 0x1576f0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1576F0u;
    {
        const bool branch_taken_0x1576f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1576F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1576F0u;
            // 0x1576f4: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576f0) {
            ctx->pc = 0x157700u;
            goto label_157700;
        }
    }
    ctx->pc = 0x1576F8u;
    // 0x1576f8: 0xc05d004  jal         func_174010
    ctx->pc = 0x1576F8u;
    SET_GPR_U32(ctx, 31, 0x157700u);
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157700u; }
        if (ctx->pc != 0x157700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157700u; }
        if (ctx->pc != 0x157700u) { return; }
    }
    ctx->pc = 0x157700u;
label_157700:
    // 0x157700: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x157700u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x157704: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x157704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x157708: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x157708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15770c: 0x24c60e78  addiu       $a2, $a2, 0xE78
    ctx->pc = 0x15770cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3704));
    // 0x157710: 0xc0609c8  jal         func_182720
    ctx->pc = 0x157710u;
    SET_GPR_U32(ctx, 31, 0x157718u);
    ctx->pc = 0x157714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157710u;
            // 0x157714: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182720u;
    if (runtime->hasFunction(0x182720u)) {
        auto targetFn = runtime->lookupFunction(0x182720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157718u; }
        if (ctx->pc != 0x157718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_0x182720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157718u; }
        if (ctx->pc != 0x157718u) { return; }
    }
    ctx->pc = 0x157718u;
    // 0x157718: 0xc0606bc  jal         func_181AF0
    ctx->pc = 0x157718u;
    SET_GPR_U32(ctx, 31, 0x157720u);
    ctx->pc = 0x181AF0u;
    if (runtime->hasFunction(0x181AF0u)) {
        auto targetFn = runtime->lookupFunction(0x181AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157720u; }
        if (ctx->pc != 0x157720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderMoveFunction_0x181af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157720u; }
        if (ctx->pc != 0x157720u) { return; }
    }
    ctx->pc = 0x157720u;
    // 0x157720: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x157720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x157724: 0x8c239bb8  lw          $v1, -0x6448($at)
    ctx->pc = 0x157724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941624)));
    // 0x157728: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x157728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15772c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15772cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x157730: 0xac239bb8  sw          $v1, -0x6448($at)
    ctx->pc = 0x157730u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941624), GPR_U32(ctx, 3));
    // 0x157734: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x157734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x157738: 0x8c239bb8  lw          $v1, -0x6448($at)
    ctx->pc = 0x157738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941624)));
    // 0x15773c: 0x2861fe0c  slti        $at, $v1, -0x1F4
    ctx->pc = 0x15773cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294966796) ? 1 : 0);
    // 0x157740: 0x10200211  beqz        $at, . + 4 + (0x211 << 2)
    ctx->pc = 0x157740u;
    {
        const bool branch_taken_0x157740 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x157740) {
            ctx->pc = 0x157F88u;
            goto label_157f88;
        }
    }
    ctx->pc = 0x157748u;
    // 0x157748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15774c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15774cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157750: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x157750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157754: 0xc056584  jal         func_159610
    ctx->pc = 0x157754u;
    SET_GPR_U32(ctx, 31, 0x15775Cu);
    ctx->pc = 0x157758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157754u;
            // 0x157758: 0xac222c40  sw          $v0, 0x2C40($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159610u;
    if (runtime->hasFunction(0x159610u)) {
        auto targetFn = runtime->lookupFunction(0x159610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15775Cu; }
        if (ctx->pc != 0x15775Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setLoop_0x159610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15775Cu; }
        if (ctx->pc != 0x15775Cu) { return; }
    }
    ctx->pc = 0x15775Cu;
    // 0x15775c: 0x1000020a  b           . + 4 + (0x20A << 2)
    ctx->pc = 0x15775Cu;
    {
        const bool branch_taken_0x15775c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15775c) {
            ctx->pc = 0x157F88u;
            goto label_157f88;
        }
    }
    ctx->pc = 0x157764u;
    // 0x157764: 0x0  nop
    ctx->pc = 0x157764u;
    // NOP
label_157768:
    // 0x157768: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15776c: 0xac202c40  sw          $zero, 0x2C40($at)
    ctx->pc = 0x15776cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11328), GPR_U32(ctx, 0));
    // 0x157770: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157774: 0x8c233530  lw          $v1, 0x3530($at)
    ctx->pc = 0x157774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x157778: 0x146000a3  bnez        $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x157778u;
    {
        const bool branch_taken_0x157778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15777Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157778u;
            // 0x15777c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157778) {
            ctx->pc = 0x157A08u;
            goto label_157a08;
        }
    }
    ctx->pc = 0x157780u;
    // 0x157780: 0x8c223534  lw          $v0, 0x3534($at)
    ctx->pc = 0x157780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x157784: 0x144000a0  bnez        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x157784u;
    {
        const bool branch_taken_0x157784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157784) {
            ctx->pc = 0x157A08u;
            goto label_157a08;
        }
    }
    ctx->pc = 0x15778Cu;
    // 0x15778c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15778cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157790: 0x8c223538  lw          $v0, 0x3538($at)
    ctx->pc = 0x157790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13624)));
    // 0x157794: 0x1440009c  bnez        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x157794u;
    {
        const bool branch_taken_0x157794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157794u;
            // 0x157798: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157794) {
            ctx->pc = 0x157A08u;
            goto label_157a08;
        }
    }
    ctx->pc = 0x15779Cu;
    // 0x15779c: 0x8c22353c  lw          $v0, 0x353C($at)
    ctx->pc = 0x15779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13628)));
    // 0x1577a0: 0x14400099  bnez        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x1577A0u;
    {
        const bool branch_taken_0x1577a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1577a0) {
            ctx->pc = 0x157A08u;
            goto label_157a08;
        }
    }
    ctx->pc = 0x1577A8u;
    // 0x1577a8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1577a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1577ac: 0x8c223540  lw          $v0, 0x3540($at)
    ctx->pc = 0x1577acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13632)));
    // 0x1577b0: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x1577B0u;
    {
        const bool branch_taken_0x1577b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1577B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1577B0u;
            // 0x1577b4: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577b0) {
            ctx->pc = 0x157A08u;
            goto label_157a08;
        }
    }
    ctx->pc = 0x1577B8u;
    // 0x1577b8: 0x8c223544  lw          $v0, 0x3544($at)
    ctx->pc = 0x1577b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13636)));
    // 0x1577bc: 0x14400092  bnez        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x1577BCu;
    {
        const bool branch_taken_0x1577bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1577C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1577BCu;
            // 0x1577c0: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577bc) {
            ctx->pc = 0x157A08u;
            goto label_157a08;
        }
    }
    ctx->pc = 0x1577C4u;
    // 0x1577c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1577c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1577c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1577c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1577cc: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x1577ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1577d0: 0xac223508  sw          $v0, 0x3508($at)
    ctx->pc = 0x1577d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13576), GPR_U32(ctx, 2));
    // 0x1577d4: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x1577d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1577d8: 0x24c60e88  addiu       $a2, $a2, 0xE88
    ctx->pc = 0x1577d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3720));
    // 0x1577dc: 0xc0609c8  jal         func_182720
    ctx->pc = 0x1577DCu;
    SET_GPR_U32(ctx, 31, 0x1577E4u);
    ctx->pc = 0x1577E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1577DCu;
            // 0x1577e0: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182720u;
    if (runtime->hasFunction(0x182720u)) {
        auto targetFn = runtime->lookupFunction(0x182720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1577E4u; }
        if (ctx->pc != 0x1577E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_0x182720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1577E4u; }
        if (ctx->pc != 0x1577E4u) { return; }
    }
    ctx->pc = 0x1577E4u;
    // 0x1577e4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1577e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1577e8: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1577e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x1577ec: 0x8c239bb8  lw          $v1, -0x6448($at)
    ctx->pc = 0x1577ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941624)));
    // 0x1577f0: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x1577f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)34079u)));
    // 0x1577f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1577f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1577f8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1577f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1577fc: 0x24a50e98  addiu       $a1, $a1, 0xE98
    ctx->pc = 0x1577fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3736));
    // 0x157800: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x157800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x157804: 0x0  nop
    ctx->pc = 0x157804u;
    // NOP
    // 0x157808: 0x0  nop
    ctx->pc = 0x157808u;
    // NOP
    // 0x15780c: 0x1010  mfhi        $v0
    ctx->pc = 0x15780cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x157810: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x157810u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x157814: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x157814u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x157818: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x157818u;
    SET_GPR_U32(ctx, 31, 0x157820u);
    ctx->pc = 0x15781Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157818u;
            // 0x15781c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157820u; }
        if (ctx->pc != 0x157820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157820u; }
        if (ctx->pc != 0x157820u) { return; }
    }
    ctx->pc = 0x157820u;
    // 0x157820: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x157820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x157824: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x157824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157828: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x157828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15782c: 0xc0609c8  jal         func_182720
    ctx->pc = 0x15782Cu;
    SET_GPR_U32(ctx, 31, 0x157834u);
    ctx->pc = 0x157830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15782Cu;
            // 0x157830: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182720u;
    if (runtime->hasFunction(0x182720u)) {
        auto targetFn = runtime->lookupFunction(0x182720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157834u; }
        if (ctx->pc != 0x157834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_0x182720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157834u; }
        if (ctx->pc != 0x157834u) { return; }
    }
    ctx->pc = 0x157834u;
    // 0x157834: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157838: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x157838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x15783c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15783cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157840: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x157840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x157844: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x157844u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x157848: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x157848u;
    {
        const bool branch_taken_0x157848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15784Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157848u;
            // 0x15784c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157848) {
            ctx->pc = 0x1578A0u;
            goto label_1578a0;
        }
    }
    ctx->pc = 0x157850u;
    // 0x157850: 0x8c232410  lw          $v1, 0x2410($at)
    ctx->pc = 0x157850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9232)));
    // 0x157854: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157858: 0x8c2223a0  lw          $v0, 0x23A0($at)
    ctx->pc = 0x157858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9120)));
    // 0x15785c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x15785cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x157860: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x157860u;
    {
        const bool branch_taken_0x157860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157860) {
            ctx->pc = 0x1578A0u;
            goto label_1578a0;
        }
    }
    ctx->pc = 0x157868u;
    // 0x157868: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15786c: 0x8c232408  lw          $v1, 0x2408($at)
    ctx->pc = 0x15786cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x157870: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157874: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x157874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x157878: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x157878u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x15787c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15787Cu;
    {
        const bool branch_taken_0x15787c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15787Cu;
            // 0x157880: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15787c) {
            ctx->pc = 0x1578A0u;
            goto label_1578a0;
        }
    }
    ctx->pc = 0x157884u;
    // 0x157884: 0x8c232400  lw          $v1, 0x2400($at)
    ctx->pc = 0x157884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9216)));
    // 0x157888: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15788c: 0x8c222390  lw          $v0, 0x2390($at)
    ctx->pc = 0x15788cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
    // 0x157890: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x157890u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x157894: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x157894u;
    {
        const bool branch_taken_0x157894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157894) {
            ctx->pc = 0x157900u;
            goto label_157900;
        }
    }
    ctx->pc = 0x15789Cu;
    // 0x15789c: 0x0  nop
    ctx->pc = 0x15789cu;
    // NOP
label_1578a0:
    // 0x1578a0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1578a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1578a4: 0x8c239bb8  lw          $v1, -0x6448($at)
    ctx->pc = 0x1578a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941624)));
    // 0x1578a8: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1578a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x1578ac: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x1578acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)34079u)));
    // 0x1578b0: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1578b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1578b4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1578b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1578b8: 0x0  nop
    ctx->pc = 0x1578b8u;
    // NOP
    // 0x1578bc: 0x1010  mfhi        $v0
    ctx->pc = 0x1578bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1578c0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1578c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1578c4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1578c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1578c8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1578c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1578cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1578ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1578d0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1578d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1578d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1578d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1578d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1578d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1578dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1578dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1578e0: 0xac229bb8  sw          $v0, -0x6448($at)
    ctx->pc = 0x1578e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941624), GPR_U32(ctx, 2));
    // 0x1578e4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1578e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1578e8: 0x8c229bb8  lw          $v0, -0x6448($at)
    ctx->pc = 0x1578e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941624)));
    // 0x1578ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1578ECu;
    {
        const bool branch_taken_0x1578ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1578F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1578ECu;
            // 0x1578f0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578ec) {
            ctx->pc = 0x157900u;
            goto label_157900;
        }
    }
    ctx->pc = 0x1578F4u;
    // 0x1578f4: 0xc060718  jal         func_181C60
    ctx->pc = 0x1578F4u;
    SET_GPR_U32(ctx, 31, 0x1578FCu);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578FCu; }
        if (ctx->pc != 0x1578FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1578FCu; }
        if (ctx->pc != 0x1578FCu) { return; }
    }
    ctx->pc = 0x1578FCu;
    // 0x1578fc: 0x0  nop
    ctx->pc = 0x1578fcu;
    // NOP
label_157900:
    // 0x157900: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157904: 0x8c2223b0  lw          $v0, 0x23B0($at)
    ctx->pc = 0x157904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x157908: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x157908u;
    {
        const bool branch_taken_0x157908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15790Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157908u;
            // 0x15790c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157908) {
            ctx->pc = 0x157960u;
            goto label_157960;
        }
    }
    ctx->pc = 0x157910u;
    // 0x157910: 0x8c223540  lw          $v0, 0x3540($at)
    ctx->pc = 0x157910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13632)));
    // 0x157914: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x157914u;
    {
        const bool branch_taken_0x157914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157914) {
            ctx->pc = 0x157960u;
            goto label_157960;
        }
    }
    ctx->pc = 0x15791Cu;
    // 0x15791c: 0xc05604c  jal         func_158130
    ctx->pc = 0x15791Cu;
    SET_GPR_U32(ctx, 31, 0x157924u);
    ctx->pc = 0x158130u;
    if (runtime->hasFunction(0x158130u)) {
        auto targetFn = runtime->lookupFunction(0x158130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157924u; }
        if (ctx->pc != 0x157924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsRannyuOk_0x158130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157924u; }
        if (ctx->pc != 0x157924u) { return; }
    }
    ctx->pc = 0x157924u;
    // 0x157924: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x157924u;
    {
        const bool branch_taken_0x157924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157924u;
            // 0x157928: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157924) {
            ctx->pc = 0x157960u;
            goto label_157960;
        }
    }
    ctx->pc = 0x15792Cu;
    // 0x15792c: 0xc05d110  jal         func_174440
    ctx->pc = 0x15792Cu;
    SET_GPR_U32(ctx, 31, 0x157934u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157934u; }
        if (ctx->pc != 0x157934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157934u; }
        if (ctx->pc != 0x157934u) { return; }
    }
    ctx->pc = 0x157934u;
    // 0x157934: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157938: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15793c: 0xac202ce8  sw          $zero, 0x2CE8($at)
    ctx->pc = 0x15793cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11496), GPR_U32(ctx, 0));
    // 0x157940: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157944: 0xac223538  sw          $v0, 0x3538($at)
    ctx->pc = 0x157944u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13624), GPR_U32(ctx, 2));
    // 0x157948: 0x2402fe44  addiu       $v0, $zero, -0x1BC
    ctx->pc = 0x157948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966852));
    // 0x15794c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15794cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157950: 0xac222cd8  sw          $v0, 0x2CD8($at)
    ctx->pc = 0x157950u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11480), GPR_U32(ctx, 2));
    // 0x157954: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x157954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x157958: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15795c: 0xac222ce0  sw          $v0, 0x2CE0($at)
    ctx->pc = 0x15795cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11488), GPR_U32(ctx, 2));
label_157960:
    // 0x157960: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157964: 0x8c222340  lw          $v0, 0x2340($at)
    ctx->pc = 0x157964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x157968: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x157968u;
    {
        const bool branch_taken_0x157968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15796Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157968u;
            // 0x15796c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157968) {
            ctx->pc = 0x1579C0u;
            goto label_1579c0;
        }
    }
    ctx->pc = 0x157970u;
    // 0x157970: 0x8c223544  lw          $v0, 0x3544($at)
    ctx->pc = 0x157970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13636)));
    // 0x157974: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x157974u;
    {
        const bool branch_taken_0x157974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157974) {
            ctx->pc = 0x1579C0u;
            goto label_1579c0;
        }
    }
    ctx->pc = 0x15797Cu;
    // 0x15797c: 0xc05604c  jal         func_158130
    ctx->pc = 0x15797Cu;
    SET_GPR_U32(ctx, 31, 0x157984u);
    ctx->pc = 0x158130u;
    if (runtime->hasFunction(0x158130u)) {
        auto targetFn = runtime->lookupFunction(0x158130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157984u; }
        if (ctx->pc != 0x157984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsRannyuOk_0x158130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157984u; }
        if (ctx->pc != 0x157984u) { return; }
    }
    ctx->pc = 0x157984u;
    // 0x157984: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x157984u;
    {
        const bool branch_taken_0x157984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157984u;
            // 0x157988: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157984) {
            ctx->pc = 0x1579C0u;
            goto label_1579c0;
        }
    }
    ctx->pc = 0x15798Cu;
    // 0x15798c: 0xc05d110  jal         func_174440
    ctx->pc = 0x15798Cu;
    SET_GPR_U32(ctx, 31, 0x157994u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157994u; }
        if (ctx->pc != 0x157994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157994u; }
        if (ctx->pc != 0x157994u) { return; }
    }
    ctx->pc = 0x157994u;
    // 0x157994: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15799c: 0xac202cec  sw          $zero, 0x2CEC($at)
    ctx->pc = 0x15799cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11500), GPR_U32(ctx, 0));
    // 0x1579a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1579a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1579a4: 0xac22353c  sw          $v0, 0x353C($at)
    ctx->pc = 0x1579a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13628), GPR_U32(ctx, 2));
    // 0x1579a8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1579a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1579ac: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1579acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1579b0: 0xac222cdc  sw          $v0, 0x2CDC($at)
    ctx->pc = 0x1579b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11484), GPR_U32(ctx, 2));
    // 0x1579b4: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x1579b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x1579b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1579b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1579bc: 0xac222ce4  sw          $v0, 0x2CE4($at)
    ctx->pc = 0x1579bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11492), GPR_U32(ctx, 2));
label_1579c0:
    // 0x1579c0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1579c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1579c4: 0x8c239bb8  lw          $v1, -0x6448($at)
    ctx->pc = 0x1579c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941624)));
    // 0x1579c8: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1579c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1579cc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1579ccu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1579d0: 0x0  nop
    ctx->pc = 0x1579d0u;
    // NOP
    // 0x1579d4: 0x0  nop
    ctx->pc = 0x1579d4u;
    // NOP
    // 0x1579d8: 0x1010  mfhi        $v0
    ctx->pc = 0x1579d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1579dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1579DCu;
    {
        const bool branch_taken_0x1579dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1579E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1579DCu;
            // 0x1579e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1579dc) {
            ctx->pc = 0x1579F0u;
            goto label_1579f0;
        }
    }
    ctx->pc = 0x1579E4u;
    // 0x1579e4: 0xc05d110  jal         func_174440
    ctx->pc = 0x1579E4u;
    SET_GPR_U32(ctx, 31, 0x1579ECu);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1579ECu; }
        if (ctx->pc != 0x1579ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1579ECu; }
        if (ctx->pc != 0x1579ECu) { return; }
    }
    ctx->pc = 0x1579ECu;
    // 0x1579ec: 0x0  nop
    ctx->pc = 0x1579ecu;
    // NOP
label_1579f0:
    // 0x1579f0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1579f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1579f4: 0x8c229bb8  lw          $v0, -0x6448($at)
    ctx->pc = 0x1579f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941624)));
    // 0x1579f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1579f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1579fc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1579fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x157a00: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x157A00u;
    {
        const bool branch_taken_0x157a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157A00u;
            // 0x157a04: 0xac229bb8  sw          $v0, -0x6448($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a00) {
            ctx->pc = 0x157AD8u;
            goto label_157ad8;
        }
    }
    ctx->pc = 0x157A08u;
label_157a08:
    // 0x157a08: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x157A08u;
    {
        const bool branch_taken_0x157a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157A08u;
            // 0x157a0c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a08) {
            ctx->pc = 0x157A20u;
            goto label_157a20;
        }
    }
    ctx->pc = 0x157A10u;
    // 0x157a10: 0x8c223534  lw          $v0, 0x3534($at)
    ctx->pc = 0x157a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x157a14: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x157A14u;
    {
        const bool branch_taken_0x157a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157a14) {
            ctx->pc = 0x157A98u;
            goto label_157a98;
        }
    }
    ctx->pc = 0x157A1Cu;
    // 0x157a1c: 0x0  nop
    ctx->pc = 0x157a1cu;
    // NOP
label_157a20:
    // 0x157a20: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157a24: 0x8c223508  lw          $v0, 0x3508($at)
    ctx->pc = 0x157a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x157a28: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x157A28u;
    {
        const bool branch_taken_0x157a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157A28u;
            // 0x157a2c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a28) {
            ctx->pc = 0x157AD8u;
            goto label_157ad8;
        }
    }
    ctx->pc = 0x157A30u;
    // 0x157a30: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x157a30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x157a34: 0x8c232cd0  lw          $v1, 0x2CD0($at)
    ctx->pc = 0x157a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11472)));
    // 0x157a38: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x157a38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x157a3c: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x157a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x157a40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x157a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a44: 0x24c60ea0  addiu       $a2, $a2, 0xEA0
    ctx->pc = 0x157a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3744));
    // 0x157a48: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x157a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x157a4c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x157a4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a50: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x157a50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a54: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x157a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x157a58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157a5c: 0xc060940  jal         func_182500
    ctx->pc = 0x157A5Cu;
    SET_GPR_U32(ctx, 31, 0x157A64u);
    ctx->pc = 0x157A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157A5Cu;
            // 0x157a60: 0x25840  sll         $t3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A64u; }
        if (ctx->pc != 0x157A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A64u; }
        if (ctx->pc != 0x157A64u) { return; }
    }
    ctx->pc = 0x157A64u;
    // 0x157a64: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157a68: 0x8c222cd0  lw          $v0, 0x2CD0($at)
    ctx->pc = 0x157a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11472)));
    // 0x157a6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x157a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x157a70: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157a74: 0xac222cd0  sw          $v0, 0x2CD0($at)
    ctx->pc = 0x157a74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11472), GPR_U32(ctx, 2));
    // 0x157a78: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157a7c: 0x8c222cd0  lw          $v0, 0x2CD0($at)
    ctx->pc = 0x157a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11472)));
    // 0x157a80: 0x28410015  slti        $at, $v0, 0x15
    ctx->pc = 0x157a80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x157a84: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x157A84u;
    {
        const bool branch_taken_0x157a84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x157A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157A84u;
            // 0x157a88: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a84) {
            ctx->pc = 0x157AD8u;
            goto label_157ad8;
        }
    }
    ctx->pc = 0x157A8Cu;
    // 0x157a8c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157a90: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x157A90u;
    {
        const bool branch_taken_0x157a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157A90u;
            // 0x157a94: 0xac222cd0  sw          $v0, 0x2CD0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a90) {
            ctx->pc = 0x157AD8u;
            goto label_157ad8;
        }
    }
    ctx->pc = 0x157A98u;
label_157a98:
    // 0x157a98: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157a9c: 0x8c223508  lw          $v0, 0x3508($at)
    ctx->pc = 0x157a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x157aa0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x157AA0u;
    {
        const bool branch_taken_0x157aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157AA0u;
            // 0x157aa4: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157aa0) {
            ctx->pc = 0x157AD8u;
            goto label_157ad8;
        }
    }
    ctx->pc = 0x157AA8u;
    // 0x157aa8: 0x8c222cd0  lw          $v0, 0x2CD0($at)
    ctx->pc = 0x157aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11472)));
    // 0x157aac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x157aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x157ab0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157ab4: 0xac222cd0  sw          $v0, 0x2CD0($at)
    ctx->pc = 0x157ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11472), GPR_U32(ctx, 2));
    // 0x157ab8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157abc: 0x8c222cd0  lw          $v0, 0x2CD0($at)
    ctx->pc = 0x157abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11472)));
    // 0x157ac0: 0x28410015  slti        $at, $v0, 0x15
    ctx->pc = 0x157ac0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x157ac4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x157AC4u;
    {
        const bool branch_taken_0x157ac4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x157AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157AC4u;
            // 0x157ac8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ac4) {
            ctx->pc = 0x157AD8u;
            goto label_157ad8;
        }
    }
    ctx->pc = 0x157ACCu;
    // 0x157acc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157ad0: 0xac222cd0  sw          $v0, 0x2CD0($at)
    ctx->pc = 0x157ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11472), GPR_U32(ctx, 2));
    // 0x157ad4: 0x0  nop
    ctx->pc = 0x157ad4u;
    // NOP
label_157ad8:
    // 0x157ad8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157adc: 0x8c223540  lw          $v0, 0x3540($at)
    ctx->pc = 0x157adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13632)));
    // 0x157ae0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157AE0u;
    {
        const bool branch_taken_0x157ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157AE0u;
            // 0x157ae4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ae0) {
            ctx->pc = 0x157AF0u;
            goto label_157af0;
        }
    }
    ctx->pc = 0x157AE8u;
    // 0x157ae8: 0xc065e08  jal         func_197820
    ctx->pc = 0x157AE8u;
    SET_GPR_U32(ctx, 31, 0x157AF0u);
    ctx->pc = 0x197820u;
    if (runtime->hasFunction(0x197820u)) {
        auto targetFn = runtime->lookupFunction(0x197820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157AF0u; }
        if (ctx->pc != 0x157AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NameEntry_0x197820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157AF0u; }
        if (ctx->pc != 0x157AF0u) { return; }
    }
    ctx->pc = 0x157AF0u;
label_157af0:
    // 0x157af0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157af4: 0x8c223544  lw          $v0, 0x3544($at)
    ctx->pc = 0x157af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13636)));
    // 0x157af8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157AF8u;
    {
        const bool branch_taken_0x157af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157AF8u;
            // 0x157afc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157af8) {
            ctx->pc = 0x157B08u;
            goto label_157b08;
        }
    }
    ctx->pc = 0x157B00u;
    // 0x157b00: 0xc065e08  jal         func_197820
    ctx->pc = 0x157B00u;
    SET_GPR_U32(ctx, 31, 0x157B08u);
    ctx->pc = 0x197820u;
    if (runtime->hasFunction(0x197820u)) {
        auto targetFn = runtime->lookupFunction(0x197820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B08u; }
        if (ctx->pc != 0x157B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NameEntry_0x197820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B08u; }
        if (ctx->pc != 0x157B08u) { return; }
    }
    ctx->pc = 0x157B08u;
label_157b08:
    // 0x157b08: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157b0c: 0x8c223538  lw          $v0, 0x3538($at)
    ctx->pc = 0x157b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13624)));
    // 0x157b10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157B10u;
    {
        const bool branch_taken_0x157b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157B10u;
            // 0x157b14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b10) {
            ctx->pc = 0x157B20u;
            goto label_157b20;
        }
    }
    ctx->pc = 0x157B18u;
    // 0x157b18: 0xc056588  jal         func_159620
    ctx->pc = 0x157B18u;
    SET_GPR_U32(ctx, 31, 0x157B20u);
    ctx->pc = 0x159620u;
    if (runtime->hasFunction(0x159620u)) {
        auto targetFn = runtime->lookupFunction(0x159620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B20u; }
        if (ctx->pc != 0x157B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        gameCharasel_0x159620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B20u; }
        if (ctx->pc != 0x157B20u) { return; }
    }
    ctx->pc = 0x157B20u;
label_157b20:
    // 0x157b20: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157b24: 0x8c22353c  lw          $v0, 0x353C($at)
    ctx->pc = 0x157b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13628)));
    // 0x157b28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157B28u;
    {
        const bool branch_taken_0x157b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157B28u;
            // 0x157b2c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b28) {
            ctx->pc = 0x157B38u;
            goto label_157b38;
        }
    }
    ctx->pc = 0x157B30u;
    // 0x157b30: 0xc056588  jal         func_159620
    ctx->pc = 0x157B30u;
    SET_GPR_U32(ctx, 31, 0x157B38u);
    ctx->pc = 0x159620u;
    if (runtime->hasFunction(0x159620u)) {
        auto targetFn = runtime->lookupFunction(0x159620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B38u; }
        if (ctx->pc != 0x157B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        gameCharasel_0x159620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B38u; }
        if (ctx->pc != 0x157B38u) { return; }
    }
    ctx->pc = 0x157B38u;
label_157b38:
    // 0x157b38: 0xc05604c  jal         func_158130
    ctx->pc = 0x157B38u;
    SET_GPR_U32(ctx, 31, 0x157B40u);
    ctx->pc = 0x158130u;
    if (runtime->hasFunction(0x158130u)) {
        auto targetFn = runtime->lookupFunction(0x158130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B40u; }
        if (ctx->pc != 0x157B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsRannyuOk_0x158130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B40u; }
        if (ctx->pc != 0x157B40u) { return; }
    }
    ctx->pc = 0x157B40u;
    // 0x157b40: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x157B40u;
    {
        const bool branch_taken_0x157b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157B40u;
            // 0x157b44: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b40) {
            ctx->pc = 0x157C80u;
            goto label_157c80;
        }
    }
    ctx->pc = 0x157B48u;
    // 0x157b48: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x157b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x157b4c: 0x8c242c78  lw          $a0, 0x2C78($at)
    ctx->pc = 0x157b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11384)));
    // 0x157b50: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157b54: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x157b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x157b58: 0x8c253538  lw          $a1, 0x3538($at)
    ctx->pc = 0x157b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13624)));
    // 0x157b5c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157b60: 0xac242c78  sw          $a0, 0x2C78($at)
    ctx->pc = 0x157b60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11384), GPR_U32(ctx, 4));
    // 0x157b64: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157b68: 0x8c242c78  lw          $a0, 0x2C78($at)
    ctx->pc = 0x157b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11384)));
    // 0x157b6c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x157b6cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x157b70: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157b74: 0x0  nop
    ctx->pc = 0x157b74u;
    // NOP
    // 0x157b78: 0x1810  mfhi        $v1
    ctx->pc = 0x157b78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x157b7c: 0x14a00070  bnez        $a1, . + 4 + (0x70 << 2)
    ctx->pc = 0x157B7Cu;
    {
        const bool branch_taken_0x157b7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x157B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157B7Cu;
            // 0x157b80: 0xac232c78  sw          $v1, 0x2C78($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b7c) {
            ctx->pc = 0x157D40u;
            goto label_157d40;
        }
    }
    ctx->pc = 0x157B84u;
    // 0x157b84: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157b88: 0x8c233540  lw          $v1, 0x3540($at)
    ctx->pc = 0x157b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13632)));
    // 0x157b8c: 0x1460006c  bnez        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x157B8Cu;
    {
        const bool branch_taken_0x157b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157B8Cu;
            // 0x157b90: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b8c) {
            ctx->pc = 0x157D40u;
            goto label_157d40;
        }
    }
    ctx->pc = 0x157B94u;
    // 0x157b94: 0x8c242c78  lw          $a0, 0x2C78($at)
    ctx->pc = 0x157b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11384)));
    // 0x157b98: 0x2c81003c  sltiu       $at, $a0, 0x3C
    ctx->pc = 0x157b98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x157b9c: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x157B9Cu;
    {
        const bool branch_taken_0x157b9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x157b9c) {
            ctx->pc = 0x157C08u;
            goto label_157c08;
        }
    }
    ctx->pc = 0x157BA4u;
    // 0x157ba4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157ba8: 0x8c233530  lw          $v1, 0x3530($at)
    ctx->pc = 0x157ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x157bac: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x157BACu;
    {
        const bool branch_taken_0x157bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x157bac) {
            ctx->pc = 0x157BD0u;
            goto label_157bd0;
        }
    }
    ctx->pc = 0x157BB4u;
    // 0x157bb4: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x157BB4u;
    {
        const bool branch_taken_0x157bb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x157BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157BB4u;
            // 0x157bb8: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bb4) {
            ctx->pc = 0x157BD0u;
            goto label_157bd0;
        }
    }
    ctx->pc = 0x157BBCu;
    // 0x157bbc: 0x2404ffe9  addiu       $a0, $zero, -0x17
    ctx->pc = 0x157bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967273));
    // 0x157bc0: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x157bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x157bc4: 0x24c60eb0  addiu       $a2, $a2, 0xEB0
    ctx->pc = 0x157bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3760));
    // 0x157bc8: 0xc060a44  jal         func_182910
    ctx->pc = 0x157BC8u;
    SET_GPR_U32(ctx, 31, 0x157BD0u);
    ctx->pc = 0x157BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157BC8u;
            // 0x157bcc: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157BD0u; }
        if (ctx->pc != 0x157BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157BD0u; }
        if (ctx->pc != 0x157BD0u) { return; }
    }
    ctx->pc = 0x157BD0u;
label_157bd0:
    // 0x157bd0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157bd4: 0x8c233534  lw          $v1, 0x3534($at)
    ctx->pc = 0x157bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x157bd8: 0x14600059  bnez        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x157BD8u;
    {
        const bool branch_taken_0x157bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157BD8u;
            // 0x157bdc: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bd8) {
            ctx->pc = 0x157D40u;
            goto label_157d40;
        }
    }
    ctx->pc = 0x157BE0u;
    // 0x157be0: 0x8c23353c  lw          $v1, 0x353C($at)
    ctx->pc = 0x157be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13628)));
    // 0x157be4: 0x14600056  bnez        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x157BE4u;
    {
        const bool branch_taken_0x157be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157BE4u;
            // 0x157be8: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157be4) {
            ctx->pc = 0x157D40u;
            goto label_157d40;
        }
    }
    ctx->pc = 0x157BECu;
    // 0x157bec: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x157becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x157bf0: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x157bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x157bf4: 0x24c60eb0  addiu       $a2, $a2, 0xEB0
    ctx->pc = 0x157bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3760));
    // 0x157bf8: 0xc060a44  jal         func_182910
    ctx->pc = 0x157BF8u;
    SET_GPR_U32(ctx, 31, 0x157C00u);
    ctx->pc = 0x157BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157BF8u;
            // 0x157bfc: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C00u; }
        if (ctx->pc != 0x157C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C00u; }
        if (ctx->pc != 0x157C00u) { return; }
    }
    ctx->pc = 0x157C00u;
    // 0x157c00: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x157C00u;
    {
        const bool branch_taken_0x157c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157c00) {
            ctx->pc = 0x157D40u;
            goto label_157d40;
        }
    }
    ctx->pc = 0x157C08u;
label_157c08:
    // 0x157c08: 0x2c830078  sltiu       $v1, $a0, 0x78
    ctx->pc = 0x157c08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)120) ? 1 : 0);
    // 0x157c0c: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x157C0Cu;
    {
        const bool branch_taken_0x157c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157C0Cu;
            // 0x157c10: 0x2c8100b4  sltiu       $at, $a0, 0xB4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)180) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c0c) {
            ctx->pc = 0x157D40u;
            goto label_157d40;
        }
    }
    ctx->pc = 0x157C14u;
    // 0x157c14: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x157C14u;
    {
        const bool branch_taken_0x157c14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x157c14) {
            ctx->pc = 0x157D40u;
            goto label_157d40;
        }
    }
    ctx->pc = 0x157C1Cu;
    // 0x157c1c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157c20: 0x8c233530  lw          $v1, 0x3530($at)
    ctx->pc = 0x157c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x157c24: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x157C24u;
    {
        const bool branch_taken_0x157c24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x157c24) {
            ctx->pc = 0x157C48u;
            goto label_157c48;
        }
    }
    ctx->pc = 0x157C2Cu;
    // 0x157c2c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x157C2Cu;
    {
        const bool branch_taken_0x157c2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x157C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157C2Cu;
            // 0x157c30: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c2c) {
            ctx->pc = 0x157C48u;
            goto label_157c48;
        }
    }
    ctx->pc = 0x157C34u;
    // 0x157c34: 0x2404ffe9  addiu       $a0, $zero, -0x17
    ctx->pc = 0x157c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967273));
    // 0x157c38: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x157c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x157c3c: 0x24c60ed0  addiu       $a2, $a2, 0xED0
    ctx->pc = 0x157c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3792));
    // 0x157c40: 0xc060a44  jal         func_182910
    ctx->pc = 0x157C40u;
    SET_GPR_U32(ctx, 31, 0x157C48u);
    ctx->pc = 0x157C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157C40u;
            // 0x157c44: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C48u; }
        if (ctx->pc != 0x157C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C48u; }
        if (ctx->pc != 0x157C48u) { return; }
    }
    ctx->pc = 0x157C48u;
label_157c48:
    // 0x157c48: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157c4c: 0x8c233534  lw          $v1, 0x3534($at)
    ctx->pc = 0x157c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x157c50: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x157C50u;
    {
        const bool branch_taken_0x157c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157C50u;
            // 0x157c54: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c50) {
            ctx->pc = 0x157D40u;
            goto label_157d40;
        }
    }
    ctx->pc = 0x157C58u;
    // 0x157c58: 0x8c23353c  lw          $v1, 0x353C($at)
    ctx->pc = 0x157c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13628)));
    // 0x157c5c: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x157C5Cu;
    {
        const bool branch_taken_0x157c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157C5Cu;
            // 0x157c60: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c5c) {
            ctx->pc = 0x157D40u;
            goto label_157d40;
        }
    }
    ctx->pc = 0x157C64u;
    // 0x157c64: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x157c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x157c68: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x157c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x157c6c: 0x24c60ed0  addiu       $a2, $a2, 0xED0
    ctx->pc = 0x157c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3792));
    // 0x157c70: 0xc060a44  jal         func_182910
    ctx->pc = 0x157C70u;
    SET_GPR_U32(ctx, 31, 0x157C78u);
    ctx->pc = 0x157C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157C70u;
            // 0x157c74: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C78u; }
        if (ctx->pc != 0x157C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C78u; }
        if (ctx->pc != 0x157C78u) { return; }
    }
    ctx->pc = 0x157C78u;
    // 0x157c78: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x157C78u;
    {
        const bool branch_taken_0x157c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157c78) {
            ctx->pc = 0x157D40u;
            goto label_157d40;
        }
    }
    ctx->pc = 0x157C80u;
label_157c80:
    // 0x157c80: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157c84: 0x8c242c78  lw          $a0, 0x2C78($at)
    ctx->pc = 0x157c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11384)));
    // 0x157c88: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x157c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x157c8c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157c90: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x157c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x157c94: 0x8c253538  lw          $a1, 0x3538($at)
    ctx->pc = 0x157c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13624)));
    // 0x157c98: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157c9c: 0xac242c78  sw          $a0, 0x2C78($at)
    ctx->pc = 0x157c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11384), GPR_U32(ctx, 4));
    // 0x157ca0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157ca4: 0x8c242c78  lw          $a0, 0x2C78($at)
    ctx->pc = 0x157ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11384)));
    // 0x157ca8: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x157ca8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x157cac: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157cb0: 0x0  nop
    ctx->pc = 0x157cb0u;
    // NOP
    // 0x157cb4: 0x1810  mfhi        $v1
    ctx->pc = 0x157cb4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x157cb8: 0x14a00021  bnez        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x157CB8u;
    {
        const bool branch_taken_0x157cb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x157CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157CB8u;
            // 0x157cbc: 0xac232c78  sw          $v1, 0x2C78($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157cb8) {
            ctx->pc = 0x157D40u;
            goto label_157d40;
        }
    }
    ctx->pc = 0x157CC0u;
    // 0x157cc0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157cc4: 0x8c233540  lw          $v1, 0x3540($at)
    ctx->pc = 0x157cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13632)));
    // 0x157cc8: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x157CC8u;
    {
        const bool branch_taken_0x157cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157CC8u;
            // 0x157ccc: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157cc8) {
            ctx->pc = 0x157D40u;
            goto label_157d40;
        }
    }
    ctx->pc = 0x157CD0u;
    // 0x157cd0: 0x8c232c78  lw          $v1, 0x2C78($at)
    ctx->pc = 0x157cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11384)));
    // 0x157cd4: 0x2c61003c  sltiu       $at, $v1, 0x3C
    ctx->pc = 0x157cd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x157cd8: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x157CD8u;
    {
        const bool branch_taken_0x157cd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x157cd8) {
            ctx->pc = 0x157D40u;
            goto label_157d40;
        }
    }
    ctx->pc = 0x157CE0u;
    // 0x157ce0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157ce4: 0x8c233530  lw          $v1, 0x3530($at)
    ctx->pc = 0x157ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x157ce8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x157CE8u;
    {
        const bool branch_taken_0x157ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x157ce8) {
            ctx->pc = 0x157D10u;
            goto label_157d10;
        }
    }
    ctx->pc = 0x157CF0u;
    // 0x157cf0: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x157CF0u;
    {
        const bool branch_taken_0x157cf0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x157CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157CF0u;
            // 0x157cf4: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157cf0) {
            ctx->pc = 0x157D10u;
            goto label_157d10;
        }
    }
    ctx->pc = 0x157CF8u;
    // 0x157cf8: 0x2404ffe9  addiu       $a0, $zero, -0x17
    ctx->pc = 0x157cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967273));
    // 0x157cfc: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x157cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x157d00: 0x24c60ef0  addiu       $a2, $a2, 0xEF0
    ctx->pc = 0x157d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3824));
    // 0x157d04: 0xc060a44  jal         func_182910
    ctx->pc = 0x157D04u;
    SET_GPR_U32(ctx, 31, 0x157D0Cu);
    ctx->pc = 0x157D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157D04u;
            // 0x157d08: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D0Cu; }
        if (ctx->pc != 0x157D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D0Cu; }
        if (ctx->pc != 0x157D0Cu) { return; }
    }
    ctx->pc = 0x157D0Cu;
    // 0x157d0c: 0x0  nop
    ctx->pc = 0x157d0cu;
    // NOP
label_157d10:
    // 0x157d10: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157d14: 0x8c233534  lw          $v1, 0x3534($at)
    ctx->pc = 0x157d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x157d18: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x157D18u;
    {
        const bool branch_taken_0x157d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157D18u;
            // 0x157d1c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d18) {
            ctx->pc = 0x157D40u;
            goto label_157d40;
        }
    }
    ctx->pc = 0x157D20u;
    // 0x157d20: 0x8c23353c  lw          $v1, 0x353C($at)
    ctx->pc = 0x157d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13628)));
    // 0x157d24: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x157D24u;
    {
        const bool branch_taken_0x157d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157D24u;
            // 0x157d28: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d24) {
            ctx->pc = 0x157D40u;
            goto label_157d40;
        }
    }
    ctx->pc = 0x157D2Cu;
    // 0x157d2c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x157d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x157d30: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x157d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x157d34: 0x24c60ef0  addiu       $a2, $a2, 0xEF0
    ctx->pc = 0x157d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3824));
    // 0x157d38: 0xc060a44  jal         func_182910
    ctx->pc = 0x157D38u;
    SET_GPR_U32(ctx, 31, 0x157D40u);
    ctx->pc = 0x157D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157D38u;
            // 0x157d3c: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D40u; }
        if (ctx->pc != 0x157D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D40u; }
        if (ctx->pc != 0x157D40u) { return; }
    }
    ctx->pc = 0x157D40u;
label_157d40:
    // 0x157d40: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157d44: 0x8c243530  lw          $a0, 0x3530($at)
    ctx->pc = 0x157d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x157d48: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x157D48u;
    {
        const bool branch_taken_0x157d48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x157D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157D48u;
            // 0x157d4c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d48) {
            ctx->pc = 0x157D68u;
            goto label_157d68;
        }
    }
    ctx->pc = 0x157D50u;
    // 0x157d50: 0x8c233534  lw          $v1, 0x3534($at)
    ctx->pc = 0x157d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x157d54: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x157D54u;
    {
        const bool branch_taken_0x157d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157D54u;
            // 0x157d58: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d54) {
            ctx->pc = 0x157D68u;
            goto label_157d68;
        }
    }
    ctx->pc = 0x157D5Cu;
    // 0x157d5c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157d60: 0xac233508  sw          $v1, 0x3508($at)
    ctx->pc = 0x157d60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13576), GPR_U32(ctx, 3));
    // 0x157d64: 0x0  nop
    ctx->pc = 0x157d64u;
    // NOP
label_157d68:
    // 0x157d68: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157d6c: 0x8c2323b0  lw          $v1, 0x23B0($at)
    ctx->pc = 0x157d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x157d70: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x157D70u;
    {
        const bool branch_taken_0x157d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x157d70) {
            ctx->pc = 0x157DE8u;
            goto label_157de8;
        }
    }
    ctx->pc = 0x157D78u;
    // 0x157d78: 0x1480001b  bnez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x157D78u;
    {
        const bool branch_taken_0x157d78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x157D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157D78u;
            // 0x157d7c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d78) {
            ctx->pc = 0x157DE8u;
            goto label_157de8;
        }
    }
    ctx->pc = 0x157D80u;
    // 0x157d80: 0x8c233538  lw          $v1, 0x3538($at)
    ctx->pc = 0x157d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13624)));
    // 0x157d84: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x157D84u;
    {
        const bool branch_taken_0x157d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x157d84) {
            ctx->pc = 0x157DE8u;
            goto label_157de8;
        }
    }
    ctx->pc = 0x157D8Cu;
    // 0x157d8c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157d90: 0x8c233540  lw          $v1, 0x3540($at)
    ctx->pc = 0x157d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13632)));
    // 0x157d94: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x157D94u;
    {
        const bool branch_taken_0x157d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x157d94) {
            ctx->pc = 0x157DE8u;
            goto label_157de8;
        }
    }
    ctx->pc = 0x157D9Cu;
    // 0x157d9c: 0xc05604c  jal         func_158130
    ctx->pc = 0x157D9Cu;
    SET_GPR_U32(ctx, 31, 0x157DA4u);
    ctx->pc = 0x158130u;
    if (runtime->hasFunction(0x158130u)) {
        auto targetFn = runtime->lookupFunction(0x158130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157DA4u; }
        if (ctx->pc != 0x157DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsRannyuOk_0x158130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157DA4u; }
        if (ctx->pc != 0x157DA4u) { return; }
    }
    ctx->pc = 0x157DA4u;
    // 0x157da4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x157DA4u;
    {
        const bool branch_taken_0x157da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157DA4u;
            // 0x157da8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157da4) {
            ctx->pc = 0x157DE8u;
            goto label_157de8;
        }
    }
    ctx->pc = 0x157DACu;
    // 0x157dac: 0xc05d110  jal         func_174440
    ctx->pc = 0x157DACu;
    SET_GPR_U32(ctx, 31, 0x157DB4u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157DB4u; }
        if (ctx->pc != 0x157DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157DB4u; }
        if (ctx->pc != 0x157DB4u) { return; }
    }
    ctx->pc = 0x157DB4u;
    // 0x157db4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157db8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157dbc: 0xac202ce8  sw          $zero, 0x2CE8($at)
    ctx->pc = 0x157dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11496), GPR_U32(ctx, 0));
    // 0x157dc0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157dc4: 0xac233538  sw          $v1, 0x3538($at)
    ctx->pc = 0x157dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13624), GPR_U32(ctx, 3));
    // 0x157dc8: 0x2403fe44  addiu       $v1, $zero, -0x1BC
    ctx->pc = 0x157dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966852));
    // 0x157dcc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157dd0: 0xac232cd8  sw          $v1, 0x2CD8($at)
    ctx->pc = 0x157dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11480), GPR_U32(ctx, 3));
    // 0x157dd4: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x157dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x157dd8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157ddc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x157DDCu;
    {
        const bool branch_taken_0x157ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157DDCu;
            // 0x157de0: 0xac232ce0  sw          $v1, 0x2CE0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11488), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ddc) {
            ctx->pc = 0x157E78u;
            goto label_157e78;
        }
    }
    ctx->pc = 0x157DE4u;
    // 0x157de4: 0x0  nop
    ctx->pc = 0x157de4u;
    // NOP
label_157de8:
    // 0x157de8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157dec: 0x8c2323b0  lw          $v1, 0x23B0($at)
    ctx->pc = 0x157decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x157df0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x157DF0u;
    {
        const bool branch_taken_0x157df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157DF0u;
            // 0x157df4: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157df0) {
            ctx->pc = 0x157E40u;
            goto label_157e40;
        }
    }
    ctx->pc = 0x157DF8u;
    // 0x157df8: 0x8c233530  lw          $v1, 0x3530($at)
    ctx->pc = 0x157df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x157dfc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x157DFCu;
    {
        const bool branch_taken_0x157dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x157dfc) {
            ctx->pc = 0x157E40u;
            goto label_157e40;
        }
    }
    ctx->pc = 0x157E04u;
    // 0x157e04: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157e08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157e0c: 0x8c243508  lw          $a0, 0x3508($at)
    ctx->pc = 0x157e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x157e10: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x157E10u;
    {
        const bool branch_taken_0x157e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x157e10) {
            ctx->pc = 0x157E40u;
            goto label_157e40;
        }
    }
    ctx->pc = 0x157E18u;
    // 0x157e18: 0xc05604c  jal         func_158130
    ctx->pc = 0x157E18u;
    SET_GPR_U32(ctx, 31, 0x157E20u);
    ctx->pc = 0x158130u;
    if (runtime->hasFunction(0x158130u)) {
        auto targetFn = runtime->lookupFunction(0x158130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157E20u; }
        if (ctx->pc != 0x157E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsRannyuOk_0x158130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157E20u; }
        if (ctx->pc != 0x157E20u) { return; }
    }
    ctx->pc = 0x157E20u;
    // 0x157e20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x157E20u;
    {
        const bool branch_taken_0x157e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E20u;
            // 0x157e24: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e20) {
            ctx->pc = 0x157E40u;
            goto label_157e40;
        }
    }
    ctx->pc = 0x157E28u;
    // 0x157e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157e2c: 0xac202cd0  sw          $zero, 0x2CD0($at)
    ctx->pc = 0x157e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11472), GPR_U32(ctx, 0));
    // 0x157e30: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157e34: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x157E34u;
    {
        const bool branch_taken_0x157e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E34u;
            // 0x157e38: 0xac233508  sw          $v1, 0x3508($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13576), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e34) {
            ctx->pc = 0x157E78u;
            goto label_157e78;
        }
    }
    ctx->pc = 0x157E3Cu;
    // 0x157e3c: 0x0  nop
    ctx->pc = 0x157e3cu;
    // NOP
label_157e40:
    // 0x157e40: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157e44: 0x8c2323b0  lw          $v1, 0x23B0($at)
    ctx->pc = 0x157e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x157e48: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x157E48u;
    {
        const bool branch_taken_0x157e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E48u;
            // 0x157e4c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e48) {
            ctx->pc = 0x157E78u;
            goto label_157e78;
        }
    }
    ctx->pc = 0x157E50u;
    // 0x157e50: 0x8c233530  lw          $v1, 0x3530($at)
    ctx->pc = 0x157e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x157e54: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x157E54u;
    {
        const bool branch_taken_0x157e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x157e54) {
            ctx->pc = 0x157E78u;
            goto label_157e78;
        }
    }
    ctx->pc = 0x157E5Cu;
    // 0x157e5c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157e60: 0x8c232cd0  lw          $v1, 0x2CD0($at)
    ctx->pc = 0x157e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11472)));
    // 0x157e64: 0x28630014  slti        $v1, $v1, 0x14
    ctx->pc = 0x157e64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x157e68: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x157E68u;
    {
        const bool branch_taken_0x157e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E68u;
            // 0x157e6c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e68) {
            ctx->pc = 0x157E78u;
            goto label_157e78;
        }
    }
    ctx->pc = 0x157E70u;
    // 0x157e70: 0xac203508  sw          $zero, 0x3508($at)
    ctx->pc = 0x157e70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13576), GPR_U32(ctx, 0));
    // 0x157e74: 0x0  nop
    ctx->pc = 0x157e74u;
    // NOP
label_157e78:
    // 0x157e78: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157e7c: 0x8c232340  lw          $v1, 0x2340($at)
    ctx->pc = 0x157e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x157e80: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x157E80u;
    {
        const bool branch_taken_0x157e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E80u;
            // 0x157e84: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e80) {
            ctx->pc = 0x157EF8u;
            goto label_157ef8;
        }
    }
    ctx->pc = 0x157E88u;
    // 0x157e88: 0x8c233534  lw          $v1, 0x3534($at)
    ctx->pc = 0x157e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x157e8c: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x157E8Cu;
    {
        const bool branch_taken_0x157e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x157e8c) {
            ctx->pc = 0x157EF8u;
            goto label_157ef8;
        }
    }
    ctx->pc = 0x157E94u;
    // 0x157e94: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157e98: 0x8c23353c  lw          $v1, 0x353C($at)
    ctx->pc = 0x157e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13628)));
    // 0x157e9c: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x157E9Cu;
    {
        const bool branch_taken_0x157e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E9Cu;
            // 0x157ea0: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e9c) {
            ctx->pc = 0x157EF8u;
            goto label_157ef8;
        }
    }
    ctx->pc = 0x157EA4u;
    // 0x157ea4: 0x8c233544  lw          $v1, 0x3544($at)
    ctx->pc = 0x157ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13636)));
    // 0x157ea8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x157EA8u;
    {
        const bool branch_taken_0x157ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x157ea8) {
            ctx->pc = 0x157EF8u;
            goto label_157ef8;
        }
    }
    ctx->pc = 0x157EB0u;
    // 0x157eb0: 0xc05604c  jal         func_158130
    ctx->pc = 0x157EB0u;
    SET_GPR_U32(ctx, 31, 0x157EB8u);
    ctx->pc = 0x158130u;
    if (runtime->hasFunction(0x158130u)) {
        auto targetFn = runtime->lookupFunction(0x158130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157EB8u; }
        if (ctx->pc != 0x157EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsRannyuOk_0x158130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157EB8u; }
        if (ctx->pc != 0x157EB8u) { return; }
    }
    ctx->pc = 0x157EB8u;
    // 0x157eb8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x157EB8u;
    {
        const bool branch_taken_0x157eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157EB8u;
            // 0x157ebc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157eb8) {
            ctx->pc = 0x157EF8u;
            goto label_157ef8;
        }
    }
    ctx->pc = 0x157EC0u;
    // 0x157ec0: 0xc05d110  jal         func_174440
    ctx->pc = 0x157EC0u;
    SET_GPR_U32(ctx, 31, 0x157EC8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157EC8u; }
        if (ctx->pc != 0x157EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157EC8u; }
        if (ctx->pc != 0x157EC8u) { return; }
    }
    ctx->pc = 0x157EC8u;
    // 0x157ec8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157ecc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157ed0: 0xac202cec  sw          $zero, 0x2CEC($at)
    ctx->pc = 0x157ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11500), GPR_U32(ctx, 0));
    // 0x157ed4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157ed8: 0xac23353c  sw          $v1, 0x353C($at)
    ctx->pc = 0x157ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13628), GPR_U32(ctx, 3));
    // 0x157edc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x157edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x157ee0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157ee4: 0xac232cdc  sw          $v1, 0x2CDC($at)
    ctx->pc = 0x157ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11484), GPR_U32(ctx, 3));
    // 0x157ee8: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x157ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x157eec: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157ef0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x157EF0u;
    {
        const bool branch_taken_0x157ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157EF0u;
            // 0x157ef4: 0xac232ce4  sw          $v1, 0x2CE4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11492), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ef0) {
            ctx->pc = 0x157F88u;
            goto label_157f88;
        }
    }
    ctx->pc = 0x157EF8u;
label_157ef8:
    // 0x157ef8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157efc: 0x8c232340  lw          $v1, 0x2340($at)
    ctx->pc = 0x157efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x157f00: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x157F00u;
    {
        const bool branch_taken_0x157f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157F00u;
            // 0x157f04: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f00) {
            ctx->pc = 0x157F50u;
            goto label_157f50;
        }
    }
    ctx->pc = 0x157F08u;
    // 0x157f08: 0x8c233534  lw          $v1, 0x3534($at)
    ctx->pc = 0x157f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x157f0c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x157F0Cu;
    {
        const bool branch_taken_0x157f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f0c) {
            ctx->pc = 0x157F50u;
            goto label_157f50;
        }
    }
    ctx->pc = 0x157F14u;
    // 0x157f14: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157f18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157f1c: 0x8c243508  lw          $a0, 0x3508($at)
    ctx->pc = 0x157f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x157f20: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x157F20u;
    {
        const bool branch_taken_0x157f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x157f20) {
            ctx->pc = 0x157F50u;
            goto label_157f50;
        }
    }
    ctx->pc = 0x157F28u;
    // 0x157f28: 0xc05604c  jal         func_158130
    ctx->pc = 0x157F28u;
    SET_GPR_U32(ctx, 31, 0x157F30u);
    ctx->pc = 0x158130u;
    if (runtime->hasFunction(0x158130u)) {
        auto targetFn = runtime->lookupFunction(0x158130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F30u; }
        if (ctx->pc != 0x157F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsRannyuOk_0x158130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F30u; }
        if (ctx->pc != 0x157F30u) { return; }
    }
    ctx->pc = 0x157F30u;
    // 0x157f30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x157F30u;
    {
        const bool branch_taken_0x157f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157F30u;
            // 0x157f34: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f30) {
            ctx->pc = 0x157F50u;
            goto label_157f50;
        }
    }
    ctx->pc = 0x157F38u;
    // 0x157f38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157f3c: 0xac202cd0  sw          $zero, 0x2CD0($at)
    ctx->pc = 0x157f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11472), GPR_U32(ctx, 0));
    // 0x157f40: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157f44: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x157F44u;
    {
        const bool branch_taken_0x157f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157F44u;
            // 0x157f48: 0xac233508  sw          $v1, 0x3508($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13576), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f44) {
            ctx->pc = 0x157F88u;
            goto label_157f88;
        }
    }
    ctx->pc = 0x157F4Cu;
    // 0x157f4c: 0x0  nop
    ctx->pc = 0x157f4cu;
    // NOP
label_157f50:
    // 0x157f50: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157f54: 0x8c232340  lw          $v1, 0x2340($at)
    ctx->pc = 0x157f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x157f58: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x157F58u;
    {
        const bool branch_taken_0x157f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157F58u;
            // 0x157f5c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f58) {
            ctx->pc = 0x157F88u;
            goto label_157f88;
        }
    }
    ctx->pc = 0x157F60u;
    // 0x157f60: 0x8c233534  lw          $v1, 0x3534($at)
    ctx->pc = 0x157f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x157f64: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x157F64u;
    {
        const bool branch_taken_0x157f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f64) {
            ctx->pc = 0x157F88u;
            goto label_157f88;
        }
    }
    ctx->pc = 0x157F6Cu;
    // 0x157f6c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157f70: 0x8c232cd0  lw          $v1, 0x2CD0($at)
    ctx->pc = 0x157f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11472)));
    // 0x157f74: 0x28630014  slti        $v1, $v1, 0x14
    ctx->pc = 0x157f74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x157f78: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x157F78u;
    {
        const bool branch_taken_0x157f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157F78u;
            // 0x157f7c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f78) {
            ctx->pc = 0x157F88u;
            goto label_157f88;
        }
    }
    ctx->pc = 0x157F80u;
    // 0x157f80: 0xac203508  sw          $zero, 0x3508($at)
    ctx->pc = 0x157f80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13576), GPR_U32(ctx, 0));
    // 0x157f84: 0x0  nop
    ctx->pc = 0x157f84u;
    // NOP
label_157f88:
    // 0x157f88: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157f8c: 0x8c233508  lw          $v1, 0x3508($at)
    ctx->pc = 0x157f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x157f90: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x157F90u;
    {
        const bool branch_taken_0x157f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f90) {
            ctx->pc = 0x157FA0u;
            goto label_157fa0;
        }
    }
    ctx->pc = 0x157F98u;
    // 0x157f98: 0xc056008  jal         func_158020
    ctx->pc = 0x157F98u;
    SET_GPR_U32(ctx, 31, 0x157FA0u);
    ctx->pc = 0x158020u;
    if (runtime->hasFunction(0x158020u)) {
        auto targetFn = runtime->lookupFunction(0x158020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157FA0u; }
        if (ctx->pc != 0x157FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HalfScreen_0x158020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157FA0u; }
        if (ctx->pc != 0x157FA0u) { return; }
    }
    ctx->pc = 0x157FA0u;
label_157fa0:
    // 0x157fa0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157fa4: 0x8c242570  lw          $a0, 0x2570($at)
    ctx->pc = 0x157fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9584)));
    // 0x157fa8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157fac: 0x8c232500  lw          $v1, 0x2500($at)
    ctx->pc = 0x157facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9472)));
    // 0x157fb0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x157fb0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x157fb4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x157FB4u;
    {
        const bool branch_taken_0x157fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157FB4u;
            // 0x157fb8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157fb4) {
            ctx->pc = 0x158010u;
            goto label_158010;
        }
    }
    ctx->pc = 0x157FBCu;
    // 0x157fbc: 0x8c242578  lw          $a0, 0x2578($at)
    ctx->pc = 0x157fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9592)));
    // 0x157fc0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157fc4: 0x8c232508  lw          $v1, 0x2508($at)
    ctx->pc = 0x157fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9480)));
    // 0x157fc8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x157fc8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x157fcc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x157FCCu;
    {
        const bool branch_taken_0x157fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x157fcc) {
            ctx->pc = 0x158010u;
            goto label_158010;
        }
    }
    ctx->pc = 0x157FD4u;
    // 0x157fd4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157fd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157fdc: 0xac203530  sw          $zero, 0x3530($at)
    ctx->pc = 0x157fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13616), GPR_U32(ctx, 0));
    // 0x157fe0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x157fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157fe4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157fe8: 0xac222c40  sw          $v0, 0x2C40($at)
    ctx->pc = 0x157fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11328), GPR_U32(ctx, 2));
    // 0x157fec: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157ff0: 0xac203534  sw          $zero, 0x3534($at)
    ctx->pc = 0x157ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13620), GPR_U32(ctx, 0));
    // 0x157ff4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157ff8: 0xc056584  jal         func_159610
    ctx->pc = 0x157FF8u;
    SET_GPR_U32(ctx, 31, 0x158000u);
    ctx->pc = 0x157FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157FF8u;
            // 0x157ffc: 0xac203508  sw          $zero, 0x3508($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13576), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159610u;
    if (runtime->hasFunction(0x159610u)) {
        auto targetFn = runtime->lookupFunction(0x159610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158000u; }
        if (ctx->pc != 0x158000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setLoop_0x159610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158000u; }
        if (ctx->pc != 0x158000u) { return; }
    }
    ctx->pc = 0x158000u;
    // 0x158000: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158004: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158008: 0xac232c48  sw          $v1, 0x2C48($at)
    ctx->pc = 0x158008u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11336), GPR_U32(ctx, 3));
    // 0x15800c: 0x0  nop
    ctx->pc = 0x15800cu;
    // NOP
label_158010:
    // 0x158010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158014: 0x3e00008  jr          $ra
    ctx->pc = 0x158014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158014u;
            // 0x158018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1576C0u: goto label_1576c0;
            case 0x1576E8u: goto label_1576e8;
            case 0x157700u: goto label_157700;
            case 0x157768u: goto label_157768;
            case 0x1578A0u: goto label_1578a0;
            case 0x157900u: goto label_157900;
            case 0x157960u: goto label_157960;
            case 0x1579C0u: goto label_1579c0;
            case 0x1579F0u: goto label_1579f0;
            case 0x157A08u: goto label_157a08;
            case 0x157A20u: goto label_157a20;
            case 0x157A98u: goto label_157a98;
            case 0x157AD8u: goto label_157ad8;
            case 0x157AF0u: goto label_157af0;
            case 0x157B08u: goto label_157b08;
            case 0x157B20u: goto label_157b20;
            case 0x157B38u: goto label_157b38;
            case 0x157BD0u: goto label_157bd0;
            case 0x157C08u: goto label_157c08;
            case 0x157C48u: goto label_157c48;
            case 0x157C80u: goto label_157c80;
            case 0x157D10u: goto label_157d10;
            case 0x157D40u: goto label_157d40;
            case 0x157D68u: goto label_157d68;
            case 0x157DE8u: goto label_157de8;
            case 0x157E40u: goto label_157e40;
            case 0x157E78u: goto label_157e78;
            case 0x157EF8u: goto label_157ef8;
            case 0x157F50u: goto label_157f50;
            case 0x157F88u: goto label_157f88;
            case 0x157FA0u: goto label_157fa0;
            case 0x158010u: goto label_158010;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15801Cu;
}
