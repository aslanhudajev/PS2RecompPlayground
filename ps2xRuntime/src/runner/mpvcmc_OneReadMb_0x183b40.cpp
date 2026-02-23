#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvcmc_OneReadMb
// Address: 0x183b40 - 0x183db4
void mpvcmc_OneReadMb_0x183b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvcmc_OneReadMb");


    ctx->pc = 0x183b40u;

label_183b40:
    // 0x183b40: 0x27bdff30
    ctx->pc = 0x183b40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
label_183b44:
    // 0x183b44: 0xffbe00b0
    ctx->pc = 0x183b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_183b48:
    // 0x183b48: 0xffb60090
    ctx->pc = 0x183b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_183b4c:
    // 0x183b4c: 0xa0f02d
    ctx->pc = 0x183b4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_183b50:
    // 0x183b50: 0xffb40070
    ctx->pc = 0x183b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_183b54:
    // 0x183b54: 0xe0b02d
    ctx->pc = 0x183b54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_183b58:
    // 0x183b58: 0xffb30060
    ctx->pc = 0x183b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_183b5c:
    // 0x183b5c: 0x249400c4
    ctx->pc = 0x183b5cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 4), 196));
label_183b60:
    // 0x183b60: 0xffb20050
    ctx->pc = 0x183b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_183b64:
    // 0x183b64: 0xc0982d
    ctx->pc = 0x183b64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_183b68:
    // 0x183b68: 0xffb10040
    ctx->pc = 0x183b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_183b6c:
    // 0x183b6c: 0x100902d
    ctx->pc = 0x183b6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_183b70:
    // 0x183b70: 0xffb00030
    ctx->pc = 0x183b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_183b74:
    // 0x183b74: 0xffbf00c0
    ctx->pc = 0x183b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_183b78:
    // 0x183b78: 0xffb700a0
    ctx->pc = 0x183b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_183b7c:
    // 0x183b7c: 0xffb50080
    ctx->pc = 0x183b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_183b80:
    // 0x183b80: 0x8c820174
    ctx->pc = 0x183b80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 372)));
label_183b84:
    // 0x183b84: 0xafa20020
    ctx->pc = 0x183b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_183b88:
    // 0x183b88: 0x8c85029c
    ctx->pc = 0x183b88u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 668)));
label_183b8c:
    // 0x183b8c: 0x86d5000c
    ctx->pc = 0x183b8cu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 12)));
label_183b90:
    // 0x183b90: 0xc061222
label_183b94:
    if (ctx->pc == 0x183B94u) {
        ctx->pc = 0x183B94u;
        SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 14)));
        ctx->pc = 0x183B98u;
        goto label_183b98;
    }
    ctx->pc = 0x183B90u;
    SET_GPR_U32(ctx, 31, 0x183B98u);
    ctx->pc = 0x183B94u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 14)));
    ctx->pc = 0x184888u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_CalcOfs_0x184888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B98u; }
        else if (ctx->pc != 0x183B98u) { ctx->pc = 0x183B98u; }
    }
    if (ctx->pc != 0x183B98u) { return; }
    ctx->pc = 0x183B98u;
label_183b98:
    // 0x183b98: 0x8e51001c
    ctx->pc = 0x183b98u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_183b9c:
    // 0x183b9c: 0x3a0302d
    ctx->pc = 0x183b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_183ba0:
    // 0x183ba0: 0x8e500018
    ctx->pc = 0x183ba0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_183ba4:
    // 0x183ba4: 0x112fc2
    ctx->pc = 0x183ba4u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 17), 31));
label_183ba8:
    // 0x183ba8: 0x1027c2
    ctx->pc = 0x183ba8u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 16), 31));
label_183bac:
    // 0x183bac: 0x2252821
    ctx->pc = 0x183bacu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_183bb0:
    // 0x183bb0: 0x2042021
    ctx->pc = 0x183bb0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_183bb4:
    // 0x183bb4: 0x52843
    ctx->pc = 0x183bb4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_183bb8:
    // 0x183bb8: 0xc061234
label_183bbc:
    if (ctx->pc == 0x183BBCu) {
        ctx->pc = 0x183BBCu;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
        ctx->pc = 0x183BC0u;
        goto label_183bc0;
    }
    ctx->pc = 0x183BB8u;
    SET_GPR_U32(ctx, 31, 0x183BC0u);
    ctx->pc = 0x183BBCu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    ctx->pc = 0x1848D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_CalcMv_0x1848d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183BC0u; }
        else if (ctx->pc != 0x183BC0u) { ctx->pc = 0x183BC0u; }
    }
    if (ctx->pc != 0x183BC0u) { return; }
    ctx->pc = 0x183BC0u;
label_183bc0:
    // 0x183bc0: 0x8fa30004
    ctx->pc = 0x183bc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_183bc4:
    // 0x183bc4: 0x200202d
    ctx->pc = 0x183bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_183bc8:
    // 0x183bc8: 0x8e620000
    ctx->pc = 0x183bc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_183bcc:
    // 0x183bcc: 0x220282d
    ctx->pc = 0x183bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_183bd0:
    // 0x183bd0: 0x751818
    ctx->pc = 0x183bd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
label_183bd4:
    // 0x183bd4: 0x8fa70000
    ctx->pc = 0x183bd4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_183bd8:
    // 0x183bd8: 0x27a60010
    ctx->pc = 0x183bd8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
label_183bdc:
    // 0x183bdc: 0x471021
    ctx->pc = 0x183bdcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_183be0:
    // 0x183be0: 0xc061234
label_183be4:
    if (ctx->pc == 0x183BE4u) {
        ctx->pc = 0x183BE4u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x183BE8u;
        goto label_183be8;
    }
    ctx->pc = 0x183BE0u;
    SET_GPR_U32(ctx, 31, 0x183BE8u);
    ctx->pc = 0x183BE4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1848D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_CalcMv_0x1848d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183BE8u; }
        else if (ctx->pc != 0x183BE8u) { ctx->pc = 0x183BE8u; }
    }
    if (ctx->pc != 0x183BE8u) { return; }
    ctx->pc = 0x183BE8u;
label_183be8:
    // 0x183be8: 0x8fa20020
    ctx->pc = 0x183be8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_183bec:
    // 0x183bec: 0x3c05002c
    ctx->pc = 0x183becu;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
label_183bf0:
    // 0x183bf0: 0x8fa40018
    ctx->pc = 0x183bf0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_183bf4:
    // 0x183bf4: 0x24a5c868
    ctx->pc = 0x183bf4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953064));
label_183bf8:
    // 0x183bf8: 0x24900
    ctx->pc = 0x183bf8u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 2), 4));
label_183bfc:
    // 0x183bfc: 0x8faa0008
    ctx->pc = 0x183bfcu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_183c00:
    // 0x183c00: 0x8fa2001c
    ctx->pc = 0x183c00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_183c04:
    // 0x183c04: 0x8fa3000c
    ctx->pc = 0x183c04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_183c08:
    // 0x183c08: 0x8fa70014
    ctx->pc = 0x183c08u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_183c0c:
    // 0x183c0c: 0x21040
    ctx->pc = 0x183c0cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_183c10:
    // 0x183c10: 0xae9e0008
    ctx->pc = 0x183c10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 30));
label_183c14:
    // 0x183c14: 0x441021
    ctx->pc = 0x183c14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_183c18:
    // 0x183c18: 0xf73818
    ctx->pc = 0x183c18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)(uint32_t)result); }
label_183c1c:
    // 0x183c1c: 0x8e640004
    ctx->pc = 0x183c1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_183c20:
    // 0x183c20: 0x8fa60010
    ctx->pc = 0x183c20u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_183c24:
    // 0x183c24: 0x31840
    ctx->pc = 0x183c24u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
label_183c28:
    // 0x183c28: 0x8ec80000
    ctx->pc = 0x183c28u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_183c2c:
    // 0x183c2c: 0x21080
    ctx->pc = 0x183c2cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_183c30:
    // 0x183c30: 0x862021
    ctx->pc = 0x183c30u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_183c34:
    // 0x183c34: 0x6a1821
    ctx->pc = 0x183c34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_183c38:
    // 0x183c38: 0x879821
    ctx->pc = 0x183c38u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_183c3c:
    // 0x183c3c: 0x491021
    ctx->pc = 0x183c3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_183c40:
    // 0x183c40: 0x1123821
    ctx->pc = 0x183c40u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
label_183c44:
    // 0x183c44: 0x451021
    ctx->pc = 0x183c44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_183c48:
    // 0x183c48: 0x31880
    ctx->pc = 0x183c48u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_183c4c:
    // 0x183c4c: 0xae950010
    ctx->pc = 0x183c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 21));
label_183c50:
    // 0x183c50: 0xae870014
    ctx->pc = 0x183c50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 7));
label_183c54:
    // 0x183c54: 0x691821
    ctx->pc = 0x183c54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_183c58:
    // 0x183c58: 0x8c500000
    ctx->pc = 0x183c58u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_183c5c:
    // 0x183c5c: 0x651821
    ctx->pc = 0x183c5cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_183c60:
    // 0x183c60: 0x8fa20020
    ctx->pc = 0x183c60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_183c64:
    // 0x183c64: 0x10400004
label_183c68:
    if (ctx->pc == 0x183C68u) {
        ctx->pc = 0x183C68u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x183C6Cu;
        goto label_183c6c;
    }
    ctx->pc = 0x183C64u;
    {
        const bool branch_taken_0x183c64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x183C68u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x183c64) {
            ctx->pc = 0x183C78u;
            goto label_183c78;
        }
    }
    ctx->pc = 0x183C6Cu;
