#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _vfiprintf_r
// Address: 0x145d98 - 0x146964
void _vfiprintf_r_0x145d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_vfiprintf_r");


    ctx->pc = 0x145d98u;

label_145d98:
    // 0x145d98: 0x27bdfe90
    ctx->pc = 0x145d98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966928));
label_145d9c:
    // 0x145d9c: 0xffb40110
    ctx->pc = 0x145d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 20));
label_145da0:
    // 0x145da0: 0xffb000d0
    ctx->pc = 0x145da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
label_145da4:
    // 0x145da4: 0xe0a02d
    ctx->pc = 0x145da4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_145da8:
    // 0x145da8: 0xffbf0160
    ctx->pc = 0x145da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
label_145dac:
    // 0x145dac: 0xc0802d
    ctx->pc = 0x145dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_145db0:
    // 0x145db0: 0xffbe0150
    ctx->pc = 0x145db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 30));
label_145db4:
    // 0x145db4: 0xffb70140
    ctx->pc = 0x145db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 23));
label_145db8:
    // 0x145db8: 0xffb60130
    ctx->pc = 0x145db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
label_145dbc:
    // 0x145dbc: 0xffb50120
    ctx->pc = 0x145dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 21));
label_145dc0:
    // 0x145dc0: 0xffb30100
    ctx->pc = 0x145dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 19));
label_145dc4:
    // 0x145dc4: 0xffb200f0
    ctx->pc = 0x145dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
label_145dc8:
    // 0x145dc8: 0xffb100e0
    ctx->pc = 0x145dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 17));
label_145dcc:
    // 0x145dcc: 0xafa5009c
    ctx->pc = 0x145dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 5));
label_145dd0:
    // 0x145dd0: 0x94a3000c
    ctx->pc = 0x145dd0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
label_145dd4:
    // 0x145dd4: 0x30620008
    ctx->pc = 0x145dd4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
label_145dd8:
    // 0x145dd8: 0x10400005
label_145ddc:
    if (ctx->pc == 0x145DDCu) {
        ctx->pc = 0x145DDCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        ctx->pc = 0x145DE0u;
        goto label_145de0;
    }
    ctx->pc = 0x145DD8u;
    {
        const bool branch_taken_0x145dd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x145DDCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        if (branch_taken_0x145dd8) {
            ctx->pc = 0x145DF0u;
            goto label_145df0;
        }
    }
    ctx->pc = 0x145DE0u;
label_145de0:
    // 0x145de0: 0xa0202d
    ctx->pc = 0x145de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_145de4:
    // 0x145de4: 0x8c820010
    ctx->pc = 0x145de4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_145de8:
    // 0x145de8: 0x14400008
label_145dec:
    if (ctx->pc == 0x145DECu) {
        ctx->pc = 0x145DECu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 26));
        ctx->pc = 0x145DF0u;
        goto label_145df0;
    }
    ctx->pc = 0x145DE8u;
    {
        const bool branch_taken_0x145de8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x145DECu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 26));
        if (branch_taken_0x145de8) {
            ctx->pc = 0x145E0Cu;
            goto label_145e0c;
        }
    }
    ctx->pc = 0x145DF0u;
label_145df0:
    // 0x145df0: 0xc0520d0
label_145df4:
    if (ctx->pc == 0x145DF4u) {
        ctx->pc = 0x145DF4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->pc = 0x145DF8u;
        goto label_145df8;
    }
    ctx->pc = 0x145DF0u;
    SET_GPR_U32(ctx, 31, 0x145DF8u);
    ctx->pc = 0x145DF4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 156)));
    ctx->pc = 0x148340u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___swsetup_0x148340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145DF8u; }
        else if (ctx->pc != 0x145DF8u) { ctx->pc = 0x145DF8u; }
    }
    if (ctx->pc != 0x145DF8u) { return; }
    ctx->pc = 0x145DF8u;
label_145df8:
    // 0x145df8: 0x144002ce
label_145dfc:
    if (ctx->pc == 0x145DFCu) {
        ctx->pc = 0x145DFCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x145E00u;
        goto label_145e00;
    }
    ctx->pc = 0x145DF8u;
    {
        const bool branch_taken_0x145df8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x145DFCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x145df8) {
            ctx->pc = 0x146934u;
            goto label_146934;
        }
    }
    ctx->pc = 0x145E00u;
label_145e00:
    // 0x145e00: 0x8fa5009c
    ctx->pc = 0x145e00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_145e04:
    // 0x145e04: 0x94a3000c
    ctx->pc = 0x145e04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
label_145e08:
    // 0x145e08: 0x3063001a
    ctx->pc = 0x145e08u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 26));
label_145e0c:
    // 0x145e0c: 0x2402000a
    ctx->pc = 0x145e0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
label_145e10:
    // 0x145e10: 0x1462000a
label_145e14:
    if (ctx->pc == 0x145E14u) {
        ctx->pc = 0x145E14u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x145E18u;
        goto label_145e18;
    }
    ctx->pc = 0x145E10u;
    {
        const bool branch_taken_0x145e10 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x145E14u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x145e10) {
            ctx->pc = 0x145E3Cu;
            goto label_145e3c;
        }
    }
    ctx->pc = 0x145E18u;
label_145e18:
    // 0x145e18: 0x8fa3009c
    ctx->pc = 0x145e18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_145e1c:
    // 0x145e1c: 0x8462000e
    ctx->pc = 0x145e1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_145e20:
    // 0x145e20: 0x4400006
label_145e24:
    if (ctx->pc == 0x145E24u) {
        ctx->pc = 0x145E24u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x145E28u;
        goto label_145e28;
    }
    ctx->pc = 0x145E20u;
    {
        const bool branch_taken_0x145e20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x145E24u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x145e20) {
            ctx->pc = 0x145E3Cu;
            goto label_145e3c;
        }
    }
    ctx->pc = 0x145E28u;
label_145e28:
    // 0x145e28: 0x200282d
    ctx->pc = 0x145e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_145e2c:
    // 0x145e2c: 0xc05171a
label_145e30:
    if (ctx->pc == 0x145E30u) {
        ctx->pc = 0x145E30u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x145E34u;
        goto label_145e34;
    }
    ctx->pc = 0x145E2Cu;
    SET_GPR_U32(ctx, 31, 0x145E34u);
    ctx->pc = 0x145E30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sbprintf_0x145c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E34u; }
        else if (ctx->pc != 0x145E34u) { ctx->pc = 0x145E34u; }
    }
    if (ctx->pc != 0x145E34u) { return; }
    ctx->pc = 0x145E34u;
label_145e34:
    // 0x145e34: 0x100002c0
label_145e38:
    if (ctx->pc == 0x145E38u) {
        ctx->pc = 0x145E38u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->pc = 0x145E3Cu;
        goto label_145e3c;
    }
    ctx->pc = 0x145E34u;
    {
        const bool branch_taken_0x145e34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x145E38u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
        if (branch_taken_0x145e34) {
            ctx->pc = 0x146938u;
            goto label_146938;
        }
    }
    ctx->pc = 0x145E3Cu;
label_145e3c:
    // 0x145e3c: 0x27a40094
    ctx->pc = 0x145e3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 148));
label_145e40:
    // 0x145e40: 0x27a50098
    ctx->pc = 0x145e40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 152));
label_145e44:
    // 0x145e44: 0xafa00008
    ctx->pc = 0x145e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_145e48:
    // 0x145e48: 0xafb20000
    ctx->pc = 0x145e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_145e4c:
    // 0x145e4c: 0x200a82d
    ctx->pc = 0x145e4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_145e50:
    // 0x145e50: 0xafa00004
    ctx->pc = 0x145e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_145e54:
    // 0x145e54: 0xafa000a0
    ctx->pc = 0x145e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_145e58:
    // 0x145e58: 0xafa400b4
    ctx->pc = 0x145e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
label_145e5c:
    // 0x145e5c: 0xafa500b8
    ctx->pc = 0x145e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
label_145e60:
    // 0x145e60: 0x2a0982d
    ctx->pc = 0x145e60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_145e64:
    // 0x145e64: 0x24110025
    ctx->pc = 0x145e64u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 37));
label_145e68:
    // 0x145e68: 0x3c020022
    ctx->pc = 0x145e68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_145e6c:
    // 0x145e6c: 0x3c030022
    ctx->pc = 0x145e6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
label_145e70:
    // 0x145e70: 0x8c4471ec
    ctx->pc = 0x145e70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 29164)));
label_145e74:
    // 0x145e74: 0x2a0302d
    ctx->pc = 0x145e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_145e78:
    // 0x145e78: 0x8fa500b4
    ctx->pc = 0x145e78u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_145e7c:
    // 0x145e7c: 0x8c6771f0
    ctx->pc = 0x145e7cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 29168)));
label_145e80:
    // 0x145e80: 0xc050c22
label_145e84:
    if (ctx->pc == 0x145E84u) {
        ctx->pc = 0x145E84u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->pc = 0x145E88u;
        goto label_145e88;
    }
    ctx->pc = 0x145E80u;
    SET_GPR_U32(ctx, 31, 0x145E88u);
    ctx->pc = 0x145E84u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 184)));
    ctx->pc = 0x143088u;
    {
        const uint32_t __entryPc = ctx->pc;
        _mbtowc_r_0x143088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E88u; }
        else if (ctx->pc != 0x145E88u) { ctx->pc = 0x145E88u; }
    }
    if (ctx->pc != 0x145E88u) { return; }
    ctx->pc = 0x145E88u;
label_145e88:
    // 0x145e88: 0x40802d
    ctx->pc = 0x145e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145e8c:
    // 0x145e8c: 0x1a000004
label_145e90:
    if (ctx->pc == 0x145E90u) {
        ctx->pc = 0x145E90u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->pc = 0x145E94u;
        goto label_145e94;
    }
    ctx->pc = 0x145E8Cu;
    {
        const bool branch_taken_0x145e8c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x145E90u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 148)));
        if (branch_taken_0x145e8c) {
            ctx->pc = 0x145EA0u;
            goto label_145ea0;
        }
    }
    ctx->pc = 0x145E94u;
label_145e94:
    // 0x145e94: 0x1451fff4
label_145e98:
    if (ctx->pc == 0x145E98u) {
        ctx->pc = 0x145E98u;
        SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->pc = 0x145E9Cu;
        goto label_145e9c;
    }
    ctx->pc = 0x145E94u;
    {
        const bool branch_taken_0x145e94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x145E98u;
        SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        if (branch_taken_0x145e94) {
            ctx->pc = 0x145E68u;
            goto label_145e68;
        }
    }
    ctx->pc = 0x145E9Cu;
label_145e9c:
    // 0x145e9c: 0x26b5ffff
    ctx->pc = 0x145e9cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_145ea0:
    // 0x145ea0: 0x2b38823
    ctx->pc = 0x145ea0u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_145ea4:
    // 0x145ea4: 0x12200014
label_145ea8:
    if (ctx->pc == 0x145EA8u) {
        ctx->pc = 0x145EACu;
        goto label_145eac;
    }
    ctx->pc = 0x145EA4u;
    {
        const bool branch_taken_0x145ea4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x145ea4) {
            ctx->pc = 0x145EF8u;
            goto label_145ef8;
        }
    }
    ctx->pc = 0x145EACu;
label_145eac:
    // 0x145eac: 0xae510004
    ctx->pc = 0x145eacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
label_145eb0:
    // 0x145eb0: 0xae530000
    ctx->pc = 0x145eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_145eb4:
    // 0x145eb4: 0x26520008
    ctx->pc = 0x145eb4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 8));
label_145eb8:
    // 0x145eb8: 0x8fa20008
    ctx->pc = 0x145eb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_145ebc:
    // 0x145ebc: 0x8fa30004
    ctx->pc = 0x145ebcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_145ec0:
    // 0x145ec0: 0x511021
    ctx->pc = 0x145ec0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_145ec4:
    // 0x145ec4: 0x24630001
    ctx->pc = 0x145ec4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_145ec8:
    // 0x145ec8: 0xafa20008
    ctx->pc = 0x145ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_145ecc:
    // 0x145ecc: 0x28640008
    ctx->pc = 0x145eccu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 8));
label_145ed0:
    // 0x145ed0: 0x14800006
label_145ed4:
    if (ctx->pc == 0x145ED4u) {
        ctx->pc = 0x145ED4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x145ED8u;
        goto label_145ed8;
    }
    ctx->pc = 0x145ED0u;
    {
        const bool branch_taken_0x145ed0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x145ED4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x145ed0) {
            ctx->pc = 0x145EECu;
            goto label_145eec;
        }
    }
    ctx->pc = 0x145ED8u;
label_145ed8:
    // 0x145ed8: 0x8fa4009c
    ctx->pc = 0x145ed8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_145edc:
    // 0x145edc: 0xc051708
label_145ee0:
    if (ctx->pc == 0x145EE0u) {
        ctx->pc = 0x145EE0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x145EE4u;
        goto label_145ee4;
    }
    ctx->pc = 0x145EDCu;
    SET_GPR_U32(ctx, 31, 0x145EE4u);
    ctx->pc = 0x145EE0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x145c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145EE4u; }
        else if (ctx->pc != 0x145EE4u) { ctx->pc = 0x145EE4u; }
    }
    if (ctx->pc != 0x145EE4u) { return; }
    ctx->pc = 0x145EE4u;
label_145ee4:
    // 0x145ee4: 0x1440028d
label_145ee8:
    if (ctx->pc == 0x145EE8u) {
        ctx->pc = 0x145EE8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x145EECu;
        goto label_145eec;
    }
    ctx->pc = 0x145EE4u;
    {
        const bool branch_taken_0x145ee4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x145EE8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x145ee4) {
            ctx->pc = 0x14691Cu;
            goto label_14691c;
        }
    }
    ctx->pc = 0x145EECu;
label_145eec:
    // 0x145eec: 0x8fa400a0
    ctx->pc = 0x145eecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_145ef0:
    // 0x145ef0: 0x912021
    ctx->pc = 0x145ef0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_145ef4:
    // 0x145ef4: 0xafa400a0
    ctx->pc = 0x145ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
label_145ef8:
    // 0x145ef8: 0x1a000280
label_145efc:
    if (ctx->pc == 0x145EFCu) {
        ctx->pc = 0x145EFCu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x145F00u;
        goto label_145f00;
    }
    ctx->pc = 0x145EF8u;
    {
        const bool branch_taken_0x145ef8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x145EFCu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x145ef8) {
            ctx->pc = 0x1468FCu;
            goto label_1468fc;
        }
    }
    ctx->pc = 0x145F00u;
label_145f00:
    // 0x145f00: 0xafa000a8
    ctx->pc = 0x145f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_145f04:
    // 0x145f04: 0xafa000a4
    ctx->pc = 0x145f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_145f08:
    // 0x145f08: 0xf02d
    ctx->pc = 0x145f08u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145f0c:
    // 0x145f0c: 0xa3a00090
    ctx->pc = 0x145f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 0));
label_145f10:
    // 0x145f10: 0x2411ffff
    ctx->pc = 0x145f10u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
label_145f14:
    // 0x145f14: 0x92a40000
    ctx->pc = 0x145f14u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_145f18:
    // 0x145f18: 0x41600
    ctx->pc = 0x145f18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 24));
label_145f1c:
    // 0x145f1c: 0x26b50001
    ctx->pc = 0x145f1cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_145f20:
    // 0x145f20: 0x2be03
    ctx->pc = 0x145f20u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 24));
label_145f24:
    // 0x145f24: 0x26e3ffe0
    ctx->pc = 0x145f24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 23), 4294967264));
label_145f28:
    // 0x145f28: 0x2c620059
    ctx->pc = 0x145f28u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 89));
label_145f2c:
    // 0x145f2c: 0x1040013d
label_145f30:
    if (ctx->pc == 0x145F30u) {
        ctx->pc = 0x145F30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
        ctx->pc = 0x145F34u;
        goto label_145f34;
    }
    ctx->pc = 0x145F2Cu;
    {
        const bool branch_taken_0x145f2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x145F30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
        if (branch_taken_0x145f2c) {
            ctx->pc = 0x146424u;
            goto label_146424;
        }
    }
    ctx->pc = 0x145F34u;
label_145f34:
    // 0x145f34: 0x31880
    ctx->pc = 0x145f34u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_145f38:
    // 0x145f38: 0x24427150
    ctx->pc = 0x145f38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29008));
label_145f3c:
    // 0x145f3c: 0x621821
    ctx->pc = 0x145f3cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_145f40:
    // 0x145f40: 0x8c640000
    ctx->pc = 0x145f40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_145f44:
    // 0x145f44: 0x800008
