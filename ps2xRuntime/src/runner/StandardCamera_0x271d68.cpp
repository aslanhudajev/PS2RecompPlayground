#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StandardCamera
// Address: 0x271d68 - 0x27289c
void StandardCamera_0x271d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x271d68u;

    // 0x271d68: 0x27bdfef0
    ctx->pc = 0x271d68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x271d6c: 0xffbf00e0
    ctx->pc = 0x271d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x271d70: 0xffbe00d0
    ctx->pc = 0x271d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x271d74: 0xffb700c0
    ctx->pc = 0x271d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x271d78: 0xffb600b0
    ctx->pc = 0x271d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x271d7c: 0xffb500a0
    ctx->pc = 0x271d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x271d80: 0xffb40090
    ctx->pc = 0x271d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x271d84: 0xffb30080
    ctx->pc = 0x271d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x271d88: 0xffb20070
    ctx->pc = 0x271d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x271d8c: 0xffb10060
    ctx->pc = 0x271d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x271d90: 0xffb00050
    ctx->pc = 0x271d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x271d94: 0xe7b70108
    ctx->pc = 0x271d94u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x271d98: 0xe7b60100
    ctx->pc = 0x271d98u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x271d9c: 0xe7b500f8
    ctx->pc = 0x271d9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x271da0: 0xe7b400f0
    ctx->pc = 0x271da0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x271da4: 0x80902d
    ctx->pc = 0x271da4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271da8: 0x240301a0
    ctx->pc = 0x271da8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x271dac: 0x2431818
    ctx->pc = 0x271dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x271db0: 0x3c020034
    ctx->pc = 0x271db0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x271db4: 0x2442eb60
    ctx->pc = 0x271db4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x271db8: 0x628821
    ctx->pc = 0x271db8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x271dbc: 0x3c020034
    ctx->pc = 0x271dbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x271dc0: 0x8c42f934
    ctx->pc = 0x271dc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965556)));
    // 0x271dc4: 0x10400007
    ctx->pc = 0x271DC4u;
    {
        const bool branch_taken_0x271dc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x271DC8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x271dc4) {
            ctx->pc = 0x271DE4u;
            goto label_271de4;
        }
    }
    ctx->pc = 0x271DCCu;
    // 0x271dcc: 0x3c030031
    ctx->pc = 0x271dccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x271dd0: 0x8c82f93c
    ctx->pc = 0x271dd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294965564)));
    // 0x271dd4: 0x8c63ffbc
    ctx->pc = 0x271dd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x271dd8: 0x431023
    ctx->pc = 0x271dd8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x271ddc: 0x10000005
    ctx->pc = 0x271DDCu;
    {
        const bool branch_taken_0x271ddc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x271DE0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294965564), GPR_U32(ctx, 2));
        if (branch_taken_0x271ddc) {
            ctx->pc = 0x271DF4u;
            goto label_271df4;
        }
    }
    ctx->pc = 0x271DE4u;
label_271de4:
    // 0x271de4: 0x3c020034
    ctx->pc = 0x271de4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x271de8: 0x8c42f8fc
    ctx->pc = 0x271de8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x271dec: 0x1440000c
    ctx->pc = 0x271DECu;
    {
        const bool branch_taken_0x271dec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x271DF0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x271dec) {
            ctx->pc = 0x271E20u;
            goto label_271e20;
        }
    }
    ctx->pc = 0x271DF4u;
label_271df4:
    // 0x271df4: 0xae200160
    ctx->pc = 0x271df4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
    // 0x271df8: 0xae200164
    ctx->pc = 0x271df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 0));
    // 0x271dfc: 0xae200168
    ctx->pc = 0x271dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 0));
    // 0x271e00: 0xae2000c0
    ctx->pc = 0x271e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
    // 0x271e04: 0xae2000c4
    ctx->pc = 0x271e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
    // 0x271e08: 0xae2000c8
    ctx->pc = 0x271e08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
    // 0x271e0c: 0x240202d
    ctx->pc = 0x271e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271e10: 0xc09a760
    ctx->pc = 0x271E10u;
    SET_GPR_U32(ctx, 31, 0x271E18u);
    ctx->pc = 0x271E14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 320));
    ctx->pc = 0x269D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        cam_orient_to_0x269d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271E18u; }
    }
    if (ctx->pc != 0x271E18u) { return; }
    ctx->pc = 0x271E18u;
    // 0x271e18: 0x10000291
    ctx->pc = 0x271E18u;
    {
        const bool branch_taken_0x271e18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x271E1Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x271e18) {
            ctx->pc = 0x272860u;
            goto label_272860;
        }
    }
    ctx->pc = 0x271E20u;
label_271e20:
    // 0x271e20: 0x8c42f940
    ctx->pc = 0x271e20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965568)));
    // 0x271e24: 0x14400027
    ctx->pc = 0x271E24u;
    {
        const bool branch_taken_0x271e24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x271E28u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x271e24) {
            ctx->pc = 0x271EC4u;
            goto label_271ec4;
        }
    }
    ctx->pc = 0x271E2Cu;
    // 0x271e2c: 0x3c020034
    ctx->pc = 0x271e2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x271e30: 0x8c42f934
    ctx->pc = 0x271e30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965556)));
    // 0x271e34: 0x14400023
    ctx->pc = 0x271E34u;
    {
        const bool branch_taken_0x271e34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x271E38u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x271e34) {
            ctx->pc = 0x271EC4u;
            goto label_271ec4;
        }
    }
    ctx->pc = 0x271E3Cu;
    // 0x271e3c: 0x3c020032
    ctx->pc = 0x271e3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x271e40: 0x8c42080c
    ctx->pc = 0x271e40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x271e44: 0x1440001f
    ctx->pc = 0x271E44u;
    {
        const bool branch_taken_0x271e44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x271E48u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x271e44) {
            ctx->pc = 0x271EC4u;
            goto label_271ec4;
        }
    }
    ctx->pc = 0x271E4Cu;
    // 0x271e4c: 0x3c020032
    ctx->pc = 0x271e4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x271e50: 0x8c420810
    ctx->pc = 0x271e50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2064)));
    // 0x271e54: 0x1440001b
    ctx->pc = 0x271E54u;
    {
        const bool branch_taken_0x271e54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x271E58u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x271e54) {
            ctx->pc = 0x271EC4u;
            goto label_271ec4;
        }
    }
    ctx->pc = 0x271E5Cu;
    // 0x271e5c: 0x5640001a
    ctx->pc = 0x271E5Cu;
    {
        const bool branch_taken_0x271e5c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x271e5c) {
            ctx->pc = 0x271E60u;
            WRITE32(ADD32(GPR_U32(ctx, 2), 14784), GPR_U32(ctx, 0));
            ctx->pc = 0x271EC8u;
            goto label_271ec8;
        }
    }
    ctx->pc = 0x271E64u;
    // 0x271e64: 0x8e2200d4
    ctx->pc = 0x271e64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x271e68: 0x4410016
    ctx->pc = 0x271E68u;
    {
        const bool branch_taken_0x271e68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x271E6Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x271e68) {
            ctx->pc = 0x271EC4u;
            goto label_271ec4;
        }
    }
    ctx->pc = 0x271E70u;
    // 0x271e70: 0x3c020034
    ctx->pc = 0x271e70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x271e74: 0x8c42fa04
    ctx->pc = 0x271e74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965764)));
    // 0x271e78: 0x14400012
    ctx->pc = 0x271E78u;
    {
        const bool branch_taken_0x271e78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x271E7Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x271e78) {
            ctx->pc = 0x271EC4u;
            goto label_271ec4;
        }
    }
    ctx->pc = 0x271E80u;
    // 0x271e80: 0x3c10003c
    ctx->pc = 0x271e80u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x271e84: 0x3c020031
    ctx->pc = 0x271e84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x271e88: 0x8e0339c0
    ctx->pc = 0x271e88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 14784)));
    // 0x271e8c: 0x8c42ffbc
    ctx->pc = 0x271e8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x271e90: 0x621821
    ctx->pc = 0x271e90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x271e94: 0xae0339c0
    ctx->pc = 0x271e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14784), GPR_U32(ctx, 3));
    // 0x271e98: 0x2863005a
    ctx->pc = 0x271e98u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 90));
    // 0x271e9c: 0x1460000a
    ctx->pc = 0x271E9Cu;
    {
        const bool branch_taken_0x271e9c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x271EA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x271e9c) {
            ctx->pc = 0x271EC8u;
            goto label_271ec8;
        }
    }
    ctx->pc = 0x271EA4u;
    // 0x271ea4: 0xae2200d4
    ctx->pc = 0x271ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x271ea8: 0xc09aba6
    ctx->pc = 0x271EA8u;
    SET_GPR_U32(ctx, 31, 0x271EB0u);
    ctx->pc = 0x271EACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x26AE98u;
    {
        const uint32_t __entryPc = ctx->pc;
        CameraNewPos_0x26ae98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271EB0u; }
    }
    if (ctx->pc != 0x271EB0u) { return; }
    ctx->pc = 0x271EB0u;
    // 0x271eb0: 0x3c030034
    ctx->pc = 0x271eb0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x271eb4: 0x2402ffff
    ctx->pc = 0x271eb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x271eb8: 0xac62f930
    ctx->pc = 0x271eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965552), GPR_U32(ctx, 2));
    // 0x271ebc: 0x10000002
    ctx->pc = 0x271EBCu;
    {
        const bool branch_taken_0x271ebc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x271EC0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 14784), GPR_U32(ctx, 0));
        if (branch_taken_0x271ebc) {
            ctx->pc = 0x271EC8u;
            goto label_271ec8;
        }
    }
    ctx->pc = 0x271EC4u;