label_183c6c:
    // 0x183c6c: 0x2aa1021
    ctx->pc = 0x183c6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 10)));
label_183c70:
    // 0x183c70: 0x10000002
label_183c74:
    if (ctx->pc == 0x183C74u) {
        ctx->pc = 0x183C74u;
        SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->pc = 0x183C78u;
        goto label_183c78;
    }
    ctx->pc = 0x183C70u;
    {
        const bool branch_taken_0x183c70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x183C74u;
        SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        if (branch_taken_0x183c70) {
            ctx->pc = 0x183C7Cu;
            goto label_183c7c;
        }
    }
    ctx->pc = 0x183C78u;
label_183c78:
    // 0x183c78: 0xf53821
    ctx->pc = 0x183c78u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
label_183c7c:
    // 0x183c7c: 0xae870018
    ctx->pc = 0x183c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 7));
label_183c80:
    // 0x183c80: 0x220f809
label_183c84:
    if (ctx->pc == 0x183C84u) {
        ctx->pc = 0x183C84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183C88u;
        goto label_183c88;
    }
    ctx->pc = 0x183C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x183C88u);
        ctx->pc = 0x183C84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183B40u: goto label_183b40;
            case 0x183B44u: goto label_183b44;
            case 0x183B48u: goto label_183b48;
            case 0x183B4Cu: goto label_183b4c;
            case 0x183B50u: goto label_183b50;
            case 0x183B54u: goto label_183b54;
            case 0x183B58u: goto label_183b58;
            case 0x183B5Cu: goto label_183b5c;
            case 0x183B60u: goto label_183b60;
            case 0x183B64u: goto label_183b64;
            case 0x183B68u: goto label_183b68;
            case 0x183B6Cu: goto label_183b6c;
            case 0x183B70u: goto label_183b70;
            case 0x183B74u: goto label_183b74;
            case 0x183B78u: goto label_183b78;
            case 0x183B7Cu: goto label_183b7c;
            case 0x183B80u: goto label_183b80;
            case 0x183B84u: goto label_183b84;
            case 0x183B88u: goto label_183b88;
            case 0x183B8Cu: goto label_183b8c;
            case 0x183B90u: goto label_183b90;
            case 0x183B94u: goto label_183b94;
            case 0x183B98u: goto label_183b98;
            case 0x183B9Cu: goto label_183b9c;
            case 0x183BA0u: goto label_183ba0;
            case 0x183BA4u: goto label_183ba4;
            case 0x183BA8u: goto label_183ba8;
            case 0x183BACu: goto label_183bac;
            case 0x183BB0u: goto label_183bb0;
            case 0x183BB4u: goto label_183bb4;
            case 0x183BB8u: goto label_183bb8;
            case 0x183BBCu: goto label_183bbc;
            case 0x183BC0u: goto label_183bc0;
            case 0x183BC4u: goto label_183bc4;
            case 0x183BC8u: goto label_183bc8;
            case 0x183BCCu: goto label_183bcc;
            case 0x183BD0u: goto label_183bd0;
            case 0x183BD4u: goto label_183bd4;
            case 0x183BD8u: goto label_183bd8;
            case 0x183BDCu: goto label_183bdc;
            case 0x183BE0u: goto label_183be0;
            case 0x183BE4u: goto label_183be4;
            case 0x183BE8u: goto label_183be8;
            case 0x183BECu: goto label_183bec;
            case 0x183BF0u: goto label_183bf0;
            case 0x183BF4u: goto label_183bf4;
            case 0x183BF8u: goto label_183bf8;
            case 0x183BFCu: goto label_183bfc;
            case 0x183C00u: goto label_183c00;
            case 0x183C04u: goto label_183c04;
            case 0x183C08u: goto label_183c08;
            case 0x183C0Cu: goto label_183c0c;
            case 0x183C10u: goto label_183c10;
            case 0x183C14u: goto label_183c14;
            case 0x183C18u: goto label_183c18;
            case 0x183C1Cu: goto label_183c1c;
            case 0x183C20u: goto label_183c20;
            case 0x183C24u: goto label_183c24;
            case 0x183C28u: goto label_183c28;
            case 0x183C2Cu: goto label_183c2c;
            case 0x183C30u: goto label_183c30;
            case 0x183C34u: goto label_183c34;
            case 0x183C38u: goto label_183c38;
            case 0x183C3Cu: goto label_183c3c;
            case 0x183C40u: goto label_183c40;
            case 0x183C44u: goto label_183c44;
            case 0x183C48u: goto label_183c48;
            case 0x183C4Cu: goto label_183c4c;
            case 0x183C50u: goto label_183c50;
            case 0x183C54u: goto label_183c54;
            case 0x183C58u: goto label_183c58;
            case 0x183C5Cu: goto label_183c5c;
            case 0x183C60u: goto label_183c60;
            case 0x183C64u: goto label_183c64;
            case 0x183C68u: goto label_183c68;
            case 0x183C6Cu: goto label_183c6c;
            case 0x183C70u: goto label_183c70;
            case 0x183C74u: goto label_183c74;
            case 0x183C78u: goto label_183c78;
            case 0x183C7Cu: goto label_183c7c;
            case 0x183C80u: goto label_183c80;
            case 0x183C84u: goto label_183c84;
            case 0x183C88u: goto label_183c88;
            case 0x183C8Cu: goto label_183c8c;
            case 0x183C90u: goto label_183c90;
            case 0x183C94u: goto label_183c94;
            case 0x183C98u: goto label_183c98;
            case 0x183C9Cu: goto label_183c9c;
            case 0x183CA0u: goto label_183ca0;
            case 0x183CA4u: goto label_183ca4;
            case 0x183CA8u: goto label_183ca8;
            case 0x183CACu: goto label_183cac;
            case 0x183CB0u: goto label_183cb0;
            case 0x183CB4u: goto label_183cb4;
            case 0x183CB8u: goto label_183cb8;
            case 0x183CBCu: goto label_183cbc;
            case 0x183CC0u: goto label_183cc0;
            case 0x183CC4u: goto label_183cc4;
            case 0x183CC8u: goto label_183cc8;
            case 0x183CCCu: goto label_183ccc;
            case 0x183CD0u: goto label_183cd0;
            case 0x183CD4u: goto label_183cd4;
            case 0x183CD8u: goto label_183cd8;
            case 0x183CDCu: goto label_183cdc;
            case 0x183CE0u: goto label_183ce0;
            case 0x183CE4u: goto label_183ce4;
            case 0x183CE8u: goto label_183ce8;
            case 0x183CECu: goto label_183cec;
            case 0x183CF0u: goto label_183cf0;
            case 0x183CF4u: goto label_183cf4;
            case 0x183CF8u: goto label_183cf8;
            case 0x183CFCu: goto label_183cfc;
            case 0x183D00u: goto label_183d00;
            case 0x183D04u: goto label_183d04;
            case 0x183D08u: goto label_183d08;
            case 0x183D0Cu: goto label_183d0c;
            case 0x183D10u: goto label_183d10;
            case 0x183D14u: goto label_183d14;
            case 0x183D18u: goto label_183d18;
            case 0x183D1Cu: goto label_183d1c;
            case 0x183D20u: goto label_183d20;
            case 0x183D24u: goto label_183d24;
            case 0x183D28u: goto label_183d28;
            case 0x183D2Cu: goto label_183d2c;
            case 0x183D30u: goto label_183d30;
            case 0x183D34u: goto label_183d34;
            case 0x183D38u: goto label_183d38;
            case 0x183D3Cu: goto label_183d3c;
            case 0x183D40u: goto label_183d40;
            case 0x183D44u: goto label_183d44;
            case 0x183D48u: goto label_183d48;
            case 0x183D4Cu: goto label_183d4c;
            case 0x183D50u: goto label_183d50;
            case 0x183D54u: goto label_183d54;
            case 0x183D58u: goto label_183d58;
            case 0x183D5Cu: goto label_183d5c;
            case 0x183D60u: goto label_183d60;
            case 0x183D64u: goto label_183d64;
            case 0x183D68u: goto label_183d68;
            case 0x183D6Cu: goto label_183d6c;
            case 0x183D70u: goto label_183d70;
            case 0x183D74u: goto label_183d74;
            case 0x183D78u: goto label_183d78;
            case 0x183D7Cu: goto label_183d7c;
            case 0x183D80u: goto label_183d80;
            case 0x183D84u: goto label_183d84;
            case 0x183D88u: goto label_183d88;
            case 0x183D8Cu: goto label_183d8c;
            case 0x183D90u: goto label_183d90;
            case 0x183D94u: goto label_183d94;
            case 0x183D98u: goto label_183d98;
            case 0x183D9Cu: goto label_183d9c;
            case 0x183DA0u: goto label_183da0;
            case 0x183DA4u: goto label_183da4;
            case 0x183DA8u: goto label_183da8;
            case 0x183DACu: goto label_183dac;
            case 0x183DB0u: goto label_183db0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x183C88u; }
            if (ctx->pc != 0x183C88u) { return; }
        }
    }
    ctx->pc = 0x183C88u;
label_183c88:
    // 0x183c88: 0x27c20040
    ctx->pc = 0x183c88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 64));
