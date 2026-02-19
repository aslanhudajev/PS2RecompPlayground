#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _waitBdecOut
// Address: 0x2f10f0 - 0x2f12ec
void _waitBdecOut_0x2f10f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f10f0u;

    // 0x2f10f0: 0x27bdff80
    ctx->pc = 0x2f10f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f10f4: 0xffb20060
    ctx->pc = 0x2f10f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2f10f8: 0xffbf0070
    ctx->pc = 0x2f10f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2f10fc: 0x24120001
    ctx->pc = 0x2f10fcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1100: 0xffb10050
    ctx->pc = 0x2f1100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2f1104: 0xc0bc8da
    ctx->pc = 0x2F1104u;
    SET_GPR_U32(ctx, 31, 0x2F110Cu);
    ctx->pc = 0x2F1108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->pc = 0x2F2368u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x2f2368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F110Cu; }
    }
    if (ctx->pc != 0x2F110Cu) { return; }
    ctx->pc = 0x2F110Cu;
    // 0x2f110c: 0x3c021000
    ctx->pc = 0x2f110cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f1110: 0x3442b020
    ctx->pc = 0x2f1110u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45088));
    // 0x2f1114: 0x8c430000
    ctx->pc = 0x2f1114u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2f1118: 0x10600023
    ctx->pc = 0x2F1118u;
    {
        const bool branch_taken_0x2f1118 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F111Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x2f1118) {
            ctx->pc = 0x2F11A8u;
            goto label_2f11a8;
        }
    }
    ctx->pc = 0x2F1120u;
    // 0x2f1120: 0x34422010
    ctx->pc = 0x2f1120u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x2f1124: 0x8c430000
    ctx->pc = 0x2f1124u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2f1128: 0x30634000
    ctx->pc = 0x2f1128u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16384));
    // 0x2f112c: 0x1460001f
    ctx->pc = 0x2F112Cu;
    {
        const bool branch_taken_0x2f112c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F1130u;
        SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
        if (branch_taken_0x2f112c) {
            ctx->pc = 0x2F11ACu;
            goto label_2f11ac;
        }
    }
    ctx->pc = 0x2F1134u;
    // 0x2f1134: 0x3c10003a
    ctx->pc = 0x2f1134u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
label_2f1138:
    // 0x2f1138: 0x3c021000
    ctx->pc = 0x2f1138u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f113c: 0x3442b420
    ctx->pc = 0x2f113cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46112));
    // 0x2f1140: 0x8c430000
    ctx->pc = 0x2f1140u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2f1144: 0x1460000d
    ctx->pc = 0x2F1144u;
    {
        const bool branch_taken_0x2f1144 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F1148u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x2f1144) {
            ctx->pc = 0x2F117Cu;
            goto label_2f117c;
        }
    }
    ctx->pc = 0x2F114Cu;
    // 0x2f114c: 0x3442b400
    ctx->pc = 0x2f114cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46080));
    // 0x2f1150: 0x8c430000
    ctx->pc = 0x2f1150u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2f1154: 0x30630100
    ctx->pc = 0x2f1154u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x2f1158: 0x14600008
    ctx->pc = 0x2F1158u;
    {
        const bool branch_taken_0x2f1158 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F115Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x2f1158) {
            ctx->pc = 0x2F117Cu;
            goto label_2f117c;
        }
    }
    ctx->pc = 0x2F1160u;
    // 0x2f1160: 0x3c02003a
    ctx->pc = 0x2f1160u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f1164: 0x24030001
    ctx->pc = 0x2f1164u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1168: 0x8c443024
    ctx->pc = 0x2f1168u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12324)));
    // 0x2f116c: 0x3a0282d
    ctx->pc = 0x2f116cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1170: 0xc0bb834
    ctx->pc = 0x2F1170u;
    SET_GPR_U32(ctx, 31, 0x2F1178u);
    ctx->pc = 0x2F1174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x2EE0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x2ee0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1178u; }
    }
    if (ctx->pc != 0x2F1178u) { return; }
    ctx->pc = 0x2F1178u;
    // 0x2f1178: 0x3c021000
    ctx->pc = 0x2f1178u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_2f117c:
    // 0x2f117c: 0x3442b020
    ctx->pc = 0x2f117cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45088));
    // 0x2f1180: 0x8c430000
    ctx->pc = 0x2f1180u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2f1184: 0x1060000a
    ctx->pc = 0x2F1184u;
    {
        const bool branch_taken_0x2f1184 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1188u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x2f1184) {
            ctx->pc = 0x2F11B0u;
            goto label_2f11b0;
        }
    }
    ctx->pc = 0x2F118Cu;
    // 0x2f118c: 0x34422010
    ctx->pc = 0x2f118cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x2f1190: 0x8c430000
    ctx->pc = 0x2f1190u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2f1194: 0x30634000
    ctx->pc = 0x2f1194u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16384));
    // 0x2f1198: 0x1060ffe7
    ctx->pc = 0x2F1198u;
    {
        const bool branch_taken_0x2f1198 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F119Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x2f1198) {
            ctx->pc = 0x2F1138u;
            goto label_2f1138;
        }
    }
    ctx->pc = 0x2F11A0u;
    // 0x2f11a0: 0x10000004
    ctx->pc = 0x2F11A0u;
    {
        const bool branch_taken_0x2f11a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f11a0) {
            ctx->pc = 0x2F11B4u;
            goto label_2f11b4;
        }
    }
    ctx->pc = 0x2F11A8u;