label_271ec4:
    // 0x271ec4: 0xac4039c0
    ctx->pc = 0x271ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14784), GPR_U32(ctx, 0));
label_271ec8:
    // 0x271ec8: 0x4480a800
    ctx->pc = 0x271ec8u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 0);
    // 0x271ecc: 0x4600ad86
    ctx->pc = 0x271eccu;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
    // 0x271ed0: 0x3c020034
    ctx->pc = 0x271ed0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x271ed4: 0x8c42f914
    ctx->pc = 0x271ed4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965524)));
    // 0x271ed8: 0x1040000b
    ctx->pc = 0x271ED8u;
    {
        const bool branch_taken_0x271ed8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x271EDCu;
        ctx->f[23] = FPU_MOV_S(ctx->f[21]);
        if (branch_taken_0x271ed8) {
            ctx->pc = 0x271F08u;
            goto label_271f08;
        }
    }
    ctx->pc = 0x271EE0u;
    // 0x271ee0: 0x240202d
    ctx->pc = 0x271ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271ee4: 0xc099d30
    ctx->pc = 0x271EE4u;
    SET_GPR_U32(ctx, 31, 0x271EECu);
    ctx->pc = 0x271EE8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x2674C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyCamera_0x2674c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271EECu; }
    }
    if (ctx->pc != 0x271EECu) { return; }
    ctx->pc = 0x271EECu;
    // 0x271eec: 0x3c020034
    ctx->pc = 0x271eecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x271ef0: 0xc456f8f8
    ctx->pc = 0x271ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x271ef4: 0x3c020034
    ctx->pc = 0x271ef4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x271ef8: 0xc455f8f4
    ctx->pc = 0x271ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x271efc: 0x3c02003c
    ctx->pc = 0x271efcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x271f00: 0xc45738e4
    ctx->pc = 0x271f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x271f04: 0x4680bde0
    ctx->pc = 0x271f04u;
    ctx->f[23] = FPU_CVT_S_W(*(int32_t*)&ctx->f[23]);
label_271f08:
    // 0x271f08: 0xc09bd10
    ctx->pc = 0x271F08u;
    SET_GPR_U32(ctx, 31, 0x271F10u);
    ctx->pc = 0x271F0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26F440u;
    {
        const uint32_t __entryPc = ctx->pc;
        rotate_camera_0x26f440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271F10u; }
    }
    if (ctx->pc != 0x271F10u) { return; }
    ctx->pc = 0x271F10u;
    // 0x271f10: 0x8e2300d4
    ctx->pc = 0x271f10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x271f14: 0x4600136
    ctx->pc = 0x271F14u;
    {
        const bool branch_taken_0x271f14 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x271F18u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x271f14) {
            ctx->pc = 0x2723F0u;
            goto label_2723f0;
        }
    }
    ctx->pc = 0x271F1Cu;
    // 0x271f1c: 0x10600006
    ctx->pc = 0x271F1Cu;
    {
        const bool branch_taken_0x271f1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x271F20u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x271f1c) {
            ctx->pc = 0x271F38u;
            goto label_271f38;
        }
    }
    ctx->pc = 0x271F24u;
    // 0x271f24: 0x24020001
    ctx->pc = 0x271f24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x271f28: 0x1062000d
    ctx->pc = 0x271F28u;
    {
        const bool branch_taken_0x271f28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x271F2Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x271f28) {
            ctx->pc = 0x271F60u;
            goto label_271f60;
        }
    }
    ctx->pc = 0x271F30u;
    // 0x271f30: 0x100000f5
    ctx->pc = 0x271F30u;
    {
        const bool branch_taken_0x271f30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x271f30) {
            ctx->pc = 0x272308u;
            goto label_272308;
        }
    }
    ctx->pc = 0x271F38u;
label_271f38:
    // 0x271f38: 0xc6200070
    ctx->pc = 0x271f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271f3c: 0xe6200140
    ctx->pc = 0x271f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
    // 0x271f40: 0xc6200074
    ctx->pc = 0x271f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271f44: 0xe6200144
    ctx->pc = 0x271f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
    // 0x271f48: 0xc6200078
    ctx->pc = 0x271f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271f4c: 0xe6200148
    ctx->pc = 0x271f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x271f50: 0x3c013f80
    ctx->pc = 0x271f50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x271f54: 0x44810000
    ctx->pc = 0x271f54u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x271f58: 0x10000106
    ctx->pc = 0x271F58u;
    {
        const bool branch_taken_0x271f58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x271F5Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        if (branch_taken_0x271f58) {
            ctx->pc = 0x272374u;
            goto label_272374;
        }
    }
    ctx->pc = 0x271F60u;
label_271f60:
    // 0x271f60: 0x3c020032
    ctx->pc = 0x271f60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x271f64: 0x8c420808
    ctx->pc = 0x271f64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2056)));
    // 0x271f68: 0x28420002
    ctx->pc = 0x271f68u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x271f6c: 0x5040009d
    ctx->pc = 0x271F6Cu;
    {
        const bool branch_taken_0x271f6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x271f6c) {
            ctx->pc = 0x271F70u;
            SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
            ctx->pc = 0x2721E4u;
            goto label_2721e4;
        }
    }
    ctx->pc = 0x271F74u;
    // 0x271f74: 0xc6200070
    ctx->pc = 0x271f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271f78: 0xe7a00010
    ctx->pc = 0x271f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x271f7c: 0xc6200074
    ctx->pc = 0x271f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271f80: 0xe7a00014
    ctx->pc = 0x271f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x271f84: 0xc6200078
    ctx->pc = 0x271f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271f88: 0xe7a00018
    ctx->pc = 0x271f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x271f8c: 0xc6200140
    ctx->pc = 0x271f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271f90: 0xe7a00020
    ctx->pc = 0x271f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x271f94: 0xc6200144
    ctx->pc = 0x271f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271f98: 0xe7a00024
    ctx->pc = 0x271f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x271f9c: 0xc6200148
    ctx->pc = 0x271f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271fa0: 0xe7a00028
    ctx->pc = 0x271fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x271fa4: 0xc09ab02
    ctx->pc = 0x271FA4u;
    SET_GPR_U32(ctx, 31, 0x271FACu);
    ctx->pc = 0x271FA8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x26AC08u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_rotation_for_multiplayer_0x26ac08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271FACu; }
    }
    if (ctx->pc != 0x271FACu) { return; }
    ctx->pc = 0x271FACu;
    // 0x271fac: 0x240202d
    ctx->pc = 0x271facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271fb0: 0xc09a106
    ctx->pc = 0x271FB0u;
    SET_GPR_U32(ctx, 31, 0x271FB8u);
    ctx->pc = 0x271FB4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 320));
    ctx->pc = 0x268418u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_attn_pos_0x268418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271FB8u; }
    }
    if (ctx->pc != 0x271FB8u) { return; }
    ctx->pc = 0x271FB8u;
    // 0x271fb8: 0xae200160
    ctx->pc = 0x271fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
    // 0x271fbc: 0xae200164
    ctx->pc = 0x271fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 0));
    // 0x271fc0: 0xae200168
    ctx->pc = 0x271fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 0));
    // 0x271fc4: 0x3c020032
    ctx->pc = 0x271fc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x271fc8: 0x8c42080c
    ctx->pc = 0x271fc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x271fcc: 0x14400003
    ctx->pc = 0x271FCCu;
    {
        const bool branch_taken_0x271fcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x271fcc) {
            ctx->pc = 0x271FDCu;
            goto label_271fdc;
        }
    }
    ctx->pc = 0x271FD4u;
    // 0x271fd4: 0xc09a972
    ctx->pc = 0x271FD4u;
    SET_GPR_U32(ctx, 31, 0x271FDCu);
    ctx->pc = 0x271FD8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26A5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_cam_wpos_0x26a5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271FDCu; }
    }
    if (ctx->pc != 0x271FDCu) { return; }
    ctx->pc = 0x271FDCu;
label_271fdc:
    // 0x271fdc: 0xc09a8dc
    ctx->pc = 0x271FDCu;
    SET_GPR_U32(ctx, 31, 0x271FE4u);
    ctx->pc = 0x271FE0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26A370u;
    {
        const uint32_t __entryPc = ctx->pc;
        adjust_radius_0x26a370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271FE4u; }
    }
    if (ctx->pc != 0x271FE4u) { return; }
    ctx->pc = 0x271FE4u;
    // 0x271fe4: 0x1040021d
    ctx->pc = 0x271FE4u;
    {
        const bool branch_taken_0x271fe4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x271FE8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x271fe4) {
            ctx->pc = 0x27285Cu;
            goto label_27285c;
        }
    }
    ctx->pc = 0x271FECu;
    // 0x271fec: 0x8c4238d4
    ctx->pc = 0x271fecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14548)));
    // 0x271ff0: 0x10400004
    ctx->pc = 0x271FF0u;
    {
        const bool branch_taken_0x271ff0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x271FF4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 320));
        if (branch_taken_0x271ff0) {
            ctx->pc = 0x272004u;
            goto label_272004;
        }
    }
    ctx->pc = 0x271FF8u;
    // 0x271ff8: 0x26250070
    ctx->pc = 0x271ff8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 112));
    // 0x271ffc: 0xc099c08
    ctx->pc = 0x271FFCu;
    SET_GPR_U32(ctx, 31, 0x272004u);
    ctx->pc = 0x272000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x267020u;
    {
        const uint32_t __entryPc = ctx->pc;
        fix_radius_0x267020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272004u; }
    }
    if (ctx->pc != 0x272004u) { return; }
    ctx->pc = 0x272004u;