label_183c8c:
    // 0x183c8c: 0xae820008
    ctx->pc = 0x183c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_183c90:
    // 0x183c90: 0x8ec30004
    ctx->pc = 0x183c90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_183c94:
    // 0x183c94: 0x723821
    ctx->pc = 0x183c94u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_183c98:
    // 0x183c98: 0xae870014
    ctx->pc = 0x183c98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 7));
label_183c9c:
    // 0x183c9c: 0x8fa20020
    ctx->pc = 0x183c9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_183ca0:
    // 0x183ca0: 0x10400004
label_183ca4:
    if (ctx->pc == 0x183CA4u) {
        ctx->pc = 0x183CA4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x183CA8u;
        goto label_183ca8;
    }
    ctx->pc = 0x183CA0u;
    {
        const bool branch_taken_0x183ca0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x183CA4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x183ca0) {
            ctx->pc = 0x183CB4u;
            goto label_183cb4;
        }
    }
    ctx->pc = 0x183CA8u;
label_183ca8:
    // 0x183ca8: 0x2a21021
    ctx->pc = 0x183ca8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_183cac:
    // 0x183cac: 0x10000002
label_183cb0:
    if (ctx->pc == 0x183CB0u) {
        ctx->pc = 0x183CB0u;
        SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->pc = 0x183CB4u;
        goto label_183cb4;
    }
    ctx->pc = 0x183CACu;
    {
        const bool branch_taken_0x183cac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x183CB0u;
        SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        if (branch_taken_0x183cac) {
            ctx->pc = 0x183CB8u;
            goto label_183cb8;
        }
    }
    ctx->pc = 0x183CB4u;
label_183cb4:
    // 0x183cb4: 0xf53821
    ctx->pc = 0x183cb4u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
label_183cb8:
    // 0x183cb8: 0xae870018
    ctx->pc = 0x183cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 7));
label_183cbc:
    // 0x183cbc: 0x220f809
label_183cc0:
    if (ctx->pc == 0x183CC0u) {
        ctx->pc = 0x183CC0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183CC4u;
        goto label_183cc4;
    }
    ctx->pc = 0x183CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x183CC4u);
        ctx->pc = 0x183CC0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183B40u: goto label_183b40;
            case 0x183B44u: goto label_183b44;
            case 0x183B48u: goto label_183b48;
            case 0x183B4Cu: goto label_183b4c;
            case 0x183B50u: goto label_183b50;
            case 0x183B54u: goto label_183b54;
            case 0x183B58u: goto label_183b58;
            case 0x183B5Cu: goto label_183b5c;
            case 0x183B60u: goto label_183b60;
            case 0x183B64u: goto label_183b64;
            case 0x183B68u: goto label_183b68;
            case 0x183B6Cu: goto label_183b6c;
            case 0x183B70u: goto label_183b70;
            case 0x183B74u: goto label_183b74;
            case 0x183B78u: goto label_183b78;
            case 0x183B7Cu: goto label_183b7c;
            case 0x183B80u: goto label_183b80;
            case 0x183B84u: goto label_183b84;
            case 0x183B88u: goto label_183b88;
            case 0x183B8Cu: goto label_183b8c;
            case 0x183B90u: goto label_183b90;
            case 0x183B94u: goto label_183b94;
            case 0x183B98u: goto label_183b98;
            case 0x183B9Cu: goto label_183b9c;
            case 0x183BA0u: goto label_183ba0;
            case 0x183BA4u: goto label_183ba4;
            case 0x183BA8u: goto label_183ba8;
            case 0x183BACu: goto label_183bac;
            case 0x183BB0u: goto label_183bb0;
            case 0x183BB4u: goto label_183bb4;
            case 0x183BB8u: goto label_183bb8;
            case 0x183BBCu: goto label_183bbc;
            case 0x183BC0u: goto label_183bc0;
            case 0x183BC4u: goto label_183bc4;
            case 0x183BC8u: goto label_183bc8;
            case 0x183BCCu: goto label_183bcc;
            case 0x183BD0u: goto label_183bd0;
            case 0x183BD4u: goto label_183bd4;
            case 0x183BD8u: goto label_183bd8;
            case 0x183BDCu: goto label_183bdc;
            case 0x183BE0u: goto label_183be0;
            case 0x183BE4u: goto label_183be4;
            case 0x183BE8u: goto label_183be8;
            case 0x183BECu: goto label_183bec;
            case 0x183BF0u: goto label_183bf0;
            case 0x183BF4u: goto label_183bf4;
            case 0x183BF8u: goto label_183bf8;
            case 0x183BFCu: goto label_183bfc;
            case 0x183C00u: goto label_183c00;
            case 0x183C04u: goto label_183c04;
            case 0x183C08u: goto label_183c08;
            case 0x183C0Cu: goto label_183c0c;
            case 0x183C10u: goto label_183c10;
            case 0x183C14u: goto label_183c14;
            case 0x183C18u: goto label_183c18;
            case 0x183C1Cu: goto label_183c1c;
            case 0x183C20u: goto label_183c20;
            case 0x183C24u: goto label_183c24;
            case 0x183C28u: goto label_183c28;
            case 0x183C2Cu: goto label_183c2c;
            case 0x183C30u: goto label_183c30;
            case 0x183C34u: goto label_183c34;
            case 0x183C38u: goto label_183c38;
            case 0x183C3Cu: goto label_183c3c;
            case 0x183C40u: goto label_183c40;
            case 0x183C44u: goto label_183c44;
            case 0x183C48u: goto label_183c48;
            case 0x183C4Cu: goto label_183c4c;
            case 0x183C50u: goto label_183c50;
            case 0x183C54u: goto label_183c54;
            case 0x183C58u: goto label_183c58;
            case 0x183C5Cu: goto label_183c5c;
            case 0x183C60u: goto label_183c60;
            case 0x183C64u: goto label_183c64;
            case 0x183C68u: goto label_183c68;
            case 0x183C6Cu: goto label_183c6c;
            case 0x183C70u: goto label_183c70;
            case 0x183C74u: goto label_183c74;
            case 0x183C78u: goto label_183c78;
            case 0x183C7Cu: goto label_183c7c;
            case 0x183C80u: goto label_183c80;
            case 0x183C84u: goto label_183c84;
            case 0x183C88u: goto label_183c88;
            case 0x183C8Cu: goto label_183c8c;
            case 0x183C90u: goto label_183c90;
            case 0x183C94u: goto label_183c94;
            case 0x183C98u: goto label_183c98;
            case 0x183C9Cu: goto label_183c9c;
            case 0x183CA0u: goto label_183ca0;
            case 0x183CA4u: goto label_183ca4;
            case 0x183CA8u: goto label_183ca8;
            case 0x183CACu: goto label_183cac;
            case 0x183CB0u: goto label_183cb0;
            case 0x183CB4u: goto label_183cb4;
            case 0x183CB8u: goto label_183cb8;
            case 0x183CBCu: goto label_183cbc;
            case 0x183CC0u: goto label_183cc0;
            case 0x183CC4u: goto label_183cc4;
            case 0x183CC8u: goto label_183cc8;
            case 0x183CCCu: goto label_183ccc;
            case 0x183CD0u: goto label_183cd0;
            case 0x183CD4u: goto label_183cd4;
            case 0x183CD8u: goto label_183cd8;
            case 0x183CDCu: goto label_183cdc;
            case 0x183CE0u: goto label_183ce0;
            case 0x183CE4u: goto label_183ce4;
            case 0x183CE8u: goto label_183ce8;
            case 0x183CECu: goto label_183cec;
            case 0x183CF0u: goto label_183cf0;
            case 0x183CF4u: goto label_183cf4;
            case 0x183CF8u: goto label_183cf8;
            case 0x183CFCu: goto label_183cfc;
            case 0x183D00u: goto label_183d00;
            case 0x183D04u: goto label_183d04;
            case 0x183D08u: goto label_183d08;
            case 0x183D0Cu: goto label_183d0c;
            case 0x183D10u: goto label_183d10;
            case 0x183D14u: goto label_183d14;
            case 0x183D18u: goto label_183d18;
            case 0x183D1Cu: goto label_183d1c;
            case 0x183D20u: goto label_183d20;
            case 0x183D24u: goto label_183d24;
            case 0x183D28u: goto label_183d28;
            case 0x183D2Cu: goto label_183d2c;
            case 0x183D30u: goto label_183d30;
            case 0x183D34u: goto label_183d34;
            case 0x183D38u: goto label_183d38;
            case 0x183D3Cu: goto label_183d3c;
            case 0x183D40u: goto label_183d40;
            case 0x183D44u: goto label_183d44;
            case 0x183D48u: goto label_183d48;
            case 0x183D4Cu: goto label_183d4c;
            case 0x183D50u: goto label_183d50;
            case 0x183D54u: goto label_183d54;
            case 0x183D58u: goto label_183d58;
            case 0x183D5Cu: goto label_183d5c;
            case 0x183D60u: goto label_183d60;
            case 0x183D64u: goto label_183d64;
            case 0x183D68u: goto label_183d68;
            case 0x183D6Cu: goto label_183d6c;
            case 0x183D70u: goto label_183d70;
            case 0x183D74u: goto label_183d74;
            case 0x183D78u: goto label_183d78;
            case 0x183D7Cu: goto label_183d7c;
            case 0x183D80u: goto label_183d80;
            case 0x183D84u: goto label_183d84;
            case 0x183D88u: goto label_183d88;
            case 0x183D8Cu: goto label_183d8c;
            case 0x183D90u: goto label_183d90;
            case 0x183D94u: goto label_183d94;
            case 0x183D98u: goto label_183d98;
            case 0x183D9Cu: goto label_183d9c;
            case 0x183DA0u: goto label_183da0;
            case 0x183DA4u: goto label_183da4;
            case 0x183DA8u: goto label_183da8;
            case 0x183DACu: goto label_183dac;
            case 0x183DB0u: goto label_183db0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x183CC4u; }
            if (ctx->pc != 0x183CC4u) { return; }
        }
    }
    ctx->pc = 0x183CC4u;
