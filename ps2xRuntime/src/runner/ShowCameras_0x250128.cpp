#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ShowCameras
// Address: 0x250128 - 0x250260
void ShowCameras_0x250128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x250128u;

    // 0x250128: 0x27bdff50
    ctx->pc = 0x250128u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25012c: 0xffbf00a0
    ctx->pc = 0x25012cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x250130: 0xffb50090
    ctx->pc = 0x250130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x250134: 0xffb40080
    ctx->pc = 0x250134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x250138: 0xffb30070
    ctx->pc = 0x250138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x25013c: 0xffb20060
    ctx->pc = 0x25013cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x250140: 0xffb10050
    ctx->pc = 0x250140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x250144: 0xffb00040
    ctx->pc = 0x250144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x250148: 0x3c020034
    ctx->pc = 0x250148u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25014c: 0x4810003
    ctx->pc = 0x25014Cu;
    {
        const bool branch_taken_0x25014c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x250150u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294955796)));
        if (branch_taken_0x25014c) {
            ctx->pc = 0x25015Cu;
            goto label_25015c;
        }
    }
    ctx->pc = 0x250154u;
    // 0x250154: 0x10000039
    ctx->pc = 0x250154u;
    {
        const bool branch_taken_0x250154 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x250158u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x250154) {
            ctx->pc = 0x25023Cu;
            goto label_25023c;
        }
    }
    ctx->pc = 0x25015Cu;
label_25015c:
    // 0x25015c: 0x10830035
    ctx->pc = 0x25015Cu;
    {
        const bool branch_taken_0x25015c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x250160u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294955796), GPR_U32(ctx, 4));
        if (branch_taken_0x25015c) {
            ctx->pc = 0x250234u;
            goto label_250234;
        }
    }
    ctx->pc = 0x250164u;
    // 0x250164: 0x3c020034
    ctx->pc = 0x250164u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x250168: 0x8c428b70
    ctx->pc = 0x250168u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937456)));
    // 0x25016c: 0x1840002e
    ctx->pc = 0x25016Cu;
    {
        const bool branch_taken_0x25016c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x250170u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25016c) {
            ctx->pc = 0x250228u;
            goto label_250228;
        }
    }
    ctx->pc = 0x250174u;
    // 0x250174: 0x3c020033
    ctx->pc = 0x250174u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x250178: 0x24554b70
    ctx->pc = 0x250178u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 19312));
    // 0x25017c: 0x24140002
    ctx->pc = 0x25017cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
    // 0x250180: 0x3c130034
    ctx->pc = 0x250180u;
    SET_GPR_U32(ctx, 19, ((uint32_t)52 << 16));
    // 0x250184: 0x3c120034
    ctx->pc = 0x250184u;
    SET_GPR_U32(ctx, 18, ((uint32_t)52 << 16));
    // 0x250188: 0x111180
    ctx->pc = 0x250188u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 6));
    // 0x25018c: 0x0
    ctx->pc = 0x25018cu;
    // NOP
label_250190:
    // 0x250190: 0x558021
    ctx->pc = 0x250190u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x250194: 0x24040001
    ctx->pc = 0x250194u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x250198: 0x92020000
    ctx->pc = 0x250198u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25019c: 0x14440004
    ctx->pc = 0x25019Cu;
    {
        const bool branch_taken_0x25019c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x2501A0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25019c) {
            ctx->pc = 0x2501B0u;
            goto label_2501b0;
        }
    }
    ctx->pc = 0x2501A4u;
    // 0x2501a4: 0x24060001
    ctx->pc = 0x2501a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2501a8: 0x10000003
    ctx->pc = 0x2501A8u;
    {
        const bool branch_taken_0x2501a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2501ACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2501a8) {
            ctx->pc = 0x2501B8u;
            goto label_2501b8;
        }
    }
    ctx->pc = 0x2501B0u;
label_2501b0:
    // 0x2501b0: 0x38420002
    ctx->pc = 0x2501b0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 2));
    // 0x2501b4: 0x282200a
    ctx->pc = 0x2501b4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 20));
