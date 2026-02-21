#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddLocatorInstList
// Address: 0x250b10 - 0x250ffc
void AddLocatorInstList_0x250b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x250b10u;

label_250b10:
    // 0x250b10: 0x27bdff40
    ctx->pc = 0x250b10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
label_250b14:
    // 0x250b14: 0xffbf00b0
    ctx->pc = 0x250b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_250b18:
    // 0x250b18: 0xffb600a0
    ctx->pc = 0x250b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_250b1c:
    // 0x250b1c: 0xffb50090
    ctx->pc = 0x250b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_250b20:
    // 0x250b20: 0xffb40080
    ctx->pc = 0x250b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_250b24:
    // 0x250b24: 0xffb30070
    ctx->pc = 0x250b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_250b28:
    // 0x250b28: 0xffb20060
    ctx->pc = 0x250b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_250b2c:
    // 0x250b2c: 0xffb10050
    ctx->pc = 0x250b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_250b30:
    // 0x250b30: 0xffb00040
    ctx->pc = 0x250b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_250b34:
    // 0x250b34: 0x3c020032
    ctx->pc = 0x250b34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_250b38:
    // 0x250b38: 0x2442f9f8
    ctx->pc = 0x250b38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965752));
label_250b3c:
    // 0x250b3c: 0x8c560070
    ctx->pc = 0x250b3cu;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_250b40:
    // 0x250b40: 0x8c55007c
    ctx->pc = 0x250b40u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_250b44:
    // 0x250b44: 0x3c020034
    ctx->pc = 0x250b44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250b48:
    // 0x250b48: 0xac40c380
    ctx->pc = 0x250b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951808), GPR_U32(ctx, 0));
label_250b4c:
    // 0x250b4c: 0x3c020034
    ctx->pc = 0x250b4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250b50:
    // 0x250b50: 0xac408b70
    ctx->pc = 0x250b50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937456), GPR_U32(ctx, 0));
label_250b54:
    // 0x250b54: 0x3c020034
    ctx->pc = 0x250b54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250b58:
    // 0x250b58: 0xac408b74
    ctx->pc = 0x250b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937460), GPR_U32(ctx, 0));
label_250b5c:
    // 0x250b5c: 0x3c020034
    ctx->pc = 0x250b5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250b60:
    // 0x250b60: 0xac408b78
    ctx->pc = 0x250b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937464), GPR_U32(ctx, 0));
label_250b64:
    // 0x250b64: 0x3c020034
    ctx->pc = 0x250b64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250b68:
    // 0x250b68: 0xac40d2d0
    ctx->pc = 0x250b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955728), GPR_U32(ctx, 0));
label_250b6c:
    // 0x250b6c: 0x3c020034
    ctx->pc = 0x250b6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250b70:
    // 0x250b70: 0xac40f914
    ctx->pc = 0x250b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965524), GPR_U32(ctx, 0));
label_250b74:
    // 0x250b74: 0x3c020034
    ctx->pc = 0x250b74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250b78:
    // 0x250b78: 0xac40cd90
    ctx->pc = 0x250b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954384), GPR_U32(ctx, 0));
label_250b7c:
    // 0x250b7c: 0x982d
    ctx->pc = 0x250b7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250b80:
    // 0x250b80: 0x3c020034
    ctx->pc = 0x250b80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250b84:
    // 0x250b84: 0x2444c390
    ctx->pc = 0x250b84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294951824));
label_250b88:
    // 0x250b88: 0x2403ffff
    ctx->pc = 0x250b88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_250b8c:
    // 0x250b8c: 0x0
    ctx->pc = 0x250b8cu;
    // NOP
label_250b90:
    // 0x250b90: 0x1311c0
    ctx->pc = 0x250b90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 7));
label_250b94:
    // 0x250b94: 0x441021
    ctx->pc = 0x250b94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_250b98:
    // 0x250b98: 0xa4430070
    ctx->pc = 0x250b98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 112), (uint16_t)GPR_U32(ctx, 3));
label_250b9c:
    // 0x250b9c: 0xa4430072
    ctx->pc = 0x250b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 114), (uint16_t)GPR_U32(ctx, 3));
label_250ba0:
    // 0x250ba0: 0x26730001
    ctx->pc = 0x250ba0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_250ba4:
    // 0x250ba4: 0x2a620014
    ctx->pc = 0x250ba4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 20));
label_250ba8:
    // 0x250ba8: 0x1440fff9
label_250bac:
    if (ctx->pc == 0x250BACu) {
        ctx->pc = 0x250BB0u;
        goto label_250bb0;
    }
    ctx->pc = 0x250BA8u;
    {
        const bool branch_taken_0x250ba8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x250ba8) {
            ctx->pc = 0x250B90u;
            goto label_250b90;
        }
    }
    ctx->pc = 0x250BB0u;
label_250bb0:
    // 0x250bb0: 0x3c020034
    ctx->pc = 0x250bb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250bb4:
    // 0x250bb4: 0xac40d310
    ctx->pc = 0x250bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955792), GPR_U32(ctx, 0));
label_250bb8:
    // 0x250bb8: 0x982d
    ctx->pc = 0x250bb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250bbc:
    // 0x250bbc: 0x2404000c
    ctx->pc = 0x250bbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
label_250bc0:
    // 0x250bc0: 0x3c020033
    ctx->pc = 0x250bc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_250bc4:
    // 0x250bc4: 0x24464ac4
    ctx->pc = 0x250bc4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 19140));
label_250bc8:
    // 0x250bc8: 0x3c01c7c3
    ctx->pc = 0x250bc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51139 << 16));
label_250bcc:
    // 0x250bcc: 0x34215000
    ctx->pc = 0x250bccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
label_250bd0:
    // 0x250bd0: 0x44810000
    ctx->pc = 0x250bd0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_250bd4:
    // 0x250bd4: 0x3c020034
    ctx->pc = 0x250bd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250bd8:
    // 0x250bd8: 0x2443d1d8
    ctx->pc = 0x250bd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294955480));
label_250bdc:
    // 0x250bdc: 0x2642818
    ctx->pc = 0x250bdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_250be0:
    // 0x250be0: 0xa61021
    ctx->pc = 0x250be0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_250be4:
    // 0x250be4: 0xe4400000
    ctx->pc = 0x250be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_250be8:
    // 0x250be8: 0x131080
    ctx->pc = 0x250be8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
label_250bec:
    // 0x250bec: 0x431021
    ctx->pc = 0x250becu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_250bf0:
    // 0x250bf0: 0xac400000
    ctx->pc = 0x250bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_250bf4:
    // 0x250bf4: 0x26730001
    ctx->pc = 0x250bf4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_250bf8:
    // 0x250bf8: 0x2a62000e
    ctx->pc = 0x250bf8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 14));
label_250bfc:
    // 0x250bfc: 0x1440fff8
label_250c00:
    if (ctx->pc == 0x250C00u) {
        ctx->pc = 0x250C00u;
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x250C04u;
        goto label_250c04;
    }
    ctx->pc = 0x250BFCu;
    {
        const bool branch_taken_0x250bfc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x250C00u;
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x250bfc) {
            ctx->pc = 0x250BE0u;
            goto label_250be0;
        }
    }
    ctx->pc = 0x250C04u;
label_250c04:
    // 0x250c04: 0x3c020034
    ctx->pc = 0x250c04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250c08:
    // 0x250c08: 0x2443d210
    ctx->pc = 0x250c08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294955536));
label_250c0c:
    // 0x250c0c: 0xac40d210
    ctx->pc = 0x250c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955536), GPR_U32(ctx, 0));
label_250c10:
    // 0x250c10: 0xac600004
    ctx->pc = 0x250c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_250c14:
    // 0x250c14: 0xac600008
    ctx->pc = 0x250c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_250c18:
    // 0x250c18: 0x3c020034
    ctx->pc = 0x250c18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250c1c:
    // 0x250c1c: 0x2443d220
    ctx->pc = 0x250c1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294955552));
label_250c20:
    // 0x250c20: 0xac40d220
    ctx->pc = 0x250c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955552), GPR_U32(ctx, 0));
label_250c24:
    // 0x250c24: 0xac600004
    ctx->pc = 0x250c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_250c28:
    // 0x250c28: 0x3c020034
    ctx->pc = 0x250c28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250c2c:
    // 0x250c2c: 0xac40d314
    ctx->pc = 0x250c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955796), GPR_U32(ctx, 0));
label_250c30:
    // 0x250c30: 0x3c020034
    ctx->pc = 0x250c30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250c34:
    // 0x250c34: 0xac40d318
    ctx->pc = 0x250c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955800), GPR_U32(ctx, 0));
label_250c38:
    // 0x250c38: 0x1aa000e1
label_250c3c:
    if (ctx->pc == 0x250C3Cu) {
        ctx->pc = 0x250C3Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x250C40u;
        goto label_250c40;
    }
    ctx->pc = 0x250C38u;
    {
        const bool branch_taken_0x250c38 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x250C3Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x250c38) {
            ctx->pc = 0x250FC0u;
            goto label_250fc0;
        }
    }
    ctx->pc = 0x250C40u;
label_250c40:
    // 0x250c40: 0x2402001c
    ctx->pc = 0x250c40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
label_250c44:
    // 0x250c44: 0x0
    ctx->pc = 0x250c44u;
    // NOP