label_183cc4:
    // 0x183cc4: 0x27c30080
    ctx->pc = 0x183cc4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 128));
label_183cc8:
    // 0x183cc8: 0xae970010
    ctx->pc = 0x183cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 23));
label_183ccc:
    // 0x183ccc: 0xae830008
    ctx->pc = 0x183cccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_183cd0:
    // 0x183cd0: 0x8ec20008
    ctx->pc = 0x183cd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_183cd4:
    // 0x183cd4: 0x533821
    ctx->pc = 0x183cd4u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_183cd8:
    // 0x183cd8: 0xae870014
    ctx->pc = 0x183cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 7));
label_183cdc:
    // 0x183cdc: 0x8fa20020
    ctx->pc = 0x183cdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_183ce0:
    // 0x183ce0: 0x10400004
label_183ce4:
    if (ctx->pc == 0x183CE4u) {
        ctx->pc = 0x183CE4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->pc = 0x183CE8u;
        goto label_183ce8;
    }
    ctx->pc = 0x183CE0u;
    {
        const bool branch_taken_0x183ce0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x183CE4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
        if (branch_taken_0x183ce0) {
            ctx->pc = 0x183CF4u;
            goto label_183cf4;
        }
    }
    ctx->pc = 0x183CE8u;
label_183ce8:
    // 0x183ce8: 0x2e21021
    ctx->pc = 0x183ce8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_183cec:
    // 0x183cec: 0x10000002
label_183cf0:
    if (ctx->pc == 0x183CF0u) {
        ctx->pc = 0x183CF0u;
        SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->pc = 0x183CF4u;
        goto label_183cf4;
    }
    ctx->pc = 0x183CECu;
    {
        const bool branch_taken_0x183cec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x183CF0u;
        SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        if (branch_taken_0x183cec) {
            ctx->pc = 0x183CF8u;
            goto label_183cf8;
        }
    }
    ctx->pc = 0x183CF4u;
label_183cf4:
    // 0x183cf4: 0xf73821
    ctx->pc = 0x183cf4u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
label_183cf8:
    // 0x183cf8: 0xae870018
    ctx->pc = 0x183cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 7));
label_183cfc:
    // 0x183cfc: 0x200f809
label_183d00:
    if (ctx->pc == 0x183D00u) {
        ctx->pc = 0x183D00u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x183D04u;
        goto label_183d04;
    }
    ctx->pc = 0x183CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x183D04u);
        ctx->pc = 0x183D00u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183B40u: goto label_183b40;
            case 0x183B44u: goto label_183b44;
            case 0x183B48u: goto label_183b48;
            case 0x183B4Cu: goto label_183b4c;
            case 0x183B50u: goto label_183b50;
            case 0x183B54u: goto label_183b54;
            case 0x183B58u: goto label_183b58;
            case 0x183B5Cu: goto label_183b5c;
            case 0x183B60u: goto label_183b60;
            case 0x183B64u: goto label_183b64;
            case 0x183B68u: goto label_183b68;
            case 0x183B6Cu: goto label_183b6c;
            case 0x183B70u: goto label_183b70;
            case 0x183B74u: goto label_183b74;
            case 0x183B78u: goto label_183b78;
            case 0x183B7Cu: goto label_183b7c;
            case 0x183B80u: goto label_183b80;
            case 0x183B84u: goto label_183b84;
            case 0x183B88u: goto label_183b88;
            case 0x183B8Cu: goto label_183b8c;
            case 0x183B90u: goto label_183b90;
            case 0x183B94u: goto label_183b94;
            case 0x183B98u: goto label_183b98;
            case 0x183B9Cu: goto label_183b9c;
            case 0x183BA0u: goto label_183ba0;
            case 0x183BA4u: goto label_183ba4;
            case 0x183BA8u: goto label_183ba8;
            case 0x183BACu: goto label_183bac;
            case 0x183BB0u: goto label_183bb0;
            case 0x183BB4u: goto label_183bb4;
            case 0x183BB8u: goto label_183bb8;
            case 0x183BBCu: goto label_183bbc;
            case 0x183BC0u: goto label_183bc0;
            case 0x183BC4u: goto label_183bc4;
            case 0x183BC8u: goto label_183bc8;
            case 0x183BCCu: goto label_183bcc;
            case 0x183BD0u: goto label_183bd0;
            case 0x183BD4u: goto label_183bd4;
            case 0x183BD8u: goto label_183bd8;
            case 0x183BDCu: goto label_183bdc;
            case 0x183BE0u: goto label_183be0;
            case 0x183BE4u: goto label_183be4;
            case 0x183BE8u: goto label_183be8;
            case 0x183BECu: goto label_183bec;
            case 0x183BF0u: goto label_183bf0;
            case 0x183BF4u: goto label_183bf4;
            case 0x183BF8u: goto label_183bf8;
            case 0x183BFCu: goto label_183bfc;
            case 0x183C00u: goto label_183c00;
            case 0x183C04u: goto label_183c04;
            case 0x183C08u: goto label_183c08;
            case 0x183C0Cu: goto label_183c0c;
            case 0x183C10u: goto label_183c10;
            case 0x183C14u: goto label_183c14;
            case 0x183C18u: goto label_183c18;
            case 0x183C1Cu: goto label_183c1c;
            case 0x183C20u: goto label_183c20;
            case 0x183C24u: goto label_183c24;
            case 0x183C28u: goto label_183c28;
            case 0x183C2Cu: goto label_183c2c;
            case 0x183C30u: goto label_183c30;
            case 0x183C34u: goto label_183c34;
            case 0x183C38u: goto label_183c38;
            case 0x183C3Cu: goto label_183c3c;
            case 0x183C40u: goto label_183c40;
            case 0x183C44u: goto label_183c44;
            case 0x183C48u: goto label_183c48;
            case 0x183C4Cu: goto label_183c4c;
            case 0x183C50u: goto label_183c50;
            case 0x183C54u: goto label_183c54;
            case 0x183C58u: goto label_183c58;
            case 0x183C5Cu: goto label_183c5c;
            case 0x183C60u: goto label_183c60;
            case 0x183C64u: goto label_183c64;
            case 0x183C68u: goto label_183c68;
            case 0x183C6Cu: goto label_183c6c;
            case 0x183C70u: goto label_183c70;
            case 0x183C74u: goto label_183c74;
            case 0x183C78u: goto label_183c78;
            case 0x183C7Cu: goto label_183c7c;
            case 0x183C80u: goto label_183c80;
            case 0x183C84u: goto label_183c84;
            case 0x183C88u: goto label_183c88;
            case 0x183C8Cu: goto label_183c8c;
            case 0x183C90u: goto label_183c90;
            case 0x183C94u: goto label_183c94;
            case 0x183C98u: goto label_183c98;
            case 0x183C9Cu: goto label_183c9c;
            case 0x183CA0u: goto label_183ca0;
            case 0x183CA4u: goto label_183ca4;
            case 0x183CA8u: goto label_183ca8;
            case 0x183CACu: goto label_183cac;
            case 0x183CB0u: goto label_183cb0;
            case 0x183CB4u: goto label_183cb4;
            case 0x183CB8u: goto label_183cb8;
            case 0x183CBCu: goto label_183cbc;
            case 0x183CC0u: goto label_183cc0;
            case 0x183CC4u: goto label_183cc4;
            case 0x183CC8u: goto label_183cc8;
            case 0x183CCCu: goto label_183ccc;
            case 0x183CD0u: goto label_183cd0;
            case 0x183CD4u: goto label_183cd4;
            case 0x183CD8u: goto label_183cd8;
            case 0x183CDCu: goto label_183cdc;
            case 0x183CE0u: goto label_183ce0;
            case 0x183CE4u: goto label_183ce4;
            case 0x183CE8u: goto label_183ce8;
            case 0x183CECu: goto label_183cec;
            case 0x183CF0u: goto label_183cf0;
            case 0x183CF4u: goto label_183cf4;
            case 0x183CF8u: goto label_183cf8;
            case 0x183CFCu: goto label_183cfc;
            case 0x183D00u: goto label_183d00;
            case 0x183D04u: goto label_183d04;
            case 0x183D08u: goto label_183d08;
            case 0x183D0Cu: goto label_183d0c;
            case 0x183D10u: goto label_183d10;
            case 0x183D14u: goto label_183d14;
            case 0x183D18u: goto label_183d18;
            case 0x183D1Cu: goto label_183d1c;
            case 0x183D20u: goto label_183d20;
            case 0x183D24u: goto label_183d24;
            case 0x183D28u: goto label_183d28;
            case 0x183D2Cu: goto label_183d2c;
            case 0x183D30u: goto label_183d30;
            case 0x183D34u: goto label_183d34;
            case 0x183D38u: goto label_183d38;
            case 0x183D3Cu: goto label_183d3c;
            case 0x183D40u: goto label_183d40;
            case 0x183D44u: goto label_183d44;
            case 0x183D48u: goto label_183d48;
            case 0x183D4Cu: goto label_183d4c;
            case 0x183D50u: goto label_183d50;
            case 0x183D54u: goto label_183d54;
            case 0x183D58u: goto label_183d58;
            case 0x183D5Cu: goto label_183d5c;
            case 0x183D60u: goto label_183d60;
            case 0x183D64u: goto label_183d64;
            case 0x183D68u: goto label_183d68;
            case 0x183D6Cu: goto label_183d6c;
            case 0x183D70u: goto label_183d70;
            case 0x183D74u: goto label_183d74;
            case 0x183D78u: goto label_183d78;
            case 0x183D7Cu: goto label_183d7c;
            case 0x183D80u: goto label_183d80;
            case 0x183D84u: goto label_183d84;
            case 0x183D88u: goto label_183d88;
            case 0x183D8Cu: goto label_183d8c;
            case 0x183D90u: goto label_183d90;
            case 0x183D94u: goto label_183d94;
            case 0x183D98u: goto label_183d98;
            case 0x183D9Cu: goto label_183d9c;
            case 0x183DA0u: goto label_183da0;
            case 0x183DA4u: goto label_183da4;
            case 0x183DA8u: goto label_183da8;
            case 0x183DACu: goto label_183dac;
            case 0x183DB0u: goto label_183db0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x183D04u; }
            if (ctx->pc != 0x183D04u) { return; }
        }
    }
    ctx->pc = 0x183D04u;
