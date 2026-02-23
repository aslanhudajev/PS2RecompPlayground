#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJMEM_Create
// Address: 0x17bfb0 - 0x17c06c
void SJMEM_Create_0x17bfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJMEM_Create");


    ctx->pc = 0x17bfb0u;

    // 0x17bfb0: 0x27bdffe0
    ctx->pc = 0x17bfb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bfb4: 0x3c060024
    ctx->pc = 0x17bfb4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x17bfb8: 0xffbf0010
    ctx->pc = 0x17bfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17bfbc: 0x24c3ec80
    ctx->pc = 0x17bfbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294962304));
    // 0x17bfc0: 0xffb00000
    ctx->pc = 0x17bfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17bfc4: 0xa0382d
    ctx->pc = 0x17bfc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bfc8: 0x80402d
    ctx->pc = 0x17bfc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bfcc: 0x8c620004
    ctx->pc = 0x17bfccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17bfd0: 0x10400009
    ctx->pc = 0x17BFD0u;
    {
        const bool branch_taken_0x17bfd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17BFD4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17bfd0) {
            ctx->pc = 0x17BFF8u;
            goto label_17bff8;
        }
    }
    ctx->pc = 0x17BFD8u;
    // 0x17bfd8: 0x24630004
    ctx->pc = 0x17bfd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x17bfdc: 0x24a50001
    ctx->pc = 0x17bfdcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_17bfe0:
    // 0x17bfe0: 0x28a20020
    ctx->pc = 0x17bfe0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
    // 0x17bfe4: 0x10400004
    ctx->pc = 0x17BFE4u;
    {
        const bool branch_taken_0x17bfe4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17BFE8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 36));
        if (branch_taken_0x17bfe4) {
            ctx->pc = 0x17BFF8u;
            goto label_17bff8;
        }
    }
    ctx->pc = 0x17BFECu;
    // 0x17bfec: 0x8c620000
    ctx->pc = 0x17bfecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17bff0: 0x5440fffb
    ctx->pc = 0x17BFF0u;
    {
        const bool branch_taken_0x17bff0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17bff0) {
            ctx->pc = 0x17BFF4u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x17BFE0u;
            goto label_17bfe0;
        }
    }
    ctx->pc = 0x17BFF8u;
label_17bff8:
    // 0x17bff8: 0x24020020
    ctx->pc = 0x17bff8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x17bffc: 0x14a20003
    ctx->pc = 0x17BFFCu;
    {
        const bool branch_taken_0x17bffc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x17C000u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 36));
        if (branch_taken_0x17bffc) {
            ctx->pc = 0x17C00Cu;
            goto label_17c00c;
        }
    }
    ctx->pc = 0x17C004u;
    // 0x17c004: 0x10000015
    ctx->pc = 0x17C004u;
    {
        const bool branch_taken_0x17c004 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C008u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17c004) {
            ctx->pc = 0x17C05Cu;
            goto label_17c05c;
        }
    }
    ctx->pc = 0x17C00Cu;
label_17c00c:
    // 0x17c00c: 0x24c4ec80
    ctx->pc = 0x17c00cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 4294962304));
    // 0x17c010: 0xb08018
    ctx->pc = 0x17c010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
    // 0x17c014: 0x3c030024
    ctx->pc = 0x17c014u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x17c018: 0x3c05002c
    ctx->pc = 0x17c018u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x17c01c: 0x3c060018
    ctx->pc = 0x17c01cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)24 << 16));
    // 0x17c020: 0x2463ec50
    ctx->pc = 0x17c020u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294962256));
    // 0x17c024: 0x24a5bf50
    ctx->pc = 0x17c024u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950736));
    // 0x17c028: 0x24c6bf20
    ctx->pc = 0x17c028u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950688));
    // 0x17c02c: 0x24020001
    ctx->pc = 0x17c02cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c030: 0x2048021
    ctx->pc = 0x17c030u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x17c034: 0xae020004
    ctx->pc = 0x17c034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x17c038: 0x200202d
    ctx->pc = 0x17c038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c03c: 0xae030000
    ctx->pc = 0x17c03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x17c040: 0xae080014
    ctx->pc = 0x17c040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 8));
    // 0x17c044: 0xae070018
    ctx->pc = 0x17c044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    // 0x17c048: 0xae050008
    ctx->pc = 0x17c048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x17c04c: 0xae06001c
    ctx->pc = 0x17c04cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
    // 0x17c050: 0xc05f030
    ctx->pc = 0x17C050u;
    SET_GPR_U32(ctx, 31, 0x17C058u);
    ctx->pc = 0x17C054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 16));
    ctx->pc = 0x17C0C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJMEM_Reset_0x17c0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C058u; }
        else if (ctx->pc != 0x17C058u) { ctx->pc = 0x17C058u; }
    }
    if (ctx->pc != 0x17C058u) { return; }
    ctx->pc = 0x17C058u;
    // 0x17c058: 0x200102d
    ctx->pc = 0x17c058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17c05c:
    // 0x17c05c: 0xdfbf0010
    ctx->pc = 0x17c05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c060: 0xdfb00000
    ctx->pc = 0x17c060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c064: 0x3e00008
    ctx->pc = 0x17C064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C068u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BFE0u: goto label_17bfe0;
            case 0x17BFF8u: goto label_17bff8;
            case 0x17C00Cu: goto label_17c00c;
            case 0x17C05Cu: goto label_17c05c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C06Cu;
}