label_272004:
    // 0x272004: 0xae200090
    ctx->pc = 0x272004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x272008: 0xae200094
    ctx->pc = 0x272008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
    // 0x27200c: 0xae200098
    ctx->pc = 0x27200cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
    // 0x272010: 0xae2000a0
    ctx->pc = 0x272010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
    // 0x272014: 0xae2000a4
    ctx->pc = 0x272014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x272018: 0xae2000a8
    ctx->pc = 0x272018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
    // 0x27201c: 0xc6210140
    ctx->pc = 0x27201cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272020: 0xc7a00020
    ctx->pc = 0x272020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272024: 0x46000b01
    ctx->pc = 0x272024u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x272028: 0xe7ac0030
    ctx->pc = 0x272028u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x27202c: 0xc6220144
    ctx->pc = 0x27202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x272030: 0xc7a00024
    ctx->pc = 0x272030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272034: 0x46001081
    ctx->pc = 0x272034u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x272038: 0xe7a20034
    ctx->pc = 0x272038u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x27203c: 0xc6210148
    ctx->pc = 0x27203cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272040: 0xc7a00028
    ctx->pc = 0x272040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272044: 0x46000841
    ctx->pc = 0x272044u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x272048: 0xe7a10038
    ctx->pc = 0x272048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27204c: 0x460c6002
    ctx->pc = 0x27204cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x272050: 0x46021082
    ctx->pc = 0x272050u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x272054: 0x46020000
    ctx->pc = 0x272054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x272058: 0x46010842
    ctx->pc = 0x272058u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x27205c: 0x46010000
    ctx->pc = 0x27205cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x272060: 0x0
    ctx->pc = 0x272060u;
    // NOP
    // 0x272064: 0x0
    ctx->pc = 0x272064u;
    // NOP
    // 0x272068: 0x460000c4
    ctx->pc = 0x272068u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x27206c: 0x46031832
    ctx->pc = 0x27206cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272070: 0x45010006
    ctx->pc = 0x272070u;
    {
        const bool branch_taken_0x272070 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x272070) {
            ctx->pc = 0x27208Cu;
            goto label_27208c;
        }
    }
    ctx->pc = 0x272078u;
    // 0x272078: 0x460c6302
    ctx->pc = 0x272078u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x27207c: 0x46026300
    ctx->pc = 0x27207cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x272080: 0xc0ba284
    ctx->pc = 0x272080u;
    SET_GPR_U32(ctx, 31, 0x272088u);
    ctx->pc = 0x272084u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272088u; }
    }
    if (ctx->pc != 0x272088u) { return; }
    ctx->pc = 0x272088u;
    // 0x272088: 0x460000c6
    ctx->pc = 0x272088u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_27208c:
    // 0x27208c: 0x3c013e99
    ctx->pc = 0x27208cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16025 << 16));
    // 0x272090: 0x3421999a
    ctx->pc = 0x272090u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x272094: 0x44810000
    ctx->pc = 0x272094u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x272098: 0x46001834
    ctx->pc = 0x272098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27209c: 0x0
    ctx->pc = 0x27209cu;
    // NOP
    // 0x2720a0: 0x45030001
    ctx->pc = 0x2720A0u;
    {
        const bool branch_taken_0x2720a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2720a0) {
            ctx->pc = 0x2720A4u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->pc = 0x2720A8u;
            goto label_2720a8;
        }
    }
    ctx->pc = 0x2720A8u;
label_2720a8:
    // 0x2720a8: 0xc7a10030
    ctx->pc = 0x2720a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2720ac: 0x3c013dcc
    ctx->pc = 0x2720acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x2720b0: 0x3421cccd
    ctx->pc = 0x2720b0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2720b4: 0x44810000
    ctx->pc = 0x2720b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2720b8: 0x46000842
    ctx->pc = 0x2720b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2720bc: 0xc7a20034
    ctx->pc = 0x2720bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2720c0: 0x46001082
    ctx->pc = 0x2720c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2720c4: 0xc7a30038
    ctx->pc = 0x2720c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2720c8: 0x460018c2
    ctx->pc = 0x2720c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2720cc: 0xc7a00020
    ctx->pc = 0x2720ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2720d0: 0x46010000
    ctx->pc = 0x2720d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2720d4: 0xe6200140
    ctx->pc = 0x2720d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
    // 0x2720d8: 0xc7a00024
    ctx->pc = 0x2720d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2720dc: 0x46020000
    ctx->pc = 0x2720dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2720e0: 0xe6200144
    ctx->pc = 0x2720e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
    // 0x2720e4: 0xc7a00028
    ctx->pc = 0x2720e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2720e8: 0x46030000
    ctx->pc = 0x2720e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2720ec: 0xe6200148
    ctx->pc = 0x2720ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x2720f0: 0xc6210070
    ctx->pc = 0x2720f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2720f4: 0xc7a00010
    ctx->pc = 0x2720f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2720f8: 0x46000b01
    ctx->pc = 0x2720f8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2720fc: 0xe7ac0030
    ctx->pc = 0x2720fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x272100: 0xc6220074
    ctx->pc = 0x272100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x272104: 0xc7a00014
    ctx->pc = 0x272104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272108: 0x46001081
    ctx->pc = 0x272108u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x27210c: 0xe7a20034
    ctx->pc = 0x27210cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x272110: 0xc6210078
    ctx->pc = 0x272110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272114: 0xc7a00018
    ctx->pc = 0x272114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272118: 0x46000841
    ctx->pc = 0x272118u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27211c: 0xe7a10038
    ctx->pc = 0x27211cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x272120: 0x460c6002
    ctx->pc = 0x272120u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x272124: 0x46021082
    ctx->pc = 0x272124u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x272128: 0x46020000
    ctx->pc = 0x272128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x27212c: 0x46010842
    ctx->pc = 0x27212cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x272130: 0x46010000
    ctx->pc = 0x272130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x272134: 0x0
    ctx->pc = 0x272134u;
    // NOP
    // 0x272138: 0x0
    ctx->pc = 0x272138u;
    // NOP
    // 0x27213c: 0x460000c4
    ctx->pc = 0x27213cu;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x272140: 0x46031832
    ctx->pc = 0x272140u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272144: 0x45010006
    ctx->pc = 0x272144u;
    {
        const bool branch_taken_0x272144 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x272144) {
            ctx->pc = 0x272160u;
            goto label_272160;
        }
    }
    ctx->pc = 0x27214Cu;
    // 0x27214c: 0x460c6302
    ctx->pc = 0x27214cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x272150: 0x46026300
    ctx->pc = 0x272150u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x272154: 0xc0ba284
    ctx->pc = 0x272154u;
    SET_GPR_U32(ctx, 31, 0x27215Cu);
    ctx->pc = 0x272158u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27215Cu; }
    }
    if (ctx->pc != 0x27215Cu) { return; }
    ctx->pc = 0x27215Cu;
    // 0x27215c: 0x460000c6
    ctx->pc = 0x27215cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_272160:
    // 0x272160: 0x3c013e99
    ctx->pc = 0x272160u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16025 << 16));
    // 0x272164: 0x3421999a
    ctx->pc = 0x272164u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x272168: 0x44810000
    ctx->pc = 0x272168u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27216c: 0x46001834
    ctx->pc = 0x27216cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272170: 0x0
    ctx->pc = 0x272170u;
    // NOP
    // 0x272174: 0x45030001
    ctx->pc = 0x272174u;
    {
        const bool branch_taken_0x272174 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x272174) {
            ctx->pc = 0x272178u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->pc = 0x27217Cu;
            goto label_27217c;
        }
    }
    ctx->pc = 0x27217Cu;
label_27217c:
    // 0x27217c: 0xc7a30030
    ctx->pc = 0x27217cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x272180: 0x3c013dcc
    ctx->pc = 0x272180u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x272184: 0x3421cccd
    ctx->pc = 0x272184u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x272188: 0x44810000
    ctx->pc = 0x272188u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27218c: 0x460018c2
    ctx->pc = 0x27218cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x272190: 0xe7a30030
    ctx->pc = 0x272190u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x272194: 0xc7a10034
    ctx->pc = 0x272194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272198: 0x46000842
    ctx->pc = 0x272198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27219c: 0xe7a10034
    ctx->pc = 0x27219cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2721a0: 0xc7a20038
    ctx->pc = 0x2721a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2721a4: 0x46001082
    ctx->pc = 0x2721a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2721a8: 0xe7a20038
    ctx->pc = 0x2721a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2721ac: 0xc7a00010
    ctx->pc = 0x2721acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2721b0: 0x46030000
    ctx->pc = 0x2721b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2721b4: 0xe6200070
    ctx->pc = 0x2721b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x2721b8: 0xc7a00014
    ctx->pc = 0x2721b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2721bc: 0x46010000
    ctx->pc = 0x2721bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2721c0: 0xe6200074
    ctx->pc = 0x2721c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x2721c4: 0xc7a00018
    ctx->pc = 0x2721c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2721c8: 0x46020000
    ctx->pc = 0x2721c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2721cc: 0xe6200078
    ctx->pc = 0x2721ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x2721d0: 0x240202d
    ctx->pc = 0x2721d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2721d4: 0xc09a760
    ctx->pc = 0x2721D4u;
    SET_GPR_U32(ctx, 31, 0x2721DCu);
    ctx->pc = 0x2721D8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 320));
    ctx->pc = 0x269D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        cam_orient_to_0x269d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2721DCu; }
    }
    if (ctx->pc != 0x2721DCu) { return; }
    ctx->pc = 0x2721DCu;
    // 0x2721dc: 0x1000002b
    ctx->pc = 0x2721DCu;
    {
        const bool branch_taken_0x2721dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2721dc) {
            ctx->pc = 0x27228Cu;
            goto label_27228c;
        }
    }
    ctx->pc = 0x2721E4u;