label_250c48:
    // 0x250c48: 0x2621818
    ctx->pc = 0x250c48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_250c4c:
    // 0x250c4c: 0x768821
    ctx->pc = 0x250c4cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_250c50:
    // 0x250c50: 0xa02d
    ctx->pc = 0x250c50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250c54:
    // 0x250c54: 0x92220000
    ctx->pc = 0x250c54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_250c58:
    // 0x250c58: 0x2443ffff
    ctx->pc = 0x250c58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
label_250c5c:
    // 0x250c5c: 0x2c62000a
    ctx->pc = 0x250c5cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 10));
label_250c60:
    // 0x250c60: 0x104000cf
label_250c64:
    if (ctx->pc == 0x250C64u) {
        ctx->pc = 0x250C64u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x250C68u;
        goto label_250c68;
    }
    ctx->pc = 0x250C60u;
    {
        const bool branch_taken_0x250c60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x250C64u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x250c60) {
            ctx->pc = 0x250FA0u;
            goto label_250fa0;
        }
    }
    ctx->pc = 0x250C68u;
label_250c68:
    // 0x250c68: 0x3c02003b
    ctx->pc = 0x250c68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_250c6c:
    // 0x250c6c: 0x244285e0
    ctx->pc = 0x250c6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936032));
label_250c70:
    // 0x250c70: 0x31880
    ctx->pc = 0x250c70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_250c74:
    // 0x250c74: 0x621821
    ctx->pc = 0x250c74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_250c78:
    // 0x250c78: 0x8c620000
    ctx->pc = 0x250c78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_250c7c:
    // 0x250c7c: 0x400008
