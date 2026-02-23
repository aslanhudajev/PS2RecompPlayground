#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFHDS_SetHdr
// Address: 0x192e48 - 0x192efc
void SFHDS_SetHdr_0x192e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFHDS_SetHdr");


    ctx->pc = 0x192e48u;

    // 0x192e48: 0x27bdffb0
    ctx->pc = 0x192e48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x192e4c: 0x24020002
    ctx->pc = 0x192e4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x192e50: 0xffb20020
    ctx->pc = 0x192e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x192e54: 0xffb30030
    ctx->pc = 0x192e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x192e58: 0x100902d
    ctx->pc = 0x192e58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e5c: 0xffb10010
    ctx->pc = 0x192e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x192e60: 0x80982d
    ctx->pc = 0x192e60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e64: 0xffb00000
    ctx->pc = 0x192e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x192e68: 0xe0882d
    ctx->pc = 0x192e68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e6c: 0xffbf0040
    ctx->pc = 0x192e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x192e70: 0xc0802d
    ctx->pc = 0x192e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e74: 0x14a20013
    ctx->pc = 0x192E74u;
    {
        const bool branch_taken_0x192e74 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x192E78u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x192e74) {
            ctx->pc = 0x192EC4u;
            goto label_192ec4;
        }
    }
    ctx->pc = 0x192E7Cu;
    // 0x192e7c: 0x2610fffa
    ctx->pc = 0x192e7cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x192e80: 0x26310006
    ctx->pc = 0x192e80u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 6));
    // 0x192e84: 0xc064bc0
    ctx->pc = 0x192E84u;
    SET_GPR_U32(ctx, 31, 0x192E8Cu);
    ctx->pc = 0x192E88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_IsPrvate2PketStart_0x192f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192E8Cu; }
        else if (ctx->pc != 0x192E8Cu) { ctx->pc = 0x192E8Cu; }
    }
    if (ctx->pc != 0x192E8Cu) { return; }
    ctx->pc = 0x192E8Cu;
    // 0x192e8c: 0x54400007
    ctx->pc = 0x192E8Cu;
    {
        const bool branch_taken_0x192e8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x192e8c) {
            ctx->pc = 0x192E90u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967284));
            ctx->pc = 0x192EACu;
            goto label_192eac;
        }
    }
    ctx->pc = 0x192E94u;
    // 0x192e94: 0x2610fffe
    ctx->pc = 0x192e94u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x192e98: 0x26310002
    ctx->pc = 0x192e98u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2));
    // 0x192e9c: 0xc064bc0
    ctx->pc = 0x192E9Cu;
    SET_GPR_U32(ctx, 31, 0x192EA4u);
    ctx->pc = 0x192EA0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_IsPrvate2PketStart_0x192f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192EA4u; }
        else if (ctx->pc != 0x192EA4u) { ctx->pc = 0x192EA4u; }
    }
    if (ctx->pc != 0x192EA4u) { return; }
    ctx->pc = 0x192EA4u;
    // 0x192ea4: 0x10400007
    ctx->pc = 0x192EA4u;
    {
        const bool branch_taken_0x192ea4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x192EA8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967284));
        if (branch_taken_0x192ea4) {
            ctx->pc = 0x192EC4u;
            goto label_192ec4;
        }
    }
    ctx->pc = 0x192EACu;
label_192eac:
    // 0x192eac: 0x2631000c
    ctx->pc = 0x192eacu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 12));
    // 0x192eb0: 0x200202d
    ctx->pc = 0x192eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192eb4: 0xc064bd6
    ctx->pc = 0x192EB4u;
    SET_GPR_U32(ctx, 31, 0x192EBCu);
    ctx->pc = 0x192EB8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192F58u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFHDS_IsSfdHeader_0x192f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192EBCu; }
        else if (ctx->pc != 0x192EBCu) { ctx->pc = 0x192EBCu; }
    }
    if (ctx->pc != 0x192EBCu) { return; }
    ctx->pc = 0x192EBCu;
    // 0x192ebc: 0x14400003
    ctx->pc = 0x192EBCu;
    {
        const bool branch_taken_0x192ebc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x192EC0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x192ebc) {
            ctx->pc = 0x192ECCu;
            goto label_192ecc;
        }
    }
    ctx->pc = 0x192EC4u;
label_192ec4:
    // 0x192ec4: 0x10000006
    ctx->pc = 0x192EC4u;
    {
        const bool branch_taken_0x192ec4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192EC8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x192ec4) {
            ctx->pc = 0x192EE0u;
            goto label_192ee0;
        }
    }
    ctx->pc = 0x192ECCu;
label_192ecc:
    // 0x192ecc: 0x200282d
    ctx->pc = 0x192eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ed0: 0xc064bec
    ctx->pc = 0x192ED0u;
    SET_GPR_U32(ctx, 31, 0x192ED8u);
    ctx->pc = 0x192ED4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_SetHdrRaw_0x192fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192ED8u; }
        else if (ctx->pc != 0x192ED8u) { ctx->pc = 0x192ED8u; }
    }
    if (ctx->pc != 0x192ED8u) { return; }
    ctx->pc = 0x192ED8u;
    // 0x192ed8: 0xae420000
    ctx->pc = 0x192ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x192edc: 0x24020001
    ctx->pc = 0x192edcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_192ee0:
    // 0x192ee0: 0xdfbf0040
    ctx->pc = 0x192ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192ee4: 0xdfb30030
    ctx->pc = 0x192ee4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192ee8: 0xdfb20020
    ctx->pc = 0x192ee8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192eec: 0xdfb10010
    ctx->pc = 0x192eecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192ef0: 0xdfb00000
    ctx->pc = 0x192ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192ef4: 0x3e00008
    ctx->pc = 0x192EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192EF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192EACu: goto label_192eac;
            case 0x192EC4u: goto label_192ec4;
            case 0x192ECCu: goto label_192ecc;
            case 0x192EE0u: goto label_192ee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192EFCu;
}