label_2721e4:
    // 0x2721e4: 0x3c020031
    ctx->pc = 0x2721e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2721e8: 0x8c830808
    ctx->pc = 0x2721e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 2056)));
    // 0x2721ec: 0x8c42ffbc
    ctx->pc = 0x2721ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x2721f0: 0x621823
    ctx->pc = 0x2721f0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2721f4: 0xac830808
    ctx->pc = 0x2721f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2056), GPR_U32(ctx, 3));
    // 0x2721f8: 0x28630002
    ctx->pc = 0x2721f8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 2));
    // 0x2721fc: 0x10600002
    ctx->pc = 0x2721FCu;
    {
        const bool branch_taken_0x2721fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x272200u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2721fc) {
            ctx->pc = 0x272208u;
            goto label_272208;
        }
    }
    ctx->pc = 0x272204u;
    // 0x272204: 0xac820808
    ctx->pc = 0x272204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2056), GPR_U32(ctx, 2));
label_272208:
    // 0x272208: 0x3c020032
    ctx->pc = 0x272208u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x27220c: 0x8c420808
    ctx->pc = 0x27220cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2056)));
    // 0x272210: 0x2842002d
    ctx->pc = 0x272210u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 45));
    // 0x272214: 0x1040001d
    ctx->pc = 0x272214u;
    {
        const bool branch_taken_0x272214 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x272218u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x272214) {
            ctx->pc = 0x27228Cu;
            goto label_27228c;
        }
    }
    ctx->pc = 0x27221Cu;
    // 0x27221c: 0x202d
    ctx->pc = 0x27221cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272220: 0x244c1bc0
    ctx->pc = 0x272220u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x272224: 0x240a2b00
    ctx->pc = 0x272224u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x272228: 0x24090001
    ctx->pc = 0x272228u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27222c: 0x2408003c
    ctx->pc = 0x27222cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 60));
    // 0x272230: 0x3c020031
    ctx->pc = 0x272230u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x272234: 0x244d1b98
    ctx->pc = 0x272234u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 2), 7064));
    // 0x272238: 0x3c060200
    ctx->pc = 0x272238u;
    SET_GPR_U32(ctx, 6, ((uint32_t)512 << 16));
    // 0x27223c: 0x34c600ff
    ctx->pc = 0x27223cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 255));
    // 0x272240: 0x3c070032
    ctx->pc = 0x272240u;
    SET_GPR_U32(ctx, 7, ((uint32_t)50 << 16));
    // 0x272244: 0x8ce50808
    ctx->pc = 0x272244u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 2056)));
    // 0x272248: 0x8a1818
    ctx->pc = 0x272248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27224c: 0x0
    ctx->pc = 0x27224cu;
    // NOP
label_272250:
    // 0x272250: 0x6c1021
    ctx->pc = 0x272250u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x272254: 0x8c4300fc
    ctx->pc = 0x272254u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x272258: 0x54690008
    ctx->pc = 0x272258u;
    {
        const bool branch_taken_0x272258 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 9));
        if (branch_taken_0x272258) {
            ctx->pc = 0x27225Cu;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x27227Cu;
            goto label_27227c;
        }
    }
    ctx->pc = 0x272260u;
    // 0x272260: 0x885818
    ctx->pc = 0x272260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x272264: 0x16d1021
    ctx->pc = 0x272264u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x272268: 0x8c420000
    ctx->pc = 0x272268u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27226c: 0x461024
    ctx->pc = 0x27226cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x272270: 0x54400001
    ctx->pc = 0x272270u;
    {
        const bool branch_taken_0x272270 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x272270) {
            ctx->pc = 0x272274u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x272278u;
            goto label_272278;
        }
    }
    ctx->pc = 0x272278u;
label_272278:
    // 0x272278: 0x24840001
    ctx->pc = 0x272278u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_27227c:
    // 0x27227c: 0x28820004
    ctx->pc = 0x27227cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x272280: 0x5440fff3
    ctx->pc = 0x272280u;
    {
        const bool branch_taken_0x272280 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x272280) {
            ctx->pc = 0x272284u;
            { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
            ctx->pc = 0x272250u;
            goto label_272250;
        }
    }
    ctx->pc = 0x272288u;
    // 0x272288: 0xace50808
    ctx->pc = 0x272288u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2056), GPR_U32(ctx, 5));
label_27228c:
    // 0x27228c: 0x56000054
    ctx->pc = 0x27228Cu;
    {
        const bool branch_taken_0x27228c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x27228c) {
            ctx->pc = 0x272290u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->pc = 0x2723E0u;
            goto label_2723e0;
        }
    }
    ctx->pc = 0x272294u;
    // 0x272294: 0x2402ffff
    ctx->pc = 0x272294u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x272298: 0xae2200d4
    ctx->pc = 0x272298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x27229c: 0x3c100032
    ctx->pc = 0x27229cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x2722a0: 0x8e02080c
    ctx->pc = 0x2722a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2060)));
    // 0x2722a4: 0x5040004e
    ctx->pc = 0x2722A4u;
    {
        const bool branch_taken_0x2722a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2722a4) {
            ctx->pc = 0x2722A8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->pc = 0x2723E0u;
            goto label_2723e0;
        }
    }
    ctx->pc = 0x2722ACu;
    // 0x2722ac: 0xc099bfa
    ctx->pc = 0x2722ACu;
    SET_GPR_U32(ctx, 31, 0x2722B4u);
    ctx->pc = 0x266FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        del_msgs_at_start_0x266fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2722B4u; }
    }
    if (ctx->pc != 0x2722B4u) { return; }
    ctx->pc = 0x2722B4u;
    // 0x2722b4: 0xae00080c
    ctx->pc = 0x2722b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2060), GPR_U32(ctx, 0));
    // 0x2722b8: 0x3c020032
    ctx->pc = 0x2722b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2722bc: 0xac400808
    ctx->pc = 0x2722bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2056), GPR_U32(ctx, 0));
    // 0x2722c0: 0x202d
    ctx->pc = 0x2722c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2722c4: 0x3c020032
    ctx->pc = 0x2722c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2722c8: 0x24481bc0
    ctx->pc = 0x2722c8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2722cc: 0x24072b00
    ctx->pc = 0x2722ccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2722d0: 0x24060001
    ctx->pc = 0x2722d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2722d4: 0x24050004
    ctx->pc = 0x2722d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2722d8: 0x871018
    ctx->pc = 0x2722d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2722dc: 0x0
    ctx->pc = 0x2722dcu;
    // NOP
label_2722e0:
    // 0x2722e0: 0x481821
    ctx->pc = 0x2722e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2722e4: 0x8c6200fc
    ctx->pc = 0x2722e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x2722e8: 0x50460001
    ctx->pc = 0x2722E8u;
    {
        const bool branch_taken_0x2722e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        if (branch_taken_0x2722e8) {
            ctx->pc = 0x2722ECu;
            WRITE32(ADD32(GPR_U32(ctx, 3), 2292), GPR_U32(ctx, 5));
            ctx->pc = 0x2722F0u;
            goto label_2722f0;
        }
    }
    ctx->pc = 0x2722F0u;
label_2722f0:
    // 0x2722f0: 0x24840001
    ctx->pc = 0x2722f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2722f4: 0x28820004
    ctx->pc = 0x2722f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x2722f8: 0x1440fff9
    ctx->pc = 0x2722F8u;
    {
        const bool branch_taken_0x2722f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2722FCu;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2722f8) {
            ctx->pc = 0x2722E0u;
            goto label_2722e0;
        }
    }
    ctx->pc = 0x272300u;
    // 0x272300: 0x10000037
    ctx->pc = 0x272300u;
    {
        const bool branch_taken_0x272300 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x272304u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 212)));
        if (branch_taken_0x272300) {
            ctx->pc = 0x2723E0u;
            goto label_2723e0;
        }
    }
    ctx->pc = 0x272308u;
label_272308:
    // 0x272308: 0xc09ab02
    ctx->pc = 0x272308u;
    SET_GPR_U32(ctx, 31, 0x272310u);
    ctx->pc = 0x27230Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x26AC08u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_rotation_for_multiplayer_0x26ac08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272310u; }
    }
    if (ctx->pc != 0x272310u) { return; }
    ctx->pc = 0x272310u;
    // 0x272310: 0x3c020034
    ctx->pc = 0x272310u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x272314: 0x8c42f8fc
    ctx->pc = 0x272314u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x272318: 0x18400006
    ctx->pc = 0x272318u;
    {
        const bool branch_taken_0x272318 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27231Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x272318) {
            ctx->pc = 0x272334u;
            goto label_272334;
        }
    }
    ctx->pc = 0x272320u;
    // 0x272320: 0x240202d
    ctx->pc = 0x272320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272324: 0xc09a106
    ctx->pc = 0x272324u;
    SET_GPR_U32(ctx, 31, 0x27232Cu);
    ctx->pc = 0x272328u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 320));
    ctx->pc = 0x268418u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_attn_pos_0x268418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27232Cu; }
    }
    if (ctx->pc != 0x27232Cu) { return; }
    ctx->pc = 0x27232Cu;
    // 0x27232c: 0x1000000f
    ctx->pc = 0x27232Cu;
    {
        const bool branch_taken_0x27232c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x272330u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
        if (branch_taken_0x27232c) {
            ctx->pc = 0x27236Cu;
            goto label_27236c;
        }
    }
    ctx->pc = 0x272334u;
