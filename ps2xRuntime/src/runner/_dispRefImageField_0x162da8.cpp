#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _dispRefImageField
// Address: 0x162da8 - 0x162f68
void _dispRefImageField_0x162da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_dispRefImageField");


    ctx->pc = 0x162da8u;

    // 0x162da8: 0x27bdff70
    ctx->pc = 0x162da8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x162dac: 0x3c020023
    ctx->pc = 0x162dacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x162db0: 0xffb50050
    ctx->pc = 0x162db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x162db4: 0xffb20020
    ctx->pc = 0x162db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x162db8: 0x3c150023
    ctx->pc = 0x162db8u;
    SET_GPR_U32(ctx, 21, ((uint32_t)35 << 16));
    // 0x162dbc: 0xffb70070
    ctx->pc = 0x162dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x162dc0: 0x80902d
    ctx->pc = 0x162dc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162dc4: 0xffb60060
    ctx->pc = 0x162dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x162dc8: 0xb82d
    ctx->pc = 0x162dc8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162dcc: 0xffbf0080
    ctx->pc = 0x162dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x162dd0: 0xa0b02d
    ctx->pc = 0x162dd0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162dd4: 0xffb40040
    ctx->pc = 0x162dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x162dd8: 0xffb30030
    ctx->pc = 0x162dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x162ddc: 0xffb00000
    ctx->pc = 0x162ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x162de0: 0x8ea3a21c
    ctx->pc = 0x162de0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 4294943260)));
    // 0x162de4: 0xffb10010
    ctx->pc = 0x162de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x162de8: 0x8c44a3ec
    ctx->pc = 0x162de8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943724)));
    // 0x162dec: 0x24020002
    ctx->pc = 0x162decu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x162df0: 0x14820005
    ctx->pc = 0x162DF0u;
    {
        const bool branch_taken_0x162df0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x162DF4u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 64)));
        if (branch_taken_0x162df0) {
            ctx->pc = 0x162E08u;
            goto label_162e08;
        }
    }
    ctx->pc = 0x162DF8u;
    // 0x162df8: 0x240982d
    ctx->pc = 0x162df8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162dfc: 0x2c0a02d
    ctx->pc = 0x162dfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162e00: 0x10000003
    ctx->pc = 0x162E00u;
    {
        const bool branch_taken_0x162e00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162E04u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x162e00) {
            ctx->pc = 0x162E10u;
            goto label_162e10;
        }
    }
    ctx->pc = 0x162E08u;