label_250c80:
    if (ctx->pc == 0x250C80u) {
        ctx->pc = 0x250C84u;
        goto label_250c84;
    }
    ctx->pc = 0x250C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x250B10u: goto label_250b10;
            case 0x250B14u: goto label_250b14;
            case 0x250B18u: goto label_250b18;
            case 0x250B1Cu: goto label_250b1c;
            case 0x250B20u: goto label_250b20;
            case 0x250B24u: goto label_250b24;
            case 0x250B28u: goto label_250b28;
            case 0x250B2Cu: goto label_250b2c;
            case 0x250B30u: goto label_250b30;
            case 0x250B34u: goto label_250b34;
            case 0x250B38u: goto label_250b38;
            case 0x250B3Cu: goto label_250b3c;
            case 0x250B40u: goto label_250b40;
            case 0x250B44u: goto label_250b44;
            case 0x250B48u: goto label_250b48;
            case 0x250B4Cu: goto label_250b4c;
            case 0x250B50u: goto label_250b50;
            case 0x250B54u: goto label_250b54;
            case 0x250B58u: goto label_250b58;
            case 0x250B5Cu: goto label_250b5c;
            case 0x250B60u: goto label_250b60;
            case 0x250B64u: goto label_250b64;
            case 0x250B68u: goto label_250b68;
            case 0x250B6Cu: goto label_250b6c;
            case 0x250B70u: goto label_250b70;
            case 0x250B74u: goto label_250b74;
            case 0x250B78u: goto label_250b78;
            case 0x250B7Cu: goto label_250b7c;
            case 0x250B80u: goto label_250b80;
            case 0x250B84u: goto label_250b84;
            case 0x250B88u: goto label_250b88;
            case 0x250B8Cu: goto label_250b8c;
            case 0x250B90u: goto label_250b90;
            case 0x250B94u: goto label_250b94;
            case 0x250B98u: goto label_250b98;
            case 0x250B9Cu: goto label_250b9c;
            case 0x250BA0u: goto label_250ba0;
            case 0x250BA4u: goto label_250ba4;
            case 0x250BA8u: goto label_250ba8;
            case 0x250BACu: goto label_250bac;
            case 0x250BB0u: goto label_250bb0;
            case 0x250BB4u: goto label_250bb4;
            case 0x250BB8u: goto label_250bb8;
            case 0x250BBCu: goto label_250bbc;
            case 0x250BC0u: goto label_250bc0;
            case 0x250BC4u: goto label_250bc4;
            case 0x250BC8u: goto label_250bc8;
            case 0x250BCCu: goto label_250bcc;
            case 0x250BD0u: goto label_250bd0;
            case 0x250BD4u: goto label_250bd4;
            case 0x250BD8u: goto label_250bd8;
            case 0x250BDCu: goto label_250bdc;
            case 0x250BE0u: goto label_250be0;
            case 0x250BE4u: goto label_250be4;
            case 0x250BE8u: goto label_250be8;
            case 0x250BECu: goto label_250bec;
            case 0x250BF0u: goto label_250bf0;
            case 0x250BF4u: goto label_250bf4;
            case 0x250BF8u: goto label_250bf8;
            case 0x250BFCu: goto label_250bfc;
            case 0x250C00u: goto label_250c00;
            case 0x250C04u: goto label_250c04;
            case 0x250C08u: goto label_250c08;
            case 0x250C0Cu: goto label_250c0c;
            case 0x250C10u: goto label_250c10;
            case 0x250C14u: goto label_250c14;
            case 0x250C18u: goto label_250c18;
            case 0x250C1Cu: goto label_250c1c;
            case 0x250C20u: goto label_250c20;
            case 0x250C24u: goto label_250c24;
            case 0x250C28u: goto label_250c28;
            case 0x250C2Cu: goto label_250c2c;
            case 0x250C30u: goto label_250c30;
            case 0x250C34u: goto label_250c34;
            case 0x250C38u: goto label_250c38;
            case 0x250C3Cu: goto label_250c3c;
            case 0x250C40u: goto label_250c40;
            case 0x250C44u: goto label_250c44;
            case 0x250C48u: goto label_250c48;
            case 0x250C4Cu: goto label_250c4c;
            case 0x250C50u: goto label_250c50;
            case 0x250C54u: goto label_250c54;
            case 0x250C58u: goto label_250c58;
            case 0x250C5Cu: goto label_250c5c;
            case 0x250C60u: goto label_250c60;
            case 0x250C64u: goto label_250c64;
            case 0x250C68u: goto label_250c68;
            case 0x250C6Cu: goto label_250c6c;
            case 0x250C70u: goto label_250c70;
            case 0x250C74u: goto label_250c74;
            case 0x250C78u: goto label_250c78;
            case 0x250C7Cu: goto label_250c7c;
            case 0x250C80u: goto label_250c80;
            case 0x250C84u: goto label_250c84;
            case 0x250C88u: goto label_250c88;
            case 0x250C8Cu: goto label_250c8c;
            case 0x250C90u: goto label_250c90;
            case 0x250C94u: goto label_250c94;
            case 0x250C98u: goto label_250c98;
            case 0x250C9Cu: goto label_250c9c;
            case 0x250CA0u: goto label_250ca0;
            case 0x250CA4u: goto label_250ca4;
            case 0x250CA8u: goto label_250ca8;
            case 0x250CACu: goto label_250cac;
            case 0x250CB0u: goto label_250cb0;
            case 0x250CB4u: goto label_250cb4;
            case 0x250CB8u: goto label_250cb8;
            case 0x250CBCu: goto label_250cbc;
            case 0x250CC0u: goto label_250cc0;
            case 0x250CC4u: goto label_250cc4;
            case 0x250CC8u: goto label_250cc8;
            case 0x250CCCu: goto label_250ccc;
            case 0x250CD0u: goto label_250cd0;
            case 0x250CD4u: goto label_250cd4;
            case 0x250CD8u: goto label_250cd8;
            case 0x250CDCu: goto label_250cdc;
            case 0x250CE0u: goto label_250ce0;
            case 0x250CE4u: goto label_250ce4;
            case 0x250CE8u: goto label_250ce8;
            case 0x250CECu: goto label_250cec;
            case 0x250CF0u: goto label_250cf0;
            case 0x250CF4u: goto label_250cf4;
            case 0x250CF8u: goto label_250cf8;
            case 0x250CFCu: goto label_250cfc;
            case 0x250D00u: goto label_250d00;
            case 0x250D04u: goto label_250d04;
            case 0x250D08u: goto label_250d08;
            case 0x250D0Cu: goto label_250d0c;
            case 0x250D10u: goto label_250d10;
            case 0x250D14u: goto label_250d14;
            case 0x250D18u: goto label_250d18;
            case 0x250D1Cu: goto label_250d1c;
            case 0x250D20u: goto label_250d20;
            case 0x250D24u: goto label_250d24;
            case 0x250D28u: goto label_250d28;
            case 0x250D2Cu: goto label_250d2c;
            case 0x250D30u: goto label_250d30;
            case 0x250D34u: goto label_250d34;
            case 0x250D38u: goto label_250d38;
            case 0x250D3Cu: goto label_250d3c;
            case 0x250D40u: goto label_250d40;
            case 0x250D44u: goto label_250d44;
            case 0x250D48u: goto label_250d48;
            case 0x250D4Cu: goto label_250d4c;
            case 0x250D50u: goto label_250d50;
            case 0x250D54u: goto label_250d54;
            case 0x250D58u: goto label_250d58;
            case 0x250D5Cu: goto label_250d5c;
            case 0x250D60u: goto label_250d60;
            case 0x250D64u: goto label_250d64;
            case 0x250D68u: goto label_250d68;
            case 0x250D6Cu: goto label_250d6c;
            case 0x250D70u: goto label_250d70;
            case 0x250D74u: goto label_250d74;
            case 0x250D78u: goto label_250d78;
            case 0x250D7Cu: goto label_250d7c;
            case 0x250D80u: goto label_250d80;
            case 0x250D84u: goto label_250d84;
            case 0x250D88u: goto label_250d88;
            case 0x250D8Cu: goto label_250d8c;
            case 0x250D90u: goto label_250d90;
            case 0x250D94u: goto label_250d94;
            case 0x250D98u: goto label_250d98;
            case 0x250D9Cu: goto label_250d9c;
            case 0x250DA0u: goto label_250da0;
            case 0x250DA4u: goto label_250da4;
            case 0x250DA8u: goto label_250da8;
            case 0x250DACu: goto label_250dac;
            case 0x250DB0u: goto label_250db0;
            case 0x250DB4u: goto label_250db4;
            case 0x250DB8u: goto label_250db8;
            case 0x250DBCu: goto label_250dbc;
            case 0x250DC0u: goto label_250dc0;
            case 0x250DC4u: goto label_250dc4;
            case 0x250DC8u: goto label_250dc8;
            case 0x250DCCu: goto label_250dcc;
            case 0x250DD0u: goto label_250dd0;
            case 0x250DD4u: goto label_250dd4;
            case 0x250DD8u: goto label_250dd8;
            case 0x250DDCu: goto label_250ddc;
            case 0x250DE0u: goto label_250de0;
            case 0x250DE4u: goto label_250de4;
            case 0x250DE8u: goto label_250de8;
            case 0x250DECu: goto label_250dec;
            case 0x250DF0u: goto label_250df0;
            case 0x250DF4u: goto label_250df4;
            case 0x250DF8u: goto label_250df8;
            case 0x250DFCu: goto label_250dfc;
            case 0x250E00u: goto label_250e00;
            case 0x250E04u: goto label_250e04;
            case 0x250E08u: goto label_250e08;
            case 0x250E0Cu: goto label_250e0c;
            case 0x250E10u: goto label_250e10;
            case 0x250E14u: goto label_250e14;
            case 0x250E18u: goto label_250e18;
            case 0x250E1Cu: goto label_250e1c;
            case 0x250E20u: goto label_250e20;
            case 0x250E24u: goto label_250e24;
            case 0x250E28u: goto label_250e28;
            case 0x250E2Cu: goto label_250e2c;
            case 0x250E30u: goto label_250e30;
            case 0x250E34u: goto label_250e34;
            case 0x250E38u: goto label_250e38;
            case 0x250E3Cu: goto label_250e3c;
            case 0x250E40u: goto label_250e40;
            case 0x250E44u: goto label_250e44;
            case 0x250E48u: goto label_250e48;
            case 0x250E4Cu: goto label_250e4c;
            case 0x250E50u: goto label_250e50;
            case 0x250E54u: goto label_250e54;
            case 0x250E58u: goto label_250e58;
            case 0x250E5Cu: goto label_250e5c;
            case 0x250E60u: goto label_250e60;
            case 0x250E64u: goto label_250e64;
            case 0x250E68u: goto label_250e68;
            case 0x250E6Cu: goto label_250e6c;
            case 0x250E70u: goto label_250e70;
            case 0x250E74u: goto label_250e74;
            case 0x250E78u: goto label_250e78;
            case 0x250E7Cu: goto label_250e7c;
            case 0x250E80u: goto label_250e80;
            case 0x250E84u: goto label_250e84;
            case 0x250E88u: goto label_250e88;
            case 0x250E8Cu: goto label_250e8c;
            case 0x250E90u: goto label_250e90;
            case 0x250E94u: goto label_250e94;
            case 0x250E98u: goto label_250e98;
            case 0x250E9Cu: goto label_250e9c;
            case 0x250EA0u: goto label_250ea0;
            case 0x250EA4u: goto label_250ea4;
            case 0x250EA8u: goto label_250ea8;
            case 0x250EACu: goto label_250eac;
            case 0x250EB0u: goto label_250eb0;
            case 0x250EB4u: goto label_250eb4;
            case 0x250EB8u: goto label_250eb8;
            case 0x250EBCu: goto label_250ebc;
            case 0x250EC0u: goto label_250ec0;
            case 0x250EC4u: goto label_250ec4;
            case 0x250EC8u: goto label_250ec8;
            case 0x250ECCu: goto label_250ecc;
            case 0x250ED0u: goto label_250ed0;
            case 0x250ED4u: goto label_250ed4;
            case 0x250ED8u: goto label_250ed8;
            case 0x250EDCu: goto label_250edc;
            case 0x250EE0u: goto label_250ee0;
            case 0x250EE4u: goto label_250ee4;
            case 0x250EE8u: goto label_250ee8;
            case 0x250EECu: goto label_250eec;
            case 0x250EF0u: goto label_250ef0;
            case 0x250EF4u: goto label_250ef4;
            case 0x250EF8u: goto label_250ef8;
            case 0x250EFCu: goto label_250efc;
            case 0x250F00u: goto label_250f00;
            case 0x250F04u: goto label_250f04;
            case 0x250F08u: goto label_250f08;
            case 0x250F0Cu: goto label_250f0c;
            case 0x250F10u: goto label_250f10;
            case 0x250F14u: goto label_250f14;
            case 0x250F18u: goto label_250f18;
            case 0x250F1Cu: goto label_250f1c;
            case 0x250F20u: goto label_250f20;
            case 0x250F24u: goto label_250f24;
            case 0x250F28u: goto label_250f28;
            case 0x250F2Cu: goto label_250f2c;
            case 0x250F30u: goto label_250f30;
            case 0x250F34u: goto label_250f34;
            case 0x250F38u: goto label_250f38;
            case 0x250F3Cu: goto label_250f3c;
            case 0x250F40u: goto label_250f40;
            case 0x250F44u: goto label_250f44;
            case 0x250F48u: goto label_250f48;
            case 0x250F4Cu: goto label_250f4c;
            case 0x250F50u: goto label_250f50;
            case 0x250F54u: goto label_250f54;
            case 0x250F58u: goto label_250f58;
            case 0x250F5Cu: goto label_250f5c;
            case 0x250F60u: goto label_250f60;
            case 0x250F64u: goto label_250f64;
            case 0x250F68u: goto label_250f68;
            case 0x250F6Cu: goto label_250f6c;
            case 0x250F70u: goto label_250f70;
            case 0x250F74u: goto label_250f74;
            case 0x250F78u: goto label_250f78;
            case 0x250F7Cu: goto label_250f7c;
            case 0x250F80u: goto label_250f80;
            case 0x250F84u: goto label_250f84;
            case 0x250F88u: goto label_250f88;
            case 0x250F8Cu: goto label_250f8c;
            case 0x250F90u: goto label_250f90;
            case 0x250F94u: goto label_250f94;
            case 0x250F98u: goto label_250f98;
            case 0x250F9Cu: goto label_250f9c;
            case 0x250FA0u: goto label_250fa0;
            case 0x250FA4u: goto label_250fa4;
            case 0x250FA8u: goto label_250fa8;
            case 0x250FACu: goto label_250fac;
            case 0x250FB0u: goto label_250fb0;
            case 0x250FB4u: goto label_250fb4;
            case 0x250FB8u: goto label_250fb8;
            case 0x250FBCu: goto label_250fbc;
            case 0x250FC0u: goto label_250fc0;
            case 0x250FC4u: goto label_250fc4;
            case 0x250FC8u: goto label_250fc8;
            case 0x250FCCu: goto label_250fcc;
            case 0x250FD0u: goto label_250fd0;
            case 0x250FD4u: goto label_250fd4;
            case 0x250FD8u: goto label_250fd8;
            case 0x250FDCu: goto label_250fdc;
            case 0x250FE0u: goto label_250fe0;
            case 0x250FE4u: goto label_250fe4;
            case 0x250FE8u: goto label_250fe8;
            case 0x250FECu: goto label_250fec;
            case 0x250FF0u: goto label_250ff0;
            case 0x250FF4u: goto label_250ff4;
            case 0x250FF8u: goto label_250ff8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x250C84u;
label_250c84:
    // 0x250c84: 0x24120001
    ctx->pc = 0x250c84u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_250c88:
    // 0x250c88: 0x220202d
    ctx->pc = 0x250c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_250c8c:
    // 0x250c8c: 0xc0941ec
label_250c90:
    if (ctx->pc == 0x250C90u) {
        ctx->pc = 0x250C90u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x250C94u;
        goto label_250c94;
    }
    ctx->pc = 0x250C8Cu;
    SET_GPR_U32(ctx, 31, 0x250C94u);
    ctx->pc = 0x250C90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2507B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddTransmitter_0x2507b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250C94u; }
    }
    if (ctx->pc != 0x250C94u) { return; }
    ctx->pc = 0x250C94u;
label_250c94:
    // 0x250c94: 0x40802d
    ctx->pc = 0x250c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_250c98:
    // 0x250c98: 0x3c030034
    ctx->pc = 0x250c98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_250c9c:
    // 0x250c9c: 0x8c62f914
    ctx->pc = 0x250c9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965524)));
label_250ca0:
    // 0x250ca0: 0x24420001
    ctx->pc = 0x250ca0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_250ca4:
    // 0x250ca4: 0x12400014