label_272334:
    // 0x272334: 0x2443c7c8
    ctx->pc = 0x272334u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294952904));
    // 0x272338: 0xc442c7c8
    ctx->pc = 0x272338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27233c: 0xe6220140
    ctx->pc = 0x27233cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
    // 0x272340: 0xc4610004
    ctx->pc = 0x272340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272344: 0xe6210144
    ctx->pc = 0x272344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
    // 0x272348: 0xc4600008
    ctx->pc = 0x272348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27234c: 0xe6200148
    ctx->pc = 0x27234cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x272350: 0xe6220170
    ctx->pc = 0x272350u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 368), bits); }
    // 0x272354: 0xe6210174
    ctx->pc = 0x272354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 372), bits); }
    // 0x272358: 0xe6200178
    ctx->pc = 0x272358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x27235c: 0xe6220180
    ctx->pc = 0x27235cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x272360: 0xe6210184
    ctx->pc = 0x272360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
    // 0x272364: 0xe6200188
    ctx->pc = 0x272364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 392), bits); }
    // 0x272368: 0xae200160
    ctx->pc = 0x272368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
label_27236c:
    // 0x27236c: 0xae200164
    ctx->pc = 0x27236cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 0));
    // 0x272370: 0xae200168
    ctx->pc = 0x272370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 0));
label_272374:
    // 0x272374: 0x240202d
    ctx->pc = 0x272374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272378: 0xc09ab02
    ctx->pc = 0x272378u;
    SET_GPR_U32(ctx, 31, 0x272380u);
    ctx->pc = 0x27237Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x26AC08u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_rotation_for_multiplayer_0x26ac08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272380u; }
    }
    if (ctx->pc != 0x272380u) { return; }
    ctx->pc = 0x272380u;
    // 0x272380: 0xc09a972
    ctx->pc = 0x272380u;
    SET_GPR_U32(ctx, 31, 0x272388u);
    ctx->pc = 0x272384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26A5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_cam_wpos_0x26a5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272388u; }
    }
    if (ctx->pc != 0x272388u) { return; }
    ctx->pc = 0x272388u;
    // 0x272388: 0xae200090
    ctx->pc = 0x272388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x27238c: 0xae200094
    ctx->pc = 0x27238cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
    // 0x272390: 0xae200098
    ctx->pc = 0x272390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
    // 0x272394: 0xae2000a0
    ctx->pc = 0x272394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
    // 0x272398: 0xae2000a4
    ctx->pc = 0x272398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x27239c: 0xae2000a8
    ctx->pc = 0x27239cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
    // 0x2723a0: 0x26300140
    ctx->pc = 0x2723a0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 320));
    // 0x2723a4: 0x200202d
    ctx->pc = 0x2723a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2723a8: 0x26250070
    ctx->pc = 0x2723a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 112));
    // 0x2723ac: 0xc099c08
    ctx->pc = 0x2723ACu;
    SET_GPR_U32(ctx, 31, 0x2723B4u);
    ctx->pc = 0x2723B0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x267020u;
    {
        const uint32_t __entryPc = ctx->pc;
        fix_radius_0x267020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2723B4u; }
    }
    if (ctx->pc != 0x2723B4u) { return; }
    ctx->pc = 0x2723B4u;
    // 0x2723b4: 0x240202d
    ctx->pc = 0x2723b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2723b8: 0xc09a760
    ctx->pc = 0x2723B8u;
    SET_GPR_U32(ctx, 31, 0x2723C0u);
    ctx->pc = 0x2723BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x269D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        cam_orient_to_0x269d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2723C0u; }
    }
    if (ctx->pc != 0x2723C0u) { return; }
    ctx->pc = 0x2723C0u;
    // 0x2723c0: 0x240202d
    ctx->pc = 0x2723c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2723c4: 0xc099c48
    ctx->pc = 0x2723C4u;
    SET_GPR_U32(ctx, 31, 0x2723CCu);
    ctx->pc = 0x2723C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x267120u;
    {
        const uint32_t __entryPc = ctx->pc;
        ProcCamera_0x267120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2723CCu; }
    }
    if (ctx->pc != 0x2723CCu) { return; }
    ctx->pc = 0x2723CCu;
    // 0x2723cc: 0x3c02003c
    ctx->pc = 0x2723ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2723d0: 0xac4038e0
    ctx->pc = 0x2723d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14560), GPR_U32(ctx, 0));
    // 0x2723d4: 0x2402ffff
    ctx->pc = 0x2723d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2723d8: 0xae2200d4
    ctx->pc = 0x2723d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x2723dc: 0x8e2200d4
    ctx->pc = 0x2723dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2723e0:
    // 0x2723e0: 0x441011f
    ctx->pc = 0x2723E0u;
    {
        const bool branch_taken_0x2723e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2723E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x2723e0) {
            ctx->pc = 0x272860u;
            goto label_272860;
        }
    }
    ctx->pc = 0x2723E8u;
    // 0x2723e8: 0x982d
    ctx->pc = 0x2723e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2723ec: 0x0
    ctx->pc = 0x2723ecu;
    // NOP
label_2723f0:
    // 0x2723f0: 0xf02d
    ctx->pc = 0x2723f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2723f4: 0x240202d
    ctx->pc = 0x2723f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2723f8: 0xc09a106
    ctx->pc = 0x2723F8u;
    SET_GPR_U32(ctx, 31, 0x272400u);
    ctx->pc = 0x2723FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x268418u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_attn_pos_0x268418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272400u; }
    }
    if (ctx->pc != 0x272400u) { return; }
    ctx->pc = 0x272400u;
    // 0x272400: 0xc09abe4
    ctx->pc = 0x272400u;
    SET_GPR_U32(ctx, 31, 0x272408u);
    ctx->pc = 0x272404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26AF90u;
    {
        const uint32_t __entryPc = ctx->pc;
        avoid_vibration_0x26af90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272408u; }
    }
    if (ctx->pc != 0x272408u) { return; }
    ctx->pc = 0x272408u;
    // 0x272408: 0xc7a00000
    ctx->pc = 0x272408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27240c: 0xc6210140
    ctx->pc = 0x27240cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272410: 0x46010001
    ctx->pc = 0x272410u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x272414: 0xe6200160
    ctx->pc = 0x272414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 352), bits); }
    // 0x272418: 0xc7a00004
    ctx->pc = 0x272418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27241c: 0xc6210144
    ctx->pc = 0x27241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272420: 0x46010001
    ctx->pc = 0x272420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x272424: 0xe6200164
    ctx->pc = 0x272424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 356), bits); }
    // 0x272428: 0xc7a00008
    ctx->pc = 0x272428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27242c: 0xc6210148
    ctx->pc = 0x27242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272430: 0x46010001
    ctx->pc = 0x272430u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x272434: 0xe6200168
    ctx->pc = 0x272434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 360), bits); }
    // 0x272438: 0xc09a8dc
    ctx->pc = 0x272438u;
    SET_GPR_U32(ctx, 31, 0x272440u);
    ctx->pc = 0x27243Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26A370u;
    {
        const uint32_t __entryPc = ctx->pc;
        adjust_radius_0x26a370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272440u; }
    }
    if (ctx->pc != 0x272440u) { return; }
    ctx->pc = 0x272440u;
    // 0x272440: 0x10400107
    ctx->pc = 0x272440u;
    {
        const bool branch_taken_0x272440 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x272444u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x272440) {
            ctx->pc = 0x272860u;
            goto label_272860;
        }
    }
    ctx->pc = 0x272448u;
    // 0x272448: 0xc6200160
    ctx->pc = 0x272448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27244c: 0x46000002
    ctx->pc = 0x27244cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x272450: 0xc6210164
    ctx->pc = 0x272450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272454: 0x46010842
    ctx->pc = 0x272454u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x272458: 0x46010000
    ctx->pc = 0x272458u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27245c: 0xc6210168
    ctx->pc = 0x27245cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272460: 0x46010842
    ctx->pc = 0x272460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x272464: 0x46010300
    ctx->pc = 0x272464u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x272468: 0x0
    ctx->pc = 0x272468u;
    // NOP
    // 0x27246c: 0x0
    ctx->pc = 0x27246cu;
    // NOP
    // 0x272470: 0x460c0004
    ctx->pc = 0x272470u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x272474: 0x46000032
    ctx->pc = 0x272474u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272478: 0x0
    ctx->pc = 0x272478u;
    // NOP
    // 0x27247c: 0x45010004
    ctx->pc = 0x27247Cu;
    {
        const bool branch_taken_0x27247c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x272480u;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x27247c) {
            ctx->pc = 0x272490u;
            goto label_272490;
        }
    }
    ctx->pc = 0x272484u;
    // 0x272484: 0xc0ba284
    ctx->pc = 0x272484u;
    SET_GPR_U32(ctx, 31, 0x27248Cu);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27248Cu; }
    }
    if (ctx->pc != 0x27248Cu) { return; }
    ctx->pc = 0x27248Cu;
    // 0x27248c: 0x46000506
    ctx->pc = 0x27248cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_272490:
    // 0x272490: 0x3c03003c
    ctx->pc = 0x272490u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x272494: 0x3c02003c
    ctx->pc = 0x272494u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x272498: 0x24503970
    ctx->pc = 0x272498u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 14704));
    // 0x27249c: 0xc4403970
    ctx->pc = 0x27249cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2724a0: 0x3c014180
    ctx->pc = 0x2724a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16768 << 16));
    // 0x2724a4: 0x44816000
    ctx->pc = 0x2724a4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2724a8: 0x3c0141c4
    ctx->pc = 0x2724a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16836 << 16));
    // 0x2724ac: 0x44816800
    ctx->pc = 0x2724acu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2724b0: 0xc09c470
    ctx->pc = 0x2724B0u;
    SET_GPR_U32(ctx, 31, 0x2724B8u);
    ctx->pc = 0x2724B4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14700), bits); }
    ctx->pc = 0x2711C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc_cam_speed_0x2711c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2724B8u; }
    }
    if (ctx->pc != 0x2724B8u) { return; }
    ctx->pc = 0x2724B8u;
    // 0x2724b8: 0x3c020034
    ctx->pc = 0x2724b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2724bc: 0x8c42cdb8
    ctx->pc = 0x2724bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954424)));
    // 0x2724c0: 0x4410023
    ctx->pc = 0x2724C0u;
    {
        const bool branch_taken_0x2724c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2724C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2724c0) {
            ctx->pc = 0x272550u;
            goto label_272550;
        }
    }
    ctx->pc = 0x2724C8u;
    // 0x2724c8: 0x3c020034
    ctx->pc = 0x2724c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2724cc: 0x3c013f80
    ctx->pc = 0x2724ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2724d0: 0x44810800
    ctx->pc = 0x2724d0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2724d4: 0xc440f9fc
    ctx->pc = 0x2724d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2724d8: 0x46000836
    ctx->pc = 0x2724d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2724dc: 0x0
    ctx->pc = 0x2724dcu;
    // NOP
    // 0x2724e0: 0x4500001a
    ctx->pc = 0x2724E0u;
    {
        const bool branch_taken_0x2724e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2724E4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294965756));
        if (branch_taken_0x2724e0) {
            ctx->pc = 0x27254Cu;
            goto label_27254c;
        }
    }
    ctx->pc = 0x2724E8u;
    // 0x2724e8: 0x200302d
    ctx->pc = 0x2724e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2724ec: 0x60282d
    ctx->pc = 0x2724ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2724f0: 0x3c030031
    ctx->pc = 0x2724f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2724f4: 0x8c62ffbc
    ctx->pc = 0x2724f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x2724f8: 0x4400005
    ctx->pc = 0x2724F8u;
    {
        const bool branch_taken_0x2724f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2724FCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x2724f8) {
            ctx->pc = 0x272510u;
            goto label_272510;
        }
    }
    ctx->pc = 0x272500u;
    // 0x272500: 0x44820800
    ctx->pc = 0x272500u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x272504: 0x46800860
    ctx->pc = 0x272504u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x272508: 0x10000009
    ctx->pc = 0x272508u;
    {
        const bool branch_taken_0x272508 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27250Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x272508) {
            ctx->pc = 0x272530u;
            goto label_272530;
        }
    }
    ctx->pc = 0x272510u;