label_145f48:
    if (ctx->pc == 0x145F48u) {
        ctx->pc = 0x145F4Cu;
        goto label_145f4c;
    }
    ctx->pc = 0x145F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x145D98u: goto label_145d98;
            case 0x145D9Cu: goto label_145d9c;
            case 0x145DA0u: goto label_145da0;
            case 0x145DA4u: goto label_145da4;
            case 0x145DA8u: goto label_145da8;
            case 0x145DACu: goto label_145dac;
            case 0x145DB0u: goto label_145db0;
            case 0x145DB4u: goto label_145db4;
            case 0x145DB8u: goto label_145db8;
            case 0x145DBCu: goto label_145dbc;
            case 0x145DC0u: goto label_145dc0;
            case 0x145DC4u: goto label_145dc4;
            case 0x145DC8u: goto label_145dc8;
            case 0x145DCCu: goto label_145dcc;
            case 0x145DD0u: goto label_145dd0;
            case 0x145DD4u: goto label_145dd4;
            case 0x145DD8u: goto label_145dd8;
            case 0x145DDCu: goto label_145ddc;
            case 0x145DE0u: goto label_145de0;
            case 0x145DE4u: goto label_145de4;
            case 0x145DE8u: goto label_145de8;
            case 0x145DECu: goto label_145dec;
            case 0x145DF0u: goto label_145df0;
            case 0x145DF4u: goto label_145df4;
            case 0x145DF8u: goto label_145df8;
            case 0x145DFCu: goto label_145dfc;
            case 0x145E00u: goto label_145e00;
            case 0x145E04u: goto label_145e04;
            case 0x145E08u: goto label_145e08;
            case 0x145E0Cu: goto label_145e0c;
            case 0x145E10u: goto label_145e10;
            case 0x145E14u: goto label_145e14;
            case 0x145E18u: goto label_145e18;
            case 0x145E1Cu: goto label_145e1c;
            case 0x145E20u: goto label_145e20;
            case 0x145E24u: goto label_145e24;
            case 0x145E28u: goto label_145e28;
            case 0x145E2Cu: goto label_145e2c;
            case 0x145E30u: goto label_145e30;
            case 0x145E34u: goto label_145e34;
            case 0x145E38u: goto label_145e38;
            case 0x145E3Cu: goto label_145e3c;
            case 0x145E40u: goto label_145e40;
            case 0x145E44u: goto label_145e44;
            case 0x145E48u: goto label_145e48;
            case 0x145E4Cu: goto label_145e4c;
            case 0x145E50u: goto label_145e50;
            case 0x145E54u: goto label_145e54;
            case 0x145E58u: goto label_145e58;
            case 0x145E5Cu: goto label_145e5c;
            case 0x145E60u: goto label_145e60;
            case 0x145E64u: goto label_145e64;
            case 0x145E68u: goto label_145e68;
            case 0x145E6Cu: goto label_145e6c;
            case 0x145E70u: goto label_145e70;
            case 0x145E74u: goto label_145e74;
            case 0x145E78u: goto label_145e78;
            case 0x145E7Cu: goto label_145e7c;
            case 0x145E80u: goto label_145e80;
            case 0x145E84u: goto label_145e84;
            case 0x145E88u: goto label_145e88;
            case 0x145E8Cu: goto label_145e8c;
            case 0x145E90u: goto label_145e90;
            case 0x145E94u: goto label_145e94;
            case 0x145E98u: goto label_145e98;
            case 0x145E9Cu: goto label_145e9c;
            case 0x145EA0u: goto label_145ea0;
            case 0x145EA4u: goto label_145ea4;
            case 0x145EA8u: goto label_145ea8;
            case 0x145EACu: goto label_145eac;
            case 0x145EB0u: goto label_145eb0;
            case 0x145EB4u: goto label_145eb4;
            case 0x145EB8u: goto label_145eb8;
            case 0x145EBCu: goto label_145ebc;
            case 0x145EC0u: goto label_145ec0;
            case 0x145EC4u: goto label_145ec4;
            case 0x145EC8u: goto label_145ec8;
            case 0x145ECCu: goto label_145ecc;
            case 0x145ED0u: goto label_145ed0;
            case 0x145ED4u: goto label_145ed4;
            case 0x145ED8u: goto label_145ed8;
            case 0x145EDCu: goto label_145edc;
            case 0x145EE0u: goto label_145ee0;
            case 0x145EE4u: goto label_145ee4;
            case 0x145EE8u: goto label_145ee8;
            case 0x145EECu: goto label_145eec;
            case 0x145EF0u: goto label_145ef0;
            case 0x145EF4u: goto label_145ef4;
            case 0x145EF8u: goto label_145ef8;
            case 0x145EFCu: goto label_145efc;
            case 0x145F00u: goto label_145f00;
            case 0x145F04u: goto label_145f04;
            case 0x145F08u: goto label_145f08;
            case 0x145F0Cu: goto label_145f0c;
            case 0x145F10u: goto label_145f10;
            case 0x145F14u: goto label_145f14;
            case 0x145F18u: goto label_145f18;
            case 0x145F1Cu: goto label_145f1c;
            case 0x145F20u: goto label_145f20;
            case 0x145F24u: goto label_145f24;
            case 0x145F28u: goto label_145f28;
            case 0x145F2Cu: goto label_145f2c;
            case 0x145F30u: goto label_145f30;
            case 0x145F34u: goto label_145f34;
            case 0x145F38u: goto label_145f38;
            case 0x145F3Cu: goto label_145f3c;
            case 0x145F40u: goto label_145f40;
            case 0x145F44u: goto label_145f44;
            case 0x145F48u: goto label_145f48;
            case 0x145F4Cu: goto label_145f4c;
            case 0x145F50u: goto label_145f50;
            case 0x145F54u: goto label_145f54;
            case 0x145F58u: goto label_145f58;
            case 0x145F5Cu: goto label_145f5c;
            case 0x145F60u: goto label_145f60;
            case 0x145F64u: goto label_145f64;
            case 0x145F68u: goto label_145f68;
            case 0x145F6Cu: goto label_145f6c;
            case 0x145F70u: goto label_145f70;
            case 0x145F74u: goto label_145f74;
            case 0x145F78u: goto label_145f78;
            case 0x145F7Cu: goto label_145f7c;
            case 0x145F80u: goto label_145f80;
            case 0x145F84u: goto label_145f84;
            case 0x145F88u: goto label_145f88;
            case 0x145F8Cu: goto label_145f8c;
            case 0x145F90u: goto label_145f90;
            case 0x145F94u: goto label_145f94;
            case 0x145F98u: goto label_145f98;
            case 0x145F9Cu: goto label_145f9c;
            case 0x145FA0u: goto label_145fa0;
            case 0x145FA4u: goto label_145fa4;
            case 0x145FA8u: goto label_145fa8;
            case 0x145FACu: goto label_145fac;
            case 0x145FB0u: goto label_145fb0;
            case 0x145FB4u: goto label_145fb4;
            case 0x145FB8u: goto label_145fb8;
            case 0x145FBCu: goto label_145fbc;
            case 0x145FC0u: goto label_145fc0;
            case 0x145FC4u: goto label_145fc4;
            case 0x145FC8u: goto label_145fc8;
            case 0x145FCCu: goto label_145fcc;
            case 0x145FD0u: goto label_145fd0;
            case 0x145FD4u: goto label_145fd4;
            case 0x145FD8u: goto label_145fd8;
            case 0x145FDCu: goto label_145fdc;
            case 0x145FE0u: goto label_145fe0;
            case 0x145FE4u: goto label_145fe4;
            case 0x145FE8u: goto label_145fe8;
            case 0x145FECu: goto label_145fec;
            case 0x145FF0u: goto label_145ff0;
            case 0x145FF4u: goto label_145ff4;
            case 0x145FF8u: goto label_145ff8;
            case 0x145FFCu: goto label_145ffc;
            case 0x146000u: goto label_146000;
            case 0x146004u: goto label_146004;
            case 0x146008u: goto label_146008;
            case 0x14600Cu: goto label_14600c;
            case 0x146010u: goto label_146010;
            case 0x146014u: goto label_146014;
            case 0x146018u: goto label_146018;
            case 0x14601Cu: goto label_14601c;
            case 0x146020u: goto label_146020;
            case 0x146024u: goto label_146024;
            case 0x146028u: goto label_146028;
            case 0x14602Cu: goto label_14602c;
            case 0x146030u: goto label_146030;
            case 0x146034u: goto label_146034;
            case 0x146038u: goto label_146038;
            case 0x14603Cu: goto label_14603c;
            case 0x146040u: goto label_146040;
            case 0x146044u: goto label_146044;
            case 0x146048u: goto label_146048;
            case 0x14604Cu: goto label_14604c;
            case 0x146050u: goto label_146050;
            case 0x146054u: goto label_146054;
            case 0x146058u: goto label_146058;
            case 0x14605Cu: goto label_14605c;
            case 0x146060u: goto label_146060;
            case 0x146064u: goto label_146064;
            case 0x146068u: goto label_146068;
            case 0x14606Cu: goto label_14606c;
            case 0x146070u: goto label_146070;
            case 0x146074u: goto label_146074;
            case 0x146078u: goto label_146078;
            case 0x14607Cu: goto label_14607c;
            case 0x146080u: goto label_146080;
            case 0x146084u: goto label_146084;
            case 0x146088u: goto label_146088;
            case 0x14608Cu: goto label_14608c;
            case 0x146090u: goto label_146090;
            case 0x146094u: goto label_146094;
            case 0x146098u: goto label_146098;
            case 0x14609Cu: goto label_14609c;
            case 0x1460A0u: goto label_1460a0;
            case 0x1460A4u: goto label_1460a4;
            case 0x1460A8u: goto label_1460a8;
            case 0x1460ACu: goto label_1460ac;
            case 0x1460B0u: goto label_1460b0;
            case 0x1460B4u: goto label_1460b4;
            case 0x1460B8u: goto label_1460b8;
            case 0x1460BCu: goto label_1460bc;
            case 0x1460C0u: goto label_1460c0;
            case 0x1460C4u: goto label_1460c4;
            case 0x1460C8u: goto label_1460c8;
            case 0x1460CCu: goto label_1460cc;
            case 0x1460D0u: goto label_1460d0;
            case 0x1460D4u: goto label_1460d4;
            case 0x1460D8u: goto label_1460d8;
            case 0x1460DCu: goto label_1460dc;
            case 0x1460E0u: goto label_1460e0;
            case 0x1460E4u: goto label_1460e4;
            case 0x1460E8u: goto label_1460e8;
            case 0x1460ECu: goto label_1460ec;
            case 0x1460F0u: goto label_1460f0;
            case 0x1460F4u: goto label_1460f4;
            case 0x1460F8u: goto label_1460f8;
            case 0x1460FCu: goto label_1460fc;
            case 0x146100u: goto label_146100;
            case 0x146104u: goto label_146104;
            case 0x146108u: goto label_146108;
            case 0x14610Cu: goto label_14610c;
            case 0x146110u: goto label_146110;
            case 0x146114u: goto label_146114;
            case 0x146118u: goto label_146118;
            case 0x14611Cu: goto label_14611c;
            case 0x146120u: goto label_146120;
            case 0x146124u: goto label_146124;
            case 0x146128u: goto label_146128;
            case 0x14612Cu: goto label_14612c;
            case 0x146130u: goto label_146130;
            case 0x146134u: goto label_146134;
            case 0x146138u: goto label_146138;
            case 0x14613Cu: goto label_14613c;
            case 0x146140u: goto label_146140;
            case 0x146144u: goto label_146144;
            case 0x146148u: goto label_146148;
            case 0x14614Cu: goto label_14614c;
            case 0x146150u: goto label_146150;
            case 0x146154u: goto label_146154;
            case 0x146158u: goto label_146158;
            case 0x14615Cu: goto label_14615c;
            case 0x146160u: goto label_146160;
            case 0x146164u: goto label_146164;
            case 0x146168u: goto label_146168;
            case 0x14616Cu: goto label_14616c;
            case 0x146170u: goto label_146170;
            case 0x146174u: goto label_146174;
            case 0x146178u: goto label_146178;
            case 0x14617Cu: goto label_14617c;
            case 0x146180u: goto label_146180;
            case 0x146184u: goto label_146184;
            case 0x146188u: goto label_146188;
            case 0x14618Cu: goto label_14618c;
            case 0x146190u: goto label_146190;
            case 0x146194u: goto label_146194;
            case 0x146198u: goto label_146198;
            case 0x14619Cu: goto label_14619c;
            case 0x1461A0u: goto label_1461a0;
            case 0x1461A4u: goto label_1461a4;
            case 0x1461A8u: goto label_1461a8;
            case 0x1461ACu: goto label_1461ac;
            case 0x1461B0u: goto label_1461b0;
            case 0x1461B4u: goto label_1461b4;
            case 0x1461B8u: goto label_1461b8;
            case 0x1461BCu: goto label_1461bc;
            case 0x1461C0u: goto label_1461c0;
            case 0x1461C4u: goto label_1461c4;
            case 0x1461C8u: goto label_1461c8;
            case 0x1461CCu: goto label_1461cc;
            case 0x1461D0u: goto label_1461d0;
            case 0x1461D4u: goto label_1461d4;
            case 0x1461D8u: goto label_1461d8;
            case 0x1461DCu: goto label_1461dc;
            case 0x1461E0u: goto label_1461e0;
            case 0x1461E4u: goto label_1461e4;
            case 0x1461E8u: goto label_1461e8;
            case 0x1461ECu: goto label_1461ec;
            case 0x1461F0u: goto label_1461f0;
            case 0x1461F4u: goto label_1461f4;
            case 0x1461F8u: goto label_1461f8;
            case 0x1461FCu: goto label_1461fc;
            case 0x146200u: goto label_146200;
            case 0x146204u: goto label_146204;
            case 0x146208u: goto label_146208;
            case 0x14620Cu: goto label_14620c;
            case 0x146210u: goto label_146210;
            case 0x146214u: goto label_146214;
            case 0x146218u: goto label_146218;
            case 0x14621Cu: goto label_14621c;
            case 0x146220u: goto label_146220;
            case 0x146224u: goto label_146224;
            case 0x146228u: goto label_146228;
            case 0x14622Cu: goto label_14622c;
            case 0x146230u: goto label_146230;
            case 0x146234u: goto label_146234;
            case 0x146238u: goto label_146238;
            case 0x14623Cu: goto label_14623c;
            case 0x146240u: goto label_146240;
            case 0x146244u: goto label_146244;
            case 0x146248u: goto label_146248;
            case 0x14624Cu: goto label_14624c;
            case 0x146250u: goto label_146250;
            case 0x146254u: goto label_146254;
            case 0x146258u: goto label_146258;
            case 0x14625Cu: goto label_14625c;
            case 0x146260u: goto label_146260;
            case 0x146264u: goto label_146264;
            case 0x146268u: goto label_146268;
            case 0x14626Cu: goto label_14626c;
            case 0x146270u: goto label_146270;
            case 0x146274u: goto label_146274;
            case 0x146278u: goto label_146278;
            case 0x14627Cu: goto label_14627c;
            case 0x146280u: goto label_146280;
            case 0x146284u: goto label_146284;
            case 0x146288u: goto label_146288;
            case 0x14628Cu: goto label_14628c;
            case 0x146290u: goto label_146290;
            case 0x146294u: goto label_146294;
            case 0x146298u: goto label_146298;
            case 0x14629Cu: goto label_14629c;
            case 0x1462A0u: goto label_1462a0;
            case 0x1462A4u: goto label_1462a4;
            case 0x1462A8u: goto label_1462a8;
            case 0x1462ACu: goto label_1462ac;
            case 0x1462B0u: goto label_1462b0;
            case 0x1462B4u: goto label_1462b4;
            case 0x1462B8u: goto label_1462b8;
            case 0x1462BCu: goto label_1462bc;
            case 0x1462C0u: goto label_1462c0;
            case 0x1462C4u: goto label_1462c4;
            case 0x1462C8u: goto label_1462c8;
            case 0x1462CCu: goto label_1462cc;
            case 0x1462D0u: goto label_1462d0;
            case 0x1462D4u: goto label_1462d4;
            case 0x1462D8u: goto label_1462d8;
            case 0x1462DCu: goto label_1462dc;
            case 0x1462E0u: goto label_1462e0;
            case 0x1462E4u: goto label_1462e4;
            case 0x1462E8u: goto label_1462e8;
            case 0x1462ECu: goto label_1462ec;
            case 0x1462F0u: goto label_1462f0;
            case 0x1462F4u: goto label_1462f4;
            case 0x1462F8u: goto label_1462f8;
            case 0x1462FCu: goto label_1462fc;
            case 0x146300u: goto label_146300;
            case 0x146304u: goto label_146304;
            case 0x146308u: goto label_146308;
            case 0x14630Cu: goto label_14630c;
            case 0x146310u: goto label_146310;
            case 0x146314u: goto label_146314;
            case 0x146318u: goto label_146318;
            case 0x14631Cu: goto label_14631c;
            case 0x146320u: goto label_146320;
            case 0x146324u: goto label_146324;
            case 0x146328u: goto label_146328;
            case 0x14632Cu: goto label_14632c;
            case 0x146330u: goto label_146330;
            case 0x146334u: goto label_146334;
            case 0x146338u: goto label_146338;
            case 0x14633Cu: goto label_14633c;
            case 0x146340u: goto label_146340;
            case 0x146344u: goto label_146344;
            case 0x146348u: goto label_146348;
            case 0x14634Cu: goto label_14634c;
            case 0x146350u: goto label_146350;
            case 0x146354u: goto label_146354;
            case 0x146358u: goto label_146358;
            case 0x14635Cu: goto label_14635c;
            case 0x146360u: goto label_146360;
            case 0x146364u: goto label_146364;
            case 0x146368u: goto label_146368;
            case 0x14636Cu: goto label_14636c;
            case 0x146370u: goto label_146370;
            case 0x146374u: goto label_146374;
            case 0x146378u: goto label_146378;
            case 0x14637Cu: goto label_14637c;
            case 0x146380u: goto label_146380;
            case 0x146384u: goto label_146384;
            case 0x146388u: goto label_146388;
            case 0x14638Cu: goto label_14638c;
            case 0x146390u: goto label_146390;
            case 0x146394u: goto label_146394;
            case 0x146398u: goto label_146398;
            case 0x14639Cu: goto label_14639c;
            case 0x1463A0u: goto label_1463a0;
            case 0x1463A4u: goto label_1463a4;
            case 0x1463A8u: goto label_1463a8;
            case 0x1463ACu: goto label_1463ac;
            case 0x1463B0u: goto label_1463b0;
            case 0x1463B4u: goto label_1463b4;
            case 0x1463B8u: goto label_1463b8;
            case 0x1463BCu: goto label_1463bc;
            case 0x1463C0u: goto label_1463c0;
            case 0x1463C4u: goto label_1463c4;
            case 0x1463C8u: goto label_1463c8;
            case 0x1463CCu: goto label_1463cc;
            case 0x1463D0u: goto label_1463d0;
            case 0x1463D4u: goto label_1463d4;
            case 0x1463D8u: goto label_1463d8;
            case 0x1463DCu: goto label_1463dc;
            case 0x1463E0u: goto label_1463e0;
            case 0x1463E4u: goto label_1463e4;
            case 0x1463E8u: goto label_1463e8;
            case 0x1463ECu: goto label_1463ec;
            case 0x1463F0u: goto label_1463f0;
            case 0x1463F4u: goto label_1463f4;
            case 0x1463F8u: goto label_1463f8;
            case 0x1463FCu: goto label_1463fc;
            case 0x146400u: goto label_146400;
            case 0x146404u: goto label_146404;
            case 0x146408u: goto label_146408;
            case 0x14640Cu: goto label_14640c;
            case 0x146410u: goto label_146410;
            case 0x146414u: goto label_146414;
            case 0x146418u: goto label_146418;
            case 0x14641Cu: goto label_14641c;
            case 0x146420u: goto label_146420;
            case 0x146424u: goto label_146424;
            case 0x146428u: goto label_146428;
            case 0x14642Cu: goto label_14642c;
            case 0x146430u: goto label_146430;
            case 0x146434u: goto label_146434;
            case 0x146438u: goto label_146438;
            case 0x14643Cu: goto label_14643c;
            case 0x146440u: goto label_146440;
            case 0x146444u: goto label_146444;
            case 0x146448u: goto label_146448;
            case 0x14644Cu: goto label_14644c;
            case 0x146450u: goto label_146450;
            case 0x146454u: goto label_146454;
            case 0x146458u: goto label_146458;
            case 0x14645Cu: goto label_14645c;
            case 0x146460u: goto label_146460;
            case 0x146464u: goto label_146464;
            case 0x146468u: goto label_146468;
            case 0x14646Cu: goto label_14646c;
            case 0x146470u: goto label_146470;
            case 0x146474u: goto label_146474;
            case 0x146478u: goto label_146478;
            case 0x14647Cu: goto label_14647c;
            case 0x146480u: goto label_146480;
            case 0x146484u: goto label_146484;
            case 0x146488u: goto label_146488;
            case 0x14648Cu: goto label_14648c;
            case 0x146490u: goto label_146490;
            case 0x146494u: goto label_146494;
            case 0x146498u: goto label_146498;
            case 0x14649Cu: goto label_14649c;
            case 0x1464A0u: goto label_1464a0;
            case 0x1464A4u: goto label_1464a4;
            case 0x1464A8u: goto label_1464a8;
            case 0x1464ACu: goto label_1464ac;
            case 0x1464B0u: goto label_1464b0;
            case 0x1464B4u: goto label_1464b4;
            case 0x1464B8u: goto label_1464b8;
            case 0x1464BCu: goto label_1464bc;
            case 0x1464C0u: goto label_1464c0;
            case 0x1464C4u: goto label_1464c4;
            case 0x1464C8u: goto label_1464c8;
            case 0x1464CCu: goto label_1464cc;
            case 0x1464D0u: goto label_1464d0;
            case 0x1464D4u: goto label_1464d4;
            case 0x1464D8u: goto label_1464d8;
            case 0x1464DCu: goto label_1464dc;
            case 0x1464E0u: goto label_1464e0;
            case 0x1464E4u: goto label_1464e4;
            case 0x1464E8u: goto label_1464e8;
            case 0x1464ECu: goto label_1464ec;
            case 0x1464F0u: goto label_1464f0;
            case 0x1464F4u: goto label_1464f4;
            case 0x1464F8u: goto label_1464f8;
            case 0x1464FCu: goto label_1464fc;
            case 0x146500u: goto label_146500;
            case 0x146504u: goto label_146504;
            case 0x146508u: goto label_146508;
            case 0x14650Cu: goto label_14650c;
            case 0x146510u: goto label_146510;
            case 0x146514u: goto label_146514;
            case 0x146518u: goto label_146518;
            case 0x14651Cu: goto label_14651c;
            case 0x146520u: goto label_146520;
            case 0x146524u: goto label_146524;
            case 0x146528u: goto label_146528;
            case 0x14652Cu: goto label_14652c;
            case 0x146530u: goto label_146530;
            case 0x146534u: goto label_146534;
            case 0x146538u: goto label_146538;
            case 0x14653Cu: goto label_14653c;
            case 0x146540u: goto label_146540;
            case 0x146544u: goto label_146544;
            case 0x146548u: goto label_146548;
            case 0x14654Cu: goto label_14654c;
            case 0x146550u: goto label_146550;
            case 0x146554u: goto label_146554;
            case 0x146558u: goto label_146558;
            case 0x14655Cu: goto label_14655c;
            case 0x146560u: goto label_146560;
            case 0x146564u: goto label_146564;
            case 0x146568u: goto label_146568;
            case 0x14656Cu: goto label_14656c;
            case 0x146570u: goto label_146570;
            case 0x146574u: goto label_146574;
            case 0x146578u: goto label_146578;
            case 0x14657Cu: goto label_14657c;
            case 0x146580u: goto label_146580;
            case 0x146584u: goto label_146584;
            case 0x146588u: goto label_146588;
            case 0x14658Cu: goto label_14658c;
            case 0x146590u: goto label_146590;
            case 0x146594u: goto label_146594;
            case 0x146598u: goto label_146598;
            case 0x14659Cu: goto label_14659c;
            case 0x1465A0u: goto label_1465a0;
            case 0x1465A4u: goto label_1465a4;
            case 0x1465A8u: goto label_1465a8;
            case 0x1465ACu: goto label_1465ac;
            case 0x1465B0u: goto label_1465b0;
            case 0x1465B4u: goto label_1465b4;
            case 0x1465B8u: goto label_1465b8;
            case 0x1465BCu: goto label_1465bc;
            case 0x1465C0u: goto label_1465c0;
            case 0x1465C4u: goto label_1465c4;
            case 0x1465C8u: goto label_1465c8;
            case 0x1465CCu: goto label_1465cc;
            case 0x1465D0u: goto label_1465d0;
            case 0x1465D4u: goto label_1465d4;
            case 0x1465D8u: goto label_1465d8;
            case 0x1465DCu: goto label_1465dc;
            case 0x1465E0u: goto label_1465e0;
            case 0x1465E4u: goto label_1465e4;
            case 0x1465E8u: goto label_1465e8;
            case 0x1465ECu: goto label_1465ec;
            case 0x1465F0u: goto label_1465f0;
            case 0x1465F4u: goto label_1465f4;
            case 0x1465F8u: goto label_1465f8;
            case 0x1465FCu: goto label_1465fc;
            case 0x146600u: goto label_146600;
            case 0x146604u: goto label_146604;
            case 0x146608u: goto label_146608;
            case 0x14660Cu: goto label_14660c;
            case 0x146610u: goto label_146610;
            case 0x146614u: goto label_146614;
            case 0x146618u: goto label_146618;
            case 0x14661Cu: goto label_14661c;
            case 0x146620u: goto label_146620;
            case 0x146624u: goto label_146624;
            case 0x146628u: goto label_146628;
            case 0x14662Cu: goto label_14662c;
            case 0x146630u: goto label_146630;
            case 0x146634u: goto label_146634;
            case 0x146638u: goto label_146638;
            case 0x14663Cu: goto label_14663c;
            case 0x146640u: goto label_146640;
            case 0x146644u: goto label_146644;
            case 0x146648u: goto label_146648;
            case 0x14664Cu: goto label_14664c;
            case 0x146650u: goto label_146650;
            case 0x146654u: goto label_146654;
            case 0x146658u: goto label_146658;
            case 0x14665Cu: goto label_14665c;
            case 0x146660u: goto label_146660;
            case 0x146664u: goto label_146664;
            case 0x146668u: goto label_146668;
            case 0x14666Cu: goto label_14666c;
            case 0x146670u: goto label_146670;
            case 0x146674u: goto label_146674;
            case 0x146678u: goto label_146678;
            case 0x14667Cu: goto label_14667c;
            case 0x146680u: goto label_146680;
            case 0x146684u: goto label_146684;
            case 0x146688u: goto label_146688;
            case 0x14668Cu: goto label_14668c;
            case 0x146690u: goto label_146690;
            case 0x146694u: goto label_146694;
            case 0x146698u: goto label_146698;
            case 0x14669Cu: goto label_14669c;
            case 0x1466A0u: goto label_1466a0;
            case 0x1466A4u: goto label_1466a4;
            case 0x1466A8u: goto label_1466a8;
            case 0x1466ACu: goto label_1466ac;
            case 0x1466B0u: goto label_1466b0;
            case 0x1466B4u: goto label_1466b4;
            case 0x1466B8u: goto label_1466b8;
            case 0x1466BCu: goto label_1466bc;
            case 0x1466C0u: goto label_1466c0;
            case 0x1466C4u: goto label_1466c4;
            case 0x1466C8u: goto label_1466c8;
            case 0x1466CCu: goto label_1466cc;
            case 0x1466D0u: goto label_1466d0;
            case 0x1466D4u: goto label_1466d4;
            case 0x1466D8u: goto label_1466d8;
            case 0x1466DCu: goto label_1466dc;
            case 0x1466E0u: goto label_1466e0;
            case 0x1466E4u: goto label_1466e4;
            case 0x1466E8u: goto label_1466e8;
            case 0x1466ECu: goto label_1466ec;
            case 0x1466F0u: goto label_1466f0;
            case 0x1466F4u: goto label_1466f4;
            case 0x1466F8u: goto label_1466f8;
            case 0x1466FCu: goto label_1466fc;
            case 0x146700u: goto label_146700;
            case 0x146704u: goto label_146704;
            case 0x146708u: goto label_146708;
            case 0x14670Cu: goto label_14670c;
            case 0x146710u: goto label_146710;
            case 0x146714u: goto label_146714;
            case 0x146718u: goto label_146718;
            case 0x14671Cu: goto label_14671c;
            case 0x146720u: goto label_146720;
            case 0x146724u: goto label_146724;
            case 0x146728u: goto label_146728;
            case 0x14672Cu: goto label_14672c;
            case 0x146730u: goto label_146730;
            case 0x146734u: goto label_146734;
            case 0x146738u: goto label_146738;
            case 0x14673Cu: goto label_14673c;
            case 0x146740u: goto label_146740;
            case 0x146744u: goto label_146744;
            case 0x146748u: goto label_146748;
            case 0x14674Cu: goto label_14674c;
            case 0x146750u: goto label_146750;
            case 0x146754u: goto label_146754;
            case 0x146758u: goto label_146758;
            case 0x14675Cu: goto label_14675c;
            case 0x146760u: goto label_146760;
            case 0x146764u: goto label_146764;
            case 0x146768u: goto label_146768;
            case 0x14676Cu: goto label_14676c;
            case 0x146770u: goto label_146770;
            case 0x146774u: goto label_146774;
            case 0x146778u: goto label_146778;
            case 0x14677Cu: goto label_14677c;
            case 0x146780u: goto label_146780;
            case 0x146784u: goto label_146784;
            case 0x146788u: goto label_146788;
            case 0x14678Cu: goto label_14678c;
            case 0x146790u: goto label_146790;
            case 0x146794u: goto label_146794;
            case 0x146798u: goto label_146798;
            case 0x14679Cu: goto label_14679c;
            case 0x1467A0u: goto label_1467a0;
            case 0x1467A4u: goto label_1467a4;
            case 0x1467A8u: goto label_1467a8;
            case 0x1467ACu: goto label_1467ac;
            case 0x1467B0u: goto label_1467b0;
            case 0x1467B4u: goto label_1467b4;
            case 0x1467B8u: goto label_1467b8;
            case 0x1467BCu: goto label_1467bc;
            case 0x1467C0u: goto label_1467c0;
            case 0x1467C4u: goto label_1467c4;
            case 0x1467C8u: goto label_1467c8;
            case 0x1467CCu: goto label_1467cc;
            case 0x1467D0u: goto label_1467d0;
            case 0x1467D4u: goto label_1467d4;
            case 0x1467D8u: goto label_1467d8;
            case 0x1467DCu: goto label_1467dc;
            case 0x1467E0u: goto label_1467e0;
            case 0x1467E4u: goto label_1467e4;
            case 0x1467E8u: goto label_1467e8;
            case 0x1467ECu: goto label_1467ec;
            case 0x1467F0u: goto label_1467f0;
            case 0x1467F4u: goto label_1467f4;
            case 0x1467F8u: goto label_1467f8;
            case 0x1467FCu: goto label_1467fc;
            case 0x146800u: goto label_146800;
            case 0x146804u: goto label_146804;
            case 0x146808u: goto label_146808;
            case 0x14680Cu: goto label_14680c;
            case 0x146810u: goto label_146810;
            case 0x146814u: goto label_146814;
            case 0x146818u: goto label_146818;
            case 0x14681Cu: goto label_14681c;
            case 0x146820u: goto label_146820;
            case 0x146824u: goto label_146824;
            case 0x146828u: goto label_146828;
            case 0x14682Cu: goto label_14682c;
            case 0x146830u: goto label_146830;
            case 0x146834u: goto label_146834;
            case 0x146838u: goto label_146838;
            case 0x14683Cu: goto label_14683c;
            case 0x146840u: goto label_146840;
            case 0x146844u: goto label_146844;
            case 0x146848u: goto label_146848;
            case 0x14684Cu: goto label_14684c;
            case 0x146850u: goto label_146850;
            case 0x146854u: goto label_146854;
            case 0x146858u: goto label_146858;
            case 0x14685Cu: goto label_14685c;
            case 0x146860u: goto label_146860;
            case 0x146864u: goto label_146864;
            case 0x146868u: goto label_146868;
            case 0x14686Cu: goto label_14686c;
            case 0x146870u: goto label_146870;
            case 0x146874u: goto label_146874;
            case 0x146878u: goto label_146878;
            case 0x14687Cu: goto label_14687c;
            case 0x146880u: goto label_146880;
            case 0x146884u: goto label_146884;
            case 0x146888u: goto label_146888;
            case 0x14688Cu: goto label_14688c;
            case 0x146890u: goto label_146890;
            case 0x146894u: goto label_146894;
            case 0x146898u: goto label_146898;
            case 0x14689Cu: goto label_14689c;
            case 0x1468A0u: goto label_1468a0;
            case 0x1468A4u: goto label_1468a4;
            case 0x1468A8u: goto label_1468a8;
            case 0x1468ACu: goto label_1468ac;
            case 0x1468B0u: goto label_1468b0;
            case 0x1468B4u: goto label_1468b4;
            case 0x1468B8u: goto label_1468b8;
            case 0x1468BCu: goto label_1468bc;
            case 0x1468C0u: goto label_1468c0;
            case 0x1468C4u: goto label_1468c4;
            case 0x1468C8u: goto label_1468c8;
            case 0x1468CCu: goto label_1468cc;
            case 0x1468D0u: goto label_1468d0;
            case 0x1468D4u: goto label_1468d4;
            case 0x1468D8u: goto label_1468d8;
            case 0x1468DCu: goto label_1468dc;
            case 0x1468E0u: goto label_1468e0;
            case 0x1468E4u: goto label_1468e4;
            case 0x1468E8u: goto label_1468e8;
            case 0x1468ECu: goto label_1468ec;
            case 0x1468F0u: goto label_1468f0;
            case 0x1468F4u: goto label_1468f4;
            case 0x1468F8u: goto label_1468f8;
            case 0x1468FCu: goto label_1468fc;
            case 0x146900u: goto label_146900;
            case 0x146904u: goto label_146904;
            case 0x146908u: goto label_146908;
            case 0x14690Cu: goto label_14690c;
            case 0x146910u: goto label_146910;
            case 0x146914u: goto label_146914;
            case 0x146918u: goto label_146918;
            case 0x14691Cu: goto label_14691c;
            case 0x146920u: goto label_146920;
            case 0x146924u: goto label_146924;
            case 0x146928u: goto label_146928;
            case 0x14692Cu: goto label_14692c;
            case 0x146930u: goto label_146930;
            case 0x146934u: goto label_146934;
            case 0x146938u: goto label_146938;
            case 0x14693Cu: goto label_14693c;
            case 0x146940u: goto label_146940;
            case 0x146944u: goto label_146944;
            case 0x146948u: goto label_146948;
            case 0x14694Cu: goto label_14694c;
            case 0x146950u: goto label_146950;
            case 0x146954u: goto label_146954;
            case 0x146958u: goto label_146958;
            case 0x14695Cu: goto label_14695c;
            case 0x146960u: goto label_146960;
            default: break;
        }
        return;
    }
    ctx->pc = 0x145F4Cu;
