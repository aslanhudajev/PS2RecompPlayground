#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapInit
// Address: 0x148690 - 0x1487bc
void MapInit_0x148690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapInit_0x148690");
#endif

    ctx->pc = 0x148690u;

    // 0x148690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x148690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x148694: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x148694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x148698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14869c: 0x8c233514  lw          $v1, 0x3514($at)
    ctx->pc = 0x14869cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13588)));
    // 0x1486a0: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x1486a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1486a4: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x1486A4u;
    {
        const bool branch_taken_0x1486a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1486A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1486A4u;
            // 0x1486a8: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1486a4) {
            ctx->pc = 0x1487B0u;
            goto label_1487b0;
        }
    }
    ctx->pc = 0x1486ACu;
    // 0x1486ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1486acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1486b0: 0x24840b60  addiu       $a0, $a0, 0xB60
    ctx->pc = 0x1486b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2912));
    // 0x1486b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1486b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1486b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1486b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1486bc: 0x600008  jr          $v1
    ctx->pc = 0x1486BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1486C8u: goto label_1486c8;
            case 0x1486E0u: goto label_1486e0;
            case 0x1486F8u: goto label_1486f8;
            case 0x148710u: goto label_148710;
            case 0x148728u: goto label_148728;
            case 0x148740u: goto label_148740;
            case 0x148758u: goto label_148758;
            case 0x148770u: goto label_148770;
            case 0x148788u: goto label_148788;
            case 0x1487A0u: goto label_1487a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1486C4u;
    // 0x1486c4: 0x0  nop
    ctx->pc = 0x1486c4u;
    // NOP
label_1486c8:
    // 0x1486c8: 0xc05305c  jal         func_14C170
    ctx->pc = 0x1486C8u;
    SET_GPR_U32(ctx, 31, 0x1486D0u);
    ctx->pc = 0x14C170u;
    if (runtime->hasFunction(0x14C170u)) {
        auto targetFn = runtime->lookupFunction(0x14C170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1486D0u; }
        if (ctx->pc != 0x1486D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage1mapInit_0x14c170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1486D0u; }
        if (ctx->pc != 0x1486D0u) { return; }
    }
    ctx->pc = 0x1486D0u;
    // 0x1486d0: 0xc051e94  jal         func_147A50
    ctx->pc = 0x1486D0u;
    SET_GPR_U32(ctx, 31, 0x1486D8u);
    ctx->pc = 0x147A50u;
    if (runtime->hasFunction(0x147A50u)) {
        auto targetFn = runtime->lookupFunction(0x147A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1486D8u; }
        if (ctx->pc != 0x1486D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage1mapItemCreate_0x147a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1486D8u; }
        if (ctx->pc != 0x1486D8u) { return; }
    }
    ctx->pc = 0x1486D8u;
    // 0x1486d8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1486D8u;
    {
        const bool branch_taken_0x1486d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1486d8) {
            ctx->pc = 0x1487B0u;
            goto label_1487b0;
        }
    }
    ctx->pc = 0x1486E0u;
label_1486e0:
    // 0x1486e0: 0xc052df0  jal         func_14B7C0
    ctx->pc = 0x1486E0u;
    SET_GPR_U32(ctx, 31, 0x1486E8u);
    ctx->pc = 0x14B7C0u;
    if (runtime->hasFunction(0x14B7C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1486E8u; }
        if (ctx->pc != 0x1486E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage2mapInit_0x14b7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1486E8u; }
        if (ctx->pc != 0x1486E8u) { return; }
    }
    ctx->pc = 0x1486E8u;
    // 0x1486e8: 0xc051aec  jal         func_146BB0
    ctx->pc = 0x1486E8u;
    SET_GPR_U32(ctx, 31, 0x1486F0u);
    ctx->pc = 0x146BB0u;
    if (runtime->hasFunction(0x146BB0u)) {
        auto targetFn = runtime->lookupFunction(0x146BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1486F0u; }
        if (ctx->pc != 0x1486F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage2mapItemCreate_0x146bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1486F0u; }
        if (ctx->pc != 0x1486F0u) { return; }
    }
    ctx->pc = 0x1486F0u;
    // 0x1486f0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1486F0u;
    {
        const bool branch_taken_0x1486f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1486f0) {
            ctx->pc = 0x1487B0u;
            goto label_1487b0;
        }
    }
    ctx->pc = 0x1486F8u;