label_272510:
    // 0x272510: 0x8c820000
    ctx->pc = 0x272510u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x272514: 0x30430001
    ctx->pc = 0x272514u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x272518: 0x21042
    ctx->pc = 0x272518u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x27251c: 0x621825
    ctx->pc = 0x27251cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x272520: 0x44830800
    ctx->pc = 0x272520u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x272524: 0x46800860
    ctx->pc = 0x272524u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x272528: 0x46010840
    ctx->pc = 0x272528u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x27252c: 0xc4a00000
    ctx->pc = 0x27252cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272530:
    // 0x272530: 0x46000802
    ctx->pc = 0x272530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x272534: 0xe4c00000
    ctx->pc = 0x272534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x272538: 0x3c02003c
    ctx->pc = 0x272538u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x27253c: 0x3c014120
    ctx->pc = 0x27253cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x272540: 0x44810000
    ctx->pc = 0x272540u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x272544: 0x1000001f
    ctx->pc = 0x272544u;
    {
        const bool branch_taken_0x272544 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x272548u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14708), bits); }
        if (branch_taken_0x272544) {
            ctx->pc = 0x2725C4u;
            goto label_2725c4;
        }
    }
    ctx->pc = 0x27254Cu;
label_27254c:
    // 0x27254c: 0x3c02003c
    ctx->pc = 0x27254cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_272550:
    // 0x272550: 0x3c03003c
    ctx->pc = 0x272550u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x272554: 0xc441396c
    ctx->pc = 0x272554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272558: 0xc4603970
    ctx->pc = 0x272558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27255c: 0x46000834
    ctx->pc = 0x27255cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272560: 0x0
    ctx->pc = 0x272560u;
    // NOP
    // 0x272564: 0x4500000b
    ctx->pc = 0x272564u;
    {
        const bool branch_taken_0x272564 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x272568u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x272564) {
            ctx->pc = 0x272594u;
            goto label_272594;
        }
    }
    ctx->pc = 0x27256Cu;
    // 0x27256c: 0x46010001
    ctx->pc = 0x27256cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x272570: 0x3c013f19
    ctx->pc = 0x272570u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16153 << 16));
    // 0x272574: 0x3421999a
    ctx->pc = 0x272574u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x272578: 0x44811000
    ctx->pc = 0x272578u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x27257c: 0x46001034
    ctx->pc = 0x27257cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272580: 0x0
    ctx->pc = 0x272580u;
    // NOP
    // 0x272584: 0x45000010
    ctx->pc = 0x272584u;
    {
        const bool branch_taken_0x272584 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x272588u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x272584) {
            ctx->pc = 0x2725C8u;
            goto label_2725c8;
        }
    }
    ctx->pc = 0x27258Cu;
    // 0x27258c: 0x1000000c
    ctx->pc = 0x27258Cu;
    {
        const bool branch_taken_0x27258c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x272590u;
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        if (branch_taken_0x27258c) {
            ctx->pc = 0x2725C0u;
            goto label_2725c0;
        }
    }
    ctx->pc = 0x272594u;
label_272594:
    // 0x272594: 0xc441396c
    ctx->pc = 0x272594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272598: 0xc4603970
    ctx->pc = 0x272598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27259c: 0x46000801
    ctx->pc = 0x27259cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2725a0: 0x3c013f19
    ctx->pc = 0x2725a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16153 << 16));
    // 0x2725a4: 0x3421999a
    ctx->pc = 0x2725a4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x2725a8: 0x44811000
    ctx->pc = 0x2725a8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2725ac: 0x46001034
    ctx->pc = 0x2725acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2725b0: 0x0
    ctx->pc = 0x2725b0u;
    // NOP
    // 0x2725b4: 0x45000004
    ctx->pc = 0x2725B4u;
    {
        const bool branch_taken_0x2725b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2725B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2725b4) {
            ctx->pc = 0x2725C8u;
            goto label_2725c8;
        }
    }
    ctx->pc = 0x2725BCu;
    // 0x2725bc: 0x46020801
    ctx->pc = 0x2725bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2725c0:
    // 0x2725c0: 0xe4603970
    ctx->pc = 0x2725c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14704), bits); }
label_2725c4:
    // 0x2725c4: 0x3c02003c
    ctx->pc = 0x2725c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2725c8:
    // 0x2725c8: 0xc4403970
    ctx->pc = 0x2725c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2725cc: 0x46140036
    ctx->pc = 0x2725ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2725d0: 0x0
    ctx->pc = 0x2725d0u;
    // NOP
    // 0x2725d4: 0x45000014
    ctx->pc = 0x2725D4u;
    {
        const bool branch_taken_0x2725d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2725D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2725d4) {
            ctx->pc = 0x272628u;
            goto label_272628;
        }
    }
    ctx->pc = 0x2725DCu;
    // 0x2725dc: 0xc4403974
    ctx->pc = 0x2725dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2725e0: 0x46140034
    ctx->pc = 0x2725e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2725e4: 0x0
    ctx->pc = 0x2725e4u;
    // NOP
    // 0x2725e8: 0x45030001
    ctx->pc = 0x2725E8u;
    {
        const bool branch_taken_0x2725e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2725e8) {
            ctx->pc = 0x2725ECu;
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2725F0u;
            goto label_2725f0;
        }
    }
    ctx->pc = 0x2725F0u;
label_2725f0:
    // 0x2725f0: 0x3c02003c
    ctx->pc = 0x2725f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2725f4: 0xc4413970
    ctx->pc = 0x2725f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2725f8: 0x0
    ctx->pc = 0x2725f8u;
    // NOP
    // 0x2725fc: 0x0
    ctx->pc = 0x2725fcu;
    // NOP
    // 0x272600: 0x46140843
    ctx->pc = 0x272600u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[20];
    // 0x272604: 0xc6200160
    ctx->pc = 0x272604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272608: 0x46000802
    ctx->pc = 0x272608u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27260c: 0xe6200160
    ctx->pc = 0x27260cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 352), bits); }
    // 0x272610: 0xc6200164
    ctx->pc = 0x272610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272614: 0x46000802
    ctx->pc = 0x272614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x272618: 0xe6200164
    ctx->pc = 0x272618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 356), bits); }
    // 0x27261c: 0xc6200168
    ctx->pc = 0x27261cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272620: 0x46000842
    ctx->pc = 0x272620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x272624: 0xe6210168
    ctx->pc = 0x272624u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 360), bits); }
