#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FileMap
// Address: 0x2d3b78 - 0x2d3c44
void FileMap_0x2d3b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d3b78u;

    // 0x2d3b78: 0x27bdff70
    ctx->pc = 0x2d3b78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d3b7c: 0xffbf0080
    ctx->pc = 0x2d3b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d3b80: 0xffb70070
    ctx->pc = 0x2d3b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2d3b84: 0xffb60060
    ctx->pc = 0x2d3b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2d3b88: 0xffb50050
    ctx->pc = 0x2d3b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2d3b8c: 0xffb40040
    ctx->pc = 0x2d3b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d3b90: 0xffb30030
    ctx->pc = 0x2d3b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d3b94: 0xffb20020
    ctx->pc = 0x2d3b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d3b98: 0xffb10010
    ctx->pc = 0x2d3b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d3b9c: 0xffb00000
    ctx->pc = 0x2d3b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d3ba0: 0x80882d
    ctx->pc = 0x2d3ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ba4: 0xa0902d
    ctx->pc = 0x2d3ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ba8: 0xc0982d
    ctx->pc = 0x2d3ba8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3bac: 0xe0a02d
    ctx->pc = 0x2d3bacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3bb0: 0x100a82d
    ctx->pc = 0x2d3bb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3bb4: 0x120b02d
    ctx->pc = 0x2d3bb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3bb8: 0xc0b5346
    ctx->pc = 0x2D3BB8u;
    SET_GPR_U32(ctx, 31, 0x2D3BC0u);
    ctx->pc = 0x2D3BBCu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D4D18u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWadInfo_0x2d4d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3BC0u; }
    }
    if (ctx->pc != 0x2D3BC0u) { return; }
    ctx->pc = 0x2D3BC0u;
    // 0x2d3bc0: 0x40802d
    ctx->pc = 0x2d3bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3bc4: 0x12000013
    ctx->pc = 0x2D3BC4u;
    {
        const bool branch_taken_0x2d3bc4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D3BC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2d3bc4) {
            ctx->pc = 0x2D3C14u;
            goto label_2d3c14;
        }
    }
    ctx->pc = 0x2D3BCCu;
    // 0x2d3bcc: 0x8e03000c
    ctx->pc = 0x2d3bccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d3bd0: 0x1462000c
    ctx->pc = 0x2D3BD0u;
    {
        const bool branch_taken_0x2d3bd0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2D3BD4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2d3bd0) {
            ctx->pc = 0x2D3C04u;
            goto label_2d3c04;
        }
    }
    ctx->pc = 0x2D3BD8u;
    // 0x2d3bd8: 0x260202d
    ctx->pc = 0x2d3bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3bdc: 0x3c05003b
    ctx->pc = 0x2d3bdcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2d3be0: 0x24a57a10
    ctx->pc = 0x2d3be0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31248));
    // 0x2d3be4: 0xc0bf42e
    ctx->pc = 0x2D3BE4u;
    SET_GPR_U32(ctx, 31, 0x2D3BECu);
    ctx->pc = 0x2D3BE8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FD0B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x2fd0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3BECu; }
    }
    if (ctx->pc != 0x2D3BECu) { return; }
    ctx->pc = 0x2D3BECu;
    // 0x2d3bec: 0x8e020004
    ctx->pc = 0x2d3becu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d3bf0: 0xaea20000
    ctx->pc = 0x2d3bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x2d3bf4: 0x8e020000
    ctx->pc = 0x2d3bf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3bf8: 0xaec20000
    ctx->pc = 0x2d3bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x2d3bfc: 0x10000005
    ctx->pc = 0x2D3BFCu;
    {
        const bool branch_taken_0x2d3bfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D3C00u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2d3bfc) {
            ctx->pc = 0x2D3C14u;
            goto label_2d3c14;
        }
    }
    ctx->pc = 0x2D3C04u;
label_2d3c04:
    // 0x2d3c04: 0x24847a18
    ctx->pc = 0x2d3c04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31256));
    // 0x2d3c08: 0x220282d
    ctx->pc = 0x2d3c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c0c: 0xc0b4a34
    ctx->pc = 0x2D3C0Cu;
    SET_GPR_U32(ctx, 31, 0x2D3C14u);
    ctx->pc = 0x2D3C10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3C14u; }
    }
    if (ctx->pc != 0x2D3C14u) { return; }
    ctx->pc = 0x2D3C14u;
label_2d3c14:
    // 0x2d3c14: 0x2e0102d
    ctx->pc = 0x2d3c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c18: 0xdfbf0080
    ctx->pc = 0x2d3c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d3c1c: 0xdfb70070
    ctx->pc = 0x2d3c1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d3c20: 0xdfb60060
    ctx->pc = 0x2d3c20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d3c24: 0xdfb50050
    ctx->pc = 0x2d3c24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d3c28: 0xdfb40040
    ctx->pc = 0x2d3c28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3c2c: 0xdfb30030
    ctx->pc = 0x2d3c2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3c30: 0xdfb20020
    ctx->pc = 0x2d3c30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3c34: 0xdfb10010
    ctx->pc = 0x2d3c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3c38: 0xdfb00000
    ctx->pc = 0x2d3c38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3c3c: 0x3e00008
    ctx->pc = 0x2D3C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3C40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D3C04u: goto label_2d3c04;
            case 0x2D3C14u: goto label_2d3c14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D3C44u;
}