label_145f4c:
    // 0x145f4c: 0x83a20090
    ctx->pc = 0x145f4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
label_145f50:
    // 0x145f50: 0x5440fff1
label_145f54:
    if (ctx->pc == 0x145F54u) {
        ctx->pc = 0x145F54u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x145F58u;
        goto label_145f58;
    }
    ctx->pc = 0x145F50u;
    {
        const bool branch_taken_0x145f50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x145f50) {
            ctx->pc = 0x145F54u;
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->pc = 0x145F18u;
            goto label_145f18;
        }
    }
    ctx->pc = 0x145F58u;
label_145f58:
    // 0x145f58: 0x1000000c
label_145f5c:
    if (ctx->pc == 0x145F5Cu) {
        ctx->pc = 0x145F5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x145F60u;
        goto label_145f60;
    }
    ctx->pc = 0x145F58u;
    {
        const bool branch_taken_0x145f58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x145F5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x145f58) {
            ctx->pc = 0x145F8Cu;
            goto label_145f8c;
        }
    }
    ctx->pc = 0x145F60u;
label_145f60:
    // 0x145f60: 0x1000ffec
label_145f64:
    if (ctx->pc == 0x145F64u) {
        ctx->pc = 0x145F64u;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 1));
        ctx->pc = 0x145F68u;
        goto label_145f68;
    }
    ctx->pc = 0x145F60u;
    {
        const bool branch_taken_0x145f60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x145F64u;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 1));
        if (branch_taken_0x145f60) {
            ctx->pc = 0x145F14u;
            goto label_145f14;
        }
    }
    ctx->pc = 0x145F68u;
label_145f68:
    // 0x145f68: 0x26940008
    ctx->pc = 0x145f68u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_145f6c:
    // 0x145f6c: 0x8e85fff8
    ctx->pc = 0x145f6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_145f70:
    // 0x145f70: 0x4a1ffe8
label_145f74:
    if (ctx->pc == 0x145F74u) {
        ctx->pc = 0x145F74u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 5));
        ctx->pc = 0x145F78u;
        goto label_145f78;
    }
    ctx->pc = 0x145F70u;
    {
        const bool branch_taken_0x145f70 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x145F74u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 5));
        if (branch_taken_0x145f70) {
            ctx->pc = 0x145F14u;
            goto label_145f14;
        }
    }
    ctx->pc = 0x145F78u;
label_145f78:
    // 0x145f78: 0x52823
    ctx->pc = 0x145f78u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_145f7c:
    // 0x145f7c: 0xafa500a4
    ctx->pc = 0x145f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 5));
label_145f80:
    // 0x145f80: 0x1000ffe4
label_145f84:
    if (ctx->pc == 0x145F84u) {
        ctx->pc = 0x145F84u;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 4));
        ctx->pc = 0x145F88u;
        goto label_145f88;
    }
    ctx->pc = 0x145F80u;
    {
        const bool branch_taken_0x145f80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x145F84u;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 4));
        if (branch_taken_0x145f80) {
            ctx->pc = 0x145F14u;
            goto label_145f14;
        }
    }
    ctx->pc = 0x145F88u;
label_145f88:
    // 0x145f88: 0x2402002b
    ctx->pc = 0x145f88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
label_145f8c:
    // 0x145f8c: 0x92a40000
    ctx->pc = 0x145f8cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_145f90:
    // 0x145f90: 0x1000ffe1
label_145f94:
    if (ctx->pc == 0x145F94u) {
        ctx->pc = 0x145F94u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x145F98u;
        goto label_145f98;
    }
    ctx->pc = 0x145F90u;
    {
        const bool branch_taken_0x145f90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x145F94u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x145f90) {
            ctx->pc = 0x145F18u;
            goto label_145f18;
        }
    }
    ctx->pc = 0x145F98u;
label_145f98:
    // 0x145f98: 0x82b70000
    ctx->pc = 0x145f98u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_145f9c:
    // 0x145f9c: 0x2402002a
    ctx->pc = 0x145f9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 42));
label_145fa0:
    // 0x145fa0: 0x16e20009
label_145fa4:
    if (ctx->pc == 0x145FA4u) {
        ctx->pc = 0x145FA4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x145FA8u;
        goto label_145fa8;
    }
    ctx->pc = 0x145FA0u;
    {
        const bool branch_taken_0x145fa0 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 2));
        ctx->pc = 0x145FA4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x145fa0) {
            ctx->pc = 0x145FC8u;
            goto label_145fc8;
        }
    }
    ctx->pc = 0x145FA8u;
label_145fa8:
    // 0x145fa8: 0x26940008
    ctx->pc = 0x145fa8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_145fac:
    // 0x145fac: 0x2402fffe
    ctx->pc = 0x145facu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_145fb0:
    // 0x145fb0: 0x8e90fff8
    ctx->pc = 0x145fb0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_145fb4:
    // 0x145fb4: 0x2411ffff
    ctx->pc = 0x145fb4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
label_145fb8:
    // 0x145fb8: 0x92a40000
    ctx->pc = 0x145fb8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_145fbc:
    // 0x145fbc: 0x50102a
    ctx->pc = 0x145fbcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
label_145fc0:
    // 0x145fc0: 0x1000ffd5
label_145fc4:
    if (ctx->pc == 0x145FC4u) {
        ctx->pc = 0x145FC4u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 16));
        ctx->pc = 0x145FC8u;
        goto label_145fc8;
    }
    ctx->pc = 0x145FC0u;
    {
        const bool branch_taken_0x145fc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x145FC4u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 16));
        if (branch_taken_0x145fc0) {
            ctx->pc = 0x145F18u;
            goto label_145f18;
        }
    }
    ctx->pc = 0x145FC8u;
label_145fc8:
    // 0x145fc8: 0x26e2ffd0
    ctx->pc = 0x145fc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 23), 4294967248));
label_145fcc:
    // 0x145fcc: 0x2c42000a
    ctx->pc = 0x145fccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 10));
label_145fd0:
    // 0x145fd0: 0x1040000b
label_145fd4:
    if (ctx->pc == 0x145FD4u) {
        ctx->pc = 0x145FD4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x145FD8u;
        goto label_145fd8;
    }
    ctx->pc = 0x145FD0u;
    {
        const bool branch_taken_0x145fd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x145FD4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x145fd0) {
            ctx->pc = 0x146000u;
            goto label_146000;
        }
    }
    ctx->pc = 0x145FD8u;
label_145fd8:
    // 0x145fd8: 0x2403000a
    ctx->pc = 0x145fd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
label_145fdc:
    // 0x145fdc: 0x0
    ctx->pc = 0x145fdcu;
    // NOP
label_145fe0:
    // 0x145fe0: 0x2031018
    ctx->pc = 0x145fe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_145fe4:
    // 0x145fe4: 0x2442ffd0
    ctx->pc = 0x145fe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967248));
label_145fe8:
    // 0x145fe8: 0x578021
    ctx->pc = 0x145fe8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_145fec:
    // 0x145fec: 0x82b70000
    ctx->pc = 0x145fecu;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_145ff0:
    // 0x145ff0: 0x26e2ffd0
    ctx->pc = 0x145ff0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 23), 4294967248));
label_145ff4:
    // 0x145ff4: 0x2c42000a
    ctx->pc = 0x145ff4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 10));
label_145ff8:
    // 0x145ff8: 0x1440fff9
label_145ffc:
    if (ctx->pc == 0x145FFCu) {
        ctx->pc = 0x145FFCu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x146000u;
        goto label_146000;
    }
    ctx->pc = 0x145FF8u;
    {
        const bool branch_taken_0x145ff8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x145FFCu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x145ff8) {
            ctx->pc = 0x145FE0u;
            goto label_145fe0;
        }
    }
    ctx->pc = 0x146000u;
label_146000:
    // 0x146000: 0x2402fffe
    ctx->pc = 0x146000u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_146004:
    // 0x146004: 0x2411ffff
    ctx->pc = 0x146004u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
label_146008:
    // 0x146008: 0x50102a
    ctx->pc = 0x146008u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
label_14600c:
    // 0x14600c: 0x1000ffc5
label_146010:
    if (ctx->pc == 0x146010u) {
        ctx->pc = 0x146010u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 16));
        ctx->pc = 0x146014u;
        goto label_146014;
    }
    ctx->pc = 0x14600Cu;
    {
        const bool branch_taken_0x14600c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146010u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 16));
        if (branch_taken_0x14600c) {
            ctx->pc = 0x145F24u;
            goto label_145f24;
        }
    }
    ctx->pc = 0x146014u;
label_146014:
    // 0x146014: 0x1000ffbf
label_146018:
    if (ctx->pc == 0x146018u) {
        ctx->pc = 0x146018u;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 128));
        ctx->pc = 0x14601Cu;
        goto label_14601c;
    }
    ctx->pc = 0x146014u;
    {
        const bool branch_taken_0x146014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146018u;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 128));
        if (branch_taken_0x146014) {
            ctx->pc = 0x145F14u;
            goto label_145f14;
        }
    }
    ctx->pc = 0x14601Cu;
label_14601c:
    // 0x14601c: 0x802d
    ctx->pc = 0x14601cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_146020:
    // 0x146020: 0x2403000a
    ctx->pc = 0x146020u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
label_146024:
    // 0x146024: 0x0
    ctx->pc = 0x146024u;
    // NOP
label_146028:
    // 0x146028: 0x2031018
    ctx->pc = 0x146028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_14602c:
    // 0x14602c: 0x2442ffd0
    ctx->pc = 0x14602cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967248));
label_146030:
    // 0x146030: 0x578021
    ctx->pc = 0x146030u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_146034:
    // 0x146034: 0x82b70000
    ctx->pc = 0x146034u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_146038:
    // 0x146038: 0x26e2ffd0
    ctx->pc = 0x146038u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 23), 4294967248));
label_14603c:
    // 0x14603c: 0x2c42000a
    ctx->pc = 0x14603cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 10));
label_146040:
    // 0x146040: 0x1440fff9
label_146044:
    if (ctx->pc == 0x146044u) {
        ctx->pc = 0x146044u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x146048u;
        goto label_146048;
    }
    ctx->pc = 0x146040u;
    {
        const bool branch_taken_0x146040 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x146044u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x146040) {
            ctx->pc = 0x146028u;
            goto label_146028;
        }
    }
    ctx->pc = 0x146048u;
label_146048:
    // 0x146048: 0x1000ffb6
label_14604c:
    if (ctx->pc == 0x14604Cu) {
        ctx->pc = 0x14604Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 16));
        ctx->pc = 0x146050u;
        goto label_146050;
    }
    ctx->pc = 0x146048u;
    {
        const bool branch_taken_0x146048 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14604Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 16));
        if (branch_taken_0x146048) {
            ctx->pc = 0x145F24u;
            goto label_145f24;
        }
    }
    ctx->pc = 0x146050u;
label_146050:
    // 0x146050: 0x1000ffb0
label_146054:
    if (ctx->pc == 0x146054u) {
        ctx->pc = 0x146054u;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 64));
        ctx->pc = 0x146058u;
        goto label_146058;
    }
    ctx->pc = 0x146050u;
    {
        const bool branch_taken_0x146050 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146054u;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 64));
        if (branch_taken_0x146050) {
            ctx->pc = 0x145F14u;
            goto label_145f14;
        }
    }
    ctx->pc = 0x146058u;
label_146058:
    // 0x146058: 0x82a30000
    ctx->pc = 0x146058u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_14605c:
    // 0x14605c: 0x2402006c
    ctx->pc = 0x14605cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 108));
label_146060:
    // 0x146060: 0x14620004
label_146064:
    if (ctx->pc == 0x146064u) {
        ctx->pc = 0x146064u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x146068u;
        goto label_146068;
    }
    ctx->pc = 0x146060u;
    {
        const bool branch_taken_0x146060 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x146064u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        if (branch_taken_0x146060) {
            ctx->pc = 0x146074u;
            goto label_146074;
        }
    }
    ctx->pc = 0x146068u;
label_146068:
    // 0x146068: 0x26b50001
    ctx->pc = 0x146068u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_14606c:
    // 0x14606c: 0x1000ffa9
label_146070:
    if (ctx->pc == 0x146070u) {
        ctx->pc = 0x146070u;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 32));
        ctx->pc = 0x146074u;
        goto label_146074;
    }
    ctx->pc = 0x14606Cu;
    {
        const bool branch_taken_0x14606c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146070u;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 32));
        if (branch_taken_0x14606c) {
            ctx->pc = 0x145F14u;
            goto label_145f14;
        }
    }
    ctx->pc = 0x146074u;
label_146074:
    // 0x146074: 0x1000ffa8
label_146078:
    if (ctx->pc == 0x146078u) {
        ctx->pc = 0x146078u;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 16));
        ctx->pc = 0x14607Cu;
        goto label_14607c;
    }
    ctx->pc = 0x146074u;
    {
        const bool branch_taken_0x146074 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146078u;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 16));
        if (branch_taken_0x146074) {
            ctx->pc = 0x145F18u;
            goto label_145f18;
        }
    }
    ctx->pc = 0x14607Cu;
label_14607c:
    // 0x14607c: 0x26940008
    ctx->pc = 0x14607cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_146080:
    // 0x146080: 0x24030001
    ctx->pc = 0x146080u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_146084:
    // 0x146084: 0x9282fff8
    ctx->pc = 0x146084u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_146088:
    // 0x146088: 0x33c40084
    ctx->pc = 0x146088u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 30), 132));
label_14608c:
    // 0x14608c: 0x27b30050
    ctx->pc = 0x14608cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 80));
label_146090:
    // 0x146090: 0xafa300ac
    ctx->pc = 0x146090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_146094:
    // 0x146094: 0xa3a00090
    ctx->pc = 0x146094u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 0));
label_146098:
    // 0x146098: 0x26510008
    ctx->pc = 0x146098u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 8));
label_14609c:
    // 0x14609c: 0x100000e9
label_1460a0:
    if (ctx->pc == 0x1460A0u) {
        ctx->pc = 0x1460A0u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1460A4u;
        goto label_1460a4;
    }
    ctx->pc = 0x14609Cu;
    {
        const bool branch_taken_0x14609c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1460A0u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x14609c) {
            ctx->pc = 0x146444u;
            goto label_146444;
        }
    }
    ctx->pc = 0x1460A4u;
label_1460a4:
    // 0x1460a4: 0x37de0010
    ctx->pc = 0x1460a4u;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 16));
label_1460a8:
    // 0x1460a8: 0x33c20010
    ctx->pc = 0x1460a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 16));
label_1460ac:
    // 0x1460ac: 0x10400004
label_1460b0:
    if (ctx->pc == 0x1460B0u) {
        ctx->pc = 0x1460B0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        ctx->pc = 0x1460B4u;
        goto label_1460b4;
    }
    ctx->pc = 0x1460ACu;
    {
        const bool branch_taken_0x1460ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1460B0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        if (branch_taken_0x1460ac) {
            ctx->pc = 0x1460C0u;
            goto label_1460c0;
        }
    }
    ctx->pc = 0x1460B4u;
label_1460b4:
    // 0x1460b4: 0x26940008
    ctx->pc = 0x1460b4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_1460b8:
    // 0x1460b8: 0x10000006
label_1460bc:
    if (ctx->pc == 0x1460BCu) {
        ctx->pc = 0x1460BCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x1460C0u;
        goto label_1460c0;
    }
    ctx->pc = 0x1460B8u;
    {
        const bool branch_taken_0x1460b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1460BCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x1460b8) {
            ctx->pc = 0x1460D4u;
            goto label_1460d4;
        }
    }
    ctx->pc = 0x1460C0u;
label_1460c0:
    // 0x1460c0: 0x10400003
label_1460c4:
    if (ctx->pc == 0x1460C4u) {
        ctx->pc = 0x1460C4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x1460C8u;
        goto label_1460c8;
    }
    ctx->pc = 0x1460C0u;
    {
        const bool branch_taken_0x1460c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1460C4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x1460c0) {
            ctx->pc = 0x1460D0u;
            goto label_1460d0;
        }
    }
    ctx->pc = 0x1460C8u;
label_1460c8:
    // 0x1460c8: 0x10000002
label_1460cc:
    if (ctx->pc == 0x1460CCu) {
        ctx->pc = 0x1460CCu;
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x1460D0u;
        goto label_1460d0;
    }
    ctx->pc = 0x1460C8u;
    {
        const bool branch_taken_0x1460c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1460CCu;
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x1460c8) {
            ctx->pc = 0x1460D4u;
            goto label_1460d4;
        }
    }
    ctx->pc = 0x1460D0u;
label_1460d0:
    // 0x1460d0: 0x8e90fff8
    ctx->pc = 0x1460d0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_1460d4:
    // 0x1460d4: 0x6010070
label_1460d8:
    if (ctx->pc == 0x1460D8u) {
        ctx->pc = 0x1460D8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1460DCu;
        goto label_1460dc;
    }
    ctx->pc = 0x1460D4u;
    {
        const bool branch_taken_0x1460d4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1460D8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1460d4) {
            ctx->pc = 0x146298u;
            goto label_146298;
        }
    }
    ctx->pc = 0x1460DCu;
label_1460dc:
    // 0x1460dc: 0x2402002d
    ctx->pc = 0x1460dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
label_1460e0:
    // 0x1460e0: 0x10802f
    ctx->pc = 0x1460e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
label_1460e4:
    // 0x1460e4: 0x1000006c
label_1460e8:
    if (ctx->pc == 0x1460E8u) {
        ctx->pc = 0x1460E8u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1460ECu;
        goto label_1460ec;
    }
    ctx->pc = 0x1460E4u;
    {
        const bool branch_taken_0x1460e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1460E8u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1460e4) {
            ctx->pc = 0x146298u;
            goto label_146298;
        }
    }
    ctx->pc = 0x1460ECu;
label_1460ec:
    // 0x1460ec: 0x33c20010
    ctx->pc = 0x1460ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 16));
label_1460f0:
    // 0x1460f0: 0x10400005
label_1460f4:
    if (ctx->pc == 0x1460F4u) {
        ctx->pc = 0x1460F4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x1460F8u;
        goto label_1460f8;
    }
    ctx->pc = 0x1460F0u;
    {
        const bool branch_taken_0x1460f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1460F4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x1460f0) {
            ctx->pc = 0x146108u;
            goto label_146108;
        }
    }
    ctx->pc = 0x1460F8u;
label_1460f8:
    // 0x1460f8: 0x26940008
    ctx->pc = 0x1460f8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_1460fc:
    // 0x1460fc: 0x8e82fff8
    ctx->pc = 0x1460fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_146100:
    // 0x146100: 0x1000ff57
label_146104:
    if (ctx->pc == 0x146104u) {
        ctx->pc = 0x146104u;
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->pc = 0x146108u;
        goto label_146108;
    }
    ctx->pc = 0x146100u;
    {
        const bool branch_taken_0x146100 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146104u;
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        if (branch_taken_0x146100) {
            ctx->pc = 0x145E60u;
            goto label_145e60;
        }
    }
    ctx->pc = 0x146108u;
label_146108:
    // 0x146108: 0x33c20040
    ctx->pc = 0x146108u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
label_14610c:
    // 0x14610c: 0x10400005
label_146110:
    if (ctx->pc == 0x146110u) {
        ctx->pc = 0x146110u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x146114u;
        goto label_146114;
    }
    ctx->pc = 0x14610Cu;
    {
        const bool branch_taken_0x14610c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x146110u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x14610c) {
            ctx->pc = 0x146124u;
            goto label_146124;
        }
    }
    ctx->pc = 0x146114u;
label_146114:
    // 0x146114: 0x26940008
    ctx->pc = 0x146114u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_146118:
    // 0x146118: 0x8e82fff8
    ctx->pc = 0x146118u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_14611c:
    // 0x14611c: 0x1000ff50
label_146120:
    if (ctx->pc == 0x146120u) {
        ctx->pc = 0x146120u;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x146124u;
        goto label_146124;
    }
    ctx->pc = 0x14611Cu;
    {
        const bool branch_taken_0x14611c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146120u;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x14611c) {
            ctx->pc = 0x145E60u;
            goto label_145e60;
        }
    }
    ctx->pc = 0x146124u;
label_146124:
    // 0x146124: 0x26940008
    ctx->pc = 0x146124u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_146128:
    // 0x146128: 0x8fa400a0
    ctx->pc = 0x146128u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_14612c:
    // 0x14612c: 0x8e82fff8
    ctx->pc = 0x14612cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_146130:
    // 0x146130: 0x1000ff4b