label_272628:
    // 0x272628: 0xc6200140
    ctx->pc = 0x272628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27262c: 0xc6210160
    ctx->pc = 0x27262cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272630: 0x46010000
    ctx->pc = 0x272630u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x272634: 0xe6200140
    ctx->pc = 0x272634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
    // 0x272638: 0xc6200144
    ctx->pc = 0x272638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27263c: 0xc6210164
    ctx->pc = 0x27263cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272640: 0x46010000
    ctx->pc = 0x272640u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x272644: 0xe6200144
    ctx->pc = 0x272644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
    // 0x272648: 0xc6200148
    ctx->pc = 0x272648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27264c: 0xc6210168
    ctx->pc = 0x27264cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272650: 0x46010000
    ctx->pc = 0x272650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x272654: 0xe6200148
    ctx->pc = 0x272654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x272658: 0x240202d
    ctx->pc = 0x272658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27265c: 0xc09ab02
    ctx->pc = 0x27265Cu;
    SET_GPR_U32(ctx, 31, 0x272664u);
    ctx->pc = 0x272660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26AC08u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_rotation_for_multiplayer_0x26ac08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272664u; }
    }
    if (ctx->pc != 0x272664u) { return; }
    ctx->pc = 0x272664u;
    // 0x272664: 0xc09a972
    ctx->pc = 0x272664u;
    SET_GPR_U32(ctx, 31, 0x27266Cu);
    ctx->pc = 0x272668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26A5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_cam_wpos_0x26a5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27266Cu; }
    }
    if (ctx->pc != 0x27266Cu) { return; }
    ctx->pc = 0x27266Cu;
    // 0x27266c: 0xae200090
    ctx->pc = 0x27266cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x272670: 0xae200094
    ctx->pc = 0x272670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
    // 0x272674: 0xae200098
    ctx->pc = 0x272674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
    // 0x272678: 0xae2000a0
    ctx->pc = 0x272678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
    // 0x27267c: 0xae2000a4
    ctx->pc = 0x27267cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x272680: 0xae2000a8
    ctx->pc = 0x272680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
    // 0x272684: 0x3c02003c
    ctx->pc = 0x272684u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x272688: 0x8c4238d4
    ctx->pc = 0x272688u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14548)));
    // 0x27268c: 0x10400004
    ctx->pc = 0x27268Cu;
    {
        const bool branch_taken_0x27268c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x272690u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 320));
        if (branch_taken_0x27268c) {
            ctx->pc = 0x2726A0u;
            goto label_2726a0;
        }
    }
    ctx->pc = 0x272694u;
    // 0x272694: 0x26250070
    ctx->pc = 0x272694u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 112));
    // 0x272698: 0xc099c08
    ctx->pc = 0x272698u;
    SET_GPR_U32(ctx, 31, 0x2726A0u);
    ctx->pc = 0x27269Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x267020u;
    {
        const uint32_t __entryPc = ctx->pc;
        fix_radius_0x267020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2726A0u; }
    }
    if (ctx->pc != 0x2726A0u) { return; }
    ctx->pc = 0x2726A0u;
label_2726a0:
    // 0x2726a0: 0x240202d
    ctx->pc = 0x2726a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2726a4: 0xc09a760
    ctx->pc = 0x2726A4u;
    SET_GPR_U32(ctx, 31, 0x2726ACu);
    ctx->pc = 0x2726A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 320));
    ctx->pc = 0x269D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        cam_orient_to_0x269d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2726ACu; }
    }
    if (ctx->pc != 0x2726ACu) { return; }
    ctx->pc = 0x2726ACu;
    // 0x2726ac: 0x3c020034
    ctx->pc = 0x2726acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2726b0: 0x8c42eb04
    ctx->pc = 0x2726b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961924)));
    // 0x2726b4: 0x10400069
    ctx->pc = 0x2726B4u;
    {
        const bool branch_taken_0x2726b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2726B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2726b4) {
            ctx->pc = 0x27285Cu;
            goto label_27285c;
        }
    }
    ctx->pc = 0x2726BCu;
    // 0x2726bc: 0x8c42f914
    ctx->pc = 0x2726bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965524)));
    // 0x2726c0: 0x10400066
    ctx->pc = 0x2726C0u;
    {
        const bool branch_taken_0x2726c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2726C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2726c0) {
            ctx->pc = 0x27285Cu;
            goto label_27285c;
        }
    }
    ctx->pc = 0x2726C8u;
    // 0x2726c8: 0xc62100d0
    ctx->pc = 0x2726c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2726cc: 0xc440f904
    ctx->pc = 0x2726ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2726d0: 0x46010036
    ctx->pc = 0x2726d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2726d4: 0x0
    ctx->pc = 0x2726d4u;
    // NOP
    // 0x2726d8: 0x45000005
    ctx->pc = 0x2726D8u;
    {
        const bool branch_taken_0x2726d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2726DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2726d8) {
            ctx->pc = 0x2726F0u;
            goto label_2726f0;
        }
    }
    ctx->pc = 0x2726E0u;
    // 0x2726e0: 0x8c42cdb8
    ctx->pc = 0x2726e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954424)));
    // 0x2726e4: 0x440000b
    ctx->pc = 0x2726E4u;
    {
        const bool branch_taken_0x2726e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2726E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2726e4) {
            ctx->pc = 0x272714u;
            goto label_272714;
        }
    }
    ctx->pc = 0x2726ECu;
    // 0x2726ec: 0xc62100d0
    ctx->pc = 0x2726ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2726f0:
    // 0x2726f0: 0x3c0142a0
    ctx->pc = 0x2726f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17056 << 16));
    // 0x2726f4: 0x44810000
    ctx->pc = 0x2726f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2726f8: 0x46010036
    ctx->pc = 0x2726f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2726fc: 0x0
    ctx->pc = 0x2726fcu;
    // NOP
    // 0x272700: 0x45000056
    ctx->pc = 0x272700u;
    {
        const bool branch_taken_0x272700 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x272704u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x272700) {
            ctx->pc = 0x27285Cu;
            goto label_27285c;
        }
    }
    ctx->pc = 0x272708u;
    // 0x272708: 0x8c42cdb8
    ctx->pc = 0x272708u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954424)));
    // 0x27270c: 0x4400053
    ctx->pc = 0x27270Cu;
    {
        const bool branch_taken_0x27270c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x272710u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x27270c) {
            ctx->pc = 0x27285Cu;
            goto label_27285c;
        }
    }
    ctx->pc = 0x272714u;
label_272714:
    // 0x272714: 0x8c42f940
    ctx->pc = 0x272714u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965568)));
    // 0x272718: 0x10400006
    ctx->pc = 0x272718u;
    {
        const bool branch_taken_0x272718 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27271Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x272718) {
            ctx->pc = 0x272734u;
            goto label_272734;
        }
    }
    ctx->pc = 0x272720u;
    // 0x272720: 0xc440f8f4
    ctx->pc = 0x272720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272724: 0x46150032
    ctx->pc = 0x272724u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272728: 0x0
    ctx->pc = 0x272728u;
    // NOP
    // 0x27272c: 0x4501004c
    ctx->pc = 0x27272Cu;
    {
        const bool branch_taken_0x27272c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x272730u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x27272c) {
            ctx->pc = 0x272860u;
            goto label_272860;
        }
    }
    ctx->pc = 0x272734u;
label_272734:
    // 0x272734: 0x16600049
    ctx->pc = 0x272734u;
    {
        const bool branch_taken_0x272734 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x272738u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x272734) {
            ctx->pc = 0x27285Cu;
            goto label_27285c;
        }
    }
    ctx->pc = 0x27273Cu;
    // 0x27273c: 0x3c020032
    ctx->pc = 0x27273cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x272740: 0x24501bc0
    ctx->pc = 0x272740u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x272744: 0x24170001
    ctx->pc = 0x272744u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
    // 0x272748: 0x3c160034
    ctx->pc = 0x272748u;
    SET_GPR_U32(ctx, 22, ((uint32_t)52 << 16));
    // 0x27274c: 0x3c150034
    ctx->pc = 0x27274cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)52 << 16));
    // 0x272750: 0x3c140034
    ctx->pc = 0x272750u;
    SET_GPR_U32(ctx, 20, ((uint32_t)52 << 16));
    // 0x272754: 0x3c130034
    ctx->pc = 0x272754u;
    SET_GPR_U32(ctx, 19, ((uint32_t)52 << 16));