label_250ca8:
    if (ctx->pc == 0x250CA8u) {
        ctx->pc = 0x250CA8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294965524), GPR_U32(ctx, 2));
        ctx->pc = 0x250CACu;
        goto label_250cac;
    }
    ctx->pc = 0x250CA4u;
    {
        const bool branch_taken_0x250ca4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x250CA8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294965524), GPR_U32(ctx, 2));
        if (branch_taken_0x250ca4) {
            ctx->pc = 0x250CF8u;
            goto label_250cf8;
        }
    }
    ctx->pc = 0x250CACu;
label_250cac:
    // 0x250cac: 0x3c020034
    ctx->pc = 0x250cacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250cb0:
    // 0x250cb0: 0x8c43e7f0
    ctx->pc = 0x250cb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_250cb4:
    // 0x250cb4: 0x2402000d
    ctx->pc = 0x250cb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_250cb8:
    // 0x250cb8: 0x54620001
label_250cbc:
    if (ctx->pc == 0x250CBCu) {
        ctx->pc = 0x250CBCu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x250CC0u;
        goto label_250cc0;
    }
    ctx->pc = 0x250CB8u;
    {
        const bool branch_taken_0x250cb8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x250cb8) {
            ctx->pc = 0x250CBCu;
            WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x250CC0u;
            goto label_250cc0;
        }
    }
    ctx->pc = 0x250CC0u;
label_250cc0:
    // 0x250cc0: 0x86230002
    ctx->pc = 0x250cc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_250cc4:
    // 0x250cc4: 0x3c040034
    ctx->pc = 0x250cc4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
label_250cc8:
    // 0x250cc8: 0x8c82d2d0
    ctx->pc = 0x250cc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294955728)));
label_250ccc:
    // 0x250ccc: 0x43102a
    ctx->pc = 0x250cccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_250cd0:
    // 0x250cd0: 0x54400001
label_250cd4:
    if (ctx->pc == 0x250CD4u) {
        ctx->pc = 0x250CD4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294955728), GPR_U32(ctx, 3));
        ctx->pc = 0x250CD8u;
        goto label_250cd8;
    }
    ctx->pc = 0x250CD0u;
    {
        const bool branch_taken_0x250cd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x250cd0) {
            ctx->pc = 0x250CD4u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 4294955728), GPR_U32(ctx, 3));
            ctx->pc = 0x250CD8u;
            goto label_250cd8;
        }
    }
    ctx->pc = 0x250CD8u;
label_250cd8:
    // 0x250cd8: 0x3c020034
    ctx->pc = 0x250cd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250cdc:
    // 0x250cdc: 0x2442d1d8
    ctx->pc = 0x250cdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955480));
label_250ce0:
    // 0x250ce0: 0x86230002
    ctx->pc = 0x250ce0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_250ce4:
    // 0x250ce4: 0x31880
    ctx->pc = 0x250ce4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_250ce8:
    // 0x250ce8: 0x621821
    ctx->pc = 0x250ce8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_250cec:
    // 0x250cec: 0xac700000
    ctx->pc = 0x250cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_250cf0:
    // 0x250cf0: 0x24020003
    ctx->pc = 0x250cf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_250cf4:
    // 0x250cf4: 0xa2020000
    ctx->pc = 0x250cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_250cf8:
    // 0x250cf8: 0x10000018
label_250cfc:
    if (ctx->pc == 0x250CFCu) {
        ctx->pc = 0x250CFCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x250D00u;
        goto label_250d00;
    }
    ctx->pc = 0x250CF8u;
    {
        const bool branch_taken_0x250cf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x250CFCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x250cf8) {
            ctx->pc = 0x250D5Cu;
            goto label_250d5c;
        }
    }
    ctx->pc = 0x250D00u;
label_250d00:
    // 0x250d00: 0x24120001
    ctx->pc = 0x250d00u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_250d04:
    // 0x250d04: 0x220202d
    ctx->pc = 0x250d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_250d08:
    // 0x250d08: 0xc0941ec
label_250d0c:
    if (ctx->pc == 0x250D0Cu) {
        ctx->pc = 0x250D0Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x250D10u;
        goto label_250d10;
    }
    ctx->pc = 0x250D08u;
    SET_GPR_U32(ctx, 31, 0x250D10u);
    ctx->pc = 0x250D0Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2507B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddTransmitter_0x2507b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250D10u; }
    }
    if (ctx->pc != 0x250D10u) { return; }
    ctx->pc = 0x250D10u;
label_250d10:
    // 0x250d10: 0x12400003
label_250d14:
    if (ctx->pc == 0x250D14u) {
        ctx->pc = 0x250D14u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x250D18u;
        goto label_250d18;
    }
    ctx->pc = 0x250D10u;
    {
        const bool branch_taken_0x250d10 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x250D14u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x250d10) {
            ctx->pc = 0x250D20u;
            goto label_250d20;
        }
    }
    ctx->pc = 0x250D18u;
label_250d18:
    // 0x250d18: 0x3c020034
    ctx->pc = 0x250d18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250d1c:
    // 0x250d1c: 0xac508b78
    ctx->pc = 0x250d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937464), GPR_U32(ctx, 16));
label_250d20:
    // 0x250d20: 0x24040001
    ctx->pc = 0x250d20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_250d24:
    // 0x250d24: 0x280282d
    ctx->pc = 0x250d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_250d28:
    // 0x250d28: 0x1000000e
label_250d2c:
    if (ctx->pc == 0x250D2Cu) {
        ctx->pc = 0x250D2Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x250D30u;
        goto label_250d30;
    }
    ctx->pc = 0x250D28u;
    {
        const bool branch_taken_0x250d28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x250D2Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x250d28) {
            ctx->pc = 0x250D64u;
            goto label_250d64;
        }
    }
    ctx->pc = 0x250D30u;
label_250d30:
    // 0x250d30: 0x220202d
    ctx->pc = 0x250d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_250d34:
    // 0x250d34: 0xc0941ec
label_250d38:
    if (ctx->pc == 0x250D38u) {
        ctx->pc = 0x250D38u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x250D3Cu;
        goto label_250d3c;
    }
    ctx->pc = 0x250D34u;
    SET_GPR_U32(ctx, 31, 0x250D3Cu);
    ctx->pc = 0x250D38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2507B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddTransmitter_0x2507b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250D3Cu; }
    }
    if (ctx->pc != 0x250D3Cu) { return; }
    ctx->pc = 0x250D3Cu;
label_250d3c:
    // 0x250d3c: 0x40802d
    ctx->pc = 0x250d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_250d40:
    // 0x250d40: 0x3c040033
    ctx->pc = 0x250d40u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
label_250d44:
    // 0x250d44: 0x24844b70
    ctx->pc = 0x250d44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19312));
label_250d48:
    // 0x250d48: 0x2042023
    ctx->pc = 0x250d48u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_250d4c:
    // 0x250d4c: 0x42183
    ctx->pc = 0x250d4cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
label_250d50:
    // 0x250d50: 0xc0940dc
label_250d54:
    if (ctx->pc == 0x250D54u) {
        ctx->pc = 0x250D54u;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x250D58u;
        goto label_250d58;
    }
    ctx->pc = 0x250D50u;
    SET_GPR_U32(ctx, 31, 0x250D58u);
    ctx->pc = 0x250D54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->pc = 0x250370u;
    {
        const uint32_t __entryPc = ctx->pc;
        LinkTriggerToCam_0x250370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250D58u; }
    }
    if (ctx->pc != 0x250D58u) { return; }
    ctx->pc = 0x250D58u;
label_250d58:
    // 0x250d58: 0x24040002
    ctx->pc = 0x250d58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_250d5c:
    // 0x250d5c: 0x280282d
    ctx->pc = 0x250d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_250d60:
    // 0x250d60: 0x302d
    ctx->pc = 0x250d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250d64:
    // 0x250d64: 0x26270010
    ctx->pc = 0x250d64u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 16));
label_250d68:
    // 0x250d68: 0x26280004
    ctx->pc = 0x250d68u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 4));
label_250d6c:
    // 0x250d6c: 0xc093fee
label_250d70:
    if (ctx->pc == 0x250D70u) {
        ctx->pc = 0x250D70u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x250D74u;
        goto label_250d74;
    }
    ctx->pc = 0x250D6Cu;
    SET_GPR_U32(ctx, 31, 0x250D74u);
    ctx->pc = 0x250D70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24FFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_arrow_0x24ffb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250D74u; }
    }
    if (ctx->pc != 0x250D74u) { return; }
    ctx->pc = 0x250D74u;
label_250d74:
    // 0x250d74: 0x1000008e
label_250d78:
    if (ctx->pc == 0x250D78u) {
        ctx->pc = 0x250D78u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x250D7Cu;
        goto label_250d7c;
    }
    ctx->pc = 0x250D74u;
    {
        const bool branch_taken_0x250d74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x250D78u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        if (branch_taken_0x250d74) {
            ctx->pc = 0x250FB0u;
            goto label_250fb0;
        }
    }
    ctx->pc = 0x250D7Cu;
label_250d7c:
    // 0x250d7c: 0x3c030034
    ctx->pc = 0x250d7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_250d80:
    // 0x250d80: 0x8c62c380
    ctx->pc = 0x250d80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294951808)));
label_250d84:
    // 0x250d84: 0x24420001
    ctx->pc = 0x250d84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_250d88:
    // 0x250d88: 0xac62c380
    ctx->pc = 0x250d88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294951808), GPR_U32(ctx, 2));
label_250d8c:
    // 0x250d8c: 0x28420081
    ctx->pc = 0x250d8cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 129));
label_250d90:
    // 0x250d90: 0x14400006