label_146134:
    if (ctx->pc == 0x146134u) {
        ctx->pc = 0x146134u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x146138u;
        goto label_146138;
    }
    ctx->pc = 0x146130u;
    {
        const bool branch_taken_0x146130 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146134u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x146130) {
            ctx->pc = 0x145E60u;
            goto label_145e60;
        }
    }
    ctx->pc = 0x146138u;
label_146138:
    // 0x146138: 0x37de0010
    ctx->pc = 0x146138u;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 16));
label_14613c:
    // 0x14613c: 0x33c20010
    ctx->pc = 0x14613cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 16));
label_146140:
    // 0x146140: 0x10400004
label_146144:
    if (ctx->pc == 0x146144u) {
        ctx->pc = 0x146144u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        ctx->pc = 0x146148u;
        goto label_146148;
    }
    ctx->pc = 0x146140u;
    {
        const bool branch_taken_0x146140 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x146144u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        if (branch_taken_0x146140) {
            ctx->pc = 0x146154u;
            goto label_146154;
        }
    }
    ctx->pc = 0x146148u;
label_146148:
    // 0x146148: 0x26940008
    ctx->pc = 0x146148u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_14614c:
    // 0x14614c: 0x10000006
label_146150:
    if (ctx->pc == 0x146150u) {
        ctx->pc = 0x146150u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x146154u;
        goto label_146154;
    }
    ctx->pc = 0x14614Cu;
    {
        const bool branch_taken_0x14614c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146150u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x14614c) {
            ctx->pc = 0x146168u;
            goto label_146168;
        }
    }
    ctx->pc = 0x146154u;
label_146154:
    // 0x146154: 0x10400003
label_146158:
    if (ctx->pc == 0x146158u) {
        ctx->pc = 0x146158u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x14615Cu;
        goto label_14615c;
    }
    ctx->pc = 0x146154u;
    {
        const bool branch_taken_0x146154 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x146158u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x146154) {
            ctx->pc = 0x146164u;
            goto label_146164;
        }
    }
    ctx->pc = 0x14615Cu;
label_14615c:
    // 0x14615c: 0x10000002
label_146160:
    if (ctx->pc == 0x146160u) {
        ctx->pc = 0x146160u;
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x146164u;
        goto label_146164;
    }
    ctx->pc = 0x14615Cu;
    {
        const bool branch_taken_0x14615c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146160u;
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x14615c) {
            ctx->pc = 0x146168u;
            goto label_146168;
        }
    }
    ctx->pc = 0x146164u;
label_146164:
    // 0x146164: 0x9e90fff8
    ctx->pc = 0x146164u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_146168:
    // 0x146168: 0x1000004a
label_14616c:
    if (ctx->pc == 0x14616Cu) {
        ctx->pc = 0x14616Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x146170u;
        goto label_146170;
    }
    ctx->pc = 0x146168u;
    {
        const bool branch_taken_0x146168 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14616Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x146168) {
            ctx->pc = 0x146294u;
            goto label_146294;
        }
    }
    ctx->pc = 0x146170u;
label_146170:
    // 0x146170: 0x3c02002b
    ctx->pc = 0x146170u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
label_146174:
    // 0x146174: 0x26940008
    ctx->pc = 0x146174u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_146178:
    // 0x146178: 0x244270f0
    ctx->pc = 0x146178u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28912));
label_14617c:
    // 0x14617c: 0x24040002
    ctx->pc = 0x14617cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_146180:
    // 0x146180: 0xafa200b0
    ctx->pc = 0x146180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_146184:
    // 0x146184: 0x37de0002
    ctx->pc = 0x146184u;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 2));
label_146188:
    // 0x146188: 0x24170078
    ctx->pc = 0x146188u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 120));
label_14618c:
    // 0x14618c: 0x10000041
label_146190:
    if (ctx->pc == 0x146190u) {
        ctx->pc = 0x146190u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x146194u;
        goto label_146194;
    }
    ctx->pc = 0x14618Cu;
    {
        const bool branch_taken_0x14618c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146190u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x14618c) {
            ctx->pc = 0x146294u;
            goto label_146294;
        }
    }
    ctx->pc = 0x146194u;
label_146194:
    // 0x146194: 0x26940008
    ctx->pc = 0x146194u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_146198:
    // 0x146198: 0x8e93fff8
    ctx->pc = 0x146198u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_14619c:
    // 0x14619c: 0x16600002
label_1461a0:
    if (ctx->pc == 0x1461A0u) {
        ctx->pc = 0x1461A0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
        ctx->pc = 0x1461A4u;
        goto label_1461a4;
    }
    ctx->pc = 0x14619Cu;
    {
        const bool branch_taken_0x14619c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x1461A0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
        if (branch_taken_0x14619c) {
            ctx->pc = 0x1461A8u;
            goto label_1461a8;
        }
    }
    ctx->pc = 0x1461A4u;
label_1461a4:
    // 0x1461a4: 0x24537108
    ctx->pc = 0x1461a4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 28936));
label_1461a8:
    // 0x1461a8: 0x620000e
label_1461ac:
    if (ctx->pc == 0x1461ACu) {
        ctx->pc = 0x1461ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1461B0u;
        goto label_1461b0;
    }
    ctx->pc = 0x1461A8u;
    {
        const bool branch_taken_0x1461a8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1461ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1461a8) {
            ctx->pc = 0x1461E4u;
            goto label_1461e4;
        }
    }
    ctx->pc = 0x1461B0u;
label_1461b0:
    // 0x1461b0: 0x282d
    ctx->pc = 0x1461b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1461b4:
    // 0x1461b4: 0xc050c32
label_1461b8:
    if (ctx->pc == 0x1461B8u) {
        ctx->pc = 0x1461B8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1461BCu;
        goto label_1461bc;
    }
    ctx->pc = 0x1461B4u;
    SET_GPR_U32(ctx, 31, 0x1461BCu);
    ctx->pc = 0x1461B8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1430C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memchr_0x1430c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1461BCu; }
        else if (ctx->pc != 0x1461BCu) { ctx->pc = 0x1461BCu; }
    }
    if (ctx->pc != 0x1461BCu) { return; }
    ctx->pc = 0x1461BCu;
label_1461bc:
    // 0x1461bc: 0x10400007
label_1461c0:
    if (ctx->pc == 0x1461C0u) {
        ctx->pc = 0x1461C0u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x1461C4u;
        goto label_1461c4;
    }
    ctx->pc = 0x1461BCu;
    {
        const bool branch_taken_0x1461bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1461C0u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        if (branch_taken_0x1461bc) {
            ctx->pc = 0x1461DCu;
            goto label_1461dc;
        }
    }
    ctx->pc = 0x1461C4u;
label_1461c4:
    // 0x1461c4: 0xafa200ac
    ctx->pc = 0x1461c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_1461c8:
    // 0x1461c8: 0x222102a
    ctx->pc = 0x1461c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
label_1461cc:
    // 0x1461cc: 0x8fa500ac
    ctx->pc = 0x1461ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1461d0:
    // 0x1461d0: 0x222280b
    ctx->pc = 0x1461d0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 17));
label_1461d4:
    // 0x1461d4: 0x10000006
label_1461d8:
    if (ctx->pc == 0x1461D8u) {
        ctx->pc = 0x1461D8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
        ctx->pc = 0x1461DCu;
        goto label_1461dc;
    }
    ctx->pc = 0x1461D4u;
    {
        const bool branch_taken_0x1461d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1461D8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
        if (branch_taken_0x1461d4) {
            ctx->pc = 0x1461F0u;
            goto label_1461f0;
        }
    }
    ctx->pc = 0x1461DCu;
label_1461dc:
    // 0x1461dc: 0x10000004
label_1461e0:
    if (ctx->pc == 0x1461E0u) {
        ctx->pc = 0x1461E0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 17));
        ctx->pc = 0x1461E4u;
        goto label_1461e4;
    }
    ctx->pc = 0x1461DCu;
    {
        const bool branch_taken_0x1461dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1461E0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 17));
        if (branch_taken_0x1461dc) {
            ctx->pc = 0x1461F0u;
            goto label_1461f0;
        }
    }
    ctx->pc = 0x1461E4u;
label_1461e4:
    // 0x1461e4: 0xc051554
label_1461e8:
    if (ctx->pc == 0x1461E8u) {
        ctx->pc = 0x1461E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1461ECu;
        goto label_1461ec;
    }
    ctx->pc = 0x1461E4u;
    SET_GPR_U32(ctx, 31, 0x1461ECu);
    ctx->pc = 0x1461E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1461ECu; }
        else if (ctx->pc != 0x1461ECu) { ctx->pc = 0x1461ECu; }
    }
    if (ctx->pc != 0x1461ECu) { return; }
    ctx->pc = 0x1461ECu;
label_1461ec:
    // 0x1461ec: 0xafa200ac
    ctx->pc = 0x1461ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_1461f0:
    // 0x1461f0: 0x33c20084
    ctx->pc = 0x1461f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 132));
label_1461f4:
    // 0x1461f4: 0xa3a00090
    ctx->pc = 0x1461f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 0));
label_1461f8:
    // 0x1461f8: 0x26510008
    ctx->pc = 0x1461f8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 8));
label_1461fc:
    // 0x1461fc: 0x10000092
label_146200:
    if (ctx->pc == 0x146200u) {
        ctx->pc = 0x146200u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->pc = 0x146204u;
        goto label_146204;
    }
    ctx->pc = 0x1461FCu;
    {
        const bool branch_taken_0x1461fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146200u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        if (branch_taken_0x1461fc) {
            ctx->pc = 0x146448u;
            goto label_146448;
        }
    }
    ctx->pc = 0x146204u;
label_146204:
    // 0x146204: 0x37de0010
    ctx->pc = 0x146204u;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 16));
label_146208:
    // 0x146208: 0x33c20010
    ctx->pc = 0x146208u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 16));
label_14620c:
    // 0x14620c: 0x10400004
label_146210:
    if (ctx->pc == 0x146210u) {
        ctx->pc = 0x146210u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        ctx->pc = 0x146214u;
        goto label_146214;
    }
    ctx->pc = 0x14620Cu;
    {
        const bool branch_taken_0x14620c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x146210u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        if (branch_taken_0x14620c) {
            ctx->pc = 0x146220u;
            goto label_146220;
        }
    }
    ctx->pc = 0x146214u;
label_146214:
    // 0x146214: 0x26940008
    ctx->pc = 0x146214u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_146218:
    // 0x146218: 0x10000006
label_14621c:
    if (ctx->pc == 0x14621Cu) {
        ctx->pc = 0x14621Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x146220u;
        goto label_146220;
    }
    ctx->pc = 0x146218u;
    {
        const bool branch_taken_0x146218 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14621Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x146218) {
            ctx->pc = 0x146234u;
            goto label_146234;
        }
    }
    ctx->pc = 0x146220u;
label_146220:
    // 0x146220: 0x10400003
label_146224:
    if (ctx->pc == 0x146224u) {
        ctx->pc = 0x146224u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x146228u;
        goto label_146228;
    }
    ctx->pc = 0x146220u;
    {
        const bool branch_taken_0x146220 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x146224u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x146220) {
            ctx->pc = 0x146230u;
            goto label_146230;
        }
    }
    ctx->pc = 0x146228u;
label_146228:
    // 0x146228: 0x10000002
label_14622c:
    if (ctx->pc == 0x14622Cu) {
        ctx->pc = 0x14622Cu;
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x146230u;
        goto label_146230;
    }
    ctx->pc = 0x146228u;
    {
        const bool branch_taken_0x146228 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14622Cu;
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x146228) {
            ctx->pc = 0x146234u;
            goto label_146234;
        }
    }
    ctx->pc = 0x146230u;
label_146230:
    // 0x146230: 0x9e90fff8
    ctx->pc = 0x146230u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_146234:
    // 0x146234: 0x10000017
label_146238:
    if (ctx->pc == 0x146238u) {
        ctx->pc = 0x146238u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x14623Cu;
        goto label_14623c;
    }
    ctx->pc = 0x146234u;
    {
        const bool branch_taken_0x146234 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146238u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x146234) {
            ctx->pc = 0x146294u;
            goto label_146294;
        }
    }
    ctx->pc = 0x14623Cu;
label_14623c:
    // 0x14623c: 0x3c02002b
    ctx->pc = 0x14623cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
label_146240:
    // 0x146240: 0x10000003
label_146244:
    if (ctx->pc == 0x146244u) {
        ctx->pc = 0x146244u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28944));
        ctx->pc = 0x146248u;
        goto label_146248;
    }
    ctx->pc = 0x146240u;
    {
        const bool branch_taken_0x146240 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146244u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28944));
        if (branch_taken_0x146240) {
            ctx->pc = 0x146250u;
            goto label_146250;
        }
    }
    ctx->pc = 0x146248u;
label_146248:
    // 0x146248: 0x3c02002b
    ctx->pc = 0x146248u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
label_14624c:
    // 0x14624c: 0x244270f0
    ctx->pc = 0x14624cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28912));
label_146250:
    // 0x146250: 0xafa200b0
    ctx->pc = 0x146250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_146254:
    // 0x146254: 0x33c20010
    ctx->pc = 0x146254u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 16));
label_146258:
    // 0x146258: 0x10400004
label_14625c:
    if (ctx->pc == 0x14625Cu) {
        ctx->pc = 0x14625Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        ctx->pc = 0x146260u;
        goto label_146260;
    }
    ctx->pc = 0x146258u;
    {
        const bool branch_taken_0x146258 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14625Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        if (branch_taken_0x146258) {
            ctx->pc = 0x14626Cu;
            goto label_14626c;
        }
    }
    ctx->pc = 0x146260u;
label_146260:
    // 0x146260: 0x26940008
    ctx->pc = 0x146260u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_146264:
    // 0x146264: 0x10000006
label_146268:
    if (ctx->pc == 0x146268u) {
        ctx->pc = 0x146268u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x14626Cu;
        goto label_14626c;
    }
    ctx->pc = 0x146264u;
    {
        const bool branch_taken_0x146264 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146268u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x146264) {
            ctx->pc = 0x146280u;
            goto label_146280;
        }
    }
    ctx->pc = 0x14626Cu;
label_14626c:
    // 0x14626c: 0x10400003
label_146270:
    if (ctx->pc == 0x146270u) {
        ctx->pc = 0x146270u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x146274u;
        goto label_146274;
    }
    ctx->pc = 0x14626Cu;
    {
        const bool branch_taken_0x14626c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x146270u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x14626c) {
            ctx->pc = 0x14627Cu;
            goto label_14627c;
        }
    }
    ctx->pc = 0x146274u;
label_146274:
    // 0x146274: 0x10000002
label_146278:
    if (ctx->pc == 0x146278u) {
        ctx->pc = 0x146278u;
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x14627Cu;
        goto label_14627c;
    }
    ctx->pc = 0x146274u;
    {
        const bool branch_taken_0x146274 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146278u;
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x146274) {
            ctx->pc = 0x146280u;
            goto label_146280;
        }
    }
    ctx->pc = 0x14627Cu;
label_14627c:
    // 0x14627c: 0x9e90fff8
    ctx->pc = 0x14627cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_146280:
    // 0x146280: 0x33c30001
    ctx->pc = 0x146280u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 30), 1));
label_146284:
    // 0x146284: 0x10600003
label_146288:
    if (ctx->pc == 0x146288u) {
        ctx->pc = 0x146288u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x14628Cu;
        goto label_14628c;
    }
    ctx->pc = 0x146284u;
    {
        const bool branch_taken_0x146284 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x146288u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x146284) {
            ctx->pc = 0x146294u;
            goto label_146294;
        }
    }
    ctx->pc = 0x14628Cu;
label_14628c:
    // 0x14628c: 0x37c20002
    ctx->pc = 0x14628cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 30), 2));
label_146290:
    // 0x146290: 0x50f00b
    ctx->pc = 0x146290u;
    if (GPR_U32(ctx, 16) != 0) SET_GPR_U32(ctx, 30, GPR_U32(ctx, 2));
label_146294:
    // 0x146294: 0xa3a00090
    ctx->pc = 0x146294u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 0));
label_146298:
    // 0x146298: 0x6200003
label_14629c:
    if (ctx->pc == 0x14629Cu) {
        ctx->pc = 0x14629Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 17));
        ctx->pc = 0x1462A0u;
        goto label_1462a0;
    }
    ctx->pc = 0x146298u;
    {
        const bool branch_taken_0x146298 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x14629Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 17));
        if (branch_taken_0x146298) {
            ctx->pc = 0x1462A8u;
            goto label_1462a8;
        }
    }
    ctx->pc = 0x1462A0u;
label_1462a0:
    // 0x1462a0: 0x2402ff7f
    ctx->pc = 0x1462a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967167));
label_1462a4:
    // 0x1462a4: 0x3c2f024
    ctx->pc = 0x1462a4u;
    SET_GPR_U32(ctx, 30, AND32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_1462a8:
    // 0x1462a8: 0x16000004
label_1462ac:
    if (ctx->pc == 0x1462ACu) {
        ctx->pc = 0x1462ACu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 120));
        ctx->pc = 0x1462B0u;
        goto label_1462b0;
    }
    ctx->pc = 0x1462A8u;
    {
        const bool branch_taken_0x1462a8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1462ACu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 120));
        if (branch_taken_0x1462a8) {
            ctx->pc = 0x1462BCu;
            goto label_1462bc;
        }
    }
    ctx->pc = 0x1462B0u;
label_1462b0:
    // 0x1462b0: 0x8fa300a8
    ctx->pc = 0x1462b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1462b4:
    // 0x1462b4: 0x10600054
label_1462b8:
    if (ctx->pc == 0x1462B8u) {
        ctx->pc = 0x1462B8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 132));
        ctx->pc = 0x1462BCu;
        goto label_1462bc;
    }
    ctx->pc = 0x1462B4u;
    {
        const bool branch_taken_0x1462b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1462B8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 132));
        if (branch_taken_0x1462b4) {
            ctx->pc = 0x146408u;
            goto label_146408;
        }
    }
    ctx->pc = 0x1462BCu;
label_1462bc:
    // 0x1462bc: 0x24020001
    ctx->pc = 0x1462bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1462c0:
    // 0x1462c0: 0x10820022
label_1462c4:
    if (ctx->pc == 0x1462C4u) {
        ctx->pc = 0x1462C4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 10));
        ctx->pc = 0x1462C8u;
        goto label_1462c8;
    }
    ctx->pc = 0x1462C0u;
    {
        const bool branch_taken_0x1462c0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1462C4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 10));
        if (branch_taken_0x1462c0) {
            ctx->pc = 0x14634Cu;
            goto label_14634c;
        }
    }
    ctx->pc = 0x1462C8u;
label_1462c8:
    // 0x1462c8: 0x1080000b
label_1462cc:
    if (ctx->pc == 0x1462CCu) {
        ctx->pc = 0x1462CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1462D0u;
        goto label_1462d0;
    }
    ctx->pc = 0x1462C8u;
    {
        const bool branch_taken_0x1462c8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1462CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1462c8) {
            ctx->pc = 0x1462F8u;
            goto label_1462f8;
        }
    }
    ctx->pc = 0x1462D0u;
label_1462d0:
    // 0x1462d0: 0x1082003d
label_1462d4:
    if (ctx->pc == 0x1462D4u) {
        ctx->pc = 0x1462D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
        ctx->pc = 0x1462D8u;
        goto label_1462d8;
    }
    ctx->pc = 0x1462D0u;
    {
        const bool branch_taken_0x1462d0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1462D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
        if (branch_taken_0x1462d0) {
            ctx->pc = 0x1463C8u;
            goto label_1463c8;
        }
    }
    ctx->pc = 0x1462D8u;
label_1462d8:
    // 0x1462d8: 0x33c40084
    ctx->pc = 0x1462d8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 30), 132));
label_1462dc:
    // 0x1462dc: 0x24537128
    ctx->pc = 0x1462dcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 28968));
label_1462e0:
    // 0x1462e0: 0xafa400bc
    ctx->pc = 0x1462e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
label_1462e4:
    // 0x1462e4: 0x260202d
    ctx->pc = 0x1462e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1462e8:
    // 0x1462e8: 0xc051554
label_1462ec:
    if (ctx->pc == 0x1462ECu) {
        ctx->pc = 0x1462ECu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x1462F0u;
        goto label_1462f0;
    }
    ctx->pc = 0x1462E8u;
    SET_GPR_U32(ctx, 31, 0x1462F0u);
    ctx->pc = 0x1462ECu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 8));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1462F0u; }
        else if (ctx->pc != 0x1462F0u) { ctx->pc = 0x1462F0u; }
    }
    if (ctx->pc != 0x1462F0u) { return; }
    ctx->pc = 0x1462F0u;
label_1462f0:
    // 0x1462f0: 0x10000055
label_1462f4:
    if (ctx->pc == 0x1462F4u) {
        ctx->pc = 0x1462F4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->pc = 0x1462F8u;
        goto label_1462f8;
    }
    ctx->pc = 0x1462F0u;
    {
        const bool branch_taken_0x1462f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1462F4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        if (branch_taken_0x1462f0) {
            ctx->pc = 0x146448u;
            goto label_146448;
        }
    }
    ctx->pc = 0x1462F8u;
label_1462f8:
    // 0x1462f8: 0x33c50084
    ctx->pc = 0x1462f8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 30), 132));
label_1462fc:
    // 0x1462fc: 0x26510008
    ctx->pc = 0x1462fcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 8));
label_146300:
    // 0x146300: 0xafa500bc
    ctx->pc = 0x146300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
label_146304:
    // 0x146304: 0x27b60050
    ctx->pc = 0x146304u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 80));
label_146308:
    // 0x146308: 0x33c30001
    ctx->pc = 0x146308u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 30), 1));
label_14630c:
    // 0x14630c: 0x0
    ctx->pc = 0x14630cu;
    // NOP
label_146310:
    // 0x146310: 0x32020007
    ctx->pc = 0x146310u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 7));
label_146314:
    // 0x146314: 0x2673ffff
    ctx->pc = 0x146314u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
label_146318:
    // 0x146318: 0x64420030
    ctx->pc = 0x146318u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)48);
label_14631c:
    // 0x14631c: 0x1080fa
    ctx->pc = 0x14631cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
label_146320:
    // 0x146320: 0x304200ff
    ctx->pc = 0x146320u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_146324:
    // 0x146324: 0xa2620000
    ctx->pc = 0x146324u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_146328:
    // 0x146328: 0x1600fff9
label_14632c:
    if (ctx->pc == 0x14632Cu) {
        ctx->pc = 0x146330u;
        goto label_146330;
    }
    ctx->pc = 0x146328u;
    {
        const bool branch_taken_0x146328 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x146328) {
            ctx->pc = 0x146310u;
            goto label_146310;
        }
    }
    ctx->pc = 0x146330u;
label_146330:
    // 0x146330: 0x10600038
label_146334:
    if (ctx->pc == 0x146334u) {
        ctx->pc = 0x146334u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x146338u;
        goto label_146338;
    }
    ctx->pc = 0x146330u;
    {
        const bool branch_taken_0x146330 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x146334u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x146330) {
            ctx->pc = 0x146414u;
            goto label_146414;
        }
    }
    ctx->pc = 0x146338u;
label_146338:
    // 0x146338: 0x10430037
label_14633c:
    if (ctx->pc == 0x14633Cu) {
        ctx->pc = 0x14633Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294967256));
        ctx->pc = 0x146340u;
        goto label_146340;
    }
    ctx->pc = 0x146338u;
    {
        const bool branch_taken_0x146338 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x14633Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294967256));
        if (branch_taken_0x146338) {
            ctx->pc = 0x146418u;
            goto label_146418;
        }
    }
    ctx->pc = 0x146340u;
label_146340:
    // 0x146340: 0x2673ffff
    ctx->pc = 0x146340u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
label_146344:
    // 0x146344: 0x10000033
label_146348:
    if (ctx->pc == 0x146348u) {
        ctx->pc = 0x146348u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x14634Cu;
        goto label_14634c;
    }
    ctx->pc = 0x146344u;
    {
        const bool branch_taken_0x146344 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146348u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x146344) {
            ctx->pc = 0x146414u;
            goto label_146414;
        }
    }
    ctx->pc = 0x14634Cu;