label_183d04:
    // 0x183d04: 0x8e830014
    ctx->pc = 0x183d04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_183d08:
    // 0x183d08: 0x27c500c0
    ctx->pc = 0x183d08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 30), 192));
label_183d0c:
    // 0x183d0c: 0x8e820018
    ctx->pc = 0x183d0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_183d10:
    // 0x183d10: 0x280202d
    ctx->pc = 0x183d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_183d14:
    // 0x183d14: 0x24630008
    ctx->pc = 0x183d14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
label_183d18:
    // 0x183d18: 0xae850008
    ctx->pc = 0x183d18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 5));
label_183d1c:
    // 0x183d1c: 0x24420008
    ctx->pc = 0x183d1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
label_183d20:
    // 0x183d20: 0xae830014
    ctx->pc = 0x183d20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
label_183d24:
    // 0x183d24: 0x200f809
label_183d28:
    if (ctx->pc == 0x183D28u) {
        ctx->pc = 0x183D28u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x183D2Cu;
        goto label_183d2c;
    }
    ctx->pc = 0x183D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x183D2Cu);
        ctx->pc = 0x183D28u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183B40u: goto label_183b40;
            case 0x183B44u: goto label_183b44;
            case 0x183B48u: goto label_183b48;
            case 0x183B4Cu: goto label_183b4c;
            case 0x183B50u: goto label_183b50;
            case 0x183B54u: goto label_183b54;
            case 0x183B58u: goto label_183b58;
            case 0x183B5Cu: goto label_183b5c;
            case 0x183B60u: goto label_183b60;
            case 0x183B64u: goto label_183b64;
            case 0x183B68u: goto label_183b68;
            case 0x183B6Cu: goto label_183b6c;
            case 0x183B70u: goto label_183b70;
            case 0x183B74u: goto label_183b74;
            case 0x183B78u: goto label_183b78;
            case 0x183B7Cu: goto label_183b7c;
            case 0x183B80u: goto label_183b80;
            case 0x183B84u: goto label_183b84;
            case 0x183B88u: goto label_183b88;
            case 0x183B8Cu: goto label_183b8c;
            case 0x183B90u: goto label_183b90;
            case 0x183B94u: goto label_183b94;
            case 0x183B98u: goto label_183b98;
            case 0x183B9Cu: goto label_183b9c;
            case 0x183BA0u: goto label_183ba0;
            case 0x183BA4u: goto label_183ba4;
            case 0x183BA8u: goto label_183ba8;
            case 0x183BACu: goto label_183bac;
            case 0x183BB0u: goto label_183bb0;
            case 0x183BB4u: goto label_183bb4;
            case 0x183BB8u: goto label_183bb8;
            case 0x183BBCu: goto label_183bbc;
            case 0x183BC0u: goto label_183bc0;
            case 0x183BC4u: goto label_183bc4;
            case 0x183BC8u: goto label_183bc8;
            case 0x183BCCu: goto label_183bcc;
            case 0x183BD0u: goto label_183bd0;
            case 0x183BD4u: goto label_183bd4;
            case 0x183BD8u: goto label_183bd8;
            case 0x183BDCu: goto label_183bdc;
            case 0x183BE0u: goto label_183be0;
            case 0x183BE4u: goto label_183be4;
            case 0x183BE8u: goto label_183be8;
            case 0x183BECu: goto label_183bec;
            case 0x183BF0u: goto label_183bf0;
            case 0x183BF4u: goto label_183bf4;
            case 0x183BF8u: goto label_183bf8;
            case 0x183BFCu: goto label_183bfc;
            case 0x183C00u: goto label_183c00;
            case 0x183C04u: goto label_183c04;
            case 0x183C08u: goto label_183c08;
            case 0x183C0Cu: goto label_183c0c;
            case 0x183C10u: goto label_183c10;
            case 0x183C14u: goto label_183c14;
            case 0x183C18u: goto label_183c18;
            case 0x183C1Cu: goto label_183c1c;
            case 0x183C20u: goto label_183c20;
            case 0x183C24u: goto label_183c24;
            case 0x183C28u: goto label_183c28;
            case 0x183C2Cu: goto label_183c2c;
            case 0x183C30u: goto label_183c30;
            case 0x183C34u: goto label_183c34;
            case 0x183C38u: goto label_183c38;
            case 0x183C3Cu: goto label_183c3c;
            case 0x183C40u: goto label_183c40;
            case 0x183C44u: goto label_183c44;
            case 0x183C48u: goto label_183c48;
            case 0x183C4Cu: goto label_183c4c;
            case 0x183C50u: goto label_183c50;
            case 0x183C54u: goto label_183c54;
            case 0x183C58u: goto label_183c58;
            case 0x183C5Cu: goto label_183c5c;
            case 0x183C60u: goto label_183c60;
            case 0x183C64u: goto label_183c64;
            case 0x183C68u: goto label_183c68;
            case 0x183C6Cu: goto label_183c6c;
            case 0x183C70u: goto label_183c70;
            case 0x183C74u: goto label_183c74;
            case 0x183C78u: goto label_183c78;
            case 0x183C7Cu: goto label_183c7c;
            case 0x183C80u: goto label_183c80;
            case 0x183C84u: goto label_183c84;
            case 0x183C88u: goto label_183c88;
            case 0x183C8Cu: goto label_183c8c;
            case 0x183C90u: goto label_183c90;
            case 0x183C94u: goto label_183c94;
            case 0x183C98u: goto label_183c98;
            case 0x183C9Cu: goto label_183c9c;
            case 0x183CA0u: goto label_183ca0;
            case 0x183CA4u: goto label_183ca4;
            case 0x183CA8u: goto label_183ca8;
            case 0x183CACu: goto label_183cac;
            case 0x183CB0u: goto label_183cb0;
            case 0x183CB4u: goto label_183cb4;
            case 0x183CB8u: goto label_183cb8;
            case 0x183CBCu: goto label_183cbc;
            case 0x183CC0u: goto label_183cc0;
            case 0x183CC4u: goto label_183cc4;
            case 0x183CC8u: goto label_183cc8;
            case 0x183CCCu: goto label_183ccc;
            case 0x183CD0u: goto label_183cd0;
            case 0x183CD4u: goto label_183cd4;
            case 0x183CD8u: goto label_183cd8;
            case 0x183CDCu: goto label_183cdc;
            case 0x183CE0u: goto label_183ce0;
            case 0x183CE4u: goto label_183ce4;
            case 0x183CE8u: goto label_183ce8;
            case 0x183CECu: goto label_183cec;
            case 0x183CF0u: goto label_183cf0;
            case 0x183CF4u: goto label_183cf4;
            case 0x183CF8u: goto label_183cf8;
            case 0x183CFCu: goto label_183cfc;
            case 0x183D00u: goto label_183d00;
            case 0x183D04u: goto label_183d04;
            case 0x183D08u: goto label_183d08;
            case 0x183D0Cu: goto label_183d0c;
            case 0x183D10u: goto label_183d10;
            case 0x183D14u: goto label_183d14;
            case 0x183D18u: goto label_183d18;
            case 0x183D1Cu: goto label_183d1c;
            case 0x183D20u: goto label_183d20;
            case 0x183D24u: goto label_183d24;
            case 0x183D28u: goto label_183d28;
            case 0x183D2Cu: goto label_183d2c;
            case 0x183D30u: goto label_183d30;
            case 0x183D34u: goto label_183d34;
            case 0x183D38u: goto label_183d38;
            case 0x183D3Cu: goto label_183d3c;
            case 0x183D40u: goto label_183d40;
            case 0x183D44u: goto label_183d44;
            case 0x183D48u: goto label_183d48;
            case 0x183D4Cu: goto label_183d4c;
            case 0x183D50u: goto label_183d50;
            case 0x183D54u: goto label_183d54;
            case 0x183D58u: goto label_183d58;
            case 0x183D5Cu: goto label_183d5c;
            case 0x183D60u: goto label_183d60;
            case 0x183D64u: goto label_183d64;
            case 0x183D68u: goto label_183d68;
            case 0x183D6Cu: goto label_183d6c;
            case 0x183D70u: goto label_183d70;
            case 0x183D74u: goto label_183d74;
            case 0x183D78u: goto label_183d78;
            case 0x183D7Cu: goto label_183d7c;
            case 0x183D80u: goto label_183d80;
            case 0x183D84u: goto label_183d84;
            case 0x183D88u: goto label_183d88;
            case 0x183D8Cu: goto label_183d8c;
            case 0x183D90u: goto label_183d90;
            case 0x183D94u: goto label_183d94;
            case 0x183D98u: goto label_183d98;
            case 0x183D9Cu: goto label_183d9c;
            case 0x183DA0u: goto label_183da0;
            case 0x183DA4u: goto label_183da4;
            case 0x183DA8u: goto label_183da8;
            case 0x183DACu: goto label_183dac;
            case 0x183DB0u: goto label_183db0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x183D2Cu; }
            if (ctx->pc != 0x183D2Cu) { return; }
        }
    }
    ctx->pc = 0x183D2Cu;
