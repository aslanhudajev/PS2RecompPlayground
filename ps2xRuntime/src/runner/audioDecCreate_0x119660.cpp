#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecCreate
// Address: 0x119660 - 0x119750
void audioDecCreate_0x119660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119660u;

    // 0x119660: 0x27bdffc0
    ctx->pc = 0x119660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x119664: 0xffb10010
    ctx->pc = 0x119664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119668: 0xffb00000
    ctx->pc = 0x119668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11966c: 0x80882d
    ctx->pc = 0x11966cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119670: 0xffbf0030
    ctx->pc = 0x119670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x119674: 0xe0802d
    ctx->pc = 0x119674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119678: 0xffb20020
    ctx->pc = 0x119678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11967c: 0x200202d
    ctx->pc = 0x11967cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119680: 0xae200000
    ctx->pc = 0x119680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x119684: 0xae20002c
    ctx->pc = 0x119684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x119688: 0xae200034
    ctx->pc = 0x119688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x11968c: 0xae200038
    ctx->pc = 0x11968cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x119690: 0xae200040
    ctx->pc = 0x119690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x119694: 0xae200054
    ctx->pc = 0x119694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x119698: 0xae300048
    ctx->pc = 0x119698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 16));
    // 0x11969c: 0xae20004c
    ctx->pc = 0x11969cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x1196a0: 0xae200050
    ctx->pc = 0x1196a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x1196a4: 0xae250030
    ctx->pc = 0x1196a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 5));
    // 0x1196a8: 0xc045066
    ctx->pc = 0x1196A8u;
    SET_GPR_U32(ctx, 31, 0x1196B0u);
    ctx->pc = 0x1196ACu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 6));
    ctx->pc = 0x114198u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocIopHeap_0x114198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1196B0u; }
    }
    if (ctx->pc != 0x1196B0u) { return; }
    ctx->pc = 0x1196B0u;
    // 0x1196b0: 0x40282d
    ctx->pc = 0x1196b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1196b4: 0x4a0000a
    ctx->pc = 0x1196B4u;
    {
        const bool branch_taken_0x1196b4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1196B8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 5));
        if (branch_taken_0x1196b4) {
            ctx->pc = 0x1196E0u;
            goto label_1196e0;
        }
    }
    ctx->pc = 0x1196BCu;
    // 0x1196bc: 0x3c020017
    ctx->pc = 0x1196bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x1196c0: 0x200302d
    ctx->pc = 0x1196c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1196c4: 0x24524490
    ctx->pc = 0x1196c4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 17552));
    // 0x1196c8: 0xc04ace4
    ctx->pc = 0x1196C8u;
    SET_GPR_U32(ctx, 31, 0x1196D0u);
    ctx->pc = 0x1196CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1196D0u; }
    }
    if (ctx->pc != 0x1196D0u) { return; }
    ctx->pc = 0x1196D0u;
    // 0x1196d0: 0xc045066
    ctx->pc = 0x1196D0u;
    SET_GPR_U32(ctx, 31, 0x1196D8u);
    ctx->pc = 0x1196D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x114198u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocIopHeap_0x114198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1196D8u; }
    }
    if (ctx->pc != 0x1196D8u) { return; }
    ctx->pc = 0x1196D8u;
    // 0x1196d8: 0x4410006
    ctx->pc = 0x1196D8u;
    {
        const bool branch_taken_0x1196d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1196DCu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        if (branch_taken_0x1196d8) {
            ctx->pc = 0x1196F4u;
            goto label_1196f4;
        }
    }
    ctx->pc = 0x1196E0u;
label_1196e0:
    // 0x1196e0: 0x3c040017
    ctx->pc = 0x1196e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1196e4: 0xc04ace4
    ctx->pc = 0x1196E4u;
    SET_GPR_U32(ctx, 31, 0x1196ECu);
    ctx->pc = 0x1196E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17520));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1196ECu; }
    }
    if (ctx->pc != 0x1196ECu) { return; }
    ctx->pc = 0x1196ECu;
    // 0x1196ec: 0x10000012
    ctx->pc = 0x1196ECu;
    {
        const bool branch_taken_0x1196ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1196F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1196ec) {
            ctx->pc = 0x119738u;
            goto label_119738;
        }
    }
    ctx->pc = 0x1196F4u;
label_1196f4:
    // 0x1196f4: 0x240202d
    ctx->pc = 0x1196f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1196f8: 0x40282d
    ctx->pc = 0x1196f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1196fc: 0xc04ace4
    ctx->pc = 0x1196FCu;
    SET_GPR_U32(ctx, 31, 0x119704u);
    ctx->pc = 0x119700u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119704u; }
    }
    if (ctx->pc != 0x119704u) { return; }
    ctx->pc = 0x119704u;
    // 0x119704: 0x3c100075
    ctx->pc = 0x119704u;
    SET_GPR_U32(ctx, 16, ((uint32_t)117 << 16));
    // 0x119708: 0x282d
    ctx->pc = 0x119708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11970c: 0x2610d040
    ctx->pc = 0x11970cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294955072));
    // 0x119710: 0x24060800
    ctx->pc = 0x119710u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x119714: 0xc04aca0
    ctx->pc = 0x119714u;
    SET_GPR_U32(ctx, 31, 0x11971Cu);
    ctx->pc = 0x119718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B280u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x12b280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11971Cu; }
    }
    if (ctx->pc != 0x11971Cu) { return; }
    ctx->pc = 0x11971Cu;
    // 0x11971c: 0x8e240058
    ctx->pc = 0x11971cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x119720: 0x200282d
    ctx->pc = 0x119720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119724: 0xc0467a2
    ctx->pc = 0x119724u;
    SET_GPR_U32(ctx, 31, 0x11972Cu);
    ctx->pc = 0x119728u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x119E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x119e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11972Cu; }
    }
    if (ctx->pc != 0x11972Cu) { return; }
    ctx->pc = 0x11972Cu;
    // 0x11972c: 0xc0467c0
    ctx->pc = 0x11972Cu;
    SET_GPR_U32(ctx, 31, 0x119734u);
    ctx->pc = 0x119730u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16383));
    ctx->pc = 0x119F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeMasterVolume_0x119f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119734u; }
    }
    if (ctx->pc != 0x119734u) { return; }
    ctx->pc = 0x119734u;
    // 0x119734: 0x24020001
    ctx->pc = 0x119734u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_119738:
    // 0x119738: 0xdfbf0030
    ctx->pc = 0x119738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11973c: 0xdfb20020
    ctx->pc = 0x11973cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119740: 0xdfb10010
    ctx->pc = 0x119740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119744: 0xdfb00000
    ctx->pc = 0x119744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119748: 0x3e00008
    ctx->pc = 0x119748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11974Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1196E0u: goto label_1196e0;
            case 0x1196F4u: goto label_1196f4;
            case 0x119738u: goto label_119738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119750u;
}