label_14634c:
    // 0x14634c: 0x14400016
label_146350:
    if (ctx->pc == 0x146350u) {
        ctx->pc = 0x146350u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 30), 132));
        ctx->pc = 0x146354u;
        goto label_146354;
    }
    ctx->pc = 0x14634Cu;
    {
        const bool branch_taken_0x14634c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x146350u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 30), 132));
        if (branch_taken_0x14634c) {
            ctx->pc = 0x1463A8u;
            goto label_1463a8;
        }
    }
    ctx->pc = 0x146354u;
label_146354:
    // 0x146354: 0x33c20084
    ctx->pc = 0x146354u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 132));
label_146358:
    // 0x146358: 0x26510008
    ctx->pc = 0x146358u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 8));
label_14635c:
    // 0x14635c: 0xafa200bc
    ctx->pc = 0x14635cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_146360:
    // 0x146360: 0x27b60050
    ctx->pc = 0x146360u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 80));
label_146364:
    // 0x146364: 0x0
    ctx->pc = 0x146364u;
    // NOP
label_146368:
    // 0x146368: 0x200202d
    ctx->pc = 0x146368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14636c:
    // 0x14636c: 0xc052a34
label_146370:
    if (ctx->pc == 0x146370u) {
        ctx->pc = 0x146370u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x146374u;
        goto label_146374;
    }
    ctx->pc = 0x14636Cu;
    SET_GPR_U32(ctx, 31, 0x146374u);
    ctx->pc = 0x146370u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x14A8D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x14a8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146374u; }
        else if (ctx->pc != 0x146374u) { ctx->pc = 0x146374u; }
    }
    if (ctx->pc != 0x146374u) { return; }
    ctx->pc = 0x146374u;
label_146374:
    // 0x146374: 0x2673ffff
    ctx->pc = 0x146374u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
label_146378:
    // 0x146378: 0x64420030
    ctx->pc = 0x146378u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)48);
label_14637c:
    // 0x14637c: 0x200202d
    ctx->pc = 0x14637cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_146380:
    // 0x146380: 0x304200ff
    ctx->pc = 0x146380u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_146384:
    // 0x146384: 0x2405000a
    ctx->pc = 0x146384u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
label_146388:
    // 0x146388: 0xc0528c0
label_14638c:
    if (ctx->pc == 0x14638Cu) {
        ctx->pc = 0x14638Cu;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x146390u;
        goto label_146390;
    }
    ctx->pc = 0x146388u;
    SET_GPR_U32(ctx, 31, 0x146390u);
    ctx->pc = 0x14638Cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14A300u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___udivdi3_0x14a300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146390u; }
        else if (ctx->pc != 0x146390u) { ctx->pc = 0x146390u; }
    }
    if (ctx->pc != 0x146390u) { return; }
    ctx->pc = 0x146390u;
label_146390:
    // 0x146390: 0x40802d
    ctx->pc = 0x146390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_146394:
    // 0x146394: 0x2e02000a
    ctx->pc = 0x146394u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 10));
label_146398:
    // 0x146398: 0x1040fff3
label_14639c:
    if (ctx->pc == 0x14639Cu) {
        ctx->pc = 0x14639Cu;
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)48);
        ctx->pc = 0x1463A0u;
        goto label_1463a0;
    }
    ctx->pc = 0x146398u;
    {
        const bool branch_taken_0x146398 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14639Cu;
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)48);
        if (branch_taken_0x146398) {
            ctx->pc = 0x146368u;
            goto label_146368;
        }
    }
    ctx->pc = 0x1463A0u;
label_1463a0:
    // 0x1463a0: 0x10000006
label_1463a4:
    if (ctx->pc == 0x1463A4u) {
        ctx->pc = 0x1463A4u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->pc = 0x1463A8u;
        goto label_1463a8;
    }
    ctx->pc = 0x1463A0u;
    {
        const bool branch_taken_0x1463a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1463A4u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
        if (branch_taken_0x1463a0) {
            ctx->pc = 0x1463BCu;
            goto label_1463bc;
        }
    }
    ctx->pc = 0x1463A8u;
label_1463a8:
    // 0x1463a8: 0x26510008
    ctx->pc = 0x1463a8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 8));
label_1463ac:
    // 0x1463ac: 0xafa300bc
    ctx->pc = 0x1463acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
label_1463b0:
    // 0x1463b0: 0x27b60050
    ctx->pc = 0x1463b0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 80));
label_1463b4:
    // 0x1463b4: 0x66020030
    ctx->pc = 0x1463b4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)48);
label_1463b8:
    // 0x1463b8: 0x2673ffff
    ctx->pc = 0x1463b8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
label_1463bc:
    // 0x1463bc: 0x304200ff
    ctx->pc = 0x1463bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_1463c0:
    // 0x1463c0: 0x10000014
label_1463c4:
    if (ctx->pc == 0x1463C4u) {
        ctx->pc = 0x1463C4u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1463C8u;
        goto label_1463c8;
    }
    ctx->pc = 0x1463C0u;
    {
        const bool branch_taken_0x1463c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1463C4u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1463c0) {
            ctx->pc = 0x146414u;
            goto label_146414;
        }
    }
    ctx->pc = 0x1463C8u;
label_1463c8:
    // 0x1463c8: 0x33c40084
    ctx->pc = 0x1463c8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 30), 132));
label_1463cc:
    // 0x1463cc: 0x26510008
    ctx->pc = 0x1463ccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 8));
label_1463d0:
    // 0x1463d0: 0xafa400bc
    ctx->pc = 0x1463d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
label_1463d4:
    // 0x1463d4: 0x27b60050
    ctx->pc = 0x1463d4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 80));
label_1463d8:
    // 0x1463d8: 0x3202000f
    ctx->pc = 0x1463d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 15));
label_1463dc:
    // 0x1463dc: 0x8fa500b0
    ctx->pc = 0x1463dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1463e0:
    // 0x1463e0: 0x2103c
    ctx->pc = 0x1463e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1463e4:
    // 0x1463e4: 0x2103f
    ctx->pc = 0x1463e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1463e8:
    // 0x1463e8: 0x2673ffff
    ctx->pc = 0x1463e8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
label_1463ec:
    // 0x1463ec: 0xa21021
    ctx->pc = 0x1463ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1463f0:
    // 0x1463f0: 0x10813a
    ctx->pc = 0x1463f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_1463f4:
    // 0x1463f4: 0x90430000
    ctx->pc = 0x1463f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1463f8:
    // 0x1463f8: 0x1600fff7
label_1463fc:
    if (ctx->pc == 0x1463FCu) {
        ctx->pc = 0x1463FCu;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x146400u;
        goto label_146400;
    }
    ctx->pc = 0x1463F8u;
    {
        const bool branch_taken_0x1463f8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1463FCu;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1463f8) {
            ctx->pc = 0x1463D8u;
            goto label_1463d8;
        }
    }
    ctx->pc = 0x146400u;
label_146400:
    // 0x146400: 0x10000005
label_146404:
    if (ctx->pc == 0x146404u) {
        ctx->pc = 0x146404u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294967256));
        ctx->pc = 0x146408u;
        goto label_146408;
    }
    ctx->pc = 0x146400u;
    {
        const bool branch_taken_0x146400 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146404u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294967256));
        if (branch_taken_0x146400) {
            ctx->pc = 0x146418u;
            goto label_146418;
        }
    }
    ctx->pc = 0x146408u;
label_146408:
    // 0x146408: 0x26510008
    ctx->pc = 0x146408u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 8));
label_14640c:
    // 0x14640c: 0xafa200bc
    ctx->pc = 0x14640cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_146410:
    // 0x146410: 0x27b60050
    ctx->pc = 0x146410u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 80));
label_146414:
    // 0x146414: 0x2662ffd8
    ctx->pc = 0x146414u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294967256));
label_146418:
    // 0x146418: 0x2c2b023
    ctx->pc = 0x146418u;
    SET_GPR_U32(ctx, 22, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_14641c:
    // 0x14641c: 0x1000000a
label_146420:
    if (ctx->pc == 0x146420u) {
        ctx->pc = 0x146420u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 22));
        ctx->pc = 0x146424u;
        goto label_146424;
    }
    ctx->pc = 0x14641Cu;
    {
        const bool branch_taken_0x14641c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146420u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 22));
        if (branch_taken_0x14641c) {
            ctx->pc = 0x146448u;
            goto label_146448;
        }
    }
    ctx->pc = 0x146424u;
label_146424:
    // 0x146424: 0x12e00135
label_146428:
    if (ctx->pc == 0x146428u) {
        ctx->pc = 0x146428u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x14642Cu;
        goto label_14642c;
    }
    ctx->pc = 0x146424u;
    {
        const bool branch_taken_0x146424 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x146428u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x146424) {
            ctx->pc = 0x1468FCu;
            goto label_1468fc;
        }
    }
    ctx->pc = 0x14642Cu;
label_14642c:
    // 0x14642c: 0x33c40084
    ctx->pc = 0x14642cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 30), 132));
label_146430:
    // 0x146430: 0xa3b70050
    ctx->pc = 0x146430u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 23));
label_146434:
    // 0x146434: 0x27b30050
    ctx->pc = 0x146434u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 80));
label_146438:
    // 0x146438: 0xa3a00090
    ctx->pc = 0x146438u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 0));
label_14643c:
    // 0x14643c: 0x26510008
    ctx->pc = 0x14643cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 8));
label_146440:
    // 0x146440: 0xafa300ac
    ctx->pc = 0x146440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_146444:
    // 0x146444: 0xafa400bc
    ctx->pc = 0x146444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
label_146448:
    // 0x146448: 0x8fb600ac
    ctx->pc = 0x146448u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_14644c:
    // 0x14644c: 0x8fa500a8
    ctx->pc = 0x14644cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_146450:
    // 0x146450: 0x83a30090
    ctx->pc = 0x146450u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
label_146454:
    // 0x146454: 0x2c5102a
    ctx->pc = 0x146454u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 5)));
label_146458:
    // 0x146458: 0x93a40090
    ctx->pc = 0x146458u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
label_14645c:
    // 0x14645c: 0x10600003
label_146460:
    if (ctx->pc == 0x146460u) {
        ctx->pc = 0x146460u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 5));
        ctx->pc = 0x146464u;
        goto label_146464;
    }
    ctx->pc = 0x14645Cu;
    {
        const bool branch_taken_0x14645c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x146460u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 5));
        if (branch_taken_0x14645c) {
            ctx->pc = 0x14646Cu;
            goto label_14646c;
        }
    }
    ctx->pc = 0x146464u;
label_146464:
    // 0x146464: 0x10000003
label_146468:
    if (ctx->pc == 0x146468u) {
        ctx->pc = 0x146468u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x14646Cu;
        goto label_14646c;
    }
    ctx->pc = 0x146464u;
    {
        const bool branch_taken_0x146464 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146468u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
        if (branch_taken_0x146464) {
            ctx->pc = 0x146474u;
            goto label_146474;
        }
    }
    ctx->pc = 0x14646Cu;
label_14646c:
    // 0x14646c: 0x33c20002
    ctx->pc = 0x14646cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 2));
label_146470:
    // 0x146470: 0x56b021
    ctx->pc = 0x146470u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_146474:
    // 0x146474: 0x8fa200bc
    ctx->pc = 0x146474u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_146478:
    // 0x146478: 0x14400037
label_14647c:
    if (ctx->pc == 0x14647Cu) {
        ctx->pc = 0x14647Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->pc = 0x146480u;
        goto label_146480;
    }
    ctx->pc = 0x146478u;
    {
        const bool branch_taken_0x146478 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14647Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 164)));
        if (branch_taken_0x146478) {
            ctx->pc = 0x146558u;
            goto label_146558;
        }
    }
    ctx->pc = 0x146480u;
label_146480:
    // 0x146480: 0x768023
    ctx->pc = 0x146480u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_146484:
    // 0x146484: 0x1a000034
label_146488:
    if (ctx->pc == 0x146488u) {
        ctx->pc = 0x146488u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        ctx->pc = 0x14648Cu;
        goto label_14648c;
    }
    ctx->pc = 0x146484u;
    {
        const bool branch_taken_0x146484 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x146488u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        if (branch_taken_0x146484) {
            ctx->pc = 0x146558u;
            goto label_146558;
        }
    }
    ctx->pc = 0x14648Cu;
label_14648c:
    // 0x14648c: 0x1440001c
label_146490:
    if (ctx->pc == 0x146490u) {
        ctx->pc = 0x146490u;
        SET_GPR_U32(ctx, 6, ((uint32_t)43 << 16));
        ctx->pc = 0x146494u;
        goto label_146494;
    }
    ctx->pc = 0x14648Cu;
    {
        const bool branch_taken_0x14648c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x146490u;
        SET_GPR_U32(ctx, 6, ((uint32_t)43 << 16));
        if (branch_taken_0x14648c) {
            ctx->pc = 0x146500u;
            goto label_146500;
        }
    }
    ctx->pc = 0x146494u;
label_146494:
    // 0x146494: 0x10000003
label_146498:
    if (ctx->pc == 0x146498u) {
        ctx->pc = 0x146498u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x14649Cu;
        goto label_14649c;
    }
    ctx->pc = 0x146494u;
    {
        const bool branch_taken_0x146494 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146498u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x146494) {
            ctx->pc = 0x1464A4u;
            goto label_1464a4;
        }
    }
    ctx->pc = 0x14649Cu;
label_14649c:
    // 0x14649c: 0x0
    ctx->pc = 0x14649cu;
    // NOP
label_1464a0:
    // 0x1464a0: 0x24020010
    ctx->pc = 0x1464a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_1464a4:
    // 0x1464a4: 0x24c470d0
    ctx->pc = 0x1464a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 28880));
label_1464a8:
    // 0x1464a8: 0xae440000
    ctx->pc = 0x1464a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_1464ac:
    // 0x1464ac: 0xae420004
    ctx->pc = 0x1464acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1464b0:
    // 0x1464b0: 0x220902d
    ctx->pc = 0x1464b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1464b4:
    // 0x1464b4: 0x8fa30008
    ctx->pc = 0x1464b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1464b8:
    // 0x1464b8: 0x8fa20004
    ctx->pc = 0x1464b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1464bc:
    // 0x1464bc: 0x24630010
    ctx->pc = 0x1464bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_1464c0:
    // 0x1464c0: 0x24420001
    ctx->pc = 0x1464c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1464c4:
    // 0x1464c4: 0xafa30008
    ctx->pc = 0x1464c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_1464c8:
    // 0x1464c8: 0x28440008
    ctx->pc = 0x1464c8u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_1464cc:
    // 0x1464cc: 0x14800008
label_1464d0:
    if (ctx->pc == 0x1464D0u) {
        ctx->pc = 0x1464D0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x1464D4u;
        goto label_1464d4;
    }
    ctx->pc = 0x1464CCu;
    {
        const bool branch_taken_0x1464cc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1464D0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x1464cc) {
            ctx->pc = 0x1464F0u;
            goto label_1464f0;
        }
    }
    ctx->pc = 0x1464D4u;
label_1464d4:
    // 0x1464d4: 0x8fa4009c
    ctx->pc = 0x1464d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_1464d8:
    // 0x1464d8: 0x3a0282d
    ctx->pc = 0x1464d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1464dc:
    // 0x1464dc: 0xc051708
label_1464e0:
    if (ctx->pc == 0x1464E0u) {
        ctx->pc = 0x1464E0u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 6));
        ctx->pc = 0x1464E4u;
        goto label_1464e4;
    }
    ctx->pc = 0x1464DCu;
    SET_GPR_U32(ctx, 31, 0x1464E4u);
    ctx->pc = 0x1464E0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 6));
    ctx->pc = 0x145C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x145c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1464E4u; }
        else if (ctx->pc != 0x1464E4u) { ctx->pc = 0x1464E4u; }
    }
    if (ctx->pc != 0x1464E4u) { return; }
    ctx->pc = 0x1464E4u;
label_1464e4:
    // 0x1464e4: 0x1440010d
label_1464e8:
    if (ctx->pc == 0x1464E8u) {
        ctx->pc = 0x1464E8u;
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x1464ECu;
        goto label_1464ec;
    }
    ctx->pc = 0x1464E4u;
    {
        const bool branch_taken_0x1464e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1464E8u;
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        if (branch_taken_0x1464e4) {
            ctx->pc = 0x14691Cu;
            goto label_14691c;
        }
    }
    ctx->pc = 0x1464ECu;
label_1464ec:
    // 0x1464ec: 0x27b20010
    ctx->pc = 0x1464ecu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
label_1464f0:
    // 0x1464f0: 0x2610fff0
    ctx->pc = 0x1464f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_1464f4:
    // 0x1464f4: 0x2a020011
    ctx->pc = 0x1464f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
label_1464f8:
    // 0x1464f8: 0x1040ffe9
label_1464fc:
    if (ctx->pc == 0x1464FCu) {
        ctx->pc = 0x1464FCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x146500u;
        goto label_146500;
    }
    ctx->pc = 0x1464F8u;
    {
        const bool branch_taken_0x1464f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1464FCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 8));
        if (branch_taken_0x1464f8) {
            ctx->pc = 0x1464A0u;
            goto label_1464a0;
        }
    }
    ctx->pc = 0x146500u;
label_146500:
    // 0x146500: 0x24c270d0
    ctx->pc = 0x146500u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 28880));
label_146504:
    // 0x146504: 0xae500004
    ctx->pc = 0x146504u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_146508:
    // 0x146508: 0xae420000
    ctx->pc = 0x146508u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_14650c:
    // 0x14650c: 0x8fa20004
    ctx->pc = 0x14650cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_146510:
    // 0x146510: 0x220902d
    ctx->pc = 0x146510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_146514:
    // 0x146514: 0x8fa30008
    ctx->pc = 0x146514u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_146518:
    // 0x146518: 0x24420001
    ctx->pc = 0x146518u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_14651c:
    // 0x14651c: 0x701821
    ctx->pc = 0x14651cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_146520:
    // 0x146520: 0x28440008
    ctx->pc = 0x146520u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_146524:
    // 0x146524: 0xafa30008
    ctx->pc = 0x146524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_146528:
    // 0x146528: 0x14800009
label_14652c:
    if (ctx->pc == 0x14652Cu) {
        ctx->pc = 0x14652Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x146530u;
        goto label_146530;
    }
    ctx->pc = 0x146528u;
    {
        const bool branch_taken_0x146528 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x14652Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x146528) {
            ctx->pc = 0x146550u;
            goto label_146550;
        }
    }
    ctx->pc = 0x146530u;
label_146530:
    // 0x146530: 0x8fa4009c
    ctx->pc = 0x146530u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_146534:
    // 0x146534: 0xc051708
label_146538:
    if (ctx->pc == 0x146538u) {
        ctx->pc = 0x146538u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14653Cu;
        goto label_14653c;
    }
    ctx->pc = 0x146534u;
    SET_GPR_U32(ctx, 31, 0x14653Cu);
    ctx->pc = 0x146538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x145c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14653Cu; }
        else if (ctx->pc != 0x14653Cu) { ctx->pc = 0x14653Cu; }
    }
    if (ctx->pc != 0x14653Cu) { return; }
    ctx->pc = 0x14653Cu;
label_14653c:
    // 0x14653c: 0x144000f7
label_146540:
    if (ctx->pc == 0x146540u) {
        ctx->pc = 0x146540u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x146544u;
        goto label_146544;
    }
    ctx->pc = 0x14653Cu;
    {
        const bool branch_taken_0x14653c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x146540u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x14653c) {
            ctx->pc = 0x14691Cu;
            goto label_14691c;
        }
    }
    ctx->pc = 0x146544u;
label_146544:
    // 0x146544: 0x27b10018
    ctx->pc = 0x146544u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 24));
label_146548:
    // 0x146548: 0x10000003
label_14654c:
    if (ctx->pc == 0x14654Cu) {
        ctx->pc = 0x14654Cu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x146550u;
        goto label_146550;
    }
    ctx->pc = 0x146548u;
    {
        const bool branch_taken_0x146548 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14654Cu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x146548) {
            ctx->pc = 0x146558u;
            goto label_146558;
        }
    }
    ctx->pc = 0x146550u;
label_146550:
    // 0x146550: 0x93a40090
    ctx->pc = 0x146550u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
label_146554:
    // 0x146554: 0x26510008
    ctx->pc = 0x146554u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 8));
label_146558:
    // 0x146558: 0x1080000f
label_14655c:
    if (ctx->pc == 0x14655Cu) {
        ctx->pc = 0x14655Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x146560u;
        goto label_146560;
    }
    ctx->pc = 0x146558u;
    {
        const bool branch_taken_0x146558 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x14655Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x146558) {
            ctx->pc = 0x146598u;
            goto label_146598;
        }
    }
    ctx->pc = 0x146560u;
label_146560:
    // 0x146560: 0x27a40090
    ctx->pc = 0x146560u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
label_146564:
    // 0x146564: 0xae440000
    ctx->pc = 0x146564u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_146568:
    // 0x146568: 0xae420004
    ctx->pc = 0x146568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_14656c:
    // 0x14656c: 0x220902d
    ctx->pc = 0x14656cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_146570:
    // 0x146570: 0x8fa30008
    ctx->pc = 0x146570u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_146574:
    // 0x146574: 0x8fa20004
    ctx->pc = 0x146574u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_146578:
    // 0x146578: 0x24630001
    ctx->pc = 0x146578u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_14657c:
    // 0x14657c: 0x24420001
    ctx->pc = 0x14657cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_146580:
    // 0x146580: 0xafa30008
    ctx->pc = 0x146580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_146584:
    // 0x146584: 0x28440008
    ctx->pc = 0x146584u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_146588:
    // 0x146588: 0x1480001c
label_14658c:
    if (ctx->pc == 0x14658Cu) {
        ctx->pc = 0x14658Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x146590u;
        goto label_146590;
    }
    ctx->pc = 0x146588u;
    {
        const bool branch_taken_0x146588 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x14658Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x146588) {
            ctx->pc = 0x1465FCu;
            goto label_1465fc;
        }
    }
    ctx->pc = 0x146590u;
label_146590:
    // 0x146590: 0x10000014
label_146594:
    if (ctx->pc == 0x146594u) {
        ctx->pc = 0x146594u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->pc = 0x146598u;
        goto label_146598;
    }
    ctx->pc = 0x146590u;
    {
        const bool branch_taken_0x146590 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146594u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 156)));
        if (branch_taken_0x146590) {
            ctx->pc = 0x1465E4u;
            goto label_1465e4;
        }
    }
    ctx->pc = 0x146598u;
label_146598:
    // 0x146598: 0x33c20002
    ctx->pc = 0x146598u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 2));
label_14659c:
    // 0x14659c: 0x10400018
label_1465a0:
    if (ctx->pc == 0x1465A0u) {
        ctx->pc = 0x1465A0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x1465A4u;
        goto label_1465a4;
    }
    ctx->pc = 0x14659Cu;
    {
        const bool branch_taken_0x14659c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1465A0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x14659c) {
            ctx->pc = 0x146600u;
            goto label_146600;
        }
    }
    ctx->pc = 0x1465A4u;
label_1465a4:
    // 0x1465a4: 0xa3b70081
    ctx->pc = 0x1465a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 129), (uint8_t)GPR_U32(ctx, 23));
label_1465a8:
    // 0x1465a8: 0xa3a30080
    ctx->pc = 0x1465a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 3));
label_1465ac:
    // 0x1465ac: 0x24020002
    ctx->pc = 0x1465acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1465b0:
    // 0x1465b0: 0x27a30080
    ctx->pc = 0x1465b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 128));
label_1465b4:
    // 0x1465b4: 0xae420004
    ctx->pc = 0x1465b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1465b8:
    // 0x1465b8: 0xae430000
    ctx->pc = 0x1465b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1465bc:
    // 0x1465bc: 0x220902d
    ctx->pc = 0x1465bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1465c0:
    // 0x1465c0: 0x8fa40008
    ctx->pc = 0x1465c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1465c4:
    // 0x1465c4: 0x8fa20004
    ctx->pc = 0x1465c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1465c8:
    // 0x1465c8: 0x24840002
    ctx->pc = 0x1465c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