label_2501b8:
    // 0x2501b8: 0x8e62d314
    ctx->pc = 0x2501b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294955796)));
    // 0x2501bc: 0x50400010
    ctx->pc = 0x2501BCu;
    {
        const bool branch_taken_0x2501bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2501bc) {
            ctx->pc = 0x2501C0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->pc = 0x250200u;
            goto label_250200;
        }
    }
    ctx->pc = 0x2501C4u;
    // 0x2501c4: 0x8e020030
    ctx->pc = 0x2501c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2501c8: 0x54400008
    ctx->pc = 0x2501C8u;
    {
        const bool branch_taken_0x2501c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2501c8) {
            ctx->pc = 0x2501CCu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->pc = 0x2501ECu;
            goto label_2501ec;
        }
    }
    ctx->pc = 0x2501D0u;
    // 0x2501d0: 0x24050001
    ctx->pc = 0x2501d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2501d4: 0x26070020
    ctx->pc = 0x2501d4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 32));
    // 0x2501d8: 0x26080010
    ctx->pc = 0x2501d8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 16));
    // 0x2501dc: 0xc093fee
    ctx->pc = 0x2501DCu;
    SET_GPR_U32(ctx, 31, 0x2501E4u);
    ctx->pc = 0x2501E0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24FFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_arrow_0x24ffb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2501E4u; }
    }
    if (ctx->pc != 0x2501E4u) { return; }
    ctx->pc = 0x2501E4u;
    // 0x2501e4: 0xae020030
    ctx->pc = 0x2501e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2501e8: 0x8e040030
    ctx->pc = 0x2501e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2501ec:
    // 0x2501ec: 0x24050002
    ctx->pc = 0x2501ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2501f0: 0xc0b41e4
    ctx->pc = 0x2501F0u;
    SET_GPR_U32(ctx, 31, 0x2501F8u);
    ctx->pc = 0x2501F4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2501F8u; }
    }
    if (ctx->pc != 0x2501F8u) { return; }
    ctx->pc = 0x2501F8u;
    // 0x2501f8: 0x10000007
    ctx->pc = 0x2501F8u;
    {
        const bool branch_taken_0x2501f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2501FCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x2501f8) {
            ctx->pc = 0x250218u;
            goto label_250218;
        }
    }
    ctx->pc = 0x250200u;
label_250200:
    // 0x250200: 0x50800005
    ctx->pc = 0x250200u;
    {
        const bool branch_taken_0x250200 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x250200) {
            ctx->pc = 0x250204u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x250218u;
            goto label_250218;
        }
    }
    ctx->pc = 0x250208u;
    // 0x250208: 0xc0b3f1a
    ctx->pc = 0x250208u;
    SET_GPR_U32(ctx, 31, 0x250210u);
    ctx->pc = 0x25020Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250210u; }
    }
    if (ctx->pc != 0x250210u) { return; }
    ctx->pc = 0x250210u;
    // 0x250210: 0xae000030
    ctx->pc = 0x250210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x250214: 0x26310001
    ctx->pc = 0x250214u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_250218:
    // 0x250218: 0x8e428b70
    ctx->pc = 0x250218u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294937456)));
    // 0x25021c: 0x222102a
    ctx->pc = 0x25021cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x250220: 0x1440ffdb
    ctx->pc = 0x250220u;
    {
        const bool branch_taken_0x250220 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x250224u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 6));
        if (branch_taken_0x250220) {
            ctx->pc = 0x250190u;
            goto label_250190;
        }
    }
    ctx->pc = 0x250228u;
label_250228:
    // 0x250228: 0x3c020034
    ctx->pc = 0x250228u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25022c: 0xc085620
    ctx->pc = 0x25022Cu;
    SET_GPR_U32(ctx, 31, 0x250234u);
    ctx->pc = 0x250230u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294955796)));
    ctx->pc = 0x215880u;
    {
        const uint32_t __entryPc = ctx->pc;
        StdCamAddAvgArrow_0x215880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250234u; }
    }
    if (ctx->pc != 0x250234u) { return; }
    ctx->pc = 0x250234u;
label_250234:
    // 0x250234: 0x3c020034
    ctx->pc = 0x250234u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x250238: 0x8c42d314
    ctx->pc = 0x250238u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955796)));
label_25023c:
    // 0x25023c: 0xdfbf00a0
    ctx->pc = 0x25023cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x250240: 0xdfb50090
    ctx->pc = 0x250240u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x250244: 0xdfb40080
    ctx->pc = 0x250244u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x250248: 0xdfb30070
    ctx->pc = 0x250248u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25024c: 0xdfb20060
    ctx->pc = 0x25024cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x250250: 0xdfb10050
    ctx->pc = 0x250250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x250254: 0xdfb00040
    ctx->pc = 0x250254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x250258: 0x3e00008
    ctx->pc = 0x250258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25025Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25015Cu: goto label_25015c;
            case 0x250190u: goto label_250190;
            case 0x2501B0u: goto label_2501b0;
            case 0x2501B8u: goto label_2501b8;
            case 0x2501ECu: goto label_2501ec;
            case 0x250200u: goto label_250200;
            case 0x250218u: goto label_250218;
            case 0x250228u: goto label_250228;
            case 0x250234u: goto label_250234;
            case 0x25023Cu: goto label_25023c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x250260u;
}