label_162e08:
    // 0x162e08: 0x2c0982d
    ctx->pc = 0x162e08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162e0c: 0x240a02d
    ctx->pc = 0x162e0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162e10:
    // 0x162e10: 0x8ea6a21c
    ctx->pc = 0x162e10u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 4294943260)));
    // 0x162e14: 0x260202d
    ctx->pc = 0x162e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162e18: 0x24100001
    ctx->pc = 0x162e18u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x162e1c: 0x24c70020
    ctx->pc = 0x162e1cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 32));
    // 0x162e20: 0x24c50010
    ctx->pc = 0x162e20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 16));
    // 0x162e24: 0xc058abe
    ctx->pc = 0x162E24u;
    SET_GPR_U32(ctx, 31, 0x162E2Cu);
    ctx->pc = 0x162E28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 24));
    ctx->pc = 0x162AF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getPtsDtsFlags_0x162af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E2Cu; }
        else if (ctx->pc != 0x162E2Cu) { ctx->pc = 0x162E2Cu; }
    }
    if (ctx->pc != 0x162E2Cu) { return; }
    ctx->pc = 0x162E2Cu;
    // 0x162e2c: 0x8ea6a21c
    ctx->pc = 0x162e2cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 4294943260)));
    // 0x162e30: 0x280202d
    ctx->pc = 0x162e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162e34: 0x8cc20010
    ctx->pc = 0x162e34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x162e38: 0x24c70038
    ctx->pc = 0x162e38u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 56));
    // 0x162e3c: 0x24c50028
    ctx->pc = 0x162e3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 40));
    // 0x162e40: 0xfe300088
    ctx->pc = 0x162e40u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 16));
    // 0x162e44: 0xae220080
    ctx->pc = 0x162e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x162e48: 0xc058abe
    ctx->pc = 0x162E48u;
    SET_GPR_U32(ctx, 31, 0x162E50u);
    ctx->pc = 0x162E4Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 48));
    ctx->pc = 0x162AF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getPtsDtsFlags_0x162af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E50u; }
        else if (ctx->pc != 0x162E50u) { ctx->pc = 0x162E50u; }
    }
    if (ctx->pc != 0x162E50u) { return; }
    ctx->pc = 0x162E50u;
    // 0x162e50: 0x8ea6a21c
    ctx->pc = 0x162e50u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 4294943260)));
    // 0x162e54: 0x2e0382d
    ctx->pc = 0x162e54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162e58: 0x240202d
    ctx->pc = 0x162e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162e5c: 0x8cc30028
    ctx->pc = 0x162e5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x162e60: 0xfe300088
    ctx->pc = 0x162e60u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 16));
    // 0x162e64: 0xae230080
    ctx->pc = 0x162e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x162e68: 0xdcc20020
    ctx->pc = 0x162e68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x162e6c: 0x8e65005c
    ctx->pc = 0x162e6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x162e70: 0x471025
    ctx->pc = 0x162e70u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x162e74: 0xdcc30038
    ctx->pc = 0x162e74u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x162e78: 0xae2500cc
    ctx->pc = 0x162e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 5));
    // 0x162e7c: 0xfcc20020
    ctx->pc = 0x162e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 2));
    // 0x162e80: 0x671825
    ctx->pc = 0x162e80u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x162e84: 0x8e650060
    ctx->pc = 0x162e84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x162e88: 0xfcc30038
    ctx->pc = 0x162e88u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 3));
    // 0x162e8c: 0xae2500d0
    ctx->pc = 0x162e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 5));
    // 0x162e90: 0x8e620044
    ctx->pc = 0x162e90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x162e94: 0xae2200b4
    ctx->pc = 0x162e94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x162e98: 0x8e830048
    ctx->pc = 0x162e98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x162e9c: 0xae2300b8
    ctx->pc = 0x162e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 3));
    // 0x162ea0: 0x8e620050
    ctx->pc = 0x162ea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x162ea4: 0xae2200c0
    ctx->pc = 0x162ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x162ea8: 0x8e830054
    ctx->pc = 0x162ea8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x162eac: 0xc058a0c
    ctx->pc = 0x162EACu;
    SET_GPR_U32(ctx, 31, 0x162EB4u);
    ctx->pc = 0x162EB0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
    ctx->pc = 0x162830u;
    {
        const uint32_t __entryPc = ctx->pc;
        _isOutSizeOK_0x162830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162EB4u; }
        else if (ctx->pc != 0x162EB4u) { ctx->pc = 0x162EB4u; }
    }
    if (ctx->pc != 0x162EB4u) { return; }
    ctx->pc = 0x162EB4u;
    // 0x162eb4: 0x10400021
    ctx->pc = 0x162EB4u;
    {
        const bool branch_taken_0x162eb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x162EB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x162eb4) {
            ctx->pc = 0x162F3Cu;
            goto label_162f3c;
        }
    }
    ctx->pc = 0x162EBCu;
    // 0x162ebc: 0x8e430028
    ctx->pc = 0x162ebcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x162ec0: 0x1462001f
    ctx->pc = 0x162EC0u;
    {
        const bool branch_taken_0x162ec0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x162EC4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x162ec0) {
            ctx->pc = 0x162F40u;
            goto label_162f40;
        }
    }
    ctx->pc = 0x162EC8u;
    // 0x162ec8: 0x8ec20028
    ctx->pc = 0x162ec8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x162ecc: 0x1443001d
    ctx->pc = 0x162ECCu;
    {
        const bool branch_taken_0x162ecc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x162ED0u;
        SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x162ecc) {
            ctx->pc = 0x162F44u;
            goto label_162f44;
        }
    }
    ctx->pc = 0x162ED4u;
    // 0x162ed4: 0x8e420010
    ctx->pc = 0x162ed4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x162ed8: 0x21040
    ctx->pc = 0x162ed8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x162edc: 0xae420010
    ctx->pc = 0x162edcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x162ee0: 0x8e2300b0
    ctx->pc = 0x162ee0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x162ee4: 0x10600005
    ctx->pc = 0x162EE4u;
    {
        const bool branch_taken_0x162ee4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x162ee4) {
            ctx->pc = 0x162EFCu;
            goto label_162efc;
        }
    }
    ctx->pc = 0x162EECu;
    // 0x162eec: 0xc058d0c
    ctx->pc = 0x162EECu;
    SET_GPR_U32(ctx, 31, 0x162EF4u);
    ctx->pc = 0x162EF0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163430u;
    {
        const uint32_t __entryPc = ctx->pc;
        _csc_storeRefImage_0x163430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162EF4u; }
        else if (ctx->pc != 0x162EF4u) { ctx->pc = 0x162EF4u; }
    }
    if (ctx->pc != 0x162EF4u) { return; }
    ctx->pc = 0x162EF4u;
    // 0x162ef4: 0x10000004
    ctx->pc = 0x162EF4u;
    {
        const bool branch_taken_0x162ef4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162EF8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
        if (branch_taken_0x162ef4) {
            ctx->pc = 0x162F08u;
            goto label_162f08;
        }
    }
    ctx->pc = 0x162EFCu;