label_250d94:
    if (ctx->pc == 0x250D94u) {
        ctx->pc = 0x250D94u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x250D98u;
        goto label_250d98;
    }
    ctx->pc = 0x250D90u;
    {
        const bool branch_taken_0x250d90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x250D94u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x250d90) {
            ctx->pc = 0x250DACu;
            goto label_250dac;
        }
    }
    ctx->pc = 0x250D98u;
label_250d98:
    // 0x250d98: 0x3c04003b
    ctx->pc = 0x250d98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_250d9c:
    // 0x250d9c: 0x24848598
    ctx->pc = 0x250d9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935960));
label_250da0:
    // 0x250da0: 0xc0b49a6
label_250da4:
    if (ctx->pc == 0x250DA4u) {
        ctx->pc = 0x250DA4u;
        SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
        ctx->pc = 0x250DA8u;
        goto label_250da8;
    }
    ctx->pc = 0x250DA0u;
    SET_GPR_U32(ctx, 31, 0x250DA8u);
    ctx->pc = 0x250DA4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250DA8u; }
    }
    if (ctx->pc != 0x250DA8u) { return; }
    ctx->pc = 0x250DA8u;
label_250da8:
    // 0x250da8: 0x3c020034
    ctx->pc = 0x250da8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250dac:
    // 0x250dac: 0x8c50c380
    ctx->pc = 0x250dacu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294951808)));
label_250db0:
    // 0x250db0: 0x24020070
    ctx->pc = 0x250db0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 112));
label_250db4:
    // 0x250db4: 0x2028018
    ctx->pc = 0x250db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_250db8:
    // 0x250db8: 0x3c020034
    ctx->pc = 0x250db8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250dbc:
    // 0x250dbc: 0x24428b10
    ctx->pc = 0x250dbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937360));
label_250dc0:
    // 0x250dc0: 0x2028021
    ctx->pc = 0x250dc0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_250dc4:
    // 0x250dc4: 0x202d
    ctx->pc = 0x250dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250dc8:
    // 0x250dc8: 0x280282d
    ctx->pc = 0x250dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_250dcc:
    // 0x250dcc: 0x24060001
    ctx->pc = 0x250dccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_250dd0:
    // 0x250dd0: 0x26270010
    ctx->pc = 0x250dd0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 16));
label_250dd4:
    // 0x250dd4: 0x26280004
    ctx->pc = 0x250dd4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 4));
label_250dd8:
    // 0x250dd8: 0xc093fee
label_250ddc:
    if (ctx->pc == 0x250DDCu) {
        ctx->pc = 0x250DDCu;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x250DE0u;
        goto label_250de0;
    }
    ctx->pc = 0x250DD8u;
    SET_GPR_U32(ctx, 31, 0x250DE0u);
    ctx->pc = 0x250DDCu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24FFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_arrow_0x24ffb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250DE0u; }
    }
    if (ctx->pc != 0x250DE0u) { return; }
    ctx->pc = 0x250DE0u;
label_250de0:
    // 0x250de0: 0xae020060
    ctx->pc = 0x250de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_250de4:
    // 0x250de4: 0xc6020030
    ctx->pc = 0x250de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_250de8:
    // 0x250de8: 0xe6020040
    ctx->pc = 0x250de8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_250dec:
    // 0x250dec: 0xc6010034
    ctx->pc = 0x250decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_250df0:
    // 0x250df0: 0xe6010044
    ctx->pc = 0x250df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_250df4:
    // 0x250df4: 0xc6000038
    ctx->pc = 0x250df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250df8:
    // 0x250df8: 0xe6000048
    ctx->pc = 0x250df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_250dfc:
    // 0x250dfc: 0xe6020050
    ctx->pc = 0x250dfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_250e00:
    // 0x250e00: 0xe6010054
    ctx->pc = 0x250e00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_250e04:
    // 0x250e04: 0xe6000058
    ctx->pc = 0x250e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_250e08:
    // 0x250e08: 0x24020001
    ctx->pc = 0x250e08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_250e0c:
    // 0x250e0c: 0x10000068
label_250e10:
    if (ctx->pc == 0x250E10u) {
        ctx->pc = 0x250E10u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x250E14u;
        goto label_250e14;
    }
    ctx->pc = 0x250E0Cu;
    {
        const bool branch_taken_0x250e0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x250E10u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        if (branch_taken_0x250e0c) {
            ctx->pc = 0x250FB0u;
            goto label_250fb0;
        }
    }
    ctx->pc = 0x250E14u;
label_250e14:
    // 0x250e14: 0x3c020031
    ctx->pc = 0x250e14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_250e18:
    // 0x250e18: 0x8c430018
    ctx->pc = 0x250e18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_250e1c:
    // 0x250e1c: 0x2402400b
    ctx->pc = 0x250e1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16395));
label_250e20:
    // 0x250e20: 0x10620063
label_250e24:
    if (ctx->pc == 0x250E24u) {
        ctx->pc = 0x250E24u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x250E28u;
        goto label_250e28;
    }
    ctx->pc = 0x250E20u;
    {
        const bool branch_taken_0x250e20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x250E24u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x250e20) {
            ctx->pc = 0x250FB0u;
            goto label_250fb0;
        }
    }
    ctx->pc = 0x250E28u;
label_250e28:
    // 0x250e28: 0xc0b5ae8
label_250e2c:
    if (ctx->pc == 0x250E2Cu) {
        ctx->pc = 0x250E2Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x250E30u;
        goto label_250e30;
    }
    ctx->pc = 0x250E28u;
    SET_GPR_U32(ctx, 31, 0x250E30u);
    ctx->pc = 0x250E2Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250E30u; }
    }
    if (ctx->pc != 0x250E30u) { return; }
    ctx->pc = 0x250E30u;
label_250e30:
    // 0x250e30: 0xc6200004
    ctx->pc = 0x250e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250e34:
    // 0x250e34: 0xe7a00030
    ctx->pc = 0x250e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_250e38:
    // 0x250e38: 0xc6200008
    ctx->pc = 0x250e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250e3c:
    // 0x250e3c: 0xe7a00034
    ctx->pc = 0x250e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_250e40:
    // 0x250e40: 0xc620000c
    ctx->pc = 0x250e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250e44:
    // 0x250e44: 0xe7a00038
    ctx->pc = 0x250e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_250e48:
    // 0x250e48: 0xc0a76fa
label_250e4c:
    if (ctx->pc == 0x250E4Cu) {
        ctx->pc = 0x250E4Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x250E50u;
        goto label_250e50;
    }
    ctx->pc = 0x250E48u;
    SET_GPR_U32(ctx, 31, 0x250E50u);
    ctx->pc = 0x250E4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29DBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddBoss_0x29dbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250E50u; }
    }
    if (ctx->pc != 0x250E50u) { return; }
    ctx->pc = 0x250E50u;
label_250e50:
    // 0x250e50: 0x10000058
label_250e54:
    if (ctx->pc == 0x250E54u) {
        ctx->pc = 0x250E54u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x250E58u;
        goto label_250e58;
    }
    ctx->pc = 0x250E50u;
    {
        const bool branch_taken_0x250e50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x250E54u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x250e50) {
            ctx->pc = 0x250FB4u;
            goto label_250fb4;
        }
    }
    ctx->pc = 0x250E58u;
label_250e58:
    // 0x250e58: 0x3c020034
    ctx->pc = 0x250e58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250e5c:
    // 0x250e5c: 0x8c43e7f0
    ctx->pc = 0x250e5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_250e60:
    // 0x250e60: 0x2402000d
    ctx->pc = 0x250e60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_250e64:
    // 0x250e64: 0x54620001
label_250e68:
    if (ctx->pc == 0x250E68u) {
        ctx->pc = 0x250E68u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x250E6Cu;
        goto label_250e6c;
    }
    ctx->pc = 0x250E64u;
    {
        const bool branch_taken_0x250e64 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x250e64) {
            ctx->pc = 0x250E68u;
            WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x250E6Cu;
            goto label_250e6c;
        }
    }
    ctx->pc = 0x250E6Cu;
label_250e6c:
    // 0x250e6c: 0x86230002
    ctx->pc = 0x250e6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_250e70:
    // 0x250e70: 0x3c040034
    ctx->pc = 0x250e70u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
label_250e74:
    // 0x250e74: 0x8c82d310
    ctx->pc = 0x250e74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294955792)));
label_250e78:
    // 0x250e78: 0x43102a
    ctx->pc = 0x250e78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_250e7c:
    // 0x250e7c: 0x54400001
label_250e80:
    if (ctx->pc == 0x250E80u) {
        ctx->pc = 0x250E80u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294955792), GPR_U32(ctx, 3));
        ctx->pc = 0x250E84u;
        goto label_250e84;
    }
    ctx->pc = 0x250E7Cu;
    {
        const bool branch_taken_0x250e7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x250e7c) {
            ctx->pc = 0x250E80u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 4294955792), GPR_U32(ctx, 3));
            ctx->pc = 0x250E84u;
            goto label_250e84;
        }
    }
    ctx->pc = 0x250E84u;
label_250e84:
    // 0x250e84: 0x3c030033
    ctx->pc = 0x250e84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
label_250e88:
    // 0x250e88: 0x24634ac0
    ctx->pc = 0x250e88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19136));
label_250e8c:
    // 0x250e8c: 0x86220002
    ctx->pc = 0x250e8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_250e90:
    // 0x250e90: 0x2404000c
    ctx->pc = 0x250e90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
