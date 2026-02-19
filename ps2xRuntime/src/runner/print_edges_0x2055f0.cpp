#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: print_edges
// Address: 0x2055f0 - 0x2056d0
void print_edges_0x2055f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2055f0u;

    // 0x2055f0: 0x27bdff80
    ctx->pc = 0x2055f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2055f4: 0xffbf0070
    ctx->pc = 0x2055f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2055f8: 0xffb60060
    ctx->pc = 0x2055f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2055fc: 0xffb50050
    ctx->pc = 0x2055fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x205600: 0xffb40040
    ctx->pc = 0x205600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x205604: 0xffb30030
    ctx->pc = 0x205604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x205608: 0xffb20020
    ctx->pc = 0x205608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20560c: 0xffb10010
    ctx->pc = 0x20560cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x205610: 0xffb00000
    ctx->pc = 0x205610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205614: 0x882d
    ctx->pc = 0x205614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205618: 0x2416003c
    ctx->pc = 0x205618u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 60));
    // 0x20561c: 0x3c020031
    ctx->pc = 0x20561cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205620: 0x24551b98
    ctx->pc = 0x205620u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 7064));
    // 0x205624: 0x2361818
    ctx->pc = 0x205624u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_205628:
    // 0x205628: 0x751021
    ctx->pc = 0x205628u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x20562c: 0x8c420000
    ctx->pc = 0x20562cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x205630: 0x10400019
    ctx->pc = 0x205630u;
    {
        const bool branch_taken_0x205630 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x205634u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x205630) {
            ctx->pc = 0x205698u;
            goto label_205698;
        }
    }
    ctx->pc = 0x205638u;
    // 0x205638: 0x24100008
    ctx->pc = 0x205638u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 8));
    // 0x20563c: 0x2231818
    ctx->pc = 0x20563cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x205640: 0x3c020031
    ctx->pc = 0x205640u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205644: 0x24421b98
    ctx->pc = 0x205644u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7064));
    // 0x205648: 0x629021
    ctx->pc = 0x205648u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20564c: 0x3c14003a
    ctx->pc = 0x20564cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x205650: 0x3c020031
    ctx->pc = 0x205650u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205654: 0x24531ae0
    ctx->pc = 0x205654u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 6880));
    // 0x205658: 0x8e420000
    ctx->pc = 0x205658u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20565c: 0x0
    ctx->pc = 0x20565cu;
    // NOP
label_205660:
    // 0x205660: 0x2021007
    ctx->pc = 0x205660u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x205664: 0x30420001
    ctx->pc = 0x205664u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x205668: 0x10400007
    ctx->pc = 0x205668u;
    {
        const bool branch_taken_0x205668 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20566Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967288));
        if (branch_taken_0x205668) {
            ctx->pc = 0x205688u;
            goto label_205688;
        }
    }
    ctx->pc = 0x205670u;
    // 0x205670: 0x21080
    ctx->pc = 0x205670u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x205674: 0x531021
    ctx->pc = 0x205674u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x205678: 0x26844a20
    ctx->pc = 0x205678u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 18976));
    // 0x20567c: 0x220282d
    ctx->pc = 0x20567cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205680: 0xc0b4a34
    ctx->pc = 0x205680u;
    SET_GPR_U32(ctx, 31, 0x205688u);
    ctx->pc = 0x205684u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205688u; }
    }
    if (ctx->pc != 0x205688u) { return; }
    ctx->pc = 0x205688u;
label_205688:
    // 0x205688: 0x26100001
    ctx->pc = 0x205688u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x20568c: 0x2a020012
    ctx->pc = 0x20568cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 18));
    // 0x205690: 0x5440fff3
    ctx->pc = 0x205690u;
    {
        const bool branch_taken_0x205690 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x205690) {
            ctx->pc = 0x205694u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x205660u;
            goto label_205660;
        }
    }
    ctx->pc = 0x205698u;
label_205698:
    // 0x205698: 0x26310001
    ctx->pc = 0x205698u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x20569c: 0x2a220004
    ctx->pc = 0x20569cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x2056a0: 0x1440ffe1
    ctx->pc = 0x2056A0u;
    {
        const bool branch_taken_0x2056a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2056A4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2056a0) {
            ctx->pc = 0x205628u;
            goto label_205628;
        }
    }
    ctx->pc = 0x2056A8u;
    // 0x2056a8: 0xdfbf0070
    ctx->pc = 0x2056a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2056ac: 0xdfb60060
    ctx->pc = 0x2056acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2056b0: 0xdfb50050
    ctx->pc = 0x2056b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2056b4: 0xdfb40040
    ctx->pc = 0x2056b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2056b8: 0xdfb30030
    ctx->pc = 0x2056b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2056bc: 0xdfb20020
    ctx->pc = 0x2056bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2056c0: 0xdfb10010
    ctx->pc = 0x2056c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2056c4: 0xdfb00000
    ctx->pc = 0x2056c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2056c8: 0x3e00008
    ctx->pc = 0x2056C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2056CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x205628u: goto label_205628;
            case 0x205660u: goto label_205660;
            case 0x205688u: goto label_205688;
            case 0x205698u: goto label_205698;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2056D0u;
}
