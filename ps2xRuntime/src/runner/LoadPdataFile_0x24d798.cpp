#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LoadPdataFile
// Address: 0x24d798 - 0x24d8f4
void LoadPdataFile_0x24d798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24d798u;

    // 0x24d798: 0x27bdffa0
    ctx->pc = 0x24d798u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24d79c: 0xffbf0050
    ctx->pc = 0x24d79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x24d7a0: 0xffb40040
    ctx->pc = 0x24d7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24d7a4: 0xffb30030
    ctx->pc = 0x24d7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24d7a8: 0xffb20020
    ctx->pc = 0x24d7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24d7ac: 0xffb10010
    ctx->pc = 0x24d7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24d7b0: 0xffb00000
    ctx->pc = 0x24d7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d7b4: 0x80982d
    ctx->pc = 0x24d7b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d7b8: 0x138880
    ctx->pc = 0x24d7b8u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 19), 2));
    // 0x24d7bc: 0x3c060032
    ctx->pc = 0x24d7bcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)50 << 16));
    // 0x24d7c0: 0x24c613e0
    ctx->pc = 0x24d7c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 5088));
    // 0x24d7c4: 0x3c12003c
    ctx->pc = 0x24d7c4u;
    SET_GPR_U32(ctx, 18, ((uint32_t)60 << 16));
    // 0x24d7c8: 0x26441ec0
    ctx->pc = 0x24d7c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 7872));
    // 0x24d7cc: 0x3c05003b
    ctx->pc = 0x24d7ccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x24d7d0: 0x24a583a0
    ctx->pc = 0x24d7d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294935456));
    // 0x24d7d4: 0xc0b6252
    ctx->pc = 0x24D7D4u;
    SET_GPR_U32(ctx, 31, 0x24D7DCu);
    ctx->pc = 0x24D7D8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D7DCu; }
    }
    if (ctx->pc != 0x24D7DCu) { return; }
    ctx->pc = 0x24D7DCu;
    // 0x24d7dc: 0x3c14003b
    ctx->pc = 0x24d7dcu;
    SET_GPR_U32(ctx, 20, ((uint32_t)59 << 16));
    // 0x24d7e0: 0x268483a8
    ctx->pc = 0x24d7e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 4294935464));
    // 0x24d7e4: 0xc0b4eca
    ctx->pc = 0x24D7E4u;
    SET_GPR_U32(ctx, 31, 0x24D7ECu);
    ctx->pc = 0x24D7E8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 7872));
    ctx->pc = 0x2D3B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileExists_0x2d3b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D7ECu; }
    }
    if (ctx->pc != 0x24D7ECu) { return; }
    ctx->pc = 0x24D7ECu;
    // 0x24d7ec: 0x10400026
    ctx->pc = 0x24D7ECu;
    {
        const bool branch_taken_0x24d7ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24D7F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x24d7ec) {
            ctx->pc = 0x24D888u;
            goto label_24d888;
        }
    }
    ctx->pc = 0x24D7F4u;
    // 0x24d7f4: 0x244248c8
    ctx->pc = 0x24d7f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18632));
    // 0x24d7f8: 0x2228021
    ctx->pc = 0x24d7f8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x24d7fc: 0x8e020000
    ctx->pc = 0x24d7fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24d800: 0x1440000c
    ctx->pc = 0x24D800u;
    {
        const bool branch_taken_0x24d800 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24D804u;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x24d800) {
            ctx->pc = 0x24D834u;
            goto label_24d834;
        }
    }
    ctx->pc = 0x24D808u;
    // 0x24d808: 0x268483a8
    ctx->pc = 0x24d808u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 4294935464));
    // 0x24d80c: 0xc0b4e96
    ctx->pc = 0x24D80Cu;
    SET_GPR_U32(ctx, 31, 0x24D814u);
    ctx->pc = 0x24D810u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 7872));
    ctx->pc = 0x2D3A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocFile_0x2d3a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D814u; }
    }
    if (ctx->pc != 0x24D814u) { return; }
    ctx->pc = 0x24D814u;
    // 0x24d814: 0xae020000
    ctx->pc = 0x24d814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x24d818: 0x3c020033
    ctx->pc = 0x24d818u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24d81c: 0x24424920
    ctx->pc = 0x24d81cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18720));
    // 0x24d820: 0x2221021
    ctx->pc = 0x24d820u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x24d824: 0x3c03003a
    ctx->pc = 0x24d824u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x24d828: 0x8c632380
    ctx->pc = 0x24d828u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 9088)));
    // 0x24d82c: 0x10000024
    ctx->pc = 0x24D82Cu;
    {
        const bool branch_taken_0x24d82c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24D830u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x24d82c) {
            ctx->pc = 0x24D8C0u;
            goto label_24d8c0;
        }
    }
    ctx->pc = 0x24D834u;