label_183d2c:
    // 0x183d2c: 0x8e830014
    ctx->pc = 0x183d2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_183d30:
    // 0x183d30: 0x26e2ffff
    ctx->pc = 0x183d30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 23), 4294967295));
label_183d34:
    // 0x183d34: 0x8e850018
    ctx->pc = 0x183d34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_183d38:
    // 0x183d38: 0x210c0
    ctx->pc = 0x183d38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_183d3c:
    // 0x183d3c: 0x27c40100
    ctx->pc = 0x183d3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 256));
label_183d40:
    // 0x183d40: 0x621821
    ctx->pc = 0x183d40u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_183d44:
    // 0x183d44: 0xae840008
    ctx->pc = 0x183d44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
label_183d48:
    // 0x183d48: 0xa22821
    ctx->pc = 0x183d48u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_183d4c:
    // 0x183d4c: 0xae830014
    ctx->pc = 0x183d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
label_183d50:
    // 0x183d50: 0x280202d
    ctx->pc = 0x183d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_183d54:
    // 0x183d54: 0x200f809
label_183d58:
    if (ctx->pc == 0x183D58u) {
        ctx->pc = 0x183D58u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 5));
        ctx->pc = 0x183D5Cu;
        goto label_183d5c;
    }
    ctx->pc = 0x183D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x183D5Cu);
        ctx->pc = 0x183D58u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183B40u: goto label_183b40;
            case 0x183B44u: goto label_183b44;
            case 0x183B48u: goto label_183b48;
            case 0x183B4Cu: goto label_183b4c;
            case 0x183B50u: goto label_183b50;
            case 0x183B54u: goto label_183b54;
            case 0x183B58u: goto label_183b58;
            case 0x183B5Cu: goto label_183b5c;
            case 0x183B60u: goto label_183b60;
            case 0x183B64u: goto label_183b64;
            case 0x183B68u: goto label_183b68;
            case 0x183B6Cu: goto label_183b6c;
            case 0x183B70u: goto label_183b70;
            case 0x183B74u: goto label_183b74;
            case 0x183B78u: goto label_183b78;
            case 0x183B7Cu: goto label_183b7c;
            case 0x183B80u: goto label_183b80;
            case 0x183B84u: goto label_183b84;
            case 0x183B88u: goto label_183b88;
            case 0x183B8Cu: goto label_183b8c;
            case 0x183B90u: goto label_183b90;
            case 0x183B94u: goto label_183b94;
            case 0x183B98u: goto label_183b98;
            case 0x183B9Cu: goto label_183b9c;
            case 0x183BA0u: goto label_183ba0;
            case 0x183BA4u: goto label_183ba4;
            case 0x183BA8u: goto label_183ba8;
            case 0x183BACu: goto label_183bac;
            case 0x183BB0u: goto label_183bb0;
            case 0x183BB4u: goto label_183bb4;
            case 0x183BB8u: goto label_183bb8;
            case 0x183BBCu: goto label_183bbc;
            case 0x183BC0u: goto label_183bc0;
            case 0x183BC4u: goto label_183bc4;
            case 0x183BC8u: goto label_183bc8;
            case 0x183BCCu: goto label_183bcc;
            case 0x183BD0u: goto label_183bd0;
            case 0x183BD4u: goto label_183bd4;
            case 0x183BD8u: goto label_183bd8;
            case 0x183BDCu: goto label_183bdc;
            case 0x183BE0u: goto label_183be0;
            case 0x183BE4u: goto label_183be4;
            case 0x183BE8u: goto label_183be8;
            case 0x183BECu: goto label_183bec;
            case 0x183BF0u: goto label_183bf0;
            case 0x183BF4u: goto label_183bf4;
            case 0x183BF8u: goto label_183bf8;
            case 0x183BFCu: goto label_183bfc;
            case 0x183C00u: goto label_183c00;
            case 0x183C04u: goto label_183c04;
            case 0x183C08u: goto label_183c08;
            case 0x183C0Cu: goto label_183c0c;
            case 0x183C10u: goto label_183c10;
            case 0x183C14u: goto label_183c14;
            case 0x183C18u: goto label_183c18;
            case 0x183C1Cu: goto label_183c1c;
            case 0x183C20u: goto label_183c20;
            case 0x183C24u: goto label_183c24;
            case 0x183C28u: goto label_183c28;
            case 0x183C2Cu: goto label_183c2c;
            case 0x183C30u: goto label_183c30;
            case 0x183C34u: goto label_183c34;
            case 0x183C38u: goto label_183c38;
            case 0x183C3Cu: goto label_183c3c;
            case 0x183C40u: goto label_183c40;
            case 0x183C44u: goto label_183c44;
            case 0x183C48u: goto label_183c48;
            case 0x183C4Cu: goto label_183c4c;
            case 0x183C50u: goto label_183c50;
            case 0x183C54u: goto label_183c54;
            case 0x183C58u: goto label_183c58;
            case 0x183C5Cu: goto label_183c5c;
            case 0x183C60u: goto label_183c60;
            case 0x183C64u: goto label_183c64;
            case 0x183C68u: goto label_183c68;
            case 0x183C6Cu: goto label_183c6c;
            case 0x183C70u: goto label_183c70;
            case 0x183C74u: goto label_183c74;
            case 0x183C78u: goto label_183c78;
            case 0x183C7Cu: goto label_183c7c;
            case 0x183C80u: goto label_183c80;
            case 0x183C84u: goto label_183c84;
            case 0x183C88u: goto label_183c88;
            case 0x183C8Cu: goto label_183c8c;
            case 0x183C90u: goto label_183c90;
            case 0x183C94u: goto label_183c94;
            case 0x183C98u: goto label_183c98;
            case 0x183C9Cu: goto label_183c9c;
            case 0x183CA0u: goto label_183ca0;
            case 0x183CA4u: goto label_183ca4;
            case 0x183CA8u: goto label_183ca8;
            case 0x183CACu: goto label_183cac;
            case 0x183CB0u: goto label_183cb0;
            case 0x183CB4u: goto label_183cb4;
            case 0x183CB8u: goto label_183cb8;
            case 0x183CBCu: goto label_183cbc;
            case 0x183CC0u: goto label_183cc0;
            case 0x183CC4u: goto label_183cc4;
            case 0x183CC8u: goto label_183cc8;
            case 0x183CCCu: goto label_183ccc;
            case 0x183CD0u: goto label_183cd0;
            case 0x183CD4u: goto label_183cd4;
            case 0x183CD8u: goto label_183cd8;
            case 0x183CDCu: goto label_183cdc;
            case 0x183CE0u: goto label_183ce0;
            case 0x183CE4u: goto label_183ce4;
            case 0x183CE8u: goto label_183ce8;
            case 0x183CECu: goto label_183cec;
            case 0x183CF0u: goto label_183cf0;
            case 0x183CF4u: goto label_183cf4;
            case 0x183CF8u: goto label_183cf8;
            case 0x183CFCu: goto label_183cfc;
            case 0x183D00u: goto label_183d00;
            case 0x183D04u: goto label_183d04;
            case 0x183D08u: goto label_183d08;
            case 0x183D0Cu: goto label_183d0c;
            case 0x183D10u: goto label_183d10;
            case 0x183D14u: goto label_183d14;
            case 0x183D18u: goto label_183d18;
            case 0x183D1Cu: goto label_183d1c;
            case 0x183D20u: goto label_183d20;
            case 0x183D24u: goto label_183d24;
            case 0x183D28u: goto label_183d28;
            case 0x183D2Cu: goto label_183d2c;
            case 0x183D30u: goto label_183d30;
            case 0x183D34u: goto label_183d34;
            case 0x183D38u: goto label_183d38;
            case 0x183D3Cu: goto label_183d3c;
            case 0x183D40u: goto label_183d40;
            case 0x183D44u: goto label_183d44;
            case 0x183D48u: goto label_183d48;
            case 0x183D4Cu: goto label_183d4c;
            case 0x183D50u: goto label_183d50;
            case 0x183D54u: goto label_183d54;
            case 0x183D58u: goto label_183d58;
            case 0x183D5Cu: goto label_183d5c;
            case 0x183D60u: goto label_183d60;
            case 0x183D64u: goto label_183d64;
            case 0x183D68u: goto label_183d68;
            case 0x183D6Cu: goto label_183d6c;
            case 0x183D70u: goto label_183d70;
            case 0x183D74u: goto label_183d74;
            case 0x183D78u: goto label_183d78;
            case 0x183D7Cu: goto label_183d7c;
            case 0x183D80u: goto label_183d80;
            case 0x183D84u: goto label_183d84;
            case 0x183D88u: goto label_183d88;
            case 0x183D8Cu: goto label_183d8c;
            case 0x183D90u: goto label_183d90;
            case 0x183D94u: goto label_183d94;
            case 0x183D98u: goto label_183d98;
            case 0x183D9Cu: goto label_183d9c;
            case 0x183DA0u: goto label_183da0;
            case 0x183DA4u: goto label_183da4;
            case 0x183DA8u: goto label_183da8;
            case 0x183DACu: goto label_183dac;
            case 0x183DB0u: goto label_183db0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x183D5Cu; }
            if (ctx->pc != 0x183D5Cu) { return; }
        }
    }
    ctx->pc = 0x183D5Cu;