label_1465cc:
    // 0x1465cc: 0x24420001
    ctx->pc = 0x1465ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1465d0:
    // 0x1465d0: 0xafa40008
    ctx->pc = 0x1465d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_1465d4:
    // 0x1465d4: 0x28430008
    ctx->pc = 0x1465d4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 8));
label_1465d8:
    // 0x1465d8: 0x14600008
label_1465dc:
    if (ctx->pc == 0x1465DCu) {
        ctx->pc = 0x1465DCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x1465E0u;
        goto label_1465e0;
    }
    ctx->pc = 0x1465D8u;
    {
        const bool branch_taken_0x1465d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1465DCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x1465d8) {
            ctx->pc = 0x1465FCu;
            goto label_1465fc;
        }
    }
    ctx->pc = 0x1465E0u;
label_1465e0:
    // 0x1465e0: 0x8fa4009c
    ctx->pc = 0x1465e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_1465e4:
    // 0x1465e4: 0xc051708
label_1465e8:
    if (ctx->pc == 0x1465E8u) {
        ctx->pc = 0x1465E8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1465ECu;
        goto label_1465ec;
    }
    ctx->pc = 0x1465E4u;
    SET_GPR_U32(ctx, 31, 0x1465ECu);
    ctx->pc = 0x1465E8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x145c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1465ECu; }
        else if (ctx->pc != 0x1465ECu) { ctx->pc = 0x1465ECu; }
    }
    if (ctx->pc != 0x1465ECu) { return; }
    ctx->pc = 0x1465ECu;
label_1465ec:
    // 0x1465ec: 0x144000cb
label_1465f0:
    if (ctx->pc == 0x1465F0u) {
        ctx->pc = 0x1465F0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1465F4u;
        goto label_1465f4;
    }
    ctx->pc = 0x1465ECu;
    {
        const bool branch_taken_0x1465ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1465F0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x1465ec) {
            ctx->pc = 0x14691Cu;
            goto label_14691c;
        }
    }
    ctx->pc = 0x1465F4u;
label_1465f4:
    // 0x1465f4: 0x10000002
label_1465f8:
    if (ctx->pc == 0x1465F8u) {
        ctx->pc = 0x1465F8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 24));
        ctx->pc = 0x1465FCu;
        goto label_1465fc;
    }
    ctx->pc = 0x1465F4u;
    {
        const bool branch_taken_0x1465f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1465F8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 24));
        if (branch_taken_0x1465f4) {
            ctx->pc = 0x146600u;
            goto label_146600;
        }
    }
    ctx->pc = 0x1465FCu;
label_1465fc:
    // 0x1465fc: 0x26510008
    ctx->pc = 0x1465fcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 8));
label_146600:
    // 0x146600: 0x8fa400bc
    ctx->pc = 0x146600u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_146604:
    // 0x146604: 0x24020080
    ctx->pc = 0x146604u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_146608:
    // 0x146608: 0x14820034
label_14660c:
    if (ctx->pc == 0x14660Cu) {
        ctx->pc = 0x14660Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->pc = 0x146610u;
        goto label_146610;
    }
    ctx->pc = 0x146608u;
    {
        const bool branch_taken_0x146608 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x14660Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 168)));
        if (branch_taken_0x146608) {
            ctx->pc = 0x1466DCu;
            goto label_1466dc;
        }
    }
    ctx->pc = 0x146610u;
label_146610:
    // 0x146610: 0x8fa500a4
    ctx->pc = 0x146610u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_146614:
    // 0x146614: 0xb68023
    ctx->pc = 0x146614u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_146618:
    // 0x146618: 0x1a00002f
label_14661c:
    if (ctx->pc == 0x14661Cu) {
        ctx->pc = 0x14661Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        ctx->pc = 0x146620u;
        goto label_146620;
    }
    ctx->pc = 0x146618u;
    {
        const bool branch_taken_0x146618 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x14661Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        if (branch_taken_0x146618) {
            ctx->pc = 0x1466D8u;
            goto label_1466d8;
        }
    }
    ctx->pc = 0x146620u;
label_146620:
    // 0x146620: 0x14400019
label_146624:
    if (ctx->pc == 0x146624u) {
        ctx->pc = 0x146624u;
        SET_GPR_U32(ctx, 23, ((uint32_t)43 << 16));
        ctx->pc = 0x146628u;
        goto label_146628;
    }
    ctx->pc = 0x146620u;
    {
        const bool branch_taken_0x146620 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x146624u;
        SET_GPR_U32(ctx, 23, ((uint32_t)43 << 16));
        if (branch_taken_0x146620) {
            ctx->pc = 0x146688u;
            goto label_146688;
        }
    }
    ctx->pc = 0x146628u;
label_146628:
    // 0x146628: 0x10000002
label_14662c:
    if (ctx->pc == 0x14662Cu) {
        ctx->pc = 0x14662Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x146630u;
        goto label_146630;
    }
    ctx->pc = 0x146628u;
    {
        const bool branch_taken_0x146628 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14662Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x146628) {
            ctx->pc = 0x146634u;
            goto label_146634;
        }
    }
    ctx->pc = 0x146630u;
label_146630:
    // 0x146630: 0x24020010
    ctx->pc = 0x146630u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_146634:
    // 0x146634: 0x26e470e0
    ctx->pc = 0x146634u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 23), 28896));
label_146638:
    // 0x146638: 0xae440000
    ctx->pc = 0x146638u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_14663c:
    // 0x14663c: 0xae420004
    ctx->pc = 0x14663cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_146640:
    // 0x146640: 0x220902d
    ctx->pc = 0x146640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_146644:
    // 0x146644: 0x8fa30008
    ctx->pc = 0x146644u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_146648:
    // 0x146648: 0x8fa20004
    ctx->pc = 0x146648u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_14664c:
    // 0x14664c: 0x24630010
    ctx->pc = 0x14664cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_146650:
    // 0x146650: 0x24420001
    ctx->pc = 0x146650u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_146654:
    // 0x146654: 0xafa30008
    ctx->pc = 0x146654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_146658:
    // 0x146658: 0x28440008
    ctx->pc = 0x146658u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_14665c:
    // 0x14665c: 0x14800006
label_146660:
    if (ctx->pc == 0x146660u) {
        ctx->pc = 0x146660u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x146664u;
        goto label_146664;
    }
    ctx->pc = 0x14665Cu;
    {
        const bool branch_taken_0x14665c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x146660u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x14665c) {
            ctx->pc = 0x146678u;
            goto label_146678;
        }
    }
    ctx->pc = 0x146664u;
label_146664:
    // 0x146664: 0x8fa4009c
    ctx->pc = 0x146664u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_146668:
    // 0x146668: 0xc051708
label_14666c:
    if (ctx->pc == 0x14666Cu) {
        ctx->pc = 0x14666Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x146670u;
        goto label_146670;
    }
    ctx->pc = 0x146668u;
    SET_GPR_U32(ctx, 31, 0x146670u);
    ctx->pc = 0x14666Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x145c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146670u; }
        else if (ctx->pc != 0x146670u) { ctx->pc = 0x146670u; }
    }
    if (ctx->pc != 0x146670u) { return; }
    ctx->pc = 0x146670u;
label_146670:
    // 0x146670: 0x144000aa
label_146674:
    if (ctx->pc == 0x146674u) {
        ctx->pc = 0x146674u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x146678u;
        goto label_146678;
    }
    ctx->pc = 0x146670u;
    {
        const bool branch_taken_0x146670 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x146674u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x146670) {
            ctx->pc = 0x14691Cu;
            goto label_14691c;
        }
    }
    ctx->pc = 0x146678u;
label_146678:
    // 0x146678: 0x2610fff0
    ctx->pc = 0x146678u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_14667c:
    // 0x14667c: 0x2a020011
    ctx->pc = 0x14667cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
label_146680:
    // 0x146680: 0x1040ffeb
label_146684:
    if (ctx->pc == 0x146684u) {
        ctx->pc = 0x146684u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x146688u;
        goto label_146688;
    }
    ctx->pc = 0x146680u;
    {
        const bool branch_taken_0x146680 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x146684u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 8));
        if (branch_taken_0x146680) {
            ctx->pc = 0x146630u;
            goto label_146630;
        }
    }
    ctx->pc = 0x146688u;
label_146688:
    // 0x146688: 0x26e270e0
    ctx->pc = 0x146688u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 23), 28896));
label_14668c:
    // 0x14668c: 0xae500004
    ctx->pc = 0x14668cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_146690:
    // 0x146690: 0xae420000
    ctx->pc = 0x146690u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_146694:
    // 0x146694: 0x8fa20004
    ctx->pc = 0x146694u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_146698:
    // 0x146698: 0x220902d
    ctx->pc = 0x146698u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14669c:
    // 0x14669c: 0x8fa30008
    ctx->pc = 0x14669cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1466a0:
    // 0x1466a0: 0x24420001
    ctx->pc = 0x1466a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1466a4:
    // 0x1466a4: 0x701821
    ctx->pc = 0x1466a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1466a8:
    // 0x1466a8: 0x28440008
    ctx->pc = 0x1466a8u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_1466ac:
    // 0x1466ac: 0xafa30008
    ctx->pc = 0x1466acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_1466b0:
    // 0x1466b0: 0x14800008
label_1466b4:
    if (ctx->pc == 0x1466B4u) {
        ctx->pc = 0x1466B4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x1466B8u;
        goto label_1466b8;
    }
    ctx->pc = 0x1466B0u;
    {
        const bool branch_taken_0x1466b0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1466B4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x1466b0) {
            ctx->pc = 0x1466D4u;
            goto label_1466d4;
        }
    }
    ctx->pc = 0x1466B8u;
label_1466b8:
    // 0x1466b8: 0x8fa4009c
    ctx->pc = 0x1466b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_1466bc:
    // 0x1466bc: 0xc051708
label_1466c0:
    if (ctx->pc == 0x1466C0u) {
        ctx->pc = 0x1466C0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1466C4u;
        goto label_1466c4;
    }
    ctx->pc = 0x1466BCu;
    SET_GPR_U32(ctx, 31, 0x1466C4u);
    ctx->pc = 0x1466C0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x145c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1466C4u; }
        else if (ctx->pc != 0x1466C4u) { ctx->pc = 0x1466C4u; }
    }
    if (ctx->pc != 0x1466C4u) { return; }
    ctx->pc = 0x1466C4u;
label_1466c4:
    // 0x1466c4: 0x14400095
label_1466c8:
    if (ctx->pc == 0x1466C8u) {
        ctx->pc = 0x1466C8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1466CCu;
        goto label_1466cc;
    }
    ctx->pc = 0x1466C4u;
    {
        const bool branch_taken_0x1466c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1466C8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x1466c4) {
            ctx->pc = 0x14691Cu;
            goto label_14691c;
        }
    }
    ctx->pc = 0x1466CCu;
label_1466cc:
    // 0x1466cc: 0x10000002
label_1466d0:
    if (ctx->pc == 0x1466D0u) {
        ctx->pc = 0x1466D0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 24));
        ctx->pc = 0x1466D4u;
        goto label_1466d4;
    }
    ctx->pc = 0x1466CCu;
    {
        const bool branch_taken_0x1466cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1466D0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 24));
        if (branch_taken_0x1466cc) {
            ctx->pc = 0x1466D8u;
            goto label_1466d8;
        }
    }
    ctx->pc = 0x1466D4u;
label_1466d4:
    // 0x1466d4: 0x26510008
    ctx->pc = 0x1466d4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 8));
label_1466d8:
    // 0x1466d8: 0x8fa200a8
    ctx->pc = 0x1466d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1466dc:
    // 0x1466dc: 0x8fa300ac
    ctx->pc = 0x1466dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1466e0:
    // 0x1466e0: 0x438023
    ctx->pc = 0x1466e0u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1466e4:
    // 0x1466e4: 0x1a000030
label_1466e8:
    if (ctx->pc == 0x1466E8u) {
        ctx->pc = 0x1466E8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        ctx->pc = 0x1466ECu;
        goto label_1466ec;
    }
    ctx->pc = 0x1466E4u;
    {
        const bool branch_taken_0x1466e4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1466E8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        if (branch_taken_0x1466e4) {
            ctx->pc = 0x1467A8u;
            goto label_1467a8;
        }
    }
    ctx->pc = 0x1466ECu;
label_1466ec:
    // 0x1466ec: 0x1440001a
label_1466f0:
    if (ctx->pc == 0x1466F0u) {
        ctx->pc = 0x1466F0u;
        SET_GPR_U32(ctx, 23, ((uint32_t)43 << 16));
        ctx->pc = 0x1466F4u;
        goto label_1466f4;
    }
    ctx->pc = 0x1466ECu;
    {
        const bool branch_taken_0x1466ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1466F0u;
        SET_GPR_U32(ctx, 23, ((uint32_t)43 << 16));
        if (branch_taken_0x1466ec) {
            ctx->pc = 0x146758u;
            goto label_146758;
        }
    }
    ctx->pc = 0x1466F4u;
label_1466f4:
    // 0x1466f4: 0x10000003
label_1466f8:
    if (ctx->pc == 0x1466F8u) {
        ctx->pc = 0x1466F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1466FCu;
        goto label_1466fc;
    }
    ctx->pc = 0x1466F4u;
    {
        const bool branch_taken_0x1466f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1466F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x1466f4) {
            ctx->pc = 0x146704u;
            goto label_146704;
        }
    }
    ctx->pc = 0x1466FCu;
label_1466fc:
    // 0x1466fc: 0x0
    ctx->pc = 0x1466fcu;
    // NOP
label_146700:
    // 0x146700: 0x24020010
    ctx->pc = 0x146700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_146704:
    // 0x146704: 0x26e470e0
    ctx->pc = 0x146704u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 23), 28896));
label_146708:
    // 0x146708: 0xae440000
    ctx->pc = 0x146708u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_14670c:
    // 0x14670c: 0xae420004
    ctx->pc = 0x14670cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_146710:
    // 0x146710: 0x220902d
    ctx->pc = 0x146710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_146714:
    // 0x146714: 0x8fa30008
    ctx->pc = 0x146714u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_146718:
    // 0x146718: 0x8fa20004
    ctx->pc = 0x146718u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_14671c:
    // 0x14671c: 0x24630010
    ctx->pc = 0x14671cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_146720:
    // 0x146720: 0x24420001
    ctx->pc = 0x146720u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_146724:
    // 0x146724: 0xafa30008
    ctx->pc = 0x146724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_146728:
    // 0x146728: 0x28440008
    ctx->pc = 0x146728u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_14672c:
    // 0x14672c: 0x14800006
label_146730:
    if (ctx->pc == 0x146730u) {
        ctx->pc = 0x146730u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x146734u;
        goto label_146734;
    }
    ctx->pc = 0x14672Cu;
    {
        const bool branch_taken_0x14672c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x146730u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x14672c) {
            ctx->pc = 0x146748u;
            goto label_146748;
        }
    }
    ctx->pc = 0x146734u;
label_146734:
    // 0x146734: 0x8fa4009c
    ctx->pc = 0x146734u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_146738:
    // 0x146738: 0xc051708
label_14673c:
    if (ctx->pc == 0x14673Cu) {
        ctx->pc = 0x14673Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x146740u;
        goto label_146740;
    }
    ctx->pc = 0x146738u;
    SET_GPR_U32(ctx, 31, 0x146740u);
    ctx->pc = 0x14673Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x145c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146740u; }
        else if (ctx->pc != 0x146740u) { ctx->pc = 0x146740u; }
    }
    if (ctx->pc != 0x146740u) { return; }
    ctx->pc = 0x146740u;
label_146740:
    // 0x146740: 0x14400076
label_146744:
    if (ctx->pc == 0x146744u) {
        ctx->pc = 0x146744u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x146748u;
        goto label_146748;
    }
    ctx->pc = 0x146740u;
    {
        const bool branch_taken_0x146740 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x146744u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x146740) {
            ctx->pc = 0x14691Cu;
            goto label_14691c;
        }
    }
    ctx->pc = 0x146748u;
label_146748:
    // 0x146748: 0x2610fff0
    ctx->pc = 0x146748u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_14674c:
    // 0x14674c: 0x2a020011
    ctx->pc = 0x14674cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
label_146750:
    // 0x146750: 0x1040ffeb
label_146754:
    if (ctx->pc == 0x146754u) {
        ctx->pc = 0x146754u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x146758u;
        goto label_146758;
    }
    ctx->pc = 0x146750u;
    {
        const bool branch_taken_0x146750 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x146754u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 8));
        if (branch_taken_0x146750) {
            ctx->pc = 0x146700u;
            goto label_146700;
        }
    }
    ctx->pc = 0x146758u;
label_146758:
    // 0x146758: 0x26e270e0
    ctx->pc = 0x146758u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 23), 28896));
label_14675c:
    // 0x14675c: 0xae500004
    ctx->pc = 0x14675cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_146760:
    // 0x146760: 0xae420000
    ctx->pc = 0x146760u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_146764:
    // 0x146764: 0x8fa20004
    ctx->pc = 0x146764u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_146768:
    // 0x146768: 0x220902d
    ctx->pc = 0x146768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14676c:
    // 0x14676c: 0x8fa30008
    ctx->pc = 0x14676cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_146770:
    // 0x146770: 0x24420001
    ctx->pc = 0x146770u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_146774:
    // 0x146774: 0x701821
    ctx->pc = 0x146774u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_146778:
    // 0x146778: 0x28440008
    ctx->pc = 0x146778u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_14677c:
    // 0x14677c: 0xafa30008
    ctx->pc = 0x14677cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_146780:
    // 0x146780: 0x14800008
label_146784:
    if (ctx->pc == 0x146784u) {
        ctx->pc = 0x146784u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x146788u;
        goto label_146788;
    }
    ctx->pc = 0x146780u;
    {
        const bool branch_taken_0x146780 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x146784u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x146780) {
            ctx->pc = 0x1467A4u;
            goto label_1467a4;
        }
    }
    ctx->pc = 0x146788u;
label_146788:
    // 0x146788: 0x8fa4009c
    ctx->pc = 0x146788u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_14678c:
    // 0x14678c: 0xc051708
label_146790:
    if (ctx->pc == 0x146790u) {
        ctx->pc = 0x146790u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x146794u;
        goto label_146794;
    }
    ctx->pc = 0x14678Cu;
    SET_GPR_U32(ctx, 31, 0x146794u);
    ctx->pc = 0x146790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x145c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146794u; }
        else if (ctx->pc != 0x146794u) { ctx->pc = 0x146794u; }
    }
    if (ctx->pc != 0x146794u) { return; }
    ctx->pc = 0x146794u;
label_146794:
    // 0x146794: 0x14400061
label_146798:
    if (ctx->pc == 0x146798u) {
        ctx->pc = 0x146798u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x14679Cu;
        goto label_14679c;
    }
    ctx->pc = 0x146794u;
    {
        const bool branch_taken_0x146794 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x146798u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x146794) {
            ctx->pc = 0x14691Cu;
            goto label_14691c;
        }
    }
    ctx->pc = 0x14679Cu;
label_14679c:
    // 0x14679c: 0x10000002
label_1467a0:
    if (ctx->pc == 0x1467A0u) {
        ctx->pc = 0x1467A0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 24));
        ctx->pc = 0x1467A4u;
        goto label_1467a4;
    }
    ctx->pc = 0x14679Cu;
    {
        const bool branch_taken_0x14679c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1467A0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 24));
        if (branch_taken_0x14679c) {
            ctx->pc = 0x1467A8u;
            goto label_1467a8;
        }
    }
    ctx->pc = 0x1467A4u;
label_1467a4:
    // 0x1467a4: 0x26510008
    ctx->pc = 0x1467a4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 8));
label_1467a8:
    // 0x1467a8: 0x8fa400ac
    ctx->pc = 0x1467a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1467ac:
    // 0x1467ac: 0xae530000
    ctx->pc = 0x1467acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_1467b0:
    // 0x1467b0: 0xae440004
    ctx->pc = 0x1467b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
label_1467b4:
    // 0x1467b4: 0x220902d
    ctx->pc = 0x1467b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1467b8:
    // 0x1467b8: 0x8fa20008
    ctx->pc = 0x1467b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1467bc:
    // 0x1467bc: 0x8fa30004
    ctx->pc = 0x1467bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1467c0:
    // 0x1467c0: 0x441021
    ctx->pc = 0x1467c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1467c4:
    // 0x1467c4: 0x24630001
    ctx->pc = 0x1467c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1467c8:
    // 0x1467c8: 0xafa20008
    ctx->pc = 0x1467c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_1467cc:
    // 0x1467cc: 0x28640008
    ctx->pc = 0x1467ccu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 8));
label_1467d0:
    // 0x1467d0: 0x14800006
label_1467d4:
    if (ctx->pc == 0x1467D4u) {
        ctx->pc = 0x1467D4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1467D8u;
        goto label_1467d8;
    }
    ctx->pc = 0x1467D0u;
    {
        const bool branch_taken_0x1467d0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1467D4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1467d0) {
            ctx->pc = 0x1467ECu;
            goto label_1467ec;
        }
    }
    ctx->pc = 0x1467D8u;
label_1467d8:
    // 0x1467d8: 0x8fa4009c
    ctx->pc = 0x1467d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_1467dc:
    // 0x1467dc: 0xc051708
label_1467e0:
    if (ctx->pc == 0x1467E0u) {
        ctx->pc = 0x1467E0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1467E4u;
        goto label_1467e4;
    }
    ctx->pc = 0x1467DCu;
    SET_GPR_U32(ctx, 31, 0x1467E4u);
    ctx->pc = 0x1467E0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x145c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1467E4u; }
        else if (ctx->pc != 0x1467E4u) { ctx->pc = 0x1467E4u; }
    }
    if (ctx->pc != 0x1467E4u) { return; }
    ctx->pc = 0x1467E4u;
label_1467e4:
    // 0x1467e4: 0x1440004d
label_1467e8:
    if (ctx->pc == 0x1467E8u) {
        ctx->pc = 0x1467E8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1467ECu;
        goto label_1467ec;
    }
    ctx->pc = 0x1467E4u;
    {
        const bool branch_taken_0x1467e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1467E8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x1467e4) {
            ctx->pc = 0x14691Cu;
            goto label_14691c;
        }
    }
    ctx->pc = 0x1467ECu;
label_1467ec:
    // 0x1467ec: 0x33c20004
    ctx->pc = 0x1467ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 4));
label_1467f0:
    // 0x1467f0: 0x10400031
label_1467f4:
    if (ctx->pc == 0x1467F4u) {
        ctx->pc = 0x1467F4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->pc = 0x1467F8u;
        goto label_1467f8;
    }
    ctx->pc = 0x1467F0u;
    {
        const bool branch_taken_0x1467f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1467F4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 164)));
        if (branch_taken_0x1467f0) {
            ctx->pc = 0x1468B8u;
            goto label_1468b8;
        }
    }
    ctx->pc = 0x1467F8u;
label_1467f8:
    // 0x1467f8: 0xb68023
    ctx->pc = 0x1467f8u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_1467fc:
    // 0x1467fc: 0x1a00002e
label_146800:
    if (ctx->pc == 0x146800u) {
        ctx->pc = 0x146800u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        ctx->pc = 0x146804u;
        goto label_146804;
    }
    ctx->pc = 0x1467FCu;
    {
        const bool branch_taken_0x1467fc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x146800u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        if (branch_taken_0x1467fc) {
            ctx->pc = 0x1468B8u;
            goto label_1468b8;
        }
    }
    ctx->pc = 0x146804u;
label_146804:
    // 0x146804: 0x1440001c
label_146808:
    if (ctx->pc == 0x146808u) {
        ctx->pc = 0x146808u;
        SET_GPR_U32(ctx, 6, ((uint32_t)43 << 16));
        ctx->pc = 0x14680Cu;
        goto label_14680c;
    }
    ctx->pc = 0x146804u;
    {
        const bool branch_taken_0x146804 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x146808u;
        SET_GPR_U32(ctx, 6, ((uint32_t)43 << 16));
        if (branch_taken_0x146804) {
            ctx->pc = 0x146878u;
            goto label_146878;
        }
    }
    ctx->pc = 0x14680Cu;