label_2f11a8:
    // 0x2f11a8: 0x3c11003a
    ctx->pc = 0x2f11a8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
label_2f11ac:
    // 0x2f11ac: 0x3c10003a
    ctx->pc = 0x2f11acu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
label_2f11b0:
    // 0x2f11b0: 0x3c021000
    ctx->pc = 0x2f11b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_2f11b4:
    // 0x2f11b4: 0x3c041000
    ctx->pc = 0x2f11b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x2f11b8: 0xdc842030
    ctx->pc = 0x2f11b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x2f11bc: 0x34422020
    ctx->pc = 0x2f11bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8224));
    // 0x2f11c0: 0x8c420000
    ctx->pc = 0x2f11c0u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2f11c4: 0x4183c
    ctx->pc = 0x2f11c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2f11c8: 0x3183f
    ctx->pc = 0x2f11c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2f11cc: 0x481000a
    ctx->pc = 0x2F11CCu;
    {
        const bool branch_taken_0x2f11cc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2F11D0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 14552), GPR_U32(ctx, 3));
        if (branch_taken_0x2f11cc) {
            ctx->pc = 0x2F11F8u;
            goto label_2f11f8;
        }
    }
    ctx->pc = 0x2F11D4u;
    // 0x2f11d4: 0x3043001f
    ctx->pc = 0x2f11d4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 31));
    // 0x2f11d8: 0x10600004
    ctx->pc = 0x2F11D8u;
    {
        const bool branch_taken_0x2f11d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F11DCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 14556));
        if (branch_taken_0x2f11d8) {
            ctx->pc = 0x2F11ECu;
            goto label_2f11ec;
        }
    }
    ctx->pc = 0x2F11E0u;
    // 0x2f11e0: 0x24020020
    ctx->pc = 0x2f11e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f11e4: 0x10000002
    ctx->pc = 0x2F11E4u;
    {
        const bool branch_taken_0x2f11e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F11E8u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x2f11e4) {
            ctx->pc = 0x2F11F0u;
            goto label_2f11f0;
        }
    }
    ctx->pc = 0x2F11ECu;
label_2f11ec:
    // 0x2f11ec: 0x102d
    ctx->pc = 0x2f11ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f11f0:
    // 0x2f11f0: 0x10000003
    ctx->pc = 0x2F11F0u;
    {
        const bool branch_taken_0x2f11f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F11F4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2f11f0) {
            ctx->pc = 0x2F1200u;
            goto label_2f1200;
        }
    }
    ctx->pc = 0x2F11F8u;
label_2f11f8:
    // 0x2f11f8: 0x24020020
    ctx->pc = 0x2f11f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f11fc: 0xae0238dc
    ctx->pc = 0x2f11fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14556), GPR_U32(ctx, 2));
label_2f1200:
    // 0x2f1200: 0x3c021000
    ctx->pc = 0x2f1200u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f1204: 0x34422010
    ctx->pc = 0x2f1204u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x2f1208: 0x8c430000
    ctx->pc = 0x2f1208u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2f120c: 0x30634000
    ctx->pc = 0x2f120cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16384));
    // 0x2f1210: 0x1060002f
    ctx->pc = 0x2F1210u;
    {
        const bool branch_taken_0x2f1210 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1214u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2f1210) {
            ctx->pc = 0x2F12D0u;
            goto label_2f12d0;
        }
    }
    ctx->pc = 0x2F1218u;
    // 0x2f1218: 0x3c10003a
    ctx->pc = 0x2f1218u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f121c: 0xc0bba56
    ctx->pc = 0x2F121Cu;
    SET_GPR_U32(ctx, 31, 0x2F1224u);
    ctx->pc = 0x2F1220u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942592));
    ctx->pc = 0x2EE958u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x2ee958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1224u; }
    }
    if (ctx->pc != 0x2F1224u) { return; }
    ctx->pc = 0x2F1224u;
    // 0x2f1224: 0x27b10020
    ctx->pc = 0x2f1224u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f1228: 0x24020002
    ctx->pc = 0x2f1228u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f122c: 0x8e043024
    ctx->pc = 0x2f122cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12324)));
    // 0x2f1230: 0x220282d
    ctx->pc = 0x2f1230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1234: 0xc0bb834
    ctx->pc = 0x2F1234u;
    SET_GPR_U32(ctx, 31, 0x2F123Cu);
    ctx->pc = 0x2F1238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x2EE0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x2ee0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F123Cu; }
    }
    if (ctx->pc != 0x2F123Cu) { return; }
    ctx->pc = 0x2F123Cu;
    // 0x2f123c: 0x3c034000
    ctx->pc = 0x2f123cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x2f1240: 0x24020003
    ctx->pc = 0x2f1240u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f1244: 0x3c011000
    ctx->pc = 0x2f1244u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x2f1248: 0xac232010
    ctx->pc = 0x2f1248u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 3)); // MMIO: 0x10002010
    // 0x2f124c: 0x220282d
    ctx->pc = 0x2f124cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1250: 0x8e043024
    ctx->pc = 0x2f1250u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12324)));
    // 0x2f1254: 0xc0bb834
    ctx->pc = 0x2F1254u;
    SET_GPR_U32(ctx, 31, 0x2F125Cu);
    ctx->pc = 0x2F1258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x2EE0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x2ee0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F125Cu; }
    }
    if (ctx->pc != 0x2F125Cu) { return; }
    ctx->pc = 0x2F125Cu;
    // 0x2f125c: 0x3c030001
    ctx->pc = 0x2f125cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