label_250e94:
    // 0x250e94: 0x441018
    ctx->pc = 0x250e94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_250e98:
    // 0x250e98: 0x431021
    ctx->pc = 0x250e98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_250e9c:
    // 0x250e9c: 0xc6200004
    ctx->pc = 0x250e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250ea0:
    // 0x250ea0: 0xe4400000
    ctx->pc = 0x250ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_250ea4:
    // 0x250ea4: 0x86220002
    ctx->pc = 0x250ea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_250ea8:
    // 0x250ea8: 0x442818
    ctx->pc = 0x250ea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_250eac:
    // 0x250eac: 0xa31021
    ctx->pc = 0x250eacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_250eb0:
    // 0x250eb0: 0xc6200008
    ctx->pc = 0x250eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250eb4:
    // 0x250eb4: 0xe4400004
    ctx->pc = 0x250eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_250eb8:
    // 0x250eb8: 0x86220002
    ctx->pc = 0x250eb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_250ebc:
    // 0x250ebc: 0x442818
    ctx->pc = 0x250ebcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_250ec0:
    // 0x250ec0: 0xa31021
    ctx->pc = 0x250ec0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_250ec4:
    // 0x250ec4: 0xc620000c
    ctx->pc = 0x250ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250ec8:
    // 0x250ec8: 0xe4400008
    ctx->pc = 0x250ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_250ecc:
    // 0x250ecc: 0x3c030034
    ctx->pc = 0x250eccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_250ed0:
    // 0x250ed0: 0x2463d2d8
    ctx->pc = 0x250ed0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294955736));
label_250ed4:
    // 0x250ed4: 0x86220002
    ctx->pc = 0x250ed4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_250ed8:
    // 0x250ed8: 0x21080
    ctx->pc = 0x250ed8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_250edc:
    // 0x250edc: 0x431021
    ctx->pc = 0x250edcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_250ee0:
    // 0x250ee0: 0xc6200014
    ctx->pc = 0x250ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250ee4:
    // 0x250ee4: 0xe4400000
    ctx->pc = 0x250ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_250ee8:
    // 0x250ee8: 0x3c020033
    ctx->pc = 0x250ee8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_250eec:
    // 0x250eec: 0xc6200014
    ctx->pc = 0x250eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250ef0:
    // 0x250ef0: 0x1000002f
label_250ef4:
    if (ctx->pc == 0x250EF4u) {
        ctx->pc = 0x250EF4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294952916), bits); }
        ctx->pc = 0x250EF8u;
        goto label_250ef8;
    }
    ctx->pc = 0x250EF0u;
    {
        const bool branch_taken_0x250ef0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x250EF4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294952916), bits); }
        if (branch_taken_0x250ef0) {
            ctx->pc = 0x250FB0u;
            goto label_250fb0;
        }
    }
    ctx->pc = 0x250EF8u;
label_250ef8:
    // 0x250ef8: 0x3c020034
    ctx->pc = 0x250ef8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250efc:
    // 0x250efc: 0x8c42cd90
    ctx->pc = 0x250efcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954384)));
label_250f00:
    // 0x250f00: 0x28420014
    ctx->pc = 0x250f00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 20));
label_250f04:
    // 0x250f04: 0x14400007
label_250f08:
    if (ctx->pc == 0x250F08u) {
        ctx->pc = 0x250F08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x250F0Cu;
        goto label_250f0c;
    }
    ctx->pc = 0x250F04u;
    {
        const bool branch_taken_0x250f04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x250F08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x250f04) {
            ctx->pc = 0x250F24u;
            goto label_250f24;
        }
    }
    ctx->pc = 0x250F0Cu;
label_250f0c:
    // 0x250f0c: 0x3c04003b
    ctx->pc = 0x250f0cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_250f10:
    // 0x250f10: 0x248485b0
    ctx->pc = 0x250f10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935984));
label_250f14:
    // 0x250f14: 0xc0b492e
label_250f18:
    if (ctx->pc == 0x250F18u) {
        ctx->pc = 0x250F18u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x250F1Cu;
        goto label_250f1c;
    }
    ctx->pc = 0x250F14u;
    SET_GPR_U32(ctx, 31, 0x250F1Cu);
    ctx->pc = 0x250F18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250F1Cu; }
    }
    if (ctx->pc != 0x250F1Cu) { return; }
    ctx->pc = 0x250F1Cu;
label_250f1c:
    // 0x250f1c: 0x10000025
label_250f20:
    if (ctx->pc == 0x250F20u) {
        ctx->pc = 0x250F20u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x250F24u;
        goto label_250f24;
    }
    ctx->pc = 0x250F1Cu;
    {
        const bool branch_taken_0x250f1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x250F20u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x250f1c) {
            ctx->pc = 0x250FB4u;
            goto label_250fb4;
        }
    }
    ctx->pc = 0x250F24u;
label_250f24:
    // 0x250f24: 0x8c50cd90
    ctx->pc = 0x250f24u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294954384)));
label_250f28:
    // 0x250f28: 0x26100001
    ctx->pc = 0x250f28u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_250f2c:
    // 0x250f2c: 0xac50cd90
    ctx->pc = 0x250f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954384), GPR_U32(ctx, 16));
label_250f30:
    // 0x250f30: 0x1081c0
    ctx->pc = 0x250f30u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 7));
label_250f34:
    // 0x250f34: 0x3c020034
    ctx->pc = 0x250f34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_250f38:
    // 0x250f38: 0x2442c310
    ctx->pc = 0x250f38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951696));
label_250f3c:
    // 0x250f3c: 0x2028021
    ctx->pc = 0x250f3cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_250f40:
    // 0x250f40: 0x24040002
    ctx->pc = 0x250f40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_250f44:
    // 0x250f44: 0x280282d
    ctx->pc = 0x250f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_250f48:
    // 0x250f48: 0x24060001
    ctx->pc = 0x250f48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_250f4c:
    // 0x250f4c: 0x26270010
    ctx->pc = 0x250f4cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 16));
label_250f50:
    // 0x250f50: 0x26280004
    ctx->pc = 0x250f50u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 4));
label_250f54:
    // 0x250f54: 0xc093fee
label_250f58:
    if (ctx->pc == 0x250F58u) {
        ctx->pc = 0x250F58u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x250F5Cu;
        goto label_250f5c;
    }
    ctx->pc = 0x250F54u;
    SET_GPR_U32(ctx, 31, 0x250F5Cu);
    ctx->pc = 0x250F58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24FFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_arrow_0x24ffb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250F5Cu; }
    }
    if (ctx->pc != 0x250F5Cu) { return; }
    ctx->pc = 0x250F5Cu;
label_250f5c:
    // 0x250f5c: 0xae020060
    ctx->pc = 0x250f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_250f60:
    // 0x250f60: 0xc6020030
    ctx->pc = 0x250f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_250f64:
    // 0x250f64: 0xe6020040
    ctx->pc = 0x250f64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_250f68:
    // 0x250f68: 0xc6010034
    ctx->pc = 0x250f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_250f6c:
    // 0x250f6c: 0xe6010044
    ctx->pc = 0x250f6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_250f70:
    // 0x250f70: 0xc6000038
    ctx->pc = 0x250f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250f74:
    // 0x250f74: 0xe6000048
    ctx->pc = 0x250f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_250f78:
    // 0x250f78: 0xe6020050
    ctx->pc = 0x250f78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_250f7c:
    // 0x250f7c: 0xe6010054
    ctx->pc = 0x250f7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_250f80:
    // 0x250f80: 0xe6000058
    ctx->pc = 0x250f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_250f84:
    // 0x250f84: 0x24020001
    ctx->pc = 0x250f84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_250f88:
    // 0x250f88: 0xae020064
    ctx->pc = 0x250f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_250f8c:
    // 0x250f8c: 0x96220002
    ctx->pc = 0x250f8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_250f90:
    // 0x250f90: 0xa6020070
    ctx->pc = 0x250f90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 112), (uint16_t)GPR_U32(ctx, 2));
label_250f94:
    // 0x250f94: 0x92220001
    ctx->pc = 0x250f94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_250f98:
    // 0x250f98: 0x10000005
label_250f9c:
    if (ctx->pc == 0x250F9Cu) {
        ctx->pc = 0x250F9Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x250FA0u;
        goto label_250fa0;
    }
    ctx->pc = 0x250F98u;
    {
        const bool branch_taken_0x250f98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x250F9Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x250f98) {
            ctx->pc = 0x250FB0u;
            goto label_250fb0;
        }
    }
    ctx->pc = 0x250FA0u;
label_250fa0:
    // 0x250fa0: 0x3c04003b
    ctx->pc = 0x250fa0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_250fa4:
    // 0x250fa4: 0x248485c0
    ctx->pc = 0x250fa4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936000));
label_250fa8:
    // 0x250fa8: 0xc0b492e
label_250fac:
    if (ctx->pc == 0x250FACu) {
        ctx->pc = 0x250FACu;
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x250FB0u;
        goto label_250fb0;
    }
    ctx->pc = 0x250FA8u;
    SET_GPR_U32(ctx, 31, 0x250FB0u);
    ctx->pc = 0x250FACu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250FB0u; }
    }
    if (ctx->pc != 0x250FB0u) { return; }
    ctx->pc = 0x250FB0u;
label_250fb0:
    // 0x250fb0: 0x26730001
    ctx->pc = 0x250fb0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_250fb4:
    // 0x250fb4: 0x275102a
    ctx->pc = 0x250fb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 21)));