label_14680c:
    // 0x14680c: 0x0
    ctx->pc = 0x14680cu;
    // NOP
label_146810:
    // 0x146810: 0x24020010
    ctx->pc = 0x146810u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_146814:
    // 0x146814: 0x24c470d0
    ctx->pc = 0x146814u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 28880));
label_146818:
    // 0x146818: 0xae440000
    ctx->pc = 0x146818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_14681c:
    // 0x14681c: 0xae420004
    ctx->pc = 0x14681cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_146820:
    // 0x146820: 0x26520008
    ctx->pc = 0x146820u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 8));
label_146824:
    // 0x146824: 0x8fa30008
    ctx->pc = 0x146824u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_146828:
    // 0x146828: 0x8fa20004
    ctx->pc = 0x146828u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_14682c:
    // 0x14682c: 0x24630010
    ctx->pc = 0x14682cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_146830:
    // 0x146830: 0x24420001
    ctx->pc = 0x146830u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_146834:
    // 0x146834: 0xafa30008
    ctx->pc = 0x146834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_146838:
    // 0x146838: 0x28440008
    ctx->pc = 0x146838u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_14683c:
    // 0x14683c: 0x14800008
label_146840:
    if (ctx->pc == 0x146840u) {
        ctx->pc = 0x146840u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x146844u;
        goto label_146844;
    }
    ctx->pc = 0x14683Cu;
    {
        const bool branch_taken_0x14683c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x146840u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x14683c) {
            ctx->pc = 0x146860u;
            goto label_146860;
        }
    }
    ctx->pc = 0x146844u;
label_146844:
    // 0x146844: 0x8fa4009c
    ctx->pc = 0x146844u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_146848:
    // 0x146848: 0x3a0282d
    ctx->pc = 0x146848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_14684c:
    // 0x14684c: 0xc051708
label_146850:
    if (ctx->pc == 0x146850u) {
        ctx->pc = 0x146850u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 6));
        ctx->pc = 0x146854u;
        goto label_146854;
    }
    ctx->pc = 0x14684Cu;
    SET_GPR_U32(ctx, 31, 0x146854u);
    ctx->pc = 0x146850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 6));
    ctx->pc = 0x145C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x145c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146854u; }
        else if (ctx->pc != 0x146854u) { ctx->pc = 0x146854u; }
    }
    if (ctx->pc != 0x146854u) { return; }
    ctx->pc = 0x146854u;
label_146854:
    // 0x146854: 0x14400031
label_146858:
    if (ctx->pc == 0x146858u) {
        ctx->pc = 0x146858u;
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x14685Cu;
        goto label_14685c;
    }
    ctx->pc = 0x146854u;
    {
        const bool branch_taken_0x146854 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x146858u;
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        if (branch_taken_0x146854) {
            ctx->pc = 0x14691Cu;
            goto label_14691c;
        }
    }
    ctx->pc = 0x14685Cu;
label_14685c:
    // 0x14685c: 0x27b20010
    ctx->pc = 0x14685cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
label_146860:
    // 0x146860: 0x2610fff0
    ctx->pc = 0x146860u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_146864:
    // 0x146864: 0x2a020011
    ctx->pc = 0x146864u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
label_146868:
    // 0x146868: 0x1040ffe9
label_14686c:
    if (ctx->pc == 0x14686Cu) {
        ctx->pc = 0x14686Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 28880));
        ctx->pc = 0x146870u;
        goto label_146870;
    }
    ctx->pc = 0x146868u;
    {
        const bool branch_taken_0x146868 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14686Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 28880));
        if (branch_taken_0x146868) {
            ctx->pc = 0x146810u;
            goto label_146810;
        }
    }
    ctx->pc = 0x146870u;
label_146870:
    // 0x146870: 0x10000003
label_146874:
    if (ctx->pc == 0x146874u) {
        ctx->pc = 0x146874u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x146878u;
        goto label_146878;
    }
    ctx->pc = 0x146870u;
    {
        const bool branch_taken_0x146870 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146874u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        if (branch_taken_0x146870) {
            ctx->pc = 0x146880u;
            goto label_146880;
        }
    }
    ctx->pc = 0x146878u;
label_146878:
    // 0x146878: 0x24c270d0
    ctx->pc = 0x146878u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 28880));
label_14687c:
    // 0x14687c: 0xae500004
    ctx->pc = 0x14687cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_146880:
    // 0x146880: 0xae420000
    ctx->pc = 0x146880u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_146884:
    // 0x146884: 0x8fa20004
    ctx->pc = 0x146884u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_146888:
    // 0x146888: 0x8fa30008
    ctx->pc = 0x146888u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_14688c:
    // 0x14688c: 0x24420001
    ctx->pc = 0x14688cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_146890:
    // 0x146890: 0x701821
    ctx->pc = 0x146890u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_146894:
    // 0x146894: 0x28440008
    ctx->pc = 0x146894u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_146898:
    // 0x146898: 0xafa30008
    ctx->pc = 0x146898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_14689c:
    // 0x14689c: 0x14800006
label_1468a0:
    if (ctx->pc == 0x1468A0u) {
        ctx->pc = 0x1468A0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x1468A4u;
        goto label_1468a4;
    }
    ctx->pc = 0x14689Cu;
    {
        const bool branch_taken_0x14689c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1468A0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x14689c) {
            ctx->pc = 0x1468B8u;
            goto label_1468b8;
        }
    }
    ctx->pc = 0x1468A4u;
label_1468a4:
    // 0x1468a4: 0x8fa4009c
    ctx->pc = 0x1468a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_1468a8:
    // 0x1468a8: 0xc051708
label_1468ac:
    if (ctx->pc == 0x1468ACu) {
        ctx->pc = 0x1468ACu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1468B0u;
        goto label_1468b0;
    }
    ctx->pc = 0x1468A8u;
    SET_GPR_U32(ctx, 31, 0x1468B0u);
    ctx->pc = 0x1468ACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x145c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1468B0u; }
        else if (ctx->pc != 0x1468B0u) { ctx->pc = 0x1468B0u; }
    }
    if (ctx->pc != 0x1468B0u) { return; }
    ctx->pc = 0x1468B0u;
label_1468b0:
    // 0x1468b0: 0x1440001b
label_1468b4:
    if (ctx->pc == 0x1468B4u) {
        ctx->pc = 0x1468B4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->pc = 0x1468B8u;
        goto label_1468b8;
    }
    ctx->pc = 0x1468B0u;
    {
        const bool branch_taken_0x1468b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1468B4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 156)));
        if (branch_taken_0x1468b0) {
            ctx->pc = 0x146920u;
            goto label_146920;
        }
    }
    ctx->pc = 0x1468B8u;
label_1468b8:
    // 0x1468b8: 0x8fa300a4
    ctx->pc = 0x1468b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1468bc:
    // 0x1468bc: 0x8fa400a4
    ctx->pc = 0x1468bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1468c0:
    // 0x1468c0: 0x2c3102a
    ctx->pc = 0x1468c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 3)));
label_1468c4:
    // 0x1468c4: 0x8fa500a0
    ctx->pc = 0x1468c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1468c8:
    // 0x1468c8: 0x2c2200a
    ctx->pc = 0x1468c8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 22));
label_1468cc:
    // 0x1468cc: 0x8fa30008
    ctx->pc = 0x1468ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1468d0:
    // 0x1468d0: 0xa42821
    ctx->pc = 0x1468d0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1468d4:
    // 0x1468d4: 0x10600006
label_1468d8:
    if (ctx->pc == 0x1468D8u) {
        ctx->pc = 0x1468D8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
        ctx->pc = 0x1468DCu;
        goto label_1468dc;
    }
    ctx->pc = 0x1468D4u;
    {
        const bool branch_taken_0x1468d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1468D8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
        if (branch_taken_0x1468d4) {
            ctx->pc = 0x1468F0u;
            goto label_1468f0;
        }
    }
    ctx->pc = 0x1468DCu;
label_1468dc:
    // 0x1468dc: 0x8fa4009c
    ctx->pc = 0x1468dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_1468e0:
    // 0x1468e0: 0xc051708
label_1468e4:
    if (ctx->pc == 0x1468E4u) {
        ctx->pc = 0x1468E4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1468E8u;
        goto label_1468e8;
    }
    ctx->pc = 0x1468E0u;
    SET_GPR_U32(ctx, 31, 0x1468E8u);
    ctx->pc = 0x1468E4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x145c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1468E8u; }
        else if (ctx->pc != 0x1468E8u) { ctx->pc = 0x1468E8u; }
    }
    if (ctx->pc != 0x1468E8u) { return; }
    ctx->pc = 0x1468E8u;
label_1468e8:
    // 0x1468e8: 0x1440000d
label_1468ec:
    if (ctx->pc == 0x1468ECu) {
        ctx->pc = 0x1468ECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->pc = 0x1468F0u;
        goto label_1468f0;
    }
    ctx->pc = 0x1468E8u;
    {
        const bool branch_taken_0x1468e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1468ECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 156)));
        if (branch_taken_0x1468e8) {
            ctx->pc = 0x146920u;
            goto label_146920;
        }
    }
    ctx->pc = 0x1468F0u;
label_1468f0:
    // 0x1468f0: 0xafa00004
    ctx->pc = 0x1468f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1468f4:
    // 0x1468f4: 0x1000fd5a
label_1468f8:
    if (ctx->pc == 0x1468F8u) {
        ctx->pc = 0x1468F8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1468FCu;
        goto label_1468fc;
    }
    ctx->pc = 0x1468F4u;
    {
        const bool branch_taken_0x1468f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1468F8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x1468f4) {
            ctx->pc = 0x145E60u;
            goto label_145e60;
        }
    }
    ctx->pc = 0x1468FCu;
label_1468fc:
    // 0x1468fc: 0x8fa20008
    ctx->pc = 0x1468fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_146900:
    // 0x146900: 0x10400005
label_146904:
    if (ctx->pc == 0x146904u) {
        ctx->pc = 0x146904u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->pc = 0x146908u;
        goto label_146908;
    }
    ctx->pc = 0x146900u;
    {
        const bool branch_taken_0x146900 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x146904u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 156)));
        if (branch_taken_0x146900) {
            ctx->pc = 0x146918u;
            goto label_146918;
        }
    }
    ctx->pc = 0x146908u;
label_146908:
    // 0x146908: 0xc051708
label_14690c:
    if (ctx->pc == 0x14690Cu) {
        ctx->pc = 0x14690Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x146910u;
        goto label_146910;
    }
    ctx->pc = 0x146908u;
    SET_GPR_U32(ctx, 31, 0x146910u);
    ctx->pc = 0x14690Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x145c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146910u; }
        else if (ctx->pc != 0x146910u) { ctx->pc = 0x146910u; }
    }
    if (ctx->pc != 0x146910u) { return; }
    ctx->pc = 0x146910u;
label_146910:
    // 0x146910: 0x14400003
label_146914:
    if (ctx->pc == 0x146914u) {
        ctx->pc = 0x146914u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->pc = 0x146918u;
        goto label_146918;
    }
    ctx->pc = 0x146910u;
    {
        const bool branch_taken_0x146910 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x146914u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 156)));
        if (branch_taken_0x146910) {
            ctx->pc = 0x146920u;
            goto label_146920;
        }
    }
    ctx->pc = 0x146918u;
label_146918:
    // 0x146918: 0xafa00004
    ctx->pc = 0x146918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_14691c:
    // 0x14691c: 0x8fa2009c
    ctx->pc = 0x14691cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_146920:
    // 0x146920: 0x8fa400a0
    ctx->pc = 0x146920u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_146924:
    // 0x146924: 0x9443000c
    ctx->pc = 0x146924u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_146928:
    // 0x146928: 0x2402ffff
    ctx->pc = 0x146928u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_14692c:
    // 0x14692c: 0x30630040
    ctx->pc = 0x14692cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 64));
label_146930:
    // 0x146930: 0x83100a
    ctx->pc = 0x146930u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_146934:
    // 0x146934: 0xdfbf0160
    ctx->pc = 0x146934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_146938:
    // 0x146938: 0xdfbe0150
    ctx->pc = 0x146938u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_14693c:
    // 0x14693c: 0xdfb70140
    ctx->pc = 0x14693cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_146940:
    // 0x146940: 0xdfb60130
    ctx->pc = 0x146940u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_146944:
    // 0x146944: 0xdfb50120
    ctx->pc = 0x146944u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_146948:
    // 0x146948: 0xdfb40110
    ctx->pc = 0x146948u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_14694c:
    // 0x14694c: 0xdfb30100
    ctx->pc = 0x14694cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_146950:
    // 0x146950: 0xdfb200f0
    ctx->pc = 0x146950u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_146954:
    // 0x146954: 0xdfb100e0
    ctx->pc = 0x146954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_146958:
    // 0x146958: 0xdfb000d0
    ctx->pc = 0x146958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_14695c:
    // 0x14695c: 0x3e00008