label_1486f8:
    // 0x1486f8: 0xc052aec  jal         func_14ABB0
    ctx->pc = 0x1486F8u;
    SET_GPR_U32(ctx, 31, 0x148700u);
    ctx->pc = 0x14ABB0u;
    if (runtime->hasFunction(0x14ABB0u)) {
        auto targetFn = runtime->lookupFunction(0x14ABB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148700u; }
        if (ctx->pc != 0x148700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage3mapInit_0x14abb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148700u; }
        if (ctx->pc != 0x148700u) { return; }
    }
    ctx->pc = 0x148700u;
    // 0x148700: 0xc0518d0  jal         func_146340
    ctx->pc = 0x148700u;
    SET_GPR_U32(ctx, 31, 0x148708u);
    ctx->pc = 0x146340u;
    if (runtime->hasFunction(0x146340u)) {
        auto targetFn = runtime->lookupFunction(0x146340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148708u; }
        if (ctx->pc != 0x148708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage3mapItemCreate_0x146340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148708u; }
        if (ctx->pc != 0x148708u) { return; }
    }
    ctx->pc = 0x148708u;
    // 0x148708: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x148708u;
    {
        const bool branch_taken_0x148708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148708) {
            ctx->pc = 0x1487B0u;
            goto label_1487b0;
        }
    }
    ctx->pc = 0x148710u;
label_148710:
    // 0x148710: 0xc05274c  jal         func_149D30
    ctx->pc = 0x148710u;
    SET_GPR_U32(ctx, 31, 0x148718u);
    ctx->pc = 0x149D30u;
    if (runtime->hasFunction(0x149D30u)) {
        auto targetFn = runtime->lookupFunction(0x149D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148718u; }
        if (ctx->pc != 0x148718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage4mapInit_0x149d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148718u; }
        if (ctx->pc != 0x148718u) { return; }
    }
    ctx->pc = 0x148718u;
    // 0x148718: 0xc051650  jal         func_145940
    ctx->pc = 0x148718u;
    SET_GPR_U32(ctx, 31, 0x148720u);
    ctx->pc = 0x145940u;
    if (runtime->hasFunction(0x145940u)) {
        auto targetFn = runtime->lookupFunction(0x145940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148720u; }
        if (ctx->pc != 0x148720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage4mapItemCreate_0x145940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148720u; }
        if (ctx->pc != 0x148720u) { return; }
    }
    ctx->pc = 0x148720u;
    // 0x148720: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x148720u;
    {
        const bool branch_taken_0x148720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148720) {
            ctx->pc = 0x1487B0u;
            goto label_1487b0;
        }
    }
    ctx->pc = 0x148728u;
label_148728:
    // 0x148728: 0xc0525fc  jal         func_1497F0
    ctx->pc = 0x148728u;
    SET_GPR_U32(ctx, 31, 0x148730u);
    ctx->pc = 0x1497F0u;
    if (runtime->hasFunction(0x1497F0u)) {
        auto targetFn = runtime->lookupFunction(0x1497F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148730u; }
        if (ctx->pc != 0x148730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage5mapInit_0x1497f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148730u; }
        if (ctx->pc != 0x148730u) { return; }
    }
    ctx->pc = 0x148730u;
    // 0x148730: 0xc0512c0  jal         func_144B00
    ctx->pc = 0x148730u;
    SET_GPR_U32(ctx, 31, 0x148738u);
    ctx->pc = 0x144B00u;
    if (runtime->hasFunction(0x144B00u)) {
        auto targetFn = runtime->lookupFunction(0x144B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148738u; }
        if (ctx->pc != 0x148738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage5mapItemCreate_0x144b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148738u; }
        if (ctx->pc != 0x148738u) { return; }
    }
    ctx->pc = 0x148738u;
    // 0x148738: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x148738u;
    {
        const bool branch_taken_0x148738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148738) {
            ctx->pc = 0x1487B0u;
            goto label_1487b0;
        }
    }
    ctx->pc = 0x148740u;