label_250fb8:
    // 0x250fb8: 0x1440ff23
label_250fbc:
    if (ctx->pc == 0x250FBCu) {
        ctx->pc = 0x250FBCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x250FC0u;
        goto label_250fc0;
    }
    ctx->pc = 0x250FB8u;
    {
        const bool branch_taken_0x250fb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x250FBCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
        if (branch_taken_0x250fb8) {
            ctx->pc = 0x250C48u;
            goto label_250c48;
        }
    }
    ctx->pc = 0x250FC0u;
label_250fc0:
    // 0x250fc0: 0x3c020031
    ctx->pc = 0x250fc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_250fc4:
    // 0x250fc4: 0xc09404a
label_250fc8:
    if (ctx->pc == 0x250FC8u) {
        ctx->pc = 0x250FC8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
        ctx->pc = 0x250FCCu;
        goto label_250fcc;
    }
    ctx->pc = 0x250FC4u;
    SET_GPR_U32(ctx, 31, 0x250FCCu);
    ctx->pc = 0x250FC8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->pc = 0x250128u;
    {
        const uint32_t __entryPc = ctx->pc;
        ShowCameras_0x250128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250FCCu; }
    }
    if (ctx->pc != 0x250FCCu) { return; }
    ctx->pc = 0x250FCCu;
label_250fcc:
    // 0x250fcc: 0xc094228
label_250fd0:
    if (ctx->pc == 0x250FD0u) {
        ctx->pc = 0x250FD0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x250FD4u;
        goto label_250fd4;
    }
    ctx->pc = 0x250FCCu;
    SET_GPR_U32(ctx, 31, 0x250FD4u);
    ctx->pc = 0x250FD0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2508A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetPlayerStartPos_0x2508a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250FD4u; }
    }
    if (ctx->pc != 0x250FD4u) { return; }
    ctx->pc = 0x250FD4u;
label_250fd4:
    // 0x250fd4: 0xdfbf00b0
    ctx->pc = 0x250fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_250fd8:
    // 0x250fd8: 0xdfb600a0
    ctx->pc = 0x250fd8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_250fdc:
    // 0x250fdc: 0xdfb50090
    ctx->pc = 0x250fdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_250fe0:
    // 0x250fe0: 0xdfb40080
    ctx->pc = 0x250fe0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_250fe4:
    // 0x250fe4: 0xdfb30070
    ctx->pc = 0x250fe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_250fe8:
    // 0x250fe8: 0xdfb20060
    ctx->pc = 0x250fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_250fec:
    // 0x250fec: 0xdfb10050
    ctx->pc = 0x250fecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_250ff0:
    // 0x250ff0: 0xdfb00040
    ctx->pc = 0x250ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_250ff4:
    // 0x250ff4: 0x3e00008
