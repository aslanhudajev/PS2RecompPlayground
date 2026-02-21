#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeNodePrevNode
// Address: 0x2118f8 - 0x211978
void AtreeNodePrevNode_0x2118f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2118f8u;

    // 0x2118f8: 0x8c820004
    ctx->pc = 0x2118f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2118fc: 0x5440000e
    ctx->pc = 0x2118FCu;
    {
        const bool branch_taken_0x2118fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2118fc) {
            ctx->pc = 0x211900u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->pc = 0x211938u;
            goto label_211938;
        }
    }
    ctx->pc = 0x211904u;
    // 0x211904: 0x10000005
    ctx->pc = 0x211904u;
    {
        const bool branch_taken_0x211904 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x211904) {
            ctx->pc = 0x21191Cu;
            goto label_21191c;
        }
    }
    ctx->pc = 0x21190Cu;
    // 0x21190c: 0x0
    ctx->pc = 0x21190cu;
    // NOP
label_211910:
    // 0x211910: 0x1044000d
    ctx->pc = 0x211910u;
    {
        const bool branch_taken_0x211910 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x211910) {
            ctx->pc = 0x211948u;
            goto label_211948;
        }
    }
    ctx->pc = 0x211918u;
    // 0x211918: 0x40282d
    ctx->pc = 0x211918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21191c:
    // 0x21191c: 0x10a00008
    ctx->pc = 0x21191Cu;
    {
        const bool branch_taken_0x21191c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x21191c) {
            ctx->pc = 0x211940u;
            goto label_211940;
        }
    }
    ctx->pc = 0x211924u;
    // 0x211924: 0x8ca2000c
    ctx->pc = 0x211924u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x211928: 0x1440fff9
    ctx->pc = 0x211928u;
    {
        const bool branch_taken_0x211928 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x211928) {
            ctx->pc = 0x211910u;
            goto label_211910;
        }
    }
    ctx->pc = 0x211930u;
    // 0x211930: 0x3e00008
    ctx->pc = 0x211930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211934u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211910u: goto label_211910;
            case 0x21191Cu: goto label_21191c;
            case 0x211938u: goto label_211938;
            case 0x211940u: goto label_211940;
            case 0x211948u: goto label_211948;
            case 0x211950u: goto label_211950;
            case 0x211958u: goto label_211958;
            default: break;
        }
        return;
    }
    ctx->pc = 0x211938u;
label_211938:
    // 0x211938: 0x54640007
    ctx->pc = 0x211938u;
    {
        const bool branch_taken_0x211938 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x211938) {
            ctx->pc = 0x21193Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->pc = 0x211958u;
            goto label_211958;
        }
    }
    ctx->pc = 0x211940u;
label_211940:
    // 0x211940: 0x3e00008
    ctx->pc = 0x211940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211944u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211910u: goto label_211910;
            case 0x21191Cu: goto label_21191c;
            case 0x211938u: goto label_211938;
            case 0x211940u: goto label_211940;
            case 0x211948u: goto label_211948;
            case 0x211950u: goto label_211950;
            case 0x211958u: goto label_211958;
            default: break;
        }
        return;
    }
    ctx->pc = 0x211948u;
label_211948:
    // 0x211948: 0x3e00008
    ctx->pc = 0x211948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21194Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211910u: goto label_211910;
            case 0x21191Cu: goto label_21191c;
            case 0x211938u: goto label_211938;
            case 0x211940u: goto label_211940;
            case 0x211948u: goto label_211948;
            case 0x211950u: goto label_211950;
            case 0x211958u: goto label_211958;
            default: break;
        }
        return;
    }
    ctx->pc = 0x211950u;
label_211950:
    // 0x211950: 0x8c63000c
    ctx->pc = 0x211950u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x211954: 0x8c62000c
    ctx->pc = 0x211954u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_211958:
    // 0x211958: 0x0
    ctx->pc = 0x211958u;
    // NOP
    // 0x21195c: 0x0
    ctx->pc = 0x21195cu;
    // NOP
    // 0x211960: 0x0
    ctx->pc = 0x211960u;
    // NOP
    // 0x211964: 0x1444fffa
    ctx->pc = 0x211964u;
    {
        const bool branch_taken_0x211964 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x211964) {
            ctx->pc = 0x211950u;
            goto label_211950;
        }
    }
    ctx->pc = 0x21196Cu;
    // 0x21196c: 0x60102d
    ctx->pc = 0x21196cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211970: 0x3e00008
    ctx->pc = 0x211970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211910u: goto label_211910;
            case 0x21191Cu: goto label_21191c;
            case 0x211938u: goto label_211938;
            case 0x211940u: goto label_211940;
            case 0x211948u: goto label_211948;
            case 0x211950u: goto label_211950;
            case 0x211958u: goto label_211958;
            default: break;
        }
        return;
    }
    ctx->pc = 0x211978u;
}