label_162efc:
    // 0x162efc: 0xc058a34
    ctx->pc = 0x162EFCu;
    SET_GPR_U32(ctx, 31, 0x162F04u);
    ctx->pc = 0x162F00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1628D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _cpr8_0x1628d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162F04u; }
        else if (ctx->pc != 0x162F04u) { ctx->pc = 0x162F04u; }
    }
    if (ctx->pc != 0x162F04u) { return; }
    ctx->pc = 0x162F04u;
    // 0x162f04: 0x8e420010
    ctx->pc = 0x162f04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_162f08:
    // 0x162f08: 0xdfbf0080
    ctx->pc = 0x162f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x162f0c: 0x21043
    ctx->pc = 0x162f0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x162f10: 0xdfb70070
    ctx->pc = 0x162f10u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x162f14: 0xae420010
    ctx->pc = 0x162f14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x162f18: 0xdfb60060
    ctx->pc = 0x162f18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x162f1c: 0xdfb50050
    ctx->pc = 0x162f1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x162f20: 0xdfb40040
    ctx->pc = 0x162f20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x162f24: 0xdfb30030
    ctx->pc = 0x162f24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162f28: 0xdfb20020
    ctx->pc = 0x162f28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162f2c: 0xdfb10010
    ctx->pc = 0x162f2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162f30: 0xdfb00000
    ctx->pc = 0x162f30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162f34: 0x8058ab0
    ctx->pc = 0x162F34u;
    ctx->pc = 0x162F38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x162AC0u;
    _markOutput_0x162ac0(rdram, ctx, runtime); return;
    ctx->pc = 0x162F3Cu;
label_162f3c:
    // 0x162f3c: 0xdfbf0080
    ctx->pc = 0x162f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_162f40:
    // 0x162f40: 0xdfb70070
    ctx->pc = 0x162f40u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_162f44:
    // 0x162f44: 0xdfb60060
    ctx->pc = 0x162f44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x162f48: 0xdfb50050
    ctx->pc = 0x162f48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x162f4c: 0xdfb40040
    ctx->pc = 0x162f4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x162f50: 0xdfb30030
    ctx->pc = 0x162f50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162f54: 0xdfb20020
    ctx->pc = 0x162f54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162f58: 0xdfb10010
    ctx->pc = 0x162f58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162f5c: 0xdfb00000
    ctx->pc = 0x162f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162f60: 0x3e00008
    ctx->pc = 0x162F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162F64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162E08u: goto label_162e08;
            case 0x162E10u: goto label_162e10;
            case 0x162EFCu: goto label_162efc;
            case 0x162F08u: goto label_162f08;
            case 0x162F3Cu: goto label_162f3c;
            case 0x162F40u: goto label_162f40;
            case 0x162F44u: goto label_162f44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162F68u;
}