label_250ff8:
    if (ctx->pc == 0x250FF8u) {
        ctx->pc = 0x250FF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x250FFCu;
        goto label_fallthrough_0x250ff4;
    }
    ctx->pc = 0x250FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250FF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x250B10u: goto label_250b10;
            case 0x250B14u: goto label_250b14;
            case 0x250B18u: goto label_250b18;
            case 0x250B1Cu: goto label_250b1c;
            case 0x250B20u: goto label_250b20;
            case 0x250B24u: goto label_250b24;
            case 0x250B28u: goto label_250b28;
            case 0x250B2Cu: goto label_250b2c;
            case 0x250B30u: goto label_250b30;
            case 0x250B34u: goto label_250b34;
            case 0x250B38u: goto label_250b38;
            case 0x250B3Cu: goto label_250b3c;
            case 0x250B40u: goto label_250b40;
            case 0x250B44u: goto label_250b44;
            case 0x250B48u: goto label_250b48;
            case 0x250B4Cu: goto label_250b4c;
            case 0x250B50u: goto label_250b50;
            case 0x250B54u: goto label_250b54;
            case 0x250B58u: goto label_250b58;
            case 0x250B5Cu: goto label_250b5c;
            case 0x250B60u: goto label_250b60;
            case 0x250B64u: goto label_250b64;
            case 0x250B68u: goto label_250b68;
            case 0x250B6Cu: goto label_250b6c;
            case 0x250B70u: goto label_250b70;
            case 0x250B74u: goto label_250b74;
            case 0x250B78u: goto label_250b78;
            case 0x250B7Cu: goto label_250b7c;
            case 0x250B80u: goto label_250b80;
            case 0x250B84u: goto label_250b84;
            case 0x250B88u: goto label_250b88;
            case 0x250B8Cu: goto label_250b8c;
            case 0x250B90u: goto label_250b90;
            case 0x250B94u: goto label_250b94;
            case 0x250B98u: goto label_250b98;
            case 0x250B9Cu: goto label_250b9c;
            case 0x250BA0u: goto label_250ba0;
            case 0x250BA4u: goto label_250ba4;
            case 0x250BA8u: goto label_250ba8;
            case 0x250BACu: goto label_250bac;
            case 0x250BB0u: goto label_250bb0;
            case 0x250BB4u: goto label_250bb4;
            case 0x250BB8u: goto label_250bb8;
            case 0x250BBCu: goto label_250bbc;
            case 0x250BC0u: goto label_250bc0;
            case 0x250BC4u: goto label_250bc4;
            case 0x250BC8u: goto label_250bc8;
            case 0x250BCCu: goto label_250bcc;
            case 0x250BD0u: goto label_250bd0;
            case 0x250BD4u: goto label_250bd4;
            case 0x250BD8u: goto label_250bd8;
            case 0x250BDCu: goto label_250bdc;
            case 0x250BE0u: goto label_250be0;
            case 0x250BE4u: goto label_250be4;
            case 0x250BE8u: goto label_250be8;
            case 0x250BECu: goto label_250bec;
            case 0x250BF0u: goto label_250bf0;
            case 0x250BF4u: goto label_250bf4;
            case 0x250BF8u: goto label_250bf8;
            case 0x250BFCu: goto label_250bfc;
            case 0x250C00u: goto label_250c00;
            case 0x250C04u: goto label_250c04;
            case 0x250C08u: goto label_250c08;
            case 0x250C0Cu: goto label_250c0c;
            case 0x250C10u: goto label_250c10;
            case 0x250C14u: goto label_250c14;
            case 0x250C18u: goto label_250c18;
            case 0x250C1Cu: goto label_250c1c;
            case 0x250C20u: goto label_250c20;
            case 0x250C24u: goto label_250c24;
            case 0x250C28u: goto label_250c28;
            case 0x250C2Cu: goto label_250c2c;
            case 0x250C30u: goto label_250c30;
            case 0x250C34u: goto label_250c34;
            case 0x250C38u: goto label_250c38;
            case 0x250C3Cu: goto label_250c3c;
            case 0x250C40u: goto label_250c40;
            case 0x250C44u: goto label_250c44;
            case 0x250C48u: goto label_250c48;
            case 0x250C4Cu: goto label_250c4c;
            case 0x250C50u: goto label_250c50;
            case 0x250C54u: goto label_250c54;
            case 0x250C58u: goto label_250c58;
            case 0x250C5Cu: goto label_250c5c;
            case 0x250C60u: goto label_250c60;
            case 0x250C64u: goto label_250c64;
            case 0x250C68u: goto label_250c68;
            case 0x250C6Cu: goto label_250c6c;
            case 0x250C70u: goto label_250c70;
            case 0x250C74u: goto label_250c74;
            case 0x250C78u: goto label_250c78;
            case 0x250C7Cu: goto label_250c7c;
            case 0x250C80u: goto label_250c80;
            case 0x250C84u: goto label_250c84;
            case 0x250C88u: goto label_250c88;
            case 0x250C8Cu: goto label_250c8c;
            case 0x250C90u: goto label_250c90;
            case 0x250C94u: goto label_250c94;
            case 0x250C98u: goto label_250c98;
            case 0x250C9Cu: goto label_250c9c;
            case 0x250CA0u: goto label_250ca0;
            case 0x250CA4u: goto label_250ca4;
            case 0x250CA8u: goto label_250ca8;
            case 0x250CACu: goto label_250cac;
            case 0x250CB0u: goto label_250cb0;
            case 0x250CB4u: goto label_250cb4;
            case 0x250CB8u: goto label_250cb8;
            case 0x250CBCu: goto label_250cbc;
            case 0x250CC0u: goto label_250cc0;
            case 0x250CC4u: goto label_250cc4;
            case 0x250CC8u: goto label_250cc8;
            case 0x250CCCu: goto label_250ccc;
            case 0x250CD0u: goto label_250cd0;
            case 0x250CD4u: goto label_250cd4;
            case 0x250CD8u: goto label_250cd8;
            case 0x250CDCu: goto label_250cdc;
            case 0x250CE0u: goto label_250ce0;
            case 0x250CE4u: goto label_250ce4;
            case 0x250CE8u: goto label_250ce8;
            case 0x250CECu: goto label_250cec;
            case 0x250CF0u: goto label_250cf0;
            case 0x250CF4u: goto label_250cf4;
            case 0x250CF8u: goto label_250cf8;
            case 0x250CFCu: goto label_250cfc;
            case 0x250D00u: goto label_250d00;
            case 0x250D04u: goto label_250d04;
            case 0x250D08u: goto label_250d08;
            case 0x250D0Cu: goto label_250d0c;
            case 0x250D10u: goto label_250d10;
            case 0x250D14u: goto label_250d14;
            case 0x250D18u: goto label_250d18;
            case 0x250D1Cu: goto label_250d1c;
            case 0x250D20u: goto label_250d20;
            case 0x250D24u: goto label_250d24;
            case 0x250D28u: goto label_250d28;
            case 0x250D2Cu: goto label_250d2c;
            case 0x250D30u: goto label_250d30;
            case 0x250D34u: goto label_250d34;
            case 0x250D38u: goto label_250d38;
            case 0x250D3Cu: goto label_250d3c;
            case 0x250D40u: goto label_250d40;
            case 0x250D44u: goto label_250d44;
            case 0x250D48u: goto label_250d48;
            case 0x250D4Cu: goto label_250d4c;
            case 0x250D50u: goto label_250d50;
            case 0x250D54u: goto label_250d54;
            case 0x250D58u: goto label_250d58;
            case 0x250D5Cu: goto label_250d5c;
            case 0x250D60u: goto label_250d60;
            case 0x250D64u: goto label_250d64;
            case 0x250D68u: goto label_250d68;
            case 0x250D6Cu: goto label_250d6c;
            case 0x250D70u: goto label_250d70;
            case 0x250D74u: goto label_250d74;
            case 0x250D78u: goto label_250d78;
            case 0x250D7Cu: goto label_250d7c;
            case 0x250D80u: goto label_250d80;
            case 0x250D84u: goto label_250d84;
            case 0x250D88u: goto label_250d88;
            case 0x250D8Cu: goto label_250d8c;
            case 0x250D90u: goto label_250d90;
            case 0x250D94u: goto label_250d94;
            case 0x250D98u: goto label_250d98;
            case 0x250D9Cu: goto label_250d9c;
            case 0x250DA0u: goto label_250da0;
            case 0x250DA4u: goto label_250da4;
            case 0x250DA8u: goto label_250da8;
            case 0x250DACu: goto label_250dac;
            case 0x250DB0u: goto label_250db0;
            case 0x250DB4u: goto label_250db4;
            case 0x250DB8u: goto label_250db8;
            case 0x250DBCu: goto label_250dbc;
            case 0x250DC0u: goto label_250dc0;
            case 0x250DC4u: goto label_250dc4;
            case 0x250DC8u: goto label_250dc8;
            case 0x250DCCu: goto label_250dcc;
            case 0x250DD0u: goto label_250dd0;
            case 0x250DD4u: goto label_250dd4;
            case 0x250DD8u: goto label_250dd8;
            case 0x250DDCu: goto label_250ddc;
            case 0x250DE0u: goto label_250de0;
            case 0x250DE4u: goto label_250de4;
            case 0x250DE8u: goto label_250de8;
            case 0x250DECu: goto label_250dec;
            case 0x250DF0u: goto label_250df0;
            case 0x250DF4u: goto label_250df4;
            case 0x250DF8u: goto label_250df8;
            case 0x250DFCu: goto label_250dfc;
            case 0x250E00u: goto label_250e00;
            case 0x250E04u: goto label_250e04;
            case 0x250E08u: goto label_250e08;
            case 0x250E0Cu: goto label_250e0c;
            case 0x250E10u: goto label_250e10;
            case 0x250E14u: goto label_250e14;
            case 0x250E18u: goto label_250e18;
            case 0x250E1Cu: goto label_250e1c;
            case 0x250E20u: goto label_250e20;
            case 0x250E24u: goto label_250e24;
            case 0x250E28u: goto label_250e28;
            case 0x250E2Cu: goto label_250e2c;
            case 0x250E30u: goto label_250e30;
            case 0x250E34u: goto label_250e34;
            case 0x250E38u: goto label_250e38;
            case 0x250E3Cu: goto label_250e3c;
            case 0x250E40u: goto label_250e40;
            case 0x250E44u: goto label_250e44;
            case 0x250E48u: goto label_250e48;
            case 0x250E4Cu: goto label_250e4c;
            case 0x250E50u: goto label_250e50;
            case 0x250E54u: goto label_250e54;
            case 0x250E58u: goto label_250e58;
            case 0x250E5Cu: goto label_250e5c;
            case 0x250E60u: goto label_250e60;
            case 0x250E64u: goto label_250e64;
            case 0x250E68u: goto label_250e68;
            case 0x250E6Cu: goto label_250e6c;
            case 0x250E70u: goto label_250e70;
            case 0x250E74u: goto label_250e74;
            case 0x250E78u: goto label_250e78;
            case 0x250E7Cu: goto label_250e7c;
            case 0x250E80u: goto label_250e80;
            case 0x250E84u: goto label_250e84;
            case 0x250E88u: goto label_250e88;
            case 0x250E8Cu: goto label_250e8c;
            case 0x250E90u: goto label_250e90;
            case 0x250E94u: goto label_250e94;
            case 0x250E98u: goto label_250e98;
            case 0x250E9Cu: goto label_250e9c;
            case 0x250EA0u: goto label_250ea0;
            case 0x250EA4u: goto label_250ea4;
            case 0x250EA8u: goto label_250ea8;
            case 0x250EACu: goto label_250eac;
            case 0x250EB0u: goto label_250eb0;
            case 0x250EB4u: goto label_250eb4;
            case 0x250EB8u: goto label_250eb8;
            case 0x250EBCu: goto label_250ebc;
            case 0x250EC0u: goto label_250ec0;
            case 0x250EC4u: goto label_250ec4;
            case 0x250EC8u: goto label_250ec8;
            case 0x250ECCu: goto label_250ecc;
            case 0x250ED0u: goto label_250ed0;
            case 0x250ED4u: goto label_250ed4;
            case 0x250ED8u: goto label_250ed8;
            case 0x250EDCu: goto label_250edc;
            case 0x250EE0u: goto label_250ee0;
            case 0x250EE4u: goto label_250ee4;
            case 0x250EE8u: goto label_250ee8;
            case 0x250EECu: goto label_250eec;
            case 0x250EF0u: goto label_250ef0;
            case 0x250EF4u: goto label_250ef4;
            case 0x250EF8u: goto label_250ef8;
            case 0x250EFCu: goto label_250efc;
            case 0x250F00u: goto label_250f00;
            case 0x250F04u: goto label_250f04;
            case 0x250F08u: goto label_250f08;
            case 0x250F0Cu: goto label_250f0c;
            case 0x250F10u: goto label_250f10;
            case 0x250F14u: goto label_250f14;
            case 0x250F18u: goto label_250f18;
            case 0x250F1Cu: goto label_250f1c;
            case 0x250F20u: goto label_250f20;
            case 0x250F24u: goto label_250f24;
            case 0x250F28u: goto label_250f28;
            case 0x250F2Cu: goto label_250f2c;
            case 0x250F30u: goto label_250f30;
            case 0x250F34u: goto label_250f34;
            case 0x250F38u: goto label_250f38;
            case 0x250F3Cu: goto label_250f3c;
            case 0x250F40u: goto label_250f40;
            case 0x250F44u: goto label_250f44;
            case 0x250F48u: goto label_250f48;
            case 0x250F4Cu: goto label_250f4c;
            case 0x250F50u: goto label_250f50;
            case 0x250F54u: goto label_250f54;
            case 0x250F58u: goto label_250f58;
            case 0x250F5Cu: goto label_250f5c;
            case 0x250F60u: goto label_250f60;
            case 0x250F64u: goto label_250f64;
            case 0x250F68u: goto label_250f68;
            case 0x250F6Cu: goto label_250f6c;
            case 0x250F70u: goto label_250f70;
            case 0x250F74u: goto label_250f74;
            case 0x250F78u: goto label_250f78;
            case 0x250F7Cu: goto label_250f7c;
            case 0x250F80u: goto label_250f80;
            case 0x250F84u: goto label_250f84;
            case 0x250F88u: goto label_250f88;
            case 0x250F8Cu: goto label_250f8c;
            case 0x250F90u: goto label_250f90;
            case 0x250F94u: goto label_250f94;
            case 0x250F98u: goto label_250f98;
            case 0x250F9Cu: goto label_250f9c;
            case 0x250FA0u: goto label_250fa0;
            case 0x250FA4u: goto label_250fa4;
            case 0x250FA8u: goto label_250fa8;
            case 0x250FACu: goto label_250fac;
            case 0x250FB0u: goto label_250fb0;
            case 0x250FB4u: goto label_250fb4;
            case 0x250FB8u: goto label_250fb8;
            case 0x250FBCu: goto label_250fbc;
            case 0x250FC0u: goto label_250fc0;
            case 0x250FC4u: goto label_250fc4;
            case 0x250FC8u: goto label_250fc8;
            case 0x250FCCu: goto label_250fcc;
            case 0x250FD0u: goto label_250fd0;
            case 0x250FD4u: goto label_250fd4;
            case 0x250FD8u: goto label_250fd8;
            case 0x250FDCu: goto label_250fdc;
            case 0x250FE0u: goto label_250fe0;
            case 0x250FE4u: goto label_250fe4;
            case 0x250FE8u: goto label_250fe8;
            case 0x250FECu: goto label_250fec;
            case 0x250FF0u: goto label_250ff0;
            case 0x250FF4u: goto label_250ff4;
            case 0x250FF8u: goto label_250ff8;
            default: break;
        }
        return;
    }
label_fallthrough_0x250ff4:
    ctx->pc = 0x250FFCu;
}