label_148740:
    // 0x148740: 0xc052528  jal         func_1494A0
    ctx->pc = 0x148740u;
    SET_GPR_U32(ctx, 31, 0x148748u);
    ctx->pc = 0x1494A0u;
    if (runtime->hasFunction(0x1494A0u)) {
        auto targetFn = runtime->lookupFunction(0x1494A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148748u; }
        if (ctx->pc != 0x148748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage6mapInit_0x1494a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148748u; }
        if (ctx->pc != 0x148748u) { return; }
    }
    ctx->pc = 0x148748u;
    // 0x148748: 0xc05113c  jal         func_1444F0
    ctx->pc = 0x148748u;
    SET_GPR_U32(ctx, 31, 0x148750u);
    ctx->pc = 0x1444F0u;
    if (runtime->hasFunction(0x1444F0u)) {
        auto targetFn = runtime->lookupFunction(0x1444F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148750u; }
        if (ctx->pc != 0x148750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage6mapItemCreate_0x1444f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148750u; }
        if (ctx->pc != 0x148750u) { return; }
    }
    ctx->pc = 0x148750u;
    // 0x148750: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x148750u;
    {
        const bool branch_taken_0x148750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148750) {
            ctx->pc = 0x1487B0u;
            goto label_1487b0;
        }
    }
    ctx->pc = 0x148758u;
label_148758:
    // 0x148758: 0xc05243c  jal         func_1490F0
    ctx->pc = 0x148758u;
    SET_GPR_U32(ctx, 31, 0x148760u);
    ctx->pc = 0x1490F0u;
    if (runtime->hasFunction(0x1490F0u)) {
        auto targetFn = runtime->lookupFunction(0x1490F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148760u; }
        if (ctx->pc != 0x148760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage7mapInit_0x1490f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148760u; }
        if (ctx->pc != 0x148760u) { return; }
    }
    ctx->pc = 0x148760u;
    // 0x148760: 0xc050f80  jal         func_143E00
    ctx->pc = 0x148760u;
    SET_GPR_U32(ctx, 31, 0x148768u);
    ctx->pc = 0x143E00u;
    if (runtime->hasFunction(0x143E00u)) {
        auto targetFn = runtime->lookupFunction(0x143E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148768u; }
        if (ctx->pc != 0x148768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage7mapItemCreate_0x143e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148768u; }
        if (ctx->pc != 0x148768u) { return; }
    }
    ctx->pc = 0x148768u;
    // 0x148768: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x148768u;
    {
        const bool branch_taken_0x148768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148768) {
            ctx->pc = 0x1487B0u;
            goto label_1487b0;
        }
    }
    ctx->pc = 0x148770u;