label_146960:
    if (ctx->pc == 0x146960u) {
        ctx->pc = 0x146960u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x146964u;
        goto label_fallthrough_0x14695c;
    }
    ctx->pc = 0x14695Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146960u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x145D98u: goto label_145d98;
            case 0x145D9Cu: goto label_145d9c;
            case 0x145DA0u: goto label_145da0;
            case 0x145DA4u: goto label_145da4;
            case 0x145DA8u: goto label_145da8;
            case 0x145DACu: goto label_145dac;
            case 0x145DB0u: goto label_145db0;
            case 0x145DB4u: goto label_145db4;
            case 0x145DB8u: goto label_145db8;
            case 0x145DBCu: goto label_145dbc;
            case 0x145DC0u: goto label_145dc0;
            case 0x145DC4u: goto label_145dc4;
            case 0x145DC8u: goto label_145dc8;
            case 0x145DCCu: goto label_145dcc;
            case 0x145DD0u: goto label_145dd0;
            case 0x145DD4u: goto label_145dd4;
            case 0x145DD8u: goto label_145dd8;
            case 0x145DDCu: goto label_145ddc;
            case 0x145DE0u: goto label_145de0;
            case 0x145DE4u: goto label_145de4;
            case 0x145DE8u: goto label_145de8;
            case 0x145DECu: goto label_145dec;
            case 0x145DF0u: goto label_145df0;
            case 0x145DF4u: goto label_145df4;
            case 0x145DF8u: goto label_145df8;
            case 0x145DFCu: goto label_145dfc;
            case 0x145E00u: goto label_145e00;
            case 0x145E04u: goto label_145e04;
            case 0x145E08u: goto label_145e08;
            case 0x145E0Cu: goto label_145e0c;
            case 0x145E10u: goto label_145e10;
            case 0x145E14u: goto label_145e14;
            case 0x145E18u: goto label_145e18;
            case 0x145E1Cu: goto label_145e1c;
            case 0x145E20u: goto label_145e20;
            case 0x145E24u: goto label_145e24;
            case 0x145E28u: goto label_145e28;
            case 0x145E2Cu: goto label_145e2c;
            case 0x145E30u: goto label_145e30;
            case 0x145E34u: goto label_145e34;
            case 0x145E38u: goto label_145e38;
            case 0x145E3Cu: goto label_145e3c;
            case 0x145E40u: goto label_145e40;
            case 0x145E44u: goto label_145e44;
            case 0x145E48u: goto label_145e48;
            case 0x145E4Cu: goto label_145e4c;
            case 0x145E50u: goto label_145e50;
            case 0x145E54u: goto label_145e54;
            case 0x145E58u: goto label_145e58;
            case 0x145E5Cu: goto label_145e5c;
            case 0x145E60u: goto label_145e60;
            case 0x145E64u: goto label_145e64;
            case 0x145E68u: goto label_145e68;
            case 0x145E6Cu: goto label_145e6c;
            case 0x145E70u: goto label_145e70;
            case 0x145E74u: goto label_145e74;
            case 0x145E78u: goto label_145e78;
            case 0x145E7Cu: goto label_145e7c;
            case 0x145E80u: goto label_145e80;
            case 0x145E84u: goto label_145e84;
            case 0x145E88u: goto label_145e88;
            case 0x145E8Cu: goto label_145e8c;
            case 0x145E90u: goto label_145e90;
            case 0x145E94u: goto label_145e94;
            case 0x145E98u: goto label_145e98;
            case 0x145E9Cu: goto label_145e9c;
            case 0x145EA0u: goto label_145ea0;
            case 0x145EA4u: goto label_145ea4;
            case 0x145EA8u: goto label_145ea8;
            case 0x145EACu: goto label_145eac;
            case 0x145EB0u: goto label_145eb0;
            case 0x145EB4u: goto label_145eb4;
            case 0x145EB8u: goto label_145eb8;
            case 0x145EBCu: goto label_145ebc;
            case 0x145EC0u: goto label_145ec0;
            case 0x145EC4u: goto label_145ec4;
            case 0x145EC8u: goto label_145ec8;
            case 0x145ECCu: goto label_145ecc;
            case 0x145ED0u: goto label_145ed0;
            case 0x145ED4u: goto label_145ed4;
            case 0x145ED8u: goto label_145ed8;
            case 0x145EDCu: goto label_145edc;
            case 0x145EE0u: goto label_145ee0;
            case 0x145EE4u: goto label_145ee4;
            case 0x145EE8u: goto label_145ee8;
            case 0x145EECu: goto label_145eec;
            case 0x145EF0u: goto label_145ef0;
            case 0x145EF4u: goto label_145ef4;
            case 0x145EF8u: goto label_145ef8;
            case 0x145EFCu: goto label_145efc;
            case 0x145F00u: goto label_145f00;
            case 0x145F04u: goto label_145f04;
            case 0x145F08u: goto label_145f08;
            case 0x145F0Cu: goto label_145f0c;
            case 0x145F10u: goto label_145f10;
            case 0x145F14u: goto label_145f14;
            case 0x145F18u: goto label_145f18;
            case 0x145F1Cu: goto label_145f1c;
            case 0x145F20u: goto label_145f20;
            case 0x145F24u: goto label_145f24;
            case 0x145F28u: goto label_145f28;
            case 0x145F2Cu: goto label_145f2c;
            case 0x145F30u: goto label_145f30;
            case 0x145F34u: goto label_145f34;
            case 0x145F38u: goto label_145f38;
            case 0x145F3Cu: goto label_145f3c;
            case 0x145F40u: goto label_145f40;
            case 0x145F44u: goto label_145f44;
            case 0x145F48u: goto label_145f48;
            case 0x145F4Cu: goto label_145f4c;
            case 0x145F50u: goto label_145f50;
            case 0x145F54u: goto label_145f54;
            case 0x145F58u: goto label_145f58;
            case 0x145F5Cu: goto label_145f5c;
            case 0x145F60u: goto label_145f60;
            case 0x145F64u: goto label_145f64;
            case 0x145F68u: goto label_145f68;
            case 0x145F6Cu: goto label_145f6c;
            case 0x145F70u: goto label_145f70;
            case 0x145F74u: goto label_145f74;
            case 0x145F78u: goto label_145f78;
            case 0x145F7Cu: goto label_145f7c;
            case 0x145F80u: goto label_145f80;
            case 0x145F84u: goto label_145f84;
            case 0x145F88u: goto label_145f88;
            case 0x145F8Cu: goto label_145f8c;
            case 0x145F90u: goto label_145f90;
            case 0x145F94u: goto label_145f94;
            case 0x145F98u: goto label_145f98;
            case 0x145F9Cu: goto label_145f9c;
            case 0x145FA0u: goto label_145fa0;
            case 0x145FA4u: goto label_145fa4;
            case 0x145FA8u: goto label_145fa8;
            case 0x145FACu: goto label_145fac;
            case 0x145FB0u: goto label_145fb0;
            case 0x145FB4u: goto label_145fb4;
            case 0x145FB8u: goto label_145fb8;
            case 0x145FBCu: goto label_145fbc;
            case 0x145FC0u: goto label_145fc0;
            case 0x145FC4u: goto label_145fc4;
            case 0x145FC8u: goto label_145fc8;
            case 0x145FCCu: goto label_145fcc;
            case 0x145FD0u: goto label_145fd0;
            case 0x145FD4u: goto label_145fd4;
            case 0x145FD8u: goto label_145fd8;
            case 0x145FDCu: goto label_145fdc;
            case 0x145FE0u: goto label_145fe0;
            case 0x145FE4u: goto label_145fe4;
            case 0x145FE8u: goto label_145fe8;
            case 0x145FECu: goto label_145fec;
            case 0x145FF0u: goto label_145ff0;
            case 0x145FF4u: goto label_145ff4;
            case 0x145FF8u: goto label_145ff8;
            case 0x145FFCu: goto label_145ffc;
            case 0x146000u: goto label_146000;
            case 0x146004u: goto label_146004;
            case 0x146008u: goto label_146008;
            case 0x14600Cu: goto label_14600c;
            case 0x146010u: goto label_146010;
            case 0x146014u: goto label_146014;
            case 0x146018u: goto label_146018;
            case 0x14601Cu: goto label_14601c;
            case 0x146020u: goto label_146020;
            case 0x146024u: goto label_146024;
            case 0x146028u: goto label_146028;
            case 0x14602Cu: goto label_14602c;
            case 0x146030u: goto label_146030;
            case 0x146034u: goto label_146034;
            case 0x146038u: goto label_146038;
            case 0x14603Cu: goto label_14603c;
            case 0x146040u: goto label_146040;
            case 0x146044u: goto label_146044;
            case 0x146048u: goto label_146048;
            case 0x14604Cu: goto label_14604c;
            case 0x146050u: goto label_146050;
            case 0x146054u: goto label_146054;
            case 0x146058u: goto label_146058;
            case 0x14605Cu: goto label_14605c;
            case 0x146060u: goto label_146060;
            case 0x146064u: goto label_146064;
            case 0x146068u: goto label_146068;
            case 0x14606Cu: goto label_14606c;
            case 0x146070u: goto label_146070;
            case 0x146074u: goto label_146074;
            case 0x146078u: goto label_146078;
            case 0x14607Cu: goto label_14607c;
            case 0x146080u: goto label_146080;
            case 0x146084u: goto label_146084;
            case 0x146088u: goto label_146088;
            case 0x14608Cu: goto label_14608c;
            case 0x146090u: goto label_146090;
            case 0x146094u: goto label_146094;
            case 0x146098u: goto label_146098;
            case 0x14609Cu: goto label_14609c;
            case 0x1460A0u: goto label_1460a0;
            case 0x1460A4u: goto label_1460a4;
            case 0x1460A8u: goto label_1460a8;
            case 0x1460ACu: goto label_1460ac;
            case 0x1460B0u: goto label_1460b0;
            case 0x1460B4u: goto label_1460b4;
            case 0x1460B8u: goto label_1460b8;
            case 0x1460BCu: goto label_1460bc;
            case 0x1460C0u: goto label_1460c0;
            case 0x1460C4u: goto label_1460c4;
            case 0x1460C8u: goto label_1460c8;
            case 0x1460CCu: goto label_1460cc;
            case 0x1460D0u: goto label_1460d0;
            case 0x1460D4u: goto label_1460d4;
            case 0x1460D8u: goto label_1460d8;
            case 0x1460DCu: goto label_1460dc;
            case 0x1460E0u: goto label_1460e0;
            case 0x1460E4u: goto label_1460e4;
            case 0x1460E8u: goto label_1460e8;
            case 0x1460ECu: goto label_1460ec;
            case 0x1460F0u: goto label_1460f0;
            case 0x1460F4u: goto label_1460f4;
            case 0x1460F8u: goto label_1460f8;
            case 0x1460FCu: goto label_1460fc;
            case 0x146100u: goto label_146100;
            case 0x146104u: goto label_146104;
            case 0x146108u: goto label_146108;
            case 0x14610Cu: goto label_14610c;
            case 0x146110u: goto label_146110;
            case 0x146114u: goto label_146114;
            case 0x146118u: goto label_146118;
            case 0x14611Cu: goto label_14611c;
            case 0x146120u: goto label_146120;
            case 0x146124u: goto label_146124;
            case 0x146128u: goto label_146128;
            case 0x14612Cu: goto label_14612c;
            case 0x146130u: goto label_146130;
            case 0x146134u: goto label_146134;
            case 0x146138u: goto label_146138;
            case 0x14613Cu: goto label_14613c;
            case 0x146140u: goto label_146140;
            case 0x146144u: goto label_146144;
            case 0x146148u: goto label_146148;
            case 0x14614Cu: goto label_14614c;
            case 0x146150u: goto label_146150;
            case 0x146154u: goto label_146154;
            case 0x146158u: goto label_146158;
            case 0x14615Cu: goto label_14615c;
            case 0x146160u: goto label_146160;
            case 0x146164u: goto label_146164;
            case 0x146168u: goto label_146168;
            case 0x14616Cu: goto label_14616c;
            case 0x146170u: goto label_146170;
            case 0x146174u: goto label_146174;
            case 0x146178u: goto label_146178;
            case 0x14617Cu: goto label_14617c;
            case 0x146180u: goto label_146180;
            case 0x146184u: goto label_146184;
            case 0x146188u: goto label_146188;
            case 0x14618Cu: goto label_14618c;
            case 0x146190u: goto label_146190;
            case 0x146194u: goto label_146194;
            case 0x146198u: goto label_146198;
            case 0x14619Cu: goto label_14619c;
            case 0x1461A0u: goto label_1461a0;
            case 0x1461A4u: goto label_1461a4;
            case 0x1461A8u: goto label_1461a8;
            case 0x1461ACu: goto label_1461ac;
            case 0x1461B0u: goto label_1461b0;
            case 0x1461B4u: goto label_1461b4;
            case 0x1461B8u: goto label_1461b8;
            case 0x1461BCu: goto label_1461bc;
            case 0x1461C0u: goto label_1461c0;
            case 0x1461C4u: goto label_1461c4;
            case 0x1461C8u: goto label_1461c8;
            case 0x1461CCu: goto label_1461cc;
            case 0x1461D0u: goto label_1461d0;
            case 0x1461D4u: goto label_1461d4;
            case 0x1461D8u: goto label_1461d8;
            case 0x1461DCu: goto label_1461dc;
            case 0x1461E0u: goto label_1461e0;
            case 0x1461E4u: goto label_1461e4;
            case 0x1461E8u: goto label_1461e8;
            case 0x1461ECu: goto label_1461ec;
            case 0x1461F0u: goto label_1461f0;
            case 0x1461F4u: goto label_1461f4;
            case 0x1461F8u: goto label_1461f8;
            case 0x1461FCu: goto label_1461fc;
            case 0x146200u: goto label_146200;
            case 0x146204u: goto label_146204;
            case 0x146208u: goto label_146208;
            case 0x14620Cu: goto label_14620c;
            case 0x146210u: goto label_146210;
            case 0x146214u: goto label_146214;
            case 0x146218u: goto label_146218;
            case 0x14621Cu: goto label_14621c;
            case 0x146220u: goto label_146220;
            case 0x146224u: goto label_146224;
            case 0x146228u: goto label_146228;
            case 0x14622Cu: goto label_14622c;
            case 0x146230u: goto label_146230;
            case 0x146234u: goto label_146234;
            case 0x146238u: goto label_146238;
            case 0x14623Cu: goto label_14623c;
            case 0x146240u: goto label_146240;
            case 0x146244u: goto label_146244;
            case 0x146248u: goto label_146248;
            case 0x14624Cu: goto label_14624c;
            case 0x146250u: goto label_146250;
            case 0x146254u: goto label_146254;
            case 0x146258u: goto label_146258;
            case 0x14625Cu: goto label_14625c;
            case 0x146260u: goto label_146260;
            case 0x146264u: goto label_146264;
            case 0x146268u: goto label_146268;
            case 0x14626Cu: goto label_14626c;
            case 0x146270u: goto label_146270;
            case 0x146274u: goto label_146274;
            case 0x146278u: goto label_146278;
            case 0x14627Cu: goto label_14627c;
            case 0x146280u: goto label_146280;
            case 0x146284u: goto label_146284;
            case 0x146288u: goto label_146288;
            case 0x14628Cu: goto label_14628c;
            case 0x146290u: goto label_146290;
            case 0x146294u: goto label_146294;
            case 0x146298u: goto label_146298;
            case 0x14629Cu: goto label_14629c;
            case 0x1462A0u: goto label_1462a0;
            case 0x1462A4u: goto label_1462a4;
            case 0x1462A8u: goto label_1462a8;
            case 0x1462ACu: goto label_1462ac;
            case 0x1462B0u: goto label_1462b0;
            case 0x1462B4u: goto label_1462b4;
            case 0x1462B8u: goto label_1462b8;
            case 0x1462BCu: goto label_1462bc;
            case 0x1462C0u: goto label_1462c0;
            case 0x1462C4u: goto label_1462c4;
            case 0x1462C8u: goto label_1462c8;
            case 0x1462CCu: goto label_1462cc;
            case 0x1462D0u: goto label_1462d0;
            case 0x1462D4u: goto label_1462d4;
            case 0x1462D8u: goto label_1462d8;
            case 0x1462DCu: goto label_1462dc;
            case 0x1462E0u: goto label_1462e0;
            case 0x1462E4u: goto label_1462e4;
            case 0x1462E8u: goto label_1462e8;
            case 0x1462ECu: goto label_1462ec;
            case 0x1462F0u: goto label_1462f0;
            case 0x1462F4u: goto label_1462f4;
            case 0x1462F8u: goto label_1462f8;
            case 0x1462FCu: goto label_1462fc;
            case 0x146300u: goto label_146300;
            case 0x146304u: goto label_146304;
            case 0x146308u: goto label_146308;
            case 0x14630Cu: goto label_14630c;
            case 0x146310u: goto label_146310;
            case 0x146314u: goto label_146314;
            case 0x146318u: goto label_146318;
            case 0x14631Cu: goto label_14631c;
            case 0x146320u: goto label_146320;
            case 0x146324u: goto label_146324;
            case 0x146328u: goto label_146328;
            case 0x14632Cu: goto label_14632c;
            case 0x146330u: goto label_146330;
            case 0x146334u: goto label_146334;
            case 0x146338u: goto label_146338;
            case 0x14633Cu: goto label_14633c;
            case 0x146340u: goto label_146340;
            case 0x146344u: goto label_146344;
            case 0x146348u: goto label_146348;
            case 0x14634Cu: goto label_14634c;
            case 0x146350u: goto label_146350;
            case 0x146354u: goto label_146354;
            case 0x146358u: goto label_146358;
            case 0x14635Cu: goto label_14635c;
            case 0x146360u: goto label_146360;
            case 0x146364u: goto label_146364;
            case 0x146368u: goto label_146368;
            case 0x14636Cu: goto label_14636c;
            case 0x146370u: goto label_146370;
            case 0x146374u: goto label_146374;
            case 0x146378u: goto label_146378;
            case 0x14637Cu: goto label_14637c;
            case 0x146380u: goto label_146380;
            case 0x146384u: goto label_146384;
            case 0x146388u: goto label_146388;
            case 0x14638Cu: goto label_14638c;
            case 0x146390u: goto label_146390;
            case 0x146394u: goto label_146394;
            case 0x146398u: goto label_146398;
            case 0x14639Cu: goto label_14639c;
            case 0x1463A0u: goto label_1463a0;
            case 0x1463A4u: goto label_1463a4;
            case 0x1463A8u: goto label_1463a8;
            case 0x1463ACu: goto label_1463ac;
            case 0x1463B0u: goto label_1463b0;
            case 0x1463B4u: goto label_1463b4;
            case 0x1463B8u: goto label_1463b8;
            case 0x1463BCu: goto label_1463bc;
            case 0x1463C0u: goto label_1463c0;
            case 0x1463C4u: goto label_1463c4;
            case 0x1463C8u: goto label_1463c8;
            case 0x1463CCu: goto label_1463cc;
            case 0x1463D0u: goto label_1463d0;
            case 0x1463D4u: goto label_1463d4;
            case 0x1463D8u: goto label_1463d8;
            case 0x1463DCu: goto label_1463dc;
            case 0x1463E0u: goto label_1463e0;
            case 0x1463E4u: goto label_1463e4;
            case 0x1463E8u: goto label_1463e8;
            case 0x1463ECu: goto label_1463ec;
            case 0x1463F0u: goto label_1463f0;
            case 0x1463F4u: goto label_1463f4;
            case 0x1463F8u: goto label_1463f8;
            case 0x1463FCu: goto label_1463fc;
            case 0x146400u: goto label_146400;
            case 0x146404u: goto label_146404;
            case 0x146408u: goto label_146408;
            case 0x14640Cu: goto label_14640c;
            case 0x146410u: goto label_146410;
            case 0x146414u: goto label_146414;
            case 0x146418u: goto label_146418;
            case 0x14641Cu: goto label_14641c;
            case 0x146420u: goto label_146420;
            case 0x146424u: goto label_146424;
            case 0x146428u: goto label_146428;
            case 0x14642Cu: goto label_14642c;
            case 0x146430u: goto label_146430;
            case 0x146434u: goto label_146434;
            case 0x146438u: goto label_146438;
            case 0x14643Cu: goto label_14643c;
            case 0x146440u: goto label_146440;
            case 0x146444u: goto label_146444;
            case 0x146448u: goto label_146448;
            case 0x14644Cu: goto label_14644c;
            case 0x146450u: goto label_146450;
            case 0x146454u: goto label_146454;
            case 0x146458u: goto label_146458;
            case 0x14645Cu: goto label_14645c;
            case 0x146460u: goto label_146460;
            case 0x146464u: goto label_146464;
            case 0x146468u: goto label_146468;
            case 0x14646Cu: goto label_14646c;
            case 0x146470u: goto label_146470;
            case 0x146474u: goto label_146474;
            case 0x146478u: goto label_146478;
            case 0x14647Cu: goto label_14647c;
            case 0x146480u: goto label_146480;
            case 0x146484u: goto label_146484;
            case 0x146488u: goto label_146488;
            case 0x14648Cu: goto label_14648c;
            case 0x146490u: goto label_146490;
            case 0x146494u: goto label_146494;
            case 0x146498u: goto label_146498;
            case 0x14649Cu: goto label_14649c;
            case 0x1464A0u: goto label_1464a0;
            case 0x1464A4u: goto label_1464a4;
            case 0x1464A8u: goto label_1464a8;
            case 0x1464ACu: goto label_1464ac;
            case 0x1464B0u: goto label_1464b0;
            case 0x1464B4u: goto label_1464b4;
            case 0x1464B8u: goto label_1464b8;
            case 0x1464BCu: goto label_1464bc;
            case 0x1464C0u: goto label_1464c0;
            case 0x1464C4u: goto label_1464c4;
            case 0x1464C8u: goto label_1464c8;
            case 0x1464CCu: goto label_1464cc;
            case 0x1464D0u: goto label_1464d0;
            case 0x1464D4u: goto label_1464d4;
            case 0x1464D8u: goto label_1464d8;
            case 0x1464DCu: goto label_1464dc;
            case 0x1464E0u: goto label_1464e0;
            case 0x1464E4u: goto label_1464e4;
            case 0x1464E8u: goto label_1464e8;
            case 0x1464ECu: goto label_1464ec;
            case 0x1464F0u: goto label_1464f0;
            case 0x1464F4u: goto label_1464f4;
            case 0x1464F8u: goto label_1464f8;
            case 0x1464FCu: goto label_1464fc;
            case 0x146500u: goto label_146500;
            case 0x146504u: goto label_146504;
            case 0x146508u: goto label_146508;
            case 0x14650Cu: goto label_14650c;
            case 0x146510u: goto label_146510;
            case 0x146514u: goto label_146514;
            case 0x146518u: goto label_146518;
            case 0x14651Cu: goto label_14651c;
            case 0x146520u: goto label_146520;
            case 0x146524u: goto label_146524;
            case 0x146528u: goto label_146528;
            case 0x14652Cu: goto label_14652c;
            case 0x146530u: goto label_146530;
            case 0x146534u: goto label_146534;
            case 0x146538u: goto label_146538;
            case 0x14653Cu: goto label_14653c;
            case 0x146540u: goto label_146540;
            case 0x146544u: goto label_146544;
            case 0x146548u: goto label_146548;
            case 0x14654Cu: goto label_14654c;
            case 0x146550u: goto label_146550;
            case 0x146554u: goto label_146554;
            case 0x146558u: goto label_146558;
            case 0x14655Cu: goto label_14655c;
            case 0x146560u: goto label_146560;
            case 0x146564u: goto label_146564;
            case 0x146568u: goto label_146568;
            case 0x14656Cu: goto label_14656c;
            case 0x146570u: goto label_146570;
            case 0x146574u: goto label_146574;
            case 0x146578u: goto label_146578;
            case 0x14657Cu: goto label_14657c;
            case 0x146580u: goto label_146580;
            case 0x146584u: goto label_146584;
            case 0x146588u: goto label_146588;
            case 0x14658Cu: goto label_14658c;
            case 0x146590u: goto label_146590;
            case 0x146594u: goto label_146594;
            case 0x146598u: goto label_146598;
            case 0x14659Cu: goto label_14659c;
            case 0x1465A0u: goto label_1465a0;
            case 0x1465A4u: goto label_1465a4;
            case 0x1465A8u: goto label_1465a8;
            case 0x1465ACu: goto label_1465ac;
            case 0x1465B0u: goto label_1465b0;
            case 0x1465B4u: goto label_1465b4;
            case 0x1465B8u: goto label_1465b8;
            case 0x1465BCu: goto label_1465bc;
            case 0x1465C0u: goto label_1465c0;
            case 0x1465C4u: goto label_1465c4;
            case 0x1465C8u: goto label_1465c8;
            case 0x1465CCu: goto label_1465cc;
            case 0x1465D0u: goto label_1465d0;
            case 0x1465D4u: goto label_1465d4;
            case 0x1465D8u: goto label_1465d8;
            case 0x1465DCu: goto label_1465dc;
            case 0x1465E0u: goto label_1465e0;
            case 0x1465E4u: goto label_1465e4;
            case 0x1465E8u: goto label_1465e8;
            case 0x1465ECu: goto label_1465ec;
            case 0x1465F0u: goto label_1465f0;
            case 0x1465F4u: goto label_1465f4;
            case 0x1465F8u: goto label_1465f8;
            case 0x1465FCu: goto label_1465fc;
            case 0x146600u: goto label_146600;
            case 0x146604u: goto label_146604;
            case 0x146608u: goto label_146608;
            case 0x14660Cu: goto label_14660c;
            case 0x146610u: goto label_146610;
            case 0x146614u: goto label_146614;
            case 0x146618u: goto label_146618;
            case 0x14661Cu: goto label_14661c;
            case 0x146620u: goto label_146620;
            case 0x146624u: goto label_146624;
            case 0x146628u: goto label_146628;
            case 0x14662Cu: goto label_14662c;
            case 0x146630u: goto label_146630;
            case 0x146634u: goto label_146634;
            case 0x146638u: goto label_146638;
            case 0x14663Cu: goto label_14663c;
            case 0x146640u: goto label_146640;
            case 0x146644u: goto label_146644;
            case 0x146648u: goto label_146648;
            case 0x14664Cu: goto label_14664c;
            case 0x146650u: goto label_146650;
            case 0x146654u: goto label_146654;
            case 0x146658u: goto label_146658;
            case 0x14665Cu: goto label_14665c;
            case 0x146660u: goto label_146660;
            case 0x146664u: goto label_146664;
            case 0x146668u: goto label_146668;
            case 0x14666Cu: goto label_14666c;
            case 0x146670u: goto label_146670;
            case 0x146674u: goto label_146674;
            case 0x146678u: goto label_146678;
            case 0x14667Cu: goto label_14667c;
            case 0x146680u: goto label_146680;
            case 0x146684u: goto label_146684;
            case 0x146688u: goto label_146688;
            case 0x14668Cu: goto label_14668c;
            case 0x146690u: goto label_146690;
            case 0x146694u: goto label_146694;
            case 0x146698u: goto label_146698;
            case 0x14669Cu: goto label_14669c;
            case 0x1466A0u: goto label_1466a0;
            case 0x1466A4u: goto label_1466a4;
            case 0x1466A8u: goto label_1466a8;
            case 0x1466ACu: goto label_1466ac;
            case 0x1466B0u: goto label_1466b0;
            case 0x1466B4u: goto label_1466b4;
            case 0x1466B8u: goto label_1466b8;
            case 0x1466BCu: goto label_1466bc;
            case 0x1466C0u: goto label_1466c0;
            case 0x1466C4u: goto label_1466c4;
            case 0x1466C8u: goto label_1466c8;
            case 0x1466CCu: goto label_1466cc;
            case 0x1466D0u: goto label_1466d0;
            case 0x1466D4u: goto label_1466d4;
            case 0x1466D8u: goto label_1466d8;
            case 0x1466DCu: goto label_1466dc;
            case 0x1466E0u: goto label_1466e0;
            case 0x1466E4u: goto label_1466e4;
            case 0x1466E8u: goto label_1466e8;
            case 0x1466ECu: goto label_1466ec;
            case 0x1466F0u: goto label_1466f0;
            case 0x1466F4u: goto label_1466f4;
            case 0x1466F8u: goto label_1466f8;
            case 0x1466FCu: goto label_1466fc;
            case 0x146700u: goto label_146700;
            case 0x146704u: goto label_146704;
            case 0x146708u: goto label_146708;
            case 0x14670Cu: goto label_14670c;
            case 0x146710u: goto label_146710;
            case 0x146714u: goto label_146714;
            case 0x146718u: goto label_146718;
            case 0x14671Cu: goto label_14671c;
            case 0x146720u: goto label_146720;
            case 0x146724u: goto label_146724;
            case 0x146728u: goto label_146728;
            case 0x14672Cu: goto label_14672c;
            case 0x146730u: goto label_146730;
            case 0x146734u: goto label_146734;
            case 0x146738u: goto label_146738;
            case 0x14673Cu: goto label_14673c;
            case 0x146740u: goto label_146740;
            case 0x146744u: goto label_146744;
            case 0x146748u: goto label_146748;
            case 0x14674Cu: goto label_14674c;
            case 0x146750u: goto label_146750;
            case 0x146754u: goto label_146754;
            case 0x146758u: goto label_146758;
            case 0x14675Cu: goto label_14675c;
            case 0x146760u: goto label_146760;
            case 0x146764u: goto label_146764;
            case 0x146768u: goto label_146768;
            case 0x14676Cu: goto label_14676c;
            case 0x146770u: goto label_146770;
            case 0x146774u: goto label_146774;
            case 0x146778u: goto label_146778;
            case 0x14677Cu: goto label_14677c;
            case 0x146780u: goto label_146780;
            case 0x146784u: goto label_146784;
            case 0x146788u: goto label_146788;
            case 0x14678Cu: goto label_14678c;
            case 0x146790u: goto label_146790;
            case 0x146794u: goto label_146794;
            case 0x146798u: goto label_146798;
            case 0x14679Cu: goto label_14679c;
            case 0x1467A0u: goto label_1467a0;
            case 0x1467A4u: goto label_1467a4;
            case 0x1467A8u: goto label_1467a8;
            case 0x1467ACu: goto label_1467ac;
            case 0x1467B0u: goto label_1467b0;
            case 0x1467B4u: goto label_1467b4;
            case 0x1467B8u: goto label_1467b8;
            case 0x1467BCu: goto label_1467bc;
            case 0x1467C0u: goto label_1467c0;
            case 0x1467C4u: goto label_1467c4;
            case 0x1467C8u: goto label_1467c8;
            case 0x1467CCu: goto label_1467cc;
            case 0x1467D0u: goto label_1467d0;
            case 0x1467D4u: goto label_1467d4;
            case 0x1467D8u: goto label_1467d8;
            case 0x1467DCu: goto label_1467dc;
            case 0x1467E0u: goto label_1467e0;
            case 0x1467E4u: goto label_1467e4;
            case 0x1467E8u: goto label_1467e8;
            case 0x1467ECu: goto label_1467ec;
            case 0x1467F0u: goto label_1467f0;
            case 0x1467F4u: goto label_1467f4;
            case 0x1467F8u: goto label_1467f8;
            case 0x1467FCu: goto label_1467fc;
            case 0x146800u: goto label_146800;
            case 0x146804u: goto label_146804;
            case 0x146808u: goto label_146808;
            case 0x14680Cu: goto label_14680c;
            case 0x146810u: goto label_146810;
            case 0x146814u: goto label_146814;
            case 0x146818u: goto label_146818;
            case 0x14681Cu: goto label_14681c;
            case 0x146820u: goto label_146820;
            case 0x146824u: goto label_146824;
            case 0x146828u: goto label_146828;
            case 0x14682Cu: goto label_14682c;
            case 0x146830u: goto label_146830;
            case 0x146834u: goto label_146834;
            case 0x146838u: goto label_146838;
            case 0x14683Cu: goto label_14683c;
            case 0x146840u: goto label_146840;
            case 0x146844u: goto label_146844;
            case 0x146848u: goto label_146848;
            case 0x14684Cu: goto label_14684c;
            case 0x146850u: goto label_146850;
            case 0x146854u: goto label_146854;
            case 0x146858u: goto label_146858;
            case 0x14685Cu: goto label_14685c;
            case 0x146860u: goto label_146860;
            case 0x146864u: goto label_146864;
            case 0x146868u: goto label_146868;
            case 0x14686Cu: goto label_14686c;
            case 0x146870u: goto label_146870;
            case 0x146874u: goto label_146874;
            case 0x146878u: goto label_146878;
            case 0x14687Cu: goto label_14687c;
            case 0x146880u: goto label_146880;
            case 0x146884u: goto label_146884;
            case 0x146888u: goto label_146888;
            case 0x14688Cu: goto label_14688c;
            case 0x146890u: goto label_146890;
            case 0x146894u: goto label_146894;
            case 0x146898u: goto label_146898;
            case 0x14689Cu: goto label_14689c;
            case 0x1468A0u: goto label_1468a0;
            case 0x1468A4u: goto label_1468a4;
            case 0x1468A8u: goto label_1468a8;
            case 0x1468ACu: goto label_1468ac;
            case 0x1468B0u: goto label_1468b0;
            case 0x1468B4u: goto label_1468b4;
            case 0x1468B8u: goto label_1468b8;
            case 0x1468BCu: goto label_1468bc;
            case 0x1468C0u: goto label_1468c0;
            case 0x1468C4u: goto label_1468c4;
            case 0x1468C8u: goto label_1468c8;
            case 0x1468CCu: goto label_1468cc;
            case 0x1468D0u: goto label_1468d0;
            case 0x1468D4u: goto label_1468d4;
            case 0x1468D8u: goto label_1468d8;
            case 0x1468DCu: goto label_1468dc;
            case 0x1468E0u: goto label_1468e0;
            case 0x1468E4u: goto label_1468e4;
            case 0x1468E8u: goto label_1468e8;
            case 0x1468ECu: goto label_1468ec;
            case 0x1468F0u: goto label_1468f0;
            case 0x1468F4u: goto label_1468f4;
            case 0x1468F8u: goto label_1468f8;
            case 0x1468FCu: goto label_1468fc;
            case 0x146900u: goto label_146900;
            case 0x146904u: goto label_146904;
            case 0x146908u: goto label_146908;
            case 0x14690Cu: goto label_14690c;
            case 0x146910u: goto label_146910;
            case 0x146914u: goto label_146914;
            case 0x146918u: goto label_146918;
            case 0x14691Cu: goto label_14691c;
            case 0x146920u: goto label_146920;
            case 0x146924u: goto label_146924;
            case 0x146928u: goto label_146928;
            case 0x14692Cu: goto label_14692c;
            case 0x146930u: goto label_146930;
            case 0x146934u: goto label_146934;
            case 0x146938u: goto label_146938;
            case 0x14693Cu: goto label_14693c;
            case 0x146940u: goto label_146940;
            case 0x146944u: goto label_146944;
            case 0x146948u: goto label_146948;
            case 0x14694Cu: goto label_14694c;
            case 0x146950u: goto label_146950;
            case 0x146954u: goto label_146954;
            case 0x146958u: goto label_146958;
            case 0x14695Cu: goto label_14695c;
            case 0x146960u: goto label_146960;
            default: break;
        }
        return;
    }
label_fallthrough_0x14695c:
    ctx->pc = 0x146964u;
}