label_183d5c:
    // 0x183d5c: 0x8e830014
    ctx->pc = 0x183d5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_183d60:
    // 0x183d60: 0x27c50140
    ctx->pc = 0x183d60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 30), 320));
label_183d64:
    // 0x183d64: 0x8e820018
    ctx->pc = 0x183d64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_183d68:
    // 0x183d68: 0x280202d
    ctx->pc = 0x183d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_183d6c:
    // 0x183d6c: 0x24630008
    ctx->pc = 0x183d6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
label_183d70:
    // 0x183d70: 0xae850008
    ctx->pc = 0x183d70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 5));
label_183d74:
    // 0x183d74: 0x24420008
    ctx->pc = 0x183d74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
label_183d78:
    // 0x183d78: 0xae830014
    ctx->pc = 0x183d78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
label_183d7c:
    // 0x183d7c: 0x200f809
label_183d80:
    if (ctx->pc == 0x183D80u) {
        ctx->pc = 0x183D80u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x183D84u;
        goto label_183d84;
    }
    ctx->pc = 0x183D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x183D84u);
        ctx->pc = 0x183D80u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183B40u: goto label_183b40;
            case 0x183B44u: goto label_183b44;
            case 0x183B48u: goto label_183b48;
            case 0x183B4Cu: goto label_183b4c;
            case 0x183B50u: goto label_183b50;
            case 0x183B54u: goto label_183b54;
            case 0x183B58u: goto label_183b58;
            case 0x183B5Cu: goto label_183b5c;
            case 0x183B60u: goto label_183b60;
            case 0x183B64u: goto label_183b64;
            case 0x183B68u: goto label_183b68;
            case 0x183B6Cu: goto label_183b6c;
            case 0x183B70u: goto label_183b70;
            case 0x183B74u: goto label_183b74;
            case 0x183B78u: goto label_183b78;
            case 0x183B7Cu: goto label_183b7c;
            case 0x183B80u: goto label_183b80;
            case 0x183B84u: goto label_183b84;
            case 0x183B88u: goto label_183b88;
            case 0x183B8Cu: goto label_183b8c;
            case 0x183B90u: goto label_183b90;
            case 0x183B94u: goto label_183b94;
            case 0x183B98u: goto label_183b98;
            case 0x183B9Cu: goto label_183b9c;
            case 0x183BA0u: goto label_183ba0;
            case 0x183BA4u: goto label_183ba4;
            case 0x183BA8u: goto label_183ba8;
            case 0x183BACu: goto label_183bac;
            case 0x183BB0u: goto label_183bb0;
            case 0x183BB4u: goto label_183bb4;
            case 0x183BB8u: goto label_183bb8;
            case 0x183BBCu: goto label_183bbc;
            case 0x183BC0u: goto label_183bc0;
            case 0x183BC4u: goto label_183bc4;
            case 0x183BC8u: goto label_183bc8;
            case 0x183BCCu: goto label_183bcc;
            case 0x183BD0u: goto label_183bd0;
            case 0x183BD4u: goto label_183bd4;
            case 0x183BD8u: goto label_183bd8;
            case 0x183BDCu: goto label_183bdc;
            case 0x183BE0u: goto label_183be0;
            case 0x183BE4u: goto label_183be4;
            case 0x183BE8u: goto label_183be8;
            case 0x183BECu: goto label_183bec;
            case 0x183BF0u: goto label_183bf0;
            case 0x183BF4u: goto label_183bf4;
            case 0x183BF8u: goto label_183bf8;
            case 0x183BFCu: goto label_183bfc;
            case 0x183C00u: goto label_183c00;
            case 0x183C04u: goto label_183c04;
            case 0x183C08u: goto label_183c08;
            case 0x183C0Cu: goto label_183c0c;
            case 0x183C10u: goto label_183c10;
            case 0x183C14u: goto label_183c14;
            case 0x183C18u: goto label_183c18;
            case 0x183C1Cu: goto label_183c1c;
            case 0x183C20u: goto label_183c20;
            case 0x183C24u: goto label_183c24;
            case 0x183C28u: goto label_183c28;
            case 0x183C2Cu: goto label_183c2c;
            case 0x183C30u: goto label_183c30;
            case 0x183C34u: goto label_183c34;
            case 0x183C38u: goto label_183c38;
            case 0x183C3Cu: goto label_183c3c;
            case 0x183C40u: goto label_183c40;
            case 0x183C44u: goto label_183c44;
            case 0x183C48u: goto label_183c48;
            case 0x183C4Cu: goto label_183c4c;
            case 0x183C50u: goto label_183c50;
            case 0x183C54u: goto label_183c54;
            case 0x183C58u: goto label_183c58;
            case 0x183C5Cu: goto label_183c5c;
            case 0x183C60u: goto label_183c60;
            case 0x183C64u: goto label_183c64;
            case 0x183C68u: goto label_183c68;
            case 0x183C6Cu: goto label_183c6c;
            case 0x183C70u: goto label_183c70;
            case 0x183C74u: goto label_183c74;
            case 0x183C78u: goto label_183c78;
            case 0x183C7Cu: goto label_183c7c;
            case 0x183C80u: goto label_183c80;
            case 0x183C84u: goto label_183c84;
            case 0x183C88u: goto label_183c88;
            case 0x183C8Cu: goto label_183c8c;
            case 0x183C90u: goto label_183c90;
            case 0x183C94u: goto label_183c94;
            case 0x183C98u: goto label_183c98;
            case 0x183C9Cu: goto label_183c9c;
            case 0x183CA0u: goto label_183ca0;
            case 0x183CA4u: goto label_183ca4;
            case 0x183CA8u: goto label_183ca8;
            case 0x183CACu: goto label_183cac;
            case 0x183CB0u: goto label_183cb0;
            case 0x183CB4u: goto label_183cb4;
            case 0x183CB8u: goto label_183cb8;
            case 0x183CBCu: goto label_183cbc;
            case 0x183CC0u: goto label_183cc0;
            case 0x183CC4u: goto label_183cc4;
            case 0x183CC8u: goto label_183cc8;
            case 0x183CCCu: goto label_183ccc;
            case 0x183CD0u: goto label_183cd0;
            case 0x183CD4u: goto label_183cd4;
            case 0x183CD8u: goto label_183cd8;
            case 0x183CDCu: goto label_183cdc;
            case 0x183CE0u: goto label_183ce0;
            case 0x183CE4u: goto label_183ce4;
            case 0x183CE8u: goto label_183ce8;
            case 0x183CECu: goto label_183cec;
            case 0x183CF0u: goto label_183cf0;
            case 0x183CF4u: goto label_183cf4;
            case 0x183CF8u: goto label_183cf8;
            case 0x183CFCu: goto label_183cfc;
            case 0x183D00u: goto label_183d00;
            case 0x183D04u: goto label_183d04;
            case 0x183D08u: goto label_183d08;
            case 0x183D0Cu: goto label_183d0c;
            case 0x183D10u: goto label_183d10;
            case 0x183D14u: goto label_183d14;
            case 0x183D18u: goto label_183d18;
            case 0x183D1Cu: goto label_183d1c;
            case 0x183D20u: goto label_183d20;
            case 0x183D24u: goto label_183d24;
            case 0x183D28u: goto label_183d28;
            case 0x183D2Cu: goto label_183d2c;
            case 0x183D30u: goto label_183d30;
            case 0x183D34u: goto label_183d34;
            case 0x183D38u: goto label_183d38;
            case 0x183D3Cu: goto label_183d3c;
            case 0x183D40u: goto label_183d40;
            case 0x183D44u: goto label_183d44;
            case 0x183D48u: goto label_183d48;
            case 0x183D4Cu: goto label_183d4c;
            case 0x183D50u: goto label_183d50;
            case 0x183D54u: goto label_183d54;
            case 0x183D58u: goto label_183d58;
            case 0x183D5Cu: goto label_183d5c;
            case 0x183D60u: goto label_183d60;
            case 0x183D64u: goto label_183d64;
            case 0x183D68u: goto label_183d68;
            case 0x183D6Cu: goto label_183d6c;
            case 0x183D70u: goto label_183d70;
            case 0x183D74u: goto label_183d74;
            case 0x183D78u: goto label_183d78;
            case 0x183D7Cu: goto label_183d7c;
            case 0x183D80u: goto label_183d80;
            case 0x183D84u: goto label_183d84;
            case 0x183D88u: goto label_183d88;
            case 0x183D8Cu: goto label_183d8c;
            case 0x183D90u: goto label_183d90;
            case 0x183D94u: goto label_183d94;
            case 0x183D98u: goto label_183d98;
            case 0x183D9Cu: goto label_183d9c;
            case 0x183DA0u: goto label_183da0;
            case 0x183DA4u: goto label_183da4;
            case 0x183DA8u: goto label_183da8;
            case 0x183DACu: goto label_183dac;
            case 0x183DB0u: goto label_183db0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x183D84u; }
            if (ctx->pc != 0x183D84u) { return; }
        }
    }
    ctx->pc = 0x183D84u;