label_148770:
    // 0x148770: 0xc05238c  jal         func_148E30
    ctx->pc = 0x148770u;
    SET_GPR_U32(ctx, 31, 0x148778u);
    ctx->pc = 0x148E30u;
    if (runtime->hasFunction(0x148E30u)) {
        auto targetFn = runtime->lookupFunction(0x148E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148778u; }
        if (ctx->pc != 0x148778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage8mapInit_0x148e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148778u; }
        if (ctx->pc != 0x148778u) { return; }
    }
    ctx->pc = 0x148778u;
    // 0x148778: 0xc050ed4  jal         func_143B50
    ctx->pc = 0x148778u;
    SET_GPR_U32(ctx, 31, 0x148780u);
    ctx->pc = 0x143B50u;
    if (runtime->hasFunction(0x143B50u)) {
        auto targetFn = runtime->lookupFunction(0x143B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148780u; }
        if (ctx->pc != 0x148780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage8mapItemCreate_0x143b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148780u; }
        if (ctx->pc != 0x148780u) { return; }
    }
    ctx->pc = 0x148780u;
    // 0x148780: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x148780u;
    {
        const bool branch_taken_0x148780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148780) {
            ctx->pc = 0x1487B0u;
            goto label_1487b0;
        }
    }
    ctx->pc = 0x148788u;
label_148788:
    // 0x148788: 0xc0522e0  jal         func_148B80
    ctx->pc = 0x148788u;
    SET_GPR_U32(ctx, 31, 0x148790u);
    ctx->pc = 0x148B80u;
    if (runtime->hasFunction(0x148B80u)) {
        auto targetFn = runtime->lookupFunction(0x148B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148790u; }
        if (ctx->pc != 0x148790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stageEX1mapInit_0x148b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148790u; }
        if (ctx->pc != 0x148790u) { return; }
    }
    ctx->pc = 0x148790u;
    // 0x148790: 0xc050d34  jal         func_1434D0
    ctx->pc = 0x148790u;
    SET_GPR_U32(ctx, 31, 0x148798u);
    ctx->pc = 0x1434D0u;
    if (runtime->hasFunction(0x1434D0u)) {
        auto targetFn = runtime->lookupFunction(0x1434D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148798u; }
        if (ctx->pc != 0x148798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stageEX1mapItemCreate_0x1434d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148798u; }
        if (ctx->pc != 0x148798u) { return; }
    }
    ctx->pc = 0x148798u;
    // 0x148798: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x148798u;
    {
        const bool branch_taken_0x148798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148798) {
            ctx->pc = 0x1487B0u;
            goto label_1487b0;
        }
    }
    ctx->pc = 0x1487A0u;
label_1487a0:
    // 0x1487a0: 0xc052208  jal         func_148820
    ctx->pc = 0x1487A0u;
    SET_GPR_U32(ctx, 31, 0x1487A8u);
    ctx->pc = 0x148820u;
    if (runtime->hasFunction(0x148820u)) {
        auto targetFn = runtime->lookupFunction(0x148820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1487A8u; }
        if (ctx->pc != 0x1487A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stageEX2mapInit_0x148820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1487A8u; }
        if (ctx->pc != 0x1487A8u) { return; }
    }
    ctx->pc = 0x1487A8u;
    // 0x1487a8: 0xc050c88  jal         func_143220
    ctx->pc = 0x1487A8u;
    SET_GPR_U32(ctx, 31, 0x1487B0u);
    ctx->pc = 0x143220u;
    if (runtime->hasFunction(0x143220u)) {
        auto targetFn = runtime->lookupFunction(0x143220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1487B0u; }
        if (ctx->pc != 0x1487B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stageEX2mapItemCreate_0x143220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1487B0u; }
        if (ctx->pc != 0x1487B0u) { return; }
    }
    ctx->pc = 0x1487B0u;
label_1487b0:
    // 0x1487b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1487b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1487b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1487B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1487B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1487B4u;
            // 0x1487b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1486C8u: goto label_1486c8;
            case 0x1486E0u: goto label_1486e0;
            case 0x1486F8u: goto label_1486f8;
            case 0x148710u: goto label_148710;
            case 0x148728u: goto label_148728;
            case 0x148740u: goto label_148740;
            case 0x148758u: goto label_148758;
            case 0x148770u: goto label_148770;
            case 0x148788u: goto label_148788;
            case 0x1487A0u: goto label_1487a0;
            case 0x1487B0u: goto label_1487b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1487BCu;
}