label_2f1260:
    // 0x2f1260: 0x42000039
    ctx->pc = 0x2f1260u;
    ctx->cop0_status &= ~0x1; // Disable interrupts
    // 0x2f1264: 0x40f
    ctx->pc = 0x2f1264u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2f1268: 0x40026000
    ctx->pc = 0x2f1268u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x2f126c: 0x431024
    ctx->pc = 0x2f126cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f1270: 0x0
    ctx->pc = 0x2f1270u;
    // NOP
    // 0x2f1274: 0x1440fffa
    ctx->pc = 0x2F1274u;
    {
        const bool branch_taken_0x2f1274 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f1274) {
            ctx->pc = 0x2F1260u;
            goto label_2f1260;
        }
    }
    ctx->pc = 0x2F127Cu;
    // 0x2f127c: 0x3c061000
    ctx->pc = 0x2f127cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x2f1280: 0x3c070001
    ctx->pc = 0x2f1280u;
    SET_GPR_U32(ctx, 7, ((uint32_t)1 << 16));
    // 0x2f1284: 0x34c6f520
    ctx->pc = 0x2f1284u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 62752));
    // 0x2f1288: 0x3c051000
    ctx->pc = 0x2f1288u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x2f128c: 0x8cc20000
    ctx->pc = 0x2f128cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x10000000
    // 0x2f1290: 0x34a5f590
    ctx->pc = 0x2f1290u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 62864));
    // 0x2f1294: 0x3c031000
    ctx->pc = 0x2f1294u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f1298: 0x3c04fffe
    ctx->pc = 0x2f1298u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65534 << 16));
    // 0x2f129c: 0x471025
    ctx->pc = 0x2f129cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2f12a0: 0x3463b000
    ctx->pc = 0x2f12a0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45056));
    // 0x2f12a4: 0xaca20000
    ctx->pc = 0x2f12a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2f12a8: 0x3484ffff
    ctx->pc = 0x2f12a8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2f12ac: 0xac600000
    ctx->pc = 0x2f12acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2f12b0: 0x8cc20000
    ctx->pc = 0x2f12b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f12b4: 0x441024
    ctx->pc = 0x2f12b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f12b8: 0xaca20000
    ctx->pc = 0x2f12b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2f12bc: 0x42000038
    ctx->pc = 0x2f12bcu;
    ctx->cop0_status |= 0x1; // Enable interrupts
    // 0x2f12c0: 0x3c021000
    ctx->pc = 0x2f12c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f12c4: 0x902d
    ctx->pc = 0x2f12c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f12c8: 0x3442b020
    ctx->pc = 0x2f12c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45088));
    // 0x2f12cc: 0xac400000
    ctx->pc = 0x2f12ccu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
label_2f12d0:
    // 0x2f12d0: 0x240102d
    ctx->pc = 0x2f12d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f12d4: 0xdfbf0070
    ctx->pc = 0x2f12d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f12d8: 0xdfb20060
    ctx->pc = 0x2f12d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f12dc: 0xdfb10050
    ctx->pc = 0x2f12dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f12e0: 0xdfb00040
    ctx->pc = 0x2f12e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f12e4: 0x3e00008
    ctx->pc = 0x2F12E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F12E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F1138u: goto label_2f1138;
            case 0x2F117Cu: goto label_2f117c;
            case 0x2F11A8u: goto label_2f11a8;
            case 0x2F11ACu: goto label_2f11ac;
            case 0x2F11B0u: goto label_2f11b0;
            case 0x2F11B4u: goto label_2f11b4;
            case 0x2F11ECu: goto label_2f11ec;
            case 0x2F11F0u: goto label_2f11f0;
            case 0x2F11F8u: goto label_2f11f8;
            case 0x2F1200u: goto label_2f1200;
            case 0x2F1260u: goto label_2f1260;
            case 0x2F12D0u: goto label_2f12d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F12ECu;
}