label_183d84:
    // 0x183d84: 0xdfbf00c0
    ctx->pc = 0x183d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_183d88:
    // 0x183d88: 0xdfbe00b0
    ctx->pc = 0x183d88u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_183d8c:
    // 0x183d8c: 0xdfb700a0
    ctx->pc = 0x183d8cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_183d90:
    // 0x183d90: 0xdfb60090
    ctx->pc = 0x183d90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_183d94:
    // 0x183d94: 0xdfb50080
    ctx->pc = 0x183d94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_183d98:
    // 0x183d98: 0xdfb40070
    ctx->pc = 0x183d98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_183d9c:
    // 0x183d9c: 0xdfb30060
    ctx->pc = 0x183d9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_183da0:
    // 0x183da0: 0xdfb20050
    ctx->pc = 0x183da0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_183da4:
    // 0x183da4: 0xdfb10040
    ctx->pc = 0x183da4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_183da8:
    // 0x183da8: 0xdfb00030
    ctx->pc = 0x183da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_183dac:
    // 0x183dac: 0x3e00008
label_183db0:
    if (ctx->pc == 0x183DB0u) {
        ctx->pc = 0x183DB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x183DB4u;
        goto label_fallthrough_0x183dac;
    }
    ctx->pc = 0x183DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183DB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183B40u: goto label_183b40;
            case 0x183B44u: goto label_183b44;
            case 0x183B48u: goto label_183b48;
            case 0x183B4Cu: goto label_183b4c;
            case 0x183B50u: goto label_183b50;
            case 0x183B54u: goto label_183b54;
            case 0x183B58u: goto label_183b58;
            case 0x183B5Cu: goto label_183b5c;
            case 0x183B60u: goto label_183b60;
            case 0x183B64u: goto label_183b64;
            case 0x183B68u: goto label_183b68;
            case 0x183B6Cu: goto label_183b6c;
            case 0x183B70u: goto label_183b70;
            case 0x183B74u: goto label_183b74;
            case 0x183B78u: goto label_183b78;
            case 0x183B7Cu: goto label_183b7c;
            case 0x183B80u: goto label_183b80;
            case 0x183B84u: goto label_183b84;
            case 0x183B88u: goto label_183b88;
            case 0x183B8Cu: goto label_183b8c;
            case 0x183B90u: goto label_183b90;
            case 0x183B94u: goto label_183b94;
            case 0x183B98u: goto label_183b98;
            case 0x183B9Cu: goto label_183b9c;
            case 0x183BA0u: goto label_183ba0;
            case 0x183BA4u: goto label_183ba4;
            case 0x183BA8u: goto label_183ba8;
            case 0x183BACu: goto label_183bac;
            case 0x183BB0u: goto label_183bb0;
            case 0x183BB4u: goto label_183bb4;
            case 0x183BB8u: goto label_183bb8;
            case 0x183BBCu: goto label_183bbc;
            case 0x183BC0u: goto label_183bc0;
            case 0x183BC4u: goto label_183bc4;
            case 0x183BC8u: goto label_183bc8;
            case 0x183BCCu: goto label_183bcc;
            case 0x183BD0u: goto label_183bd0;
            case 0x183BD4u: goto label_183bd4;
            case 0x183BD8u: goto label_183bd8;
            case 0x183BDCu: goto label_183bdc;
            case 0x183BE0u: goto label_183be0;
            case 0x183BE4u: goto label_183be4;
            case 0x183BE8u: goto label_183be8;
            case 0x183BECu: goto label_183bec;
            case 0x183BF0u: goto label_183bf0;
            case 0x183BF4u: goto label_183bf4;
            case 0x183BF8u: goto label_183bf8;
            case 0x183BFCu: goto label_183bfc;
            case 0x183C00u: goto label_183c00;
            case 0x183C04u: goto label_183c04;
            case 0x183C08u: goto label_183c08;
            case 0x183C0Cu: goto label_183c0c;
            case 0x183C10u: goto label_183c10;
            case 0x183C14u: goto label_183c14;
            case 0x183C18u: goto label_183c18;
            case 0x183C1Cu: goto label_183c1c;
            case 0x183C20u: goto label_183c20;
            case 0x183C24u: goto label_183c24;
            case 0x183C28u: goto label_183c28;
            case 0x183C2Cu: goto label_183c2c;
            case 0x183C30u: goto label_183c30;
            case 0x183C34u: goto label_183c34;
            case 0x183C38u: goto label_183c38;
            case 0x183C3Cu: goto label_183c3c;
            case 0x183C40u: goto label_183c40;
            case 0x183C44u: goto label_183c44;
            case 0x183C48u: goto label_183c48;
            case 0x183C4Cu: goto label_183c4c;
            case 0x183C50u: goto label_183c50;
            case 0x183C54u: goto label_183c54;
            case 0x183C58u: goto label_183c58;
            case 0x183C5Cu: goto label_183c5c;
            case 0x183C60u: goto label_183c60;
            case 0x183C64u: goto label_183c64;
            case 0x183C68u: goto label_183c68;
            case 0x183C6Cu: goto label_183c6c;
            case 0x183C70u: goto label_183c70;
            case 0x183C74u: goto label_183c74;
            case 0x183C78u: goto label_183c78;
            case 0x183C7Cu: goto label_183c7c;
            case 0x183C80u: goto label_183c80;
            case 0x183C84u: goto label_183c84;
            case 0x183C88u: goto label_183c88;
            case 0x183C8Cu: goto label_183c8c;
            case 0x183C90u: goto label_183c90;
            case 0x183C94u: goto label_183c94;
            case 0x183C98u: goto label_183c98;
            case 0x183C9Cu: goto label_183c9c;
            case 0x183CA0u: goto label_183ca0;
            case 0x183CA4u: goto label_183ca4;
            case 0x183CA8u: goto label_183ca8;
            case 0x183CACu: goto label_183cac;
            case 0x183CB0u: goto label_183cb0;
            case 0x183CB4u: goto label_183cb4;
            case 0x183CB8u: goto label_183cb8;
            case 0x183CBCu: goto label_183cbc;
            case 0x183CC0u: goto label_183cc0;
            case 0x183CC4u: goto label_183cc4;
            case 0x183CC8u: goto label_183cc8;
            case 0x183CCCu: goto label_183ccc;
            case 0x183CD0u: goto label_183cd0;
            case 0x183CD4u: goto label_183cd4;
            case 0x183CD8u: goto label_183cd8;
            case 0x183CDCu: goto label_183cdc;
            case 0x183CE0u: goto label_183ce0;
            case 0x183CE4u: goto label_183ce4;
            case 0x183CE8u: goto label_183ce8;
            case 0x183CECu: goto label_183cec;
            case 0x183CF0u: goto label_183cf0;
            case 0x183CF4u: goto label_183cf4;
            case 0x183CF8u: goto label_183cf8;
            case 0x183CFCu: goto label_183cfc;
            case 0x183D00u: goto label_183d00;
            case 0x183D04u: goto label_183d04;
            case 0x183D08u: goto label_183d08;
            case 0x183D0Cu: goto label_183d0c;
            case 0x183D10u: goto label_183d10;
            case 0x183D14u: goto label_183d14;
            case 0x183D18u: goto label_183d18;
            case 0x183D1Cu: goto label_183d1c;
            case 0x183D20u: goto label_183d20;
            case 0x183D24u: goto label_183d24;
            case 0x183D28u: goto label_183d28;
            case 0x183D2Cu: goto label_183d2c;
            case 0x183D30u: goto label_183d30;
            case 0x183D34u: goto label_183d34;
            case 0x183D38u: goto label_183d38;
            case 0x183D3Cu: goto label_183d3c;
            case 0x183D40u: goto label_183d40;
            case 0x183D44u: goto label_183d44;
            case 0x183D48u: goto label_183d48;
            case 0x183D4Cu: goto label_183d4c;
            case 0x183D50u: goto label_183d50;
            case 0x183D54u: goto label_183d54;
            case 0x183D58u: goto label_183d58;
            case 0x183D5Cu: goto label_183d5c;
            case 0x183D60u: goto label_183d60;
            case 0x183D64u: goto label_183d64;
            case 0x183D68u: goto label_183d68;
            case 0x183D6Cu: goto label_183d6c;
            case 0x183D70u: goto label_183d70;
            case 0x183D74u: goto label_183d74;
            case 0x183D78u: goto label_183d78;
            case 0x183D7Cu: goto label_183d7c;
            case 0x183D80u: goto label_183d80;
            case 0x183D84u: goto label_183d84;
            case 0x183D88u: goto label_183d88;
            case 0x183D8Cu: goto label_183d8c;
            case 0x183D90u: goto label_183d90;
            case 0x183D94u: goto label_183d94;
            case 0x183D98u: goto label_183d98;
            case 0x183D9Cu: goto label_183d9c;
            case 0x183DA0u: goto label_183da0;
            case 0x183DA4u: goto label_183da4;
            case 0x183DA8u: goto label_183da8;
            case 0x183DACu: goto label_183dac;
            case 0x183DB0u: goto label_183db0;
            default: break;
        }
        return;
    }
label_fallthrough_0x183dac:
    ctx->pc = 0x183DB4u;
}