label_24d834:
    // 0x24d834: 0x24634920
    ctx->pc = 0x24d834u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18720));
    // 0x24d838: 0x133880
    ctx->pc = 0x24d838u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 19), 2));
    // 0x24d83c: 0xe31821
    ctx->pc = 0x24d83cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x24d840: 0x3c020033
    ctx->pc = 0x24d840u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24d844: 0x244248c8
    ctx->pc = 0x24d844u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18632));
    // 0x24d848: 0xe23821
    ctx->pc = 0x24d848u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x24d84c: 0x3c04003b
    ctx->pc = 0x24d84cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x24d850: 0x248483a8
    ctx->pc = 0x24d850u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935464));
    // 0x24d854: 0x3c10003c
    ctx->pc = 0x24d854u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x24d858: 0x26051ec0
    ctx->pc = 0x24d858u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 7872));
    // 0x24d85c: 0x8c660000
    ctx->pc = 0x24d85cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d860: 0xc0b4e7c
    ctx->pc = 0x24D860u;
    SET_GPR_U32(ctx, 31, 0x24D868u);
    ctx->pc = 0x24D864u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->pc = 0x2D39F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReadFile_0x2d39f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D868u; }
    }
    if (ctx->pc != 0x24D868u) { return; }
    ctx->pc = 0x24D868u;
    // 0x24d868: 0x14400016
    ctx->pc = 0x24D868u;
    {
        const bool branch_taken_0x24d868 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24D86Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x24d868) {
            ctx->pc = 0x24D8C4u;
            goto label_24d8c4;
        }
    }
    ctx->pc = 0x24D870u;
    // 0x24d870: 0x3c04003b
    ctx->pc = 0x24d870u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x24d874: 0x248483b0
    ctx->pc = 0x24d874u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935472));
    // 0x24d878: 0xc0b4976
    ctx->pc = 0x24D878u;
    SET_GPR_U32(ctx, 31, 0x24D880u);
    ctx->pc = 0x24D87Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 7872));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D880u; }
    }
    if (ctx->pc != 0x24D880u) { return; }
    ctx->pc = 0x24D880u;
    // 0x24d880: 0x10000010
    ctx->pc = 0x24D880u;
    {
        const bool branch_taken_0x24d880 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24D884u;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x24d880) {
            ctx->pc = 0x24D8C4u;
            goto label_24d8c4;
        }
    }
    ctx->pc = 0x24D888u;
label_24d888:
    // 0x24d888: 0x3c04003b
    ctx->pc = 0x24d888u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x24d88c: 0x248483e8
    ctx->pc = 0x24d88cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935528));
    // 0x24d890: 0x3c05003c
    ctx->pc = 0x24d890u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x24d894: 0xc0b492e
    ctx->pc = 0x24D894u;
    SET_GPR_U32(ctx, 31, 0x24D89Cu);
    ctx->pc = 0x24D898u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7872));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D89Cu; }
    }
    if (ctx->pc != 0x24D89Cu) { return; }
    ctx->pc = 0x24D89Cu;
    // 0x24d89c: 0x3c020033
    ctx->pc = 0x24d89cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24d8a0: 0x244248c8
    ctx->pc = 0x24d8a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18632));
    // 0x24d8a4: 0x131880
    ctx->pc = 0x24d8a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x24d8a8: 0x621021
    ctx->pc = 0x24d8a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d8ac: 0xac400000
    ctx->pc = 0x24d8acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x24d8b0: 0x3c020033
    ctx->pc = 0x24d8b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24d8b4: 0x24424920
    ctx->pc = 0x24d8b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18720));
    // 0x24d8b8: 0x621821
    ctx->pc = 0x24d8b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d8bc: 0xac600000
    ctx->pc = 0x24d8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_24d8c0:
    // 0x24d8c0: 0x3c030033
    ctx->pc = 0x24d8c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
label_24d8c4:
    // 0x24d8c4: 0x24634920
    ctx->pc = 0x24d8c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18720));
    // 0x24d8c8: 0x131080
    ctx->pc = 0x24d8c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x24d8cc: 0x431021
    ctx->pc = 0x24d8ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24d8d0: 0x8c420000
    ctx->pc = 0x24d8d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d8d4: 0xdfbf0050
    ctx->pc = 0x24d8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24d8d8: 0xdfb40040
    ctx->pc = 0x24d8d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24d8dc: 0xdfb30030
    ctx->pc = 0x24d8dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d8e0: 0xdfb20020
    ctx->pc = 0x24d8e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d8e4: 0xdfb10010
    ctx->pc = 0x24d8e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d8e8: 0xdfb00000
    ctx->pc = 0x24d8e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d8ec: 0x3e00008
    ctx->pc = 0x24D8ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D8F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24D834u: goto label_24d834;
            case 0x24D888u: goto label_24d888;
            case 0x24D8C0u: goto label_24d8c0;
            case 0x24D8C4u: goto label_24d8c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24D8F4u;
}