label_272758:
    // 0x272758: 0x8e0200fc
    ctx->pc = 0x272758u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x27275c: 0x5457002a
    ctx->pc = 0x27275Cu;
    {
        const bool branch_taken_0x27275c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 23));
        if (branch_taken_0x27275c) {
            ctx->pc = 0x272760u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x272808u;
            goto label_272808;
        }
    }
    ctx->pc = 0x272764u;
    // 0x272764: 0x202d
    ctx->pc = 0x272764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272768: 0x27a50040
    ctx->pc = 0x272768u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    // 0x27276c: 0x27a60044
    ctx->pc = 0x27276cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 68));
    // 0x272770: 0xc09cf78
    ctx->pc = 0x272770u;
    SET_GPR_U32(ctx, 31, 0x272778u);
    ctx->pc = 0x272774u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 96));
    ctx->pc = 0x273DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_screen_pos_0x273de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272778u; }
    }
    if (ctx->pc != 0x272778u) { return; }
    ctx->pc = 0x272778u;
    // 0x272778: 0x8ec2f918
    ctx->pc = 0x272778u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4294965528)));
    // 0x27277c: 0x2442001e
    ctx->pc = 0x27277cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30));
    // 0x272780: 0x44820000
    ctx->pc = 0x272780u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x272784: 0x46800020
    ctx->pc = 0x272784u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x272788: 0xc7a10040
    ctx->pc = 0x272788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27278c: 0x46000834
    ctx->pc = 0x27278cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272790: 0x0
    ctx->pc = 0x272790u;
    // NOP
    // 0x272794: 0x4503001b
    ctx->pc = 0x272794u;
    {
        const bool branch_taken_0x272794 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x272794) {
            ctx->pc = 0x272798u;
            SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x272804u;
            goto label_272804;
        }
    }
    ctx->pc = 0x27279Cu;
    // 0x27279c: 0x8ea2f91c
    ctx->pc = 0x27279cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294965532)));
    // 0x2727a0: 0x2442ffe2
    ctx->pc = 0x2727a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967266));
    // 0x2727a4: 0x44820000
    ctx->pc = 0x2727a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2727a8: 0x46800020
    ctx->pc = 0x2727a8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2727ac: 0x46010034
    ctx->pc = 0x2727acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2727b0: 0x0
    ctx->pc = 0x2727b0u;
    // NOP
    // 0x2727b4: 0x45030013
    ctx->pc = 0x2727B4u;
    {
        const bool branch_taken_0x2727b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2727b4) {
            ctx->pc = 0x2727B8u;
            SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x272804u;
            goto label_272804;
        }
    }
    ctx->pc = 0x2727BCu;
    // 0x2727bc: 0x8e82f920
    ctx->pc = 0x2727bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294965536)));
    // 0x2727c0: 0x2442ffec
    ctx->pc = 0x2727c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x2727c4: 0x44820000
    ctx->pc = 0x2727c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2727c8: 0x46800020
    ctx->pc = 0x2727c8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2727cc: 0xc7a10044
    ctx->pc = 0x2727ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2727d0: 0x46010034
    ctx->pc = 0x2727d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2727d4: 0x0
    ctx->pc = 0x2727d4u;
    // NOP
    // 0x2727d8: 0x4503000a
    ctx->pc = 0x2727D8u;
    {
        const bool branch_taken_0x2727d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2727d8) {
            ctx->pc = 0x2727DCu;
            SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x272804u;
            goto label_272804;
        }
    }
    ctx->pc = 0x2727E0u;
    // 0x2727e0: 0x8e62f924
    ctx->pc = 0x2727e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294965540)));
    // 0x2727e4: 0x24420028
    ctx->pc = 0x2727e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 40));
    // 0x2727e8: 0x44820000
    ctx->pc = 0x2727e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2727ec: 0x46800020
    ctx->pc = 0x2727ecu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2727f0: 0x46000834
    ctx->pc = 0x2727f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2727f4: 0x0
    ctx->pc = 0x2727f4u;
    // NOP
    // 0x2727f8: 0x45020003
    ctx->pc = 0x2727F8u;
    {
        const bool branch_taken_0x2727f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2727f8) {
            ctx->pc = 0x2727FCu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x272808u;
            goto label_272808;
        }
    }
    ctx->pc = 0x272800u;
    // 0x272800: 0x241e0001
    ctx->pc = 0x272800u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
label_272804:
    // 0x272804: 0x26310001
    ctx->pc = 0x272804u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_272808:
    // 0x272808: 0x2a220004
    ctx->pc = 0x272808u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x27280c: 0x1440ffd2
    ctx->pc = 0x27280Cu;
    {
        const bool branch_taken_0x27280c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x272810u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 11008));
        if (branch_taken_0x27280c) {
            ctx->pc = 0x272758u;
            goto label_272758;
        }
    }
    ctx->pc = 0x272814u;
    // 0x272814: 0x13c0000a
    ctx->pc = 0x272814u;
    {
        const bool branch_taken_0x272814 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x272818u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x272814) {
            ctx->pc = 0x272840u;
            goto label_272840;
        }
    }
    ctx->pc = 0x27281Cu;
    // 0x27281c: 0xc099d30
    ctx->pc = 0x27281Cu;
    SET_GPR_U32(ctx, 31, 0x272824u);
    ctx->pc = 0x272820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2674C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyCamera_0x2674c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272824u; }
    }
    if (ctx->pc != 0x272824u) { return; }
    ctx->pc = 0x272824u;
    // 0x272824: 0x3c020034
    ctx->pc = 0x272824u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x272828: 0xe456f8f8
    ctx->pc = 0x272828u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965496), bits); }
    // 0x27282c: 0x3c020034
    ctx->pc = 0x27282cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x272830: 0xe455f8f4
    ctx->pc = 0x272830u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965492), bits); }
    // 0x272834: 0x3c02003c
    ctx->pc = 0x272834u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x272838: 0x4600b824
    ctx->pc = 0x272838u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[23]);
    // 0x27283c: 0xe44038e4
    ctx->pc = 0x27283cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14564), bits); }
label_272840:
    // 0x272840: 0x3c100034
    ctx->pc = 0x272840u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x272844: 0x2610eb60
    ctx->pc = 0x272844u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294962016));
    // 0x272848: 0x24040005
    ctx->pc = 0x272848u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x27284c: 0x282d
    ctx->pc = 0x27284cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272850: 0xc099c34
    ctx->pc = 0x272850u;
    SET_GPR_U32(ctx, 31, 0x272858u);
    ctx->pc = 0x272854u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 2340)));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272858u; }
    }
    if (ctx->pc != 0x272858u) { return; }
    ctx->pc = 0x272858u;
    // 0x272858: 0xae000820
    ctx->pc = 0x272858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2080), GPR_U32(ctx, 0));
label_27285c:
    // 0x27285c: 0xdfbf00e0
    ctx->pc = 0x27285cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_272860:
    // 0x272860: 0xdfbe00d0
    ctx->pc = 0x272860u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x272864: 0xdfb700c0
    ctx->pc = 0x272864u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x272868: 0xdfb600b0
    ctx->pc = 0x272868u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27286c: 0xdfb500a0
    ctx->pc = 0x27286cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x272870: 0xdfb40090
    ctx->pc = 0x272870u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x272874: 0xdfb30080
    ctx->pc = 0x272874u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x272878: 0xdfb20070
    ctx->pc = 0x272878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27287c: 0xdfb10060
    ctx->pc = 0x27287cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x272880: 0xdfb00050
    ctx->pc = 0x272880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x272884: 0xc7b70108
    ctx->pc = 0x272884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x272888: 0xc7b60100
    ctx->pc = 0x272888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27288c: 0xc7b500f8
    ctx->pc = 0x27288cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x272890: 0xc7b400f0
    ctx->pc = 0x272890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x272894: 0x3e00008
    ctx->pc = 0x272894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272898u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x271DE4u: goto label_271de4;
            case 0x271DF4u: goto label_271df4;
            case 0x271E20u: goto label_271e20;
            case 0x271EC4u: goto label_271ec4;
            case 0x271EC8u: goto label_271ec8;
            case 0x271F08u: goto label_271f08;
            case 0x271F38u: goto label_271f38;
            case 0x271F60u: goto label_271f60;
            case 0x271FDCu: goto label_271fdc;
            case 0x272004u: goto label_272004;
            case 0x27208Cu: goto label_27208c;
            case 0x2720A8u: goto label_2720a8;
            case 0x272160u: goto label_272160;
            case 0x27217Cu: goto label_27217c;
            case 0x2721E4u: goto label_2721e4;
            case 0x272208u: goto label_272208;
            case 0x272250u: goto label_272250;
            case 0x272278u: goto label_272278;
            case 0x27227Cu: goto label_27227c;
            case 0x27228Cu: goto label_27228c;
            case 0x2722E0u: goto label_2722e0;
            case 0x2722F0u: goto label_2722f0;
            case 0x272308u: goto label_272308;
            case 0x272334u: goto label_272334;
            case 0x27236Cu: goto label_27236c;
            case 0x272374u: goto label_272374;
            case 0x2723E0u: goto label_2723e0;
            case 0x2723F0u: goto label_2723f0;
            case 0x272490u: goto label_272490;
            case 0x272510u: goto label_272510;
            case 0x272530u: goto label_272530;
            case 0x27254Cu: goto label_27254c;
            case 0x272550u: goto label_272550;
            case 0x272594u: goto label_272594;
            case 0x2725C0u: goto label_2725c0;
            case 0x2725C4u: goto label_2725c4;
            case 0x2725C8u: goto label_2725c8;
            case 0x2725F0u: goto label_2725f0;
            case 0x272628u: goto label_272628;
            case 0x2726A0u: goto label_2726a0;
            case 0x2726F0u: goto label_2726f0;
            case 0x272714u: goto label_272714;
            case 0x272734u: goto label_272734;
            case 0x272758u: goto label_272758;
            case 0x272804u: goto label_272804;
            case 0x272808u: goto label_272808;
            case 0x272840u: goto label_272840;
            case 0x27285Cu: goto label_27285c;
            case 0x272860u: goto label_272860;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27289Cu;
}
